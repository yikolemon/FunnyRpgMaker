/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a74fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1407a74fa(int *param_1)

{
  if (*param_1 != 0) {
    return *param_1;
  }
  return param_1[1] * 0xa4 + *(int *)((ulonglong)_DAT_150b44c53 + 0x2364);
}

