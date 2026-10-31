/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010b570 */

undefined8 FUN_14010b570(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_1401c9640 & 0x3f;
  return CONCAT71((int7)(DAT_1401c9640 >> 8),
                  (DAT_140354b60 ^ DAT_1401c9640) >> bVar1 != 0 ||
                  (DAT_140354b60 ^ DAT_1401c9640) << 0x40 - bVar1 != 0);
}

