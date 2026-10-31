/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017cfe2 */

void FUN_1017cfe2(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_1 = 0x30000000;
  uVar1 = *param_3;
  param_1[6] = param_3[1];
  param_1[5] = uVar1;
  param_1[1] = 0x30000008;
  uVar1 = param_4[4];
  if (0xf < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  param_1[7] = param_4;
  param_1[8] = uVar1;
  param_1[2] = 0xc0000010;
  return;
}

