/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007f022 */

void FUN_1007f022(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_1007f2cb(param_1,param_2,*puVar1);
  return;
}

