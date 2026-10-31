/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007854a */

int FUN_14007854a(char *param_1,char *param_2)

{
  size_t sVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_2 == (char *)0x0) {
    sVar1 = strlen(param_1);
    param_2 = param_1 + sVar1;
  }
  iVar3 = 0;
  if (param_1 < param_2) {
    iVar3 = 0;
    do {
      lVar2 = FUN_1401c4fe0(param_1,10,(longlong)param_2 - (longlong)param_1);
      param_1 = (char *)(lVar2 + 1);
      if (lVar2 == 0) {
        param_1 = param_2;
      }
      iVar3 = iVar3 + 1;
    } while (param_1 < param_2);
  }
  return iVar3;
}

