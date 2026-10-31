/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400964be */

longlong FUN_1400964be(void)

{
  longlong lVar1;
  
  if (*(char *)(DAT_140f2a910 + 0x2428) == '\x01') {
    lVar1 = 0;
    if (*(int *)(DAT_140f2a910 + 0x244c) != -1) {
      lVar1 = DAT_140f2a910 + 0x2438;
    }
    return lVar1;
  }
  return 0;
}

