/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a62f8 */

bool FUN_1404a62f8(FILE *param_1)

{
  int iVar1;
  FILE *pFVar2;
  bool bVar3;
  
  pFVar2 = (FILE *)FUN_140483874(2);
  if (param_1 == pFVar2) {
    bVar3 = true;
  }
  else {
    pFVar2 = (FILE *)FUN_140483874(1);
    if (param_1 == pFVar2) {
      iVar1 = _fileno(param_1);
      iVar1 = FUN_1404b4cb0(iVar1);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

