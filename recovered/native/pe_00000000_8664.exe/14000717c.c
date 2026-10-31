/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000717c */

bool FUN_14000717c(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_140007a46();
  if (iVar1 == 0xef) {
    iVar1 = FUN_140007a46(param_1);
    if (iVar1 == 0xbb) {
      iVar1 = FUN_140007a46(param_1);
      bVar2 = iVar1 == 0xbf;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    FUN_140007b0c(param_1);
    bVar2 = true;
  }
  return bVar2;
}

