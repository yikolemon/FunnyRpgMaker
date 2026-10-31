/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001844e */

void FUN_14001844e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14001844e(param_1,param_2,(longlong *)param_3[2]);
    param_3 = (longlong *)*param_3;
    FUN_1400863f0();
    cVar1 = *(char *)((longlong)param_3 + 0x19);
  }
  return;
}

