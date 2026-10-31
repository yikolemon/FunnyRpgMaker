/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009499f */

void FUN_14009499f(longlong param_1,uint param_2)

{
  if (((*(longlong *)(DAT_140f2a910 + 0x2200) == param_1) &&
      (*(char *)(DAT_140f2a910 + 0x22a1) == '\x01')) &&
     (*(int *)(DAT_140f2a910 + 0x220c) == *(int *)(param_1 + 0x1b0))) {
    *(uint *)(DAT_140f2a910 + 0x22a4) = *(uint *)(DAT_140f2a910 + 0x22a4) & 0xfffffff0 | param_2;
    return;
  }
  return;
}

