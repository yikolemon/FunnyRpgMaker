/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10127676 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10127676(void)

{
  byte bVar1;
  float in_XMM0_Da;
  float in_XMM1_Da;
  
  bVar1 = 0.0 < in_XMM0_Da;
  if ((float)((uint)in_XMM0_Da & _DAT_1028b410) <= (float)(_DAT_1028b410 & (uint)in_XMM1_Da)) {
    bVar1 = 0.0 < in_XMM1_Da | 2;
  }
  return bVar1;
}

