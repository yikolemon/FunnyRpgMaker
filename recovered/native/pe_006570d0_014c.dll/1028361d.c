/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028361d */

int FUN_1028361d(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0xe3;
  do {
    iVar2 = (iVar4 + iVar3) / 2;
    if (param_1 == *(int *)(&DAT_10326218 + iVar2 * 8)) {
      return iVar2;
    }
    iVar1 = iVar2 + -1;
    if (-1 < param_1 - *(int *)(&DAT_10326218 + iVar2 * 8)) {
      iVar3 = iVar2 + 1;
      iVar1 = iVar4;
    }
    iVar4 = iVar1;
  } while (iVar3 <= iVar4);
  return -1;
}

