/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004d2ae */

bool FUN_18004d2ae(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_18004db78();
  if (iVar1 == 0xef) {
    iVar1 = FUN_18004db78(param_1);
    if (iVar1 == 0xbb) {
      iVar1 = FUN_18004db78(param_1);
      bVar2 = iVar1 == 0xbf;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    FUN_18004dc3e(param_1);
    bVar2 = true;
  }
  return bVar2;
}

