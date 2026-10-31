/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140193360 */

undefined8 FUN_140193360(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_140f17b40 & 0x3f;
  return CONCAT71((int7)(DAT_140f17b40 >> 8),
                  (DAT_140f32730 ^ DAT_140f17b40) >> bVar1 != 0 ||
                  (DAT_140f32730 ^ DAT_140f17b40) << 0x40 - bVar1 != 0);
}

