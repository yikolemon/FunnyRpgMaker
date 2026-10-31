/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100820fc */

bool FUN_100820fc(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_10082c38();
  if (iVar1 == 0xef) {
    iVar1 = FUN_10082c38();
    if (iVar1 == 0xbb) {
      iVar1 = FUN_10082c38();
      bVar2 = iVar1 == 0xbf;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    FUN_1004cf0a();
    bVar2 = true;
  }
  return bVar2;
}

