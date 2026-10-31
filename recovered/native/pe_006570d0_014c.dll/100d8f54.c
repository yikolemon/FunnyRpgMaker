/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d8f54 */

void FUN_100d8f54(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = uVar1;
  *param_1 = 0x30000000;
  param_1[5] = *param_3;
  param_1[1] = 0xb0000008;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[2] = 0x3000000c;
  return;
}

