/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000df46 */

void FUN_14000df46(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14000df46(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_140005ba2(param_2,param_3 + 4);
    thunk_FUN_14018e090(param_3,0x50);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

