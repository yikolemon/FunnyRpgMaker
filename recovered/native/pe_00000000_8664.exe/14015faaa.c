/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015faaa */

void FUN_14015faaa(ushort *param_1,ulonglong param_2)

{
  for (; 1 < param_2; param_2 = param_2 - 2) {
    *param_1 = *param_1 << 8 | *param_1 >> 8;
    param_1 = param_1 + 1;
  }
  return;
}

