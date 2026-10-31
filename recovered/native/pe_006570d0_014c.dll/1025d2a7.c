/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025d2a7 */

int FUN_1025d2a7(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_1025d20e(param_1,param_2,param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_1025c500(param_1 + -1);
    iVar3 = FUN_1025d20e(param_1 + -1,(param_2 - param_3) + 7,(uVar2 & 0xff) + 0x16d);
  }
  else {
    iVar3 = 1;
    if (0 < iVar1) {
      iVar3 = iVar1;
    }
  }
  return iVar3;
}

