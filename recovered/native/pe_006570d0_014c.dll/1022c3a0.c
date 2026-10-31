/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c3a0 */

int FUN_1022c3a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_1039ce08 == -1) {
    iVar1 = FUN_10268d0a();
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = param_1;
    }
    return (iVar2 != 0) - 1;
  }
  iVar1 = __register_onexit_function(&DAT_1039ce08,param_1);
  iVar2 = 0;
  if (iVar1 == 0) {
    iVar2 = param_1;
  }
  return (iVar2 != 0) - 1;
}

