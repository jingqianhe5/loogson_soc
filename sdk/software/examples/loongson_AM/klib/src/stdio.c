#include <klib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

typedef struct {
  char *buf;
  size_t size;
  size_t pos;
  int count;
} out_ctx_t;

static void out_char(out_ctx_t *ctx, char ch) {
  if (ctx->buf != NULL && ctx->size != 0 && ctx->pos + 1 < ctx->size) {
    ctx->buf[ctx->pos] = ch;
  }
  ctx->pos++;
  ctx->count++;
}

static void out_repeat(out_ctx_t *ctx, char ch, int n) {
  while (n-- > 0) out_char(ctx, ch);
}

static int ull_to_str(unsigned long long value, unsigned base, bool upper, char *buf) {
  static const char digits_lo[] = "0123456789abcdef";
  static const char digits_hi[] = "0123456789ABCDEF";
  const char *digits = upper ? digits_hi : digits_lo;
  int len = 0;
  do {
    buf[len++] = digits[value % base];
    value /= base;
  } while (value != 0);
  return len;
}

static void format_unsigned(out_ctx_t *ctx, unsigned long long value, unsigned base,
                            bool upper, int width, int precision,
                            bool left, bool zero, bool alt) {
  char tmp[32];
  char prefix[2];
  int prefix_len = 0;
  int len = ull_to_str(value, base, upper, tmp);
  int digit_len = len;
  int zero_pad = 0;

  if (precision == 0 && value == 0) digit_len = 0;
  if (precision > digit_len) zero_pad = precision - digit_len;

  if (alt && value != 0) {
    if (base == 16) {
      prefix[0] = '0';
      prefix[1] = upper ? 'X' : 'x';
      prefix_len = 2;
    } else if (base == 8) {
      prefix[0] = '0';
      prefix_len = 1;
    }
  }

  if (zero && !left && precision < 0) {
    int total = prefix_len + digit_len;
    if (width > total) zero_pad += width - total;
    width = 0;
  }

  int pad = width - prefix_len - zero_pad - digit_len;
  if (pad < 0) pad = 0;

  if (!left) out_repeat(ctx, ' ', pad);
  for (int i = 0; i < prefix_len; i++) out_char(ctx, prefix[i]);
  out_repeat(ctx, '0', zero_pad);
  for (int i = digit_len - 1; i >= 0; i--) out_char(ctx, tmp[i]);
  if (left) out_repeat(ctx, ' ', pad);
}

static void format_signed(out_ctx_t *ctx, long long value, int width, int precision,
                          bool left, bool zero) {
  unsigned long long u = (value < 0) ? (unsigned long long)(-value) : (unsigned long long)value;
  char sign = (value < 0) ? '-' : '\0';
  char tmp[32];
  int len = ull_to_str(u, 10, false, tmp);
  int digit_len = len;
  int zero_pad = 0;

  if (precision == 0 && u == 0) digit_len = 0;
  if (precision > digit_len) zero_pad = precision - digit_len;

  if (zero && !left && precision < 0) {
    int total = (sign ? 1 : 0) + digit_len;
    if (width > total) zero_pad += width - total;
    width = 0;
  }

  int pad = width - (sign ? 1 : 0) - zero_pad - digit_len;
  if (pad < 0) pad = 0;

  if (!left) out_repeat(ctx, ' ', pad);
  if (sign) out_char(ctx, sign);
  out_repeat(ctx, '0', zero_pad);
  for (int i = digit_len - 1; i >= 0; i--) out_char(ctx, tmp[i]);
  if (left) out_repeat(ctx, ' ', pad);
}

static int kvsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  out_ctx_t ctx = { .buf = out, .size = n, .pos = 0, .count = 0 };

  while (*fmt) {
    if (*fmt != '%') {
      out_char(&ctx, *fmt++);
      continue;
    }

    fmt++;
    bool left = false;
    bool zero = false;
    bool alt = false;
    bool done = false;
    while (!done) {
      switch (*fmt) {
        case '-': left = true; fmt++; break;
        case '0': zero = true; fmt++; break;
        case '#': alt = true; fmt++; break;
        default: done = true; break;
      }
    }

    int width = 0;
    if (*fmt == '*') {
      width = va_arg(ap, int);
      fmt++;
      if (width < 0) {
        left = true;
        width = -width;
      }
    } else {
      while (isdigit((unsigned char)*fmt)) {
        width = width * 10 + (*fmt - '0');
        fmt++;
      }
    }

    int precision = -1;
    if (*fmt == '.') {
      fmt++;
      precision = 0;
      if (*fmt == '*') {
        precision = va_arg(ap, int);
        fmt++;
      } else {
        while (isdigit((unsigned char)*fmt)) {
          precision = precision * 10 + (*fmt - '0');
          fmt++;
        }
      }
      if (precision < 0) precision = -1;
    }

    enum { LEN_DEF, LEN_HH, LEN_H, LEN_L, LEN_LL, LEN_Z } len = LEN_DEF;
    if (*fmt == 'h' && *(fmt + 1) == 'h') {
      len = LEN_HH; fmt += 2;
    } else if (*fmt == 'h') {
      len = LEN_H; fmt++;
    } else if (*fmt == 'l' && *(fmt + 1) == 'l') {
      len = LEN_LL; fmt += 2;
    } else if (*fmt == 'l') {
      len = LEN_L; fmt++;
    } else if (*fmt == 'z') {
      len = LEN_Z; fmt++;
    }

    char spec = *fmt ? *fmt++ : '\0';
    switch (spec) {
      case '\0':
        goto finish;
      case '%':
        out_char(&ctx, '%');
        break;
      case 'c': {
        char ch = (char)va_arg(ap, int);
        if (!left) out_repeat(&ctx, ' ', width > 1 ? width - 1 : 0);
        out_char(&ctx, ch);
        if (left) out_repeat(&ctx, ' ', width > 1 ? width - 1 : 0);
        break;
      }
      case 's': {
        const char *s = va_arg(ap, const char *);
        if (s == NULL) s = "(null)";
        int len_s = (int)strlen(s);
        if (precision >= 0 && len_s > precision) len_s = precision;
        if (!left) out_repeat(&ctx, ' ', width > len_s ? width - len_s : 0);
        for (int i = 0; i < len_s; i++) out_char(&ctx, s[i]);
        if (left) out_repeat(&ctx, ' ', width > len_s ? width - len_s : 0);
        break;
      }
      case 'd':
      case 'i': {
        long long v;
        if (len == LEN_LL) v = va_arg(ap, long long);
        else if (len == LEN_L) v = va_arg(ap, long);
        else if (len == LEN_Z) v = (long long)va_arg(ap, ptrdiff_t);
        else v = va_arg(ap, int);
        format_signed(&ctx, v, width, precision, left, zero);
        break;
      }
      case 'u':
      case 'x':
      case 'X':
      case 'o': {
        unsigned long long v;
        unsigned base = (spec == 'o') ? 8 : ((spec == 'u') ? 10 : 16);
        bool upper = (spec == 'X');
        if (len == LEN_LL) v = va_arg(ap, unsigned long long);
        else if (len == LEN_L) v = va_arg(ap, unsigned long);
        else if (len == LEN_Z) v = (unsigned long long)va_arg(ap, size_t);
        else v = va_arg(ap, unsigned int);
        format_unsigned(&ctx, v, base, upper, width, precision, left, zero, alt);
        break;
      }
      case 'p': {
        uintptr_t v = (uintptr_t)va_arg(ap, void *);
        format_unsigned(&ctx, (unsigned long long)v, 16, false,
                        width ? width : (int)(sizeof(uintptr_t) * 2 + 2),
                        precision, left, true, true);
        break;
      }
      default:
        out_char(&ctx, '%');
        out_char(&ctx, spec);
        break;
    }
  }

finish:
  if (ctx.buf != NULL && ctx.size != 0) {
    size_t idx = (ctx.pos < ctx.size - 1) ? ctx.pos : (ctx.size - 1);
    ctx.buf[idx] = '\0';
  }
  return ctx.count;
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vprintf(fmt, ap);
  va_end(ap);
  return ret;
}

int vprintf(const char *fmt, va_list ap) {
  va_list ap2;
  va_copy(ap2, ap);
  int ret = kvsnprintf(NULL, 0, fmt, ap2);
  va_end(ap2);

  char buf[256];
  va_copy(ap2, ap);
  kvsnprintf(buf, sizeof(buf), fmt, ap2);
  va_end(ap2);
  for (char *p = buf; *p; p++) putch(*p);
  return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  return kvsnprintf(out, (size_t)-1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsprintf(out, fmt, ap);
  va_end(ap);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int ret = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return ret;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  return kvsnprintf(out, n, fmt, ap);
}

int __am_vsscanf_internal(const char *str, const char **end_pstr, const char *fmt, va_list ap) {
  const char *pstr = str;
  const char *pfmt = fmt;
  int item = -1;
  while (*pfmt) {
    char ch = *pfmt ++;
    if (isspace(ch)) {
      for (ch = *pfmt; isspace(ch); ch = *(++ pfmt));
      for (ch = *pstr; isspace(ch); ch = *(++ pstr));
      item ++;
      continue;
    }
    switch (ch) {
      case '%': break;
      default:
        if (*pstr == ch) { // match
          pstr ++;
          item ++;
          continue;
        }
        goto end; // fail
    }

    char *p;
    ch = *pfmt ++;
    switch (ch) {
      // conversion specifier
      case 'd':
        *(va_arg(ap, int *)) = strtol(pstr, &p, 10);
        if (p == pstr) goto end; // fail
        pstr = p;
        item ++;
        break;

      case 'c':
        *(va_arg(ap, char *)) = *pstr ++;
        item ++;
        break;

      default:
        printf("Unsupported conversion specifier '%c'\n", ch);
        assert(0);
    }
  }

end:
  if (end_pstr) {
    *end_pstr = pstr;
  }
  return item;
}

int vsscanf(const char *str, const char *fmt, va_list ap) {
  return __am_vsscanf_internal(str, NULL, fmt, ap);
}

int sscanf(const char *str, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int r = vsscanf(str, fmt, ap);
  va_end(ap);
  return r;
}

int __isoc99_sscanf(const char *str, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int r = vsscanf(str, fmt, ap);
  va_end(ap);
  return r;
}

#endif
