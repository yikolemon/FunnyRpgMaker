/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048a378 */

undefined1 FUN_0048a378(int param_1,byte param_2)

{
  byte bVar1;
  
  if ((ushort)((short)param_1 - 0x20U) < 0x5b) {
    bVar1 = (&DAT_004f8499)[(param_1 - 0x20U & 0x7f) * 2];
  }
  else {
    bVar1 = 0;
  }
  return (&DAT_004f8498)[((uint)param_2 + (uint)bVar1 * 8 & 0x7f) * 2];
}

