/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10132698 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10132698(float *param_1,int param_2,int param_3,float *param_4,float *param_5,float param_6
                 ,float param_7,float param_8,float param_9,uint param_10)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_60 [3];
  char local_5d;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  char local_16;
  char local_15;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_60;
  uVar3 = *(undefined4 *)(DAT_1039d74c + 0x14cc);
  cVar1 = FUN_1010c9d8(param_1,param_2,0,2);
  if (cVar1 == '\0') {
    bVar4 = 0;
    goto LAB_101329a4;
  }
  if (param_3 == 1) {
    local_28 = 0.0;
    fStack_24 = param_8;
  }
  else {
    fStack_24 = 0.0;
    local_28 = param_8;
  }
  fStack_20 = local_28 + param_1[2];
  fStack_1c = fStack_24 + param_1[3];
  local_28 = *param_1 - local_28;
  fStack_24 = param_1[1] - fStack_24;
  local_5c = uVar3;
  FUN_1012d77e(&local_28,param_2,&local_15,&local_16,0x1800);
  local_5d = local_15;
  if (local_15 == '\x01') {
    *(byte *)(iVar2 + 0x1e88) = *(byte *)(iVar2 + 0x1e88) | 1;
    if (local_16 == '\0') {
      if ((*(int *)(iVar2 + 0x1514) == param_2) && (param_9 <= *(float *)(iVar2 + 0x151c))) {
        FUN_10114115((param_3 != 1) + '\x03');
      }
      goto LAB_10132913;
    }
LAB_10132798:
    FUN_10114115((param_3 != 1) + '\x03');
    local_38 = *param_1;
    fStack_34 = param_1[1];
    fStack_30 = param_1[2];
    fStack_2c = param_1[3];
    local_40 = CONCAT44(((float)((ulonglong)*(undefined8 *)(iVar2 + 0xe4) >> 0x20) -
                        (float)((ulonglong)*(undefined8 *)(iVar2 + 0x1540) >> 0x20)) - fStack_24,
                        ((float)*(undefined8 *)(iVar2 + 0xe4) -
                        (float)*(undefined8 *)(iVar2 + 0x1540)) - local_28);
    local_50 = *(float *)((int)&local_40 + param_3 * 4);
    fVar5 = (float10)FUN_100fdbca(0,*param_4 - param_6);
    local_54 = (float)fVar5;
    fVar5 = (float10)FUN_100fdbca(0,*param_5 - param_7);
    local_58 = (float)fVar5;
    fVar6 = (float)((uint)local_54 ^ _DAT_1028f620);
    if ((float)((uint)local_54 ^ _DAT_1028f620) <= local_50) {
      fVar6 = local_50;
    }
    fVar7 = local_58;
    if (fVar6 <= local_58) {
      fVar7 = fVar6;
    }
    bVar4 = 1;
    if ((fVar7 != 0.0) || (NAN(fVar7))) {
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      local_50 = fVar7;
      fVar5 = (float10)FUN_100fdbca(*param_4 + fVar7,param_6);
      *param_4 = (float)fVar5;
      fVar5 = (float10)FUN_100fdbca(*param_5 - local_50,param_7);
      *param_5 = (float)fVar5;
      fVar7 = (float)((uint)local_50 & (int)((uint)(param_3 == 0) << 0x1f) >> 0x1f);
      fVar6 = (float)(~((int)((uint)(param_3 == 0) << 0x1f) >> 0x1f) & (uint)local_50);
      local_38 = local_38 + fVar7;
      fStack_34 = fStack_34 + fVar6;
      fStack_30 = fStack_30 + fVar7;
      fStack_2c = fStack_2c + fVar6;
      FUN_10102913(param_2);
    }
  }
  else {
    if (local_16 != '\0') goto LAB_10132798;
LAB_10132913:
    local_38 = *param_1;
    fStack_34 = param_1[1];
    fStack_30 = param_1[2];
    fStack_2c = param_1[3];
    bVar4 = 0;
  }
  if (0xffffff < param_10) {
    FUN_1018b85a(&local_38,&fStack_30,param_10,0,0);
  }
  if (local_5d == '\x01' && bVar4 == 0) {
    iVar2 = 0x1d - (uint)(*(float *)(iVar2 + 0x151c) < param_9);
  }
  else {
    iVar2 = (uint)bVar4 * 2 + 0x1c;
  }
  uVar3 = FUN_100fcb39(iVar2,0x3f800000);
  FUN_1018b85a(&local_38,&fStack_30,uVar3,0,0);
LAB_101329a4:
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_60)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

