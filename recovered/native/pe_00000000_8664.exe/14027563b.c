/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027563b */

longlong FUN_14027563b(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *param_1;
  lVar2 = 1;
  if ((char)bVar1 < '\0') {
    lVar2 = 2;
    if (((bVar1 & 0xe0) != 0xc0) && (lVar2 = 3, (bVar1 & 0xf0) != 0xe0)) {
      return (ulonglong)((bVar1 & 0xf8) == 0xf0) << 2;
    }
  }
  return lVar2;
}

