/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b9a50 */

int FUN_101b9a50(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_3) {
    iVar5 = 0;
    do {
      iVar3 = _toupper((int)*(char *)(param_2 + iVar5));
      cVar1 = *(char *)(param_1 + iVar5);
      iVar4 = _toupper((int)cVar1);
      if (iVar3 - iVar4 != 0) {
        return iVar3 - iVar4;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      iVar5 = iVar5 + 1;
      bVar2 = 1 < param_3;
      param_3 = param_3 + -1;
    } while (bVar2);
  }
  return 0;
}

