/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ab35a */

void FUN_1400ab35a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1400ab35a(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1400ab3b0(param_3 + 4);
    thunk_FUN_1400ddcd0(param_3,0x38);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

