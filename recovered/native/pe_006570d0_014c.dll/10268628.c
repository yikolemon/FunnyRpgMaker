/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10268628 */

uint FUN_10268628(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_10388d00 & 0x1f) & 0x1f;
  return (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_10388d00;
}

