#include <am.h>

bool vme_init(void* (*pgalloc_f)(int), void (*pgfree_f)(void*)) {
  (void)pgalloc_f;
  (void)pgfree_f;
  return false;
}

void protect(AddrSpace *as) {
  as->ptr = NULL;
  as->pgsize = 0;
  as->area = (Area){ .start = NULL, .end = NULL };
}

void unprotect(AddrSpace *as) {
  (void)as;
}

void __am_get_cur_as(Context *c) {
  c->pdir = NULL;
}

void __am_switch(Context *c) {
  (void)c;
}

void map(AddrSpace *as, void *va, void *pa, int prot) {
  (void)as;
  (void)va;
  (void)pa;
  (void)prot;
}

Context *ucontext(AddrSpace *as, Area kstack, void *entry) {
  (void)as;
  (void)kstack;
  (void)entry;
  return NULL;
}
