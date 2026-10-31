/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001282f */

void FUN_1001282f(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[4];
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}

