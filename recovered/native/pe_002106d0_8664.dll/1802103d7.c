/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802103d7 */

void FUN_1802103d7(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  
  for (; 3 < param_2; param_2 = param_2 - 4) {
    uVar1 = *param_1;
    *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    param_1 = param_1 + 1;
  }
  return;
}

