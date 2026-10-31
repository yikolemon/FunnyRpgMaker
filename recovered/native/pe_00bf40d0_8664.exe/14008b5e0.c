/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b5e0 */

int FUN_14008b5e0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_14013d280 == -1) {
    iVar1 = FUN_140095b00(param_1);
  }
  else {
    iVar1 = _register_onexit_function(&DAT_14013d280,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}

