/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005d9fa */

void FUN_14005d9fa(ushort *param_1,ulonglong param_2)

{
  for (; 1 < param_2; param_2 = param_2 - 2) {
    *param_1 = *param_1 << 8 | *param_1 >> 8;
    param_1 = param_1 + 1;
  }
  return;
}

