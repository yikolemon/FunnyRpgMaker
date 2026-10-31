/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10012902 */

void FUN_10012902(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[4];
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  *param_1 = param_2;
  param_1[1] = uVar1;
  return;
}

