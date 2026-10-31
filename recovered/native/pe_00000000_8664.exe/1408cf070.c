/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cf070 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1408cf070(void)

{
  byte bVar1;
  
  bVar1 = (byte)_DAT_150c57d76 & 0x1f;
  return (_DAT_150c744ec ^ _DAT_150c57d85) >> bVar1 != 0 ||
         (_DAT_150c744ec ^ _DAT_150c57d85) << 0x20 - bVar1 != 0;
}

