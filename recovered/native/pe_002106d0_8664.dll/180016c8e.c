/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180016c8e */

void FUN_180016c8e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  while (*(char *)((longlong)param_3 + 0x19) == '\0') {
    FUN_180016c8e(param_1,param_2,param_3[2]);
    puVar1 = (undefined8 *)*param_3;
    FUN_1800137c6(param_3 + 8);
    FUN_180001ef2(param_3 + 4);
    thunk_FUN_1802464a0(param_3,0x50);
    param_3 = puVar1;
  }
  return;
}

