/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008ec40 */

void FUN_14008ec40(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_14012ea80 & 0x3f) & 0x3f;
  DAT_140142c28 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_14012ea80;
  return;
}

