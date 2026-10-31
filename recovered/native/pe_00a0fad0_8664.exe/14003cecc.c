/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003cecc */

longlong * FUN_14003cecc(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  
  while ((lVar2 = param_3, param_2 != param_3 &&
         (cVar1 = FUN_14003d3f6(param_4,param_2), lVar2 = param_2, cVar1 == '\0'))) {
    param_2 = param_2 + 8;
  }
  *param_1 = lVar2;
  FUN_1400017de(param_4);
  return param_1;
}

