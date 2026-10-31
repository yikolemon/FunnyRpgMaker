/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229ef0 */

void FUN_10229ef0(int param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char local_140 [284];
  uint local_24;
  
  local_24 = DAT_10388d00 ^ (uint)&stack0xffffffe0;
  if ((DAT_10389df8 & 4) == 0) {
    _memset(local_140,0,0x100);
    pbVar1 = param_3 + param_4;
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_140[*param_3] = '\x01';
    }
    do {
      if (param_2 == 0) break;
      pbVar1 = (byte *)(param_1 + -1 + param_2);
      param_2 = param_2 + -1;
    } while (local_140[*pbVar1] == '\0');
  }
  else {
    uVar3 = FUN_1022abb0(param_2,param_4,(byte)(DAT_10389df8 >> 5) & 1);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 == 2) {
      FUN_1022ac60(param_1,param_2,param_3,uVar2);
    }
    else if ((int)uVar3 == 1) {
      _memset(local_140,0,0x100);
      FUN_1022aed0(param_3,param_4,local_140);
      do {
        if (param_2 == 0) break;
        pbVar1 = (byte *)(param_1 + -1 + param_2);
        param_2 = param_2 + -1;
      } while (local_140[*pbVar1] == '\0');
    }
    else {
      FUN_1022af00(param_1,param_2,param_3,uVar2);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

