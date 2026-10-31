/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025d2f5 */

int FUN_1025d2f5(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1025d20e(param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar2 = param_1 + -1;
  }
  else {
    iVar2 = param_1 + 1;
    if (0 < iVar1) {
      iVar2 = param_1;
    }
  }
  return iVar2;
}

