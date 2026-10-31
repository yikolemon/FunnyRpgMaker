/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180294e28 */

bool FUN_180294e28(FILE *param_1)

{
  int iVar1;
  FILE *pFVar2;
  bool bVar3;
  
  pFVar2 = (FILE *)FUN_1802723a4(2);
  if (param_1 == pFVar2) {
    bVar3 = true;
  }
  else {
    pFVar2 = (FILE *)FUN_1802723a4(1);
    if (param_1 == pFVar2) {
      iVar1 = _fileno(param_1);
      iVar1 = FUN_1802a37e0(iVar1);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

