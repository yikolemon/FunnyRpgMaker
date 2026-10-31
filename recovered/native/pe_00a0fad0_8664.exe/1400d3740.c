/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3740 */

int FUN_1400d3740(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_1401cc288 == -1) {
    iVar1 = FUN_140113740();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_1401cc288,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}

