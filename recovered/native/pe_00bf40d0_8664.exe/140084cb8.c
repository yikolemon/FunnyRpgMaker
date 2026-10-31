/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140084cb8 */

uint FUN_140084cb8(uint param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_2 != (byte *)0x0) {
    uVar2 = ~param_1;
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ *param_2) * 4)
      ;
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ param_2[1]) * 4);
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ param_2[2]) * 4);
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ param_2[3]) * 4);
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ param_2[4]) * 4);
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ param_2[5]) * 4);
      uVar2 = uVar2 >> 8 ^
              *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ param_2[6]) * 4);
      pbVar1 = param_2 + 7;
      param_2 = param_2 + 8;
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ *pbVar1) * 4);
    }
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        uVar2 = uVar2 >> 8 ^
                *(uint *)(&DAT_14010a6c0 + (ulonglong)(byte)((byte)uVar2 ^ param_2[uVar3]) * 4);
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
    }
    return ~uVar2;
  }
  return 0;
}

