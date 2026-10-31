/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802103be */

void FUN_1802103be(ushort *param_1,ulonglong param_2)

{
  for (; 1 < param_2; param_2 = param_2 - 2) {
    *param_1 = *param_1 << 8 | *param_1 >> 8;
    param_1 = param_1 + 1;
  }
  return;
}

