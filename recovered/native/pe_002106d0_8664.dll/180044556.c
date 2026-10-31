/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044556 */

void FUN_180044556(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180044556(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_180016d60(param_2,param_3 + 4);
    thunk_FUN_1802464a0(param_3,0x50);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

