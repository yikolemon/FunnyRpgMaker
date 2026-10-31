/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180294d10 */

undefined8 FUN_180294d10(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_180402640 & 0x3f;
  return CONCAT71((int7)(DAT_180402640 >> 8),
                  (DAT_180421878 ^ DAT_180402640) >> bVar1 != 0 ||
                  (DAT_180421878 ^ DAT_180402640) << 0x40 - bVar1 != 0);
}

