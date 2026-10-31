/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d710 */

int FUN_18023d710(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_180418090 == -1) {
    iVar1 = FUN_18027e30c();
  }
  else {
    iVar1 = _register_onexit_function(&DAT_180418090,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}

