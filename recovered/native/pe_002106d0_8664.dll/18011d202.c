/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d202 */

longlong FUN_18011d202(void)

{
  longlong lVar1;
  
  if (*(char *)(DAT_180419160 + 0x2428) == '\x01') {
    lVar1 = 0;
    if (*(int *)(DAT_180419160 + 0x244c) != -1) {
      lVar1 = DAT_180419160 + 0x2438;
    }
    return lVar1;
  }
  return 0;
}

