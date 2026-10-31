/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100728cf */

void FUN_100728cf(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[4];
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  param_1[1] = param_2;
  param_1[2] = uVar1;
  *param_1 = 0xc0000000;
  return;
}

