/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112e1c */

longlong FUN_140112e1c(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 4) & 8) == 0)) {
    lVar1 = 0;
  }
  else {
    if (*(char *)(lVar1 + 0x239) == '\0') {
      FUN_14010e60a(lVar1);
    }
    FUN_1401101bd(lVar1);
    lVar1 = lVar1 + 0x1f0;
  }
  return lVar1;
}

