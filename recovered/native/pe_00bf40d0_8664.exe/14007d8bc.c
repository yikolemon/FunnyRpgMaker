/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007d8bc */

void FUN_14007d8bc(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  do {
    plVar1 = param_1;
    param_1 = (undefined8 *)*plVar1;
    if (param_1 == (undefined8 *)0x0) break;
  } while (*(int *)(param_1 + 4) < (int)param_2[4]);
  *param_2 = (longlong)param_1;
  *plVar1 = (longlong)param_2;
  return;
}

