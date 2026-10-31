/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066ba4 */

undefined4 * FUN_10066ba4(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  
  if (0x7f < param_2) {
    if (param_2 < 0x800) {
      bVar1 = (byte)(param_2 >> 6) | 0xc0;
    }
    else {
      if (param_2 < 0x10000) {
        bVar1 = (byte)(param_2 >> 0xc) | 0xe0;
      }
      else {
        FUN_10003d9a((int)(char)((byte)(param_2 >> 0x12) | 0xf0));
        bVar1 = (byte)(param_2 >> 0xc) & 0x3f | 0x80;
      }
      FUN_10003d9a((int)(char)bVar1);
      bVar1 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    }
    FUN_10003d9a((int)(char)bVar1);
    param_2 = (uint)((byte)param_2 & 0x3f | 0x80);
  }
  FUN_10003d9a((int)(char)param_2);
  *param_1 = param_3;
  return param_1;
}

