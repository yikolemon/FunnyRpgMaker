/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044ebe0 */

int FUN_14044ebe0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_140629560 == -1) {
    iVar1 = FUN_14048f7dc();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_140629560,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}

