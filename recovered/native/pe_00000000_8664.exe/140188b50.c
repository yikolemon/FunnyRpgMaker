/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188b50 */

int FUN_140188b50(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_140f2a9c0 == -1) {
    iVar1 = FUN_14019e570();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140f2a9c0,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}

