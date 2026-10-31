/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114b7c */

void FUN_140114b7c(void)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = DAT_140354ce0;
  if (((DAT_140354ce0 == 0) && (lVar1 = DAT_140354cc8, DAT_140354cc8 == 0)) &&
     ((DAT_140354cd0 == 0 ||
      ((iVar2 = FUN_140114c88(), lVar1 = DAT_140354cc8, iVar2 != 0 &&
       (iVar2 = FUN_14011501c(), lVar1 = DAT_140354cc8, iVar2 != 0)))))) {
    lVar1 = 0;
  }
  DAT_140354ce0 = lVar1;
  return;
}

