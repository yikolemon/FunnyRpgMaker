/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107f0e */

longlong FUN_180107f0e(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(**(longlong **)(DAT_180419160 + 0x2180) + 200) != '\0') {
    lVar1 = **(longlong **)(DAT_180419160 + 0x2180) + 200;
  }
  return lVar1;
}

