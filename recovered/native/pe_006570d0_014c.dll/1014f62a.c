/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014f62a */

int __fastcall FUN_1014f62a(int *param_1)

{
  if (*param_1 != 0) {
    return *param_1;
  }
  return param_1[1] * 0xa4 + *(int *)(DAT_1039d74c + 0x2364);
}

