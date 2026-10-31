/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488cf0 */

void __cdecl FUN_00488cf0(uint param_1)

{
  byte bVar1;
  
  bVar1 = 0x20 - ((byte)DAT_0050e8c0 & 0x1f) & 0x1f;
  DAT_005216e8 = (param_1 >> bVar1 | param_1 << 0x20 - bVar1) ^ DAT_0050e8c0;
  return;
}

