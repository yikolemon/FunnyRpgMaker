/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a382 */

void FUN_14001a382(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14001a382(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1400ddcd0(param_3,0x28);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

