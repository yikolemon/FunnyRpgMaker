/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102263aa */

uint __fastcall thunk_FUN_10226df7(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  if (param_2 != (byte *)0x0) {
    param_1 = ~param_1;
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar2 = param_1 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)param_1 ^ *param_2) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)uVar2 ^ param_2[1]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)uVar2 ^ param_2[2]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)uVar2 ^ param_2[3]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)uVar2 ^ param_2[4]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)uVar2 ^ param_2[5]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)uVar2 ^ param_2[6]) * 4);
      pbVar1 = param_2 + 7;
      param_2 = param_2 + 8;
      param_1 = uVar2 >> 8 ^ *(uint *)(&DAT_10322790 + (uint)(byte)((byte)uVar2 ^ *pbVar1) * 4);
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        param_1 = param_1 >> 8 ^
                  *(uint *)(&DAT_10322790 + (uint)(byte)((byte)param_1 ^ param_2[uVar2]) * 4);
        uVar2 = uVar2 + 1;
      } while (param_3 != uVar2);
    }
    return ~param_1;
  }
  return 0;
}

