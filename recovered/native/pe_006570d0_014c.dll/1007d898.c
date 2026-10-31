/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d898 */

void FUN_1007d898(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  param_1[1] = 0x10000008;
  *param_1 = 0xc0000000;
  uVar1 = param_2[4];
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  param_1[2] = param_2;
  param_1[3] = uVar1;
  param_1[4] = *param_3;
  return;
}

