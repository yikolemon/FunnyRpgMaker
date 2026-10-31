/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a61e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1404a61e0(void)

{
  byte bVar1;
  
  bVar1 = (byte)ram0x000140613b10 & 0x3f;
  return CONCAT71((int7)(ram0x000140613b10 >> 8),
                  (DAT_140632d48 ^ ram0x000140613b10) >> bVar1 != 0 ||
                  (DAT_140632d48 ^ ram0x000140613b10) << 0x40 - bVar1 != 0);
}

