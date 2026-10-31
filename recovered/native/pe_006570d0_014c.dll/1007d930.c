/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d930 */

void FUN_1007d930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = param_2[4];
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  param_1[3] = param_2;
  param_1[4] = uVar1;
  *param_1 = 0xc0000000;
  param_1[5] = *param_3;
  param_1[1] = 0x20000008;
  param_1[6] = *param_4;
  param_1[2] = 0x2000000c;
  return;
}

