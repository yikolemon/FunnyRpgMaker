/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10095da7 */

void FUN_10095da7(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  param_1[1] = 0xc0000008;
  *param_1 = 0xc0000000;
  uVar1 = param_2[4];
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  param_1[2] = param_2;
  param_1[3] = uVar1;
  uVar1 = param_3[4];
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  param_1[4] = param_3;
  param_1[5] = uVar1;
  return;
}

