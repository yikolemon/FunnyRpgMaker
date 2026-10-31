/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008e8ad */

void FUN_1008e8ad(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  param_1[1] = 0xc0000004;
  *param_1 = 0x20000000;
  param_1[2] = *param_2;
  uVar1 = param_3[4];
  if (7 < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  param_1[3] = param_3;
  param_1[4] = uVar1;
  return;
}

