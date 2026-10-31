/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102627dd */

undefined1 FUN_102627dd(char param_1,byte param_2)

{
  byte bVar1;
  
  if ((byte)(param_1 - 0x20U) < 0x5b) {
    bVar1 = (&DAT_10324041)[((int)param_1 - 0x20U & 0x7f) * 2];
  }
  else {
    bVar1 = 0;
  }
  return (&DAT_10324040)[((uint)bVar1 * 9 + (uint)param_2 & 0x7f) * 2];
}

