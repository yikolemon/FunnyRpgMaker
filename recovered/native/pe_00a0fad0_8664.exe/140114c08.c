/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140114c08 */

longlong FUN_140114c08(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = DAT_140354cd0;
  if ((DAT_140354cd0 == 0) &&
     ((DAT_140354cc8 == 0 ||
      ((iVar1 = FUN_140114cfc(), lVar2 = DAT_140354cd0, iVar1 != 0 &&
       (iVar1 = FUN_1401150fc(), lVar2 = DAT_140354cd0, iVar1 != 0)))))) {
    lVar2 = 0;
  }
  return lVar2;
}

