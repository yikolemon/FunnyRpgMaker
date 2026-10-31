/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026860d */

uint FUN_1026860d(uint param_1)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_10388d00 & 0x1f;
  return (param_1 ^ DAT_10388d00) >> bVar1 | (param_1 ^ DAT_10388d00) << 0x20 - bVar1;
}

