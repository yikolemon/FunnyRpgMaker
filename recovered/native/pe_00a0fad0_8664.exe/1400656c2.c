/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400656c2 */

bool FUN_1400656c2(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_140065f7e();
  if (iVar1 == 0xef) {
    iVar1 = FUN_140065f7e(param_1);
    if (iVar1 == 0xbb) {
      iVar1 = FUN_140065f7e(param_1);
      bVar2 = iVar1 == 0xbf;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    FUN_140066032(param_1);
    bVar2 = true;
  }
  return bVar2;
}

