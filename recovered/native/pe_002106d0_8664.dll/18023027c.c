/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023027c */

void FUN_18023027c(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  do {
    puVar1 = param_1;
    param_1 = (undefined8 *)*puVar1;
    if (param_1 == (undefined8 *)0x0) break;
  } while (*(int *)(param_1 + 4) < (int)param_2[4]);
  *param_2 = (longlong)param_1;
  *puVar1 = param_2;
  return;
}

