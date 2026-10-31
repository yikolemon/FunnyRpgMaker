/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102772a4 */

bool FUN_102772a4(FILE *param_1)

{
  FILE *pFVar1;
  int iVar2;
  
  pFVar1 = (FILE *)FUN_1025e77b(2);
  if (param_1 == pFVar1) {
    return true;
  }
  pFVar1 = (FILE *)FUN_1025e77b(1);
  if (param_1 == pFVar1) {
    iVar2 = __fileno(param_1);
    iVar2 = FUN_1028375e(iVar2);
    return iVar2 != 0;
  }
  return false;
}

