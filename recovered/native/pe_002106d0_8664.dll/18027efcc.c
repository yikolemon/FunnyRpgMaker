/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18027efcc */

longlong FUN_18027efcc(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_180420ef0;
  if ((DAT_180420ef0 == 0) &&
     ((DAT_180420ee8 == 0 ||
      ((iVar1 = FUN_18027f0c0(), lVar2 = DAT_180420ef0, iVar1 != 0 &&
       (iVar1 = FUN_18027f3e0(), lVar2 = DAT_180420ef0, iVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}

