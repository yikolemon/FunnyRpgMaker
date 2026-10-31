/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017f968 */

void FUN_14017f968(undefined8 *param_1,longlong *param_2)

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

