/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b2968 */

bool FUN_1401b2968(FILE *param_1)

{
  int iVar1;
  FILE *pFVar2;
  bool bVar3;
  
  pFVar2 = (FILE *)FUN_1401930f8(2);
  if (param_1 == pFVar2) {
    bVar3 = true;
  }
  else {
    pFVar2 = (FILE *)FUN_1401930f8(1);
    if (param_1 == pFVar2) {
      iVar1 = _fileno(param_1);
      iVar1 = FUN_1401c09b0(iVar1);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

