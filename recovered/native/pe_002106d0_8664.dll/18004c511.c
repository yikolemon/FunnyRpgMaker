/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004c511 */

void FUN_18004c511(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  FUN_18004e065(param_1,puVar1,param_2[2] + (longlong)puVar1);
  return;
}

