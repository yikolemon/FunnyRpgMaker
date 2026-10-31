/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488d30 */

bool FUN_00488d30(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_0050e8c0 & 0x1f;
  return (DAT_005216e8 ^ DAT_0050e8c0) >> bVar1 != 0 ||
         (DAT_005216e8 ^ DAT_0050e8c0) << 0x20 - bVar1 != 0;
}

