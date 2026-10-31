/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018238 */

void FUN_180018238(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180018238(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_18001828d(param_3 + 4);
    thunk_FUN_1802464a0(param_3,0x48);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

