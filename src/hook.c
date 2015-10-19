#include "hook.h"

void st_hook_code(uc_engine *uc, uint64_t address, uint32_t size, void *user_data) {
  printf("Instruction at %llx with size %d\n", address, size);
}

void st_hook_sys(uc_engine *uc, uint32_t intno, void *user_data) {
  printf("int(%x)\n", intno);
}
