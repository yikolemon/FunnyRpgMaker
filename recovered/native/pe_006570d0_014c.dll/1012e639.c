/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012e639 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1012e639(undefined4 param_1,float *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_80 [3];
  undefined1 local_7d;
  int local_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  byte local_36;
  char local_35;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  undefined8 uStack_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_80;
  local_7c = *(int *)((int)DAT_1039d74c + 0x14cc);
  local_24 = *param_2;
  fStack_20 = param_2[1];
  local_78 = DAT_1039d74c;
  fVar5 = (float)*(undefined8 *)param_2;
  fStack_2c = *(float *)((int)DAT_1039d74c + 0x1228) + fVar5;
  fVar4 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  fStack_28 = *(float *)((int)DAT_1039d74c + 0x1228) + fVar4;
  uStack_1c = CONCAT44(fStack_28,fStack_2c);
  local_34 = local_24;
  fStack_30 = fStack_20;
  if ((((float)((ulonglong)*(undefined8 *)(local_7c + 0x244) >> 0x20) -
       (float)((ulonglong)*(undefined8 *)(local_7c + 0x23c) >> 0x20)) *
      ((float)*(undefined8 *)(local_7c + 0x244) - (float)*(undefined8 *)(local_7c + 0x23c))) /
      ((fStack_28 - fVar4) * (fStack_2c - fVar5)) < DAT_102b9150) {
    local_34 = local_24 - (float)(int)(_DAT_102b94c0 * (fStack_2c - local_24));
    fStack_30 = fStack_20 - (float)(int)(_UNK_102b94c4 * (fStack_28 - fStack_20));
    fStack_2c = fStack_2c + (float)(int)(_DAT_102b94c0 * (fStack_2c - local_24));
    fStack_28 = fStack_28 + (float)(int)(_UNK_102b94c4 * (fStack_28 - fStack_20));
  }
  cVar1 = FUN_1010c9d8(&local_34,param_1,0,0);
  uVar2 = FUN_1012d77e(&local_34,param_1,&local_35,&local_36,0);
  if (cVar1 != '\0') {
    local_7d = uVar2;
    uVar3 = FUN_100fcb39(local_36 + 0x17,0x3f800000);
    if (local_35 == '\x01') {
      FUN_1018b85a(&local_24,&uStack_1c,uVar3,0,0);
    }
    FUN_100fe25e(&local_24,param_1,2);
    uVar3 = FUN_100fcb39(0,0x3f800000);
    fStack_5c = *(float *)((int)local_78 + 0x1228) * DAT_102b70e0 * _DAT_102b94d0 + DAT_102b8a50;
    local_78 = (float)(int)*(float *)((int)local_78 + 0x1204);
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_68 = ((float)uStack_1c + local_24) * (float)DAT_102b89c0 + _DAT_102b94e0;
    fStack_64 = ((float)((ulonglong)uStack_1c >> 0x20) + fStack_20) * DAT_102b89c0._4_4_ +
                _UNK_102b94e4;
    fStack_60 = _UNK_102b89c8 * 0.0 + _UNK_102b94e8;
    fVar5 = _UNK_102b89cc * 0.0 + _UNK_102b94ec;
    local_58 = local_68 - fStack_5c;
    fStack_54 = fStack_64 - fStack_5c;
    fStack_50 = fStack_60 - fStack_5c;
    fStack_4c = fVar5 - fStack_5c;
    local_40 = CONCAT44(fStack_54,local_58);
    local_68 = fStack_5c + local_68;
    fStack_64 = fStack_5c + fStack_64;
    fStack_60 = fStack_5c + fStack_60;
    fStack_5c = fStack_5c + fVar5;
    local_48 = CONCAT44(fStack_64,local_68);
    FUN_1018b2de(&local_48,&local_40,uVar3,local_78);
    local_40 = CONCAT44(fStack_64,local_58);
    local_48 = CONCAT44(fStack_54,local_68);
    FUN_1018b2de(&local_48,&local_40,uVar3,local_78);
    uVar2 = local_7d;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_80)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

