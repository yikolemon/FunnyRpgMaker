/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b9aa0 */

int FUN_101b9aa0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = _toupper((int)*param_2);
  cVar1 = *param_1;
  iVar3 = _toupper((int)cVar1);
  if (iVar2 == iVar3 && cVar1 != 0) {
    iVar4 = 1;
    do {
      iVar2 = _toupper((int)param_2[iVar4]);
      cVar1 = param_1[iVar4];
      iVar3 = _toupper((int)cVar1);
      if (cVar1 == 0) break;
      iVar4 = iVar4 + 1;
    } while (iVar2 == iVar3);
  }
  return iVar2 - iVar3;
}

