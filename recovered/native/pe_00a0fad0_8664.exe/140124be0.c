/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140124be0 */

bool FUN_140124be0(FILE *param_1)

{
  int iVar1;
  FILE *pFVar2;
  bool bVar3;
  
  pFVar2 = (FILE *)FUN_14010b2d0(2);
  if (param_1 == pFVar2) {
    bVar3 = true;
  }
  else {
    pFVar2 = (FILE *)FUN_14010b2d0(1);
    if (param_1 == pFVar2) {
      iVar1 = _fileno(param_1);
      iVar1 = FUN_140130e00(iVar1);
      bVar3 = iVar1 != 0;
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}

