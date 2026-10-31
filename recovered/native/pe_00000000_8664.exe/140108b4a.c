/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140108b4a */

int FUN_140108b4a(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = toupper((int)*param_2);
  cVar1 = *param_1;
  iVar3 = toupper((int)cVar1);
  if (iVar2 == iVar3 && cVar1 != '\0') {
    lVar4 = 1;
    do {
      iVar2 = toupper((int)param_2[lVar4]);
      cVar1 = param_1[lVar4];
      iVar3 = toupper((int)cVar1);
      if (cVar1 == '\0') break;
      lVar4 = lVar4 + 1;
    } while (iVar2 == iVar3);
  }
  return iVar2 - iVar3;
}

