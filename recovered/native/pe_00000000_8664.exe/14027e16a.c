/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027e16a */

void FUN_14027e16a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14027e16a(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_14021331c(param_3 + 4);
    thunk_FUN_1404a2310(param_3,0x40);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}

