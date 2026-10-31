/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c2de4 */

int FUN_1801c2de4(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (0 < param_3) {
    lVar5 = 0;
    do {
      iVar3 = toupper((int)*(char *)(param_2 + lVar5));
      cVar1 = *(char *)(param_1 + lVar5);
      iVar4 = toupper((int)cVar1);
      if (iVar3 - iVar4 != 0) {
        return iVar3 - iVar4;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      lVar5 = lVar5 + 1;
      bVar2 = 1 < param_3;
      param_3 = param_3 + -1;
    } while (bVar2);
  }
  return 0;
}

