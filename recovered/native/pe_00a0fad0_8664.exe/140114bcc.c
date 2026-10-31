/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114bcc */

longlong FUN_140114bcc(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_140354cc8;
  if ((DAT_140354cc8 == 0) &&
     ((DAT_140354cd0 == 0 ||
      ((iVar1 = FUN_140114c88(), lVar2 = DAT_140354cc8, iVar1 != 0 &&
       (iVar1 = FUN_14011501c(), lVar2 = DAT_140354cc8, iVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}

