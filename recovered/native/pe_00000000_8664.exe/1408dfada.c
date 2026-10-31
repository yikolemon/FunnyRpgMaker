/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408dfada */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408dfada(void)

{
  int iVar1;
  
  iVar1 = _DAT_150c7b7d0;
  if (_DAT_150c7b7d0 == -2) {
    FUN_1408dfb4e();
    iVar1 = _DAT_150c7b7e0;
  }
  return iVar1 != -1;
}

