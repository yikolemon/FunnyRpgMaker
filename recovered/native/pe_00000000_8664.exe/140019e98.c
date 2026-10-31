/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140019e98 */

void FUN_140019e98(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_140019e98(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_140019eed(param_3 + 4);
    thunk_FUN_14018e090(param_3,0x60);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

