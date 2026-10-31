/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026185a */

undefined1 FUN_1026185a(int param_1,byte param_2)

{
  byte bVar1;
  
  if ((ushort)((short)param_1 - 0x20U) < 0x5b) {
    bVar1 = (&DAT_10323f41)[(param_1 - 0x20U & 0x7f) * 2];
  }
  else {
    bVar1 = 0;
  }
  return (&DAT_10323f40)[((uint)param_2 + (uint)bVar1 * 8 & 0x7f) * 2];
}

