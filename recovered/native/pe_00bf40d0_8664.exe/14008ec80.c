/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008ec80 */

undefined8 FUN_14008ec80(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_14012ea80 & 0x3f;
  return CONCAT71((int7)(DAT_14012ea80 >> 8),
                  (DAT_140142c28 ^ DAT_14012ea80) >> bVar1 != 0 ||
                  (DAT_140142c28 ^ DAT_14012ea80) << 0x40 - bVar1 != 0);
}

