#include <klib.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;
static uintptr_t heap_cur = 0;

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

#define def_strtoXXX(type, name) \
  type name(const char *nptr, char **endptr, int base) { \
    type x = 0; \
    while (isspace(*nptr)) { nptr ++; } \
    while (*nptr >= '0' && *nptr <= '9') { \
      x = x * 10 + *nptr - '0'; \
      nptr ++; \
    } \
    if (endptr) { \
      *(const char **)endptr = nptr; \
    } \
    return x; \
  }

def_strtoXXX(long, strtol)
def_strtoXXX(unsigned long, strtoul)
def_strtoXXX(long long, strtoll)
def_strtoXXX(unsigned long long, strtoull)

int atoi(const char* nptr) {
  return strtol(nptr, NULL, 10);
}

void *malloc(size_t size) {
  if (size == 0) return NULL;

  if (heap_cur == 0) {
    heap_cur = (uintptr_t)heap.start;
  }

  uintptr_t cur = (heap_cur + sizeof(uintptr_t) - 1) & ~(sizeof(uintptr_t) - 1);
  uintptr_t next_cur = (cur + size + sizeof(uintptr_t) - 1) & ~(sizeof(uintptr_t) - 1);
  if (next_cur > (uintptr_t)heap.end) {
    return NULL;
  }

  heap_cur = next_cur;
  return (void *)cur;
}

void *calloc(size_t nmemb, size_t size) {
  size *= nmemb;
  void *ret = malloc(size);
  memset(ret, 0, size);
  return ret;
}

void *realloc(void *ptr, size_t size) {
  if (ptr == NULL) return malloc(size);
  if (size == 0) {
    free(ptr);
    return NULL;
  }
  void *ret = malloc(size);
  memcpy(ret, ptr, size);
  free(ptr);
  return ret;
}

void free(void *ptr) {
  (void)ptr;
}

void exit(int status) {
  halt(status);
}

#endif
