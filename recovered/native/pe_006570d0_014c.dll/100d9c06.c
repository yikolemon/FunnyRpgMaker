/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d9c06 */

void FUN_100d9c06(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

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
  uVar1 = *param_4;
  param_1[8] = param_4[1];
  param_1[7] = uVar1;
  param_1[2] = 0x30000010;
  return;
}

