/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047d416 */

uint __fastcall thunk_FUN_0047de63(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_2 != (byte *)0x0) {
    uVar2 = ~param_1;
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ *param_2) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ param_2[1]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ param_2[2]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ param_2[3]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ param_2[4]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ param_2[5]) * 4);
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ param_2[6]) * 4);
      pbVar1 = param_2 + 7;
      param_2 = param_2 + 8;
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ *pbVar1) * 4);
    }
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        uVar2 = uVar2 >> 8 ^
                *(uint *)(&DAT_004f6d00 + (uint)(byte)((byte)uVar2 ^ param_2[uVar3]) * 4);
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
    }
    return ~uVar2;
  }
  return 0;
}

