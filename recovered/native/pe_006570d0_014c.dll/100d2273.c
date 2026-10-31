/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d2273 */

void FUN_100d2273(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  param_1[3] = *param_2;
  *param_1 = 0xb0000000;
  uVar1 = *param_3;
  param_1[5] = param_3[1];
  param_1[4] = uVar1;
  param_1[1] = 0x30000004;
  uVar1 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar1;
  param_1[2] = 0x3000000c;
  return;
}

