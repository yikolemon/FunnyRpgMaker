/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007411f */

void FUN_14007411f(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x20);
  if (iVar1 < *(int *)(param_1 + 0x20)) {
    FUN_140074178(param_2,param_1);
    iVar1 = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_3 + 0x20) < iVar1) {
    FUN_140074178(param_3,param_2);
    if (*(int *)(param_2 + 0x20) < *(int *)(param_1 + 0x20)) {
      FUN_140074178(param_2,param_1);
      return;
    }
  }
  return;
}

