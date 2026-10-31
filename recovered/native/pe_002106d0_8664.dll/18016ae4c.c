/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016ae4c */

longlong FUN_18016ae4c(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 4) & 8) == 0)) {
    lVar1 = 0;
  }
  else {
    if (*(char *)(lVar1 + 0x239) == '\0') {
      FUN_18016663a(lVar1);
    }
    FUN_1801681ed(lVar1);
    lVar1 = lVar1 + 0x1f0;
  }
  return lVar1;
}

