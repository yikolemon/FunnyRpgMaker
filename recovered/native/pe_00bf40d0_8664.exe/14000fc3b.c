/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000fc3b */

void FUN_14000fc3b(undefined1 (*param_1) [32],undefined1 (*param_2) [32],short *param_3)

{
  short sVar1;
  bool bVar2;
  
  bVar2 = FUN_14000fca7(param_3);
  if (bVar2) {
    FUN_14000fcaf(param_1,(longlong)param_2 - (longlong)param_1 >> 1);
    return;
  }
  if (param_1 != param_2) {
    sVar1 = *param_3;
    do {
      *(short *)*param_1 = sVar1;
      param_1 = (undefined1 (*) [32])(*param_1 + 2);
    } while (param_1 != param_2);
  }
  return;
}

