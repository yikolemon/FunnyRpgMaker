/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017d341 */

void FUN_1017d341(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  param_1[1] = 0xc0000004;
  *param_1 = 0x10000000;
  param_1[2] = *param_2;
  uVar1 = param_3[4];
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  param_1[3] = param_3;
  param_1[4] = uVar1;
  return;
}

