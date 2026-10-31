/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048b765 */

undefined1 FUN_0048b765(char param_1,byte param_2)

{
  byte bVar1;
  
  if ((byte)(param_1 - 0x20U) < 0x5b) {
    bVar1 = (&DAT_004f8599)[((int)param_1 - 0x20U & 0x7f) * 2];
  }
  else {
    bVar1 = 0;
  }
  return (&DAT_004f8598)[((uint)bVar1 * 9 + (uint)param_2 & 0x7f) * 2];
}

