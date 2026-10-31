/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180082e90 */

bool FUN_180082e90(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_18008375a();
  if (iVar1 == 0xef) {
    iVar1 = FUN_18008375a(param_1);
    if (iVar1 == 0xbb) {
      iVar1 = FUN_18008375a(param_1);
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

