/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c5036 */

void FUN_100c5036(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_100c768f(param_1,param_2,*puVar1);
  return;
}

