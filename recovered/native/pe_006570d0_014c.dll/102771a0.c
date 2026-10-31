/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102771a0 */

bool FUN_102771a0(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_10388d00 & 0x1f;
  return (DAT_103a5470 ^ DAT_10388d00) >> bVar1 != 0 ||
         (DAT_103a5470 ^ DAT_10388d00) << 0x20 - bVar1 != 0;
}

