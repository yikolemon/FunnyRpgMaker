/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081226 */

longlong FUN_140081226(void)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(**(longlong **)(DAT_140f2a910 + 0x2180) + 200) != '\0') {
    lVar1 = **(longlong **)(DAT_140f2a910 + 0x2180) + 200;
  }
  return lVar1;
}

