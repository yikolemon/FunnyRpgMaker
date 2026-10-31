/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012d303 */

void FUN_1012d303(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  float10 fVar5;
  float fVar6;
  undefined4 local_88;
  float local_84;
  float local_80;
  float local_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_88;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar2 = *(int *)(iVar3 + 0x14cc);
  if (*(char *)(iVar2 + 0xfe) == '\0') {
    fVar5 = (float10)FUN_10115533();
    local_80 = (float)fVar5;
    uStack_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    local_6c = local_80;
    FUN_100fa5d7(&local_20,&local_24,param_2,param_3);
    FUN_100fdb2e(local_2c,local_20,local_24,0,0xbf800000);
    local_88 = FUN_100fd57d(param_1,0);
    FUN_100fdb2e(&local_34,param_1,local_88,0,0xbf800000);
    local_7c = *(float *)(iVar2 + 0x144);
    fStack_78 = *(float *)(iVar2 + 0x148);
    fStack_3c = local_6c + local_7c;
    fStack_38 = *(float *)(iVar3 + 0xd10) + *(float *)(iVar3 + 0xd10) + local_28 + fStack_78;
    uStack_74 = 0;
    uStack_70 = 0;
    local_44 = local_7c;
    fStack_40 = fStack_78;
    fVar5 = (float10)FUN_100fdbca(local_28,local_30);
    local_84 = (float)fVar5;
    fVar1 = *(float *)(iVar3 + 0xd10);
    fVar6 = 0.0;
    if (0.0 < local_34) {
      fVar6 = local_34 + *(float *)(iVar3 + 0xd24);
    }
    fStack_4c = local_6c + fVar6 + local_7c;
    fStack_48 = fVar1 + fVar1 + local_84 + fStack_78;
    local_54 = local_7c;
    fStack_50 = fStack_78;
    local_1c = CONCAT44(fStack_48 - fStack_78,fStack_4c - local_7c);
    FUN_1010c810(&local_1c,fVar1);
    cVar4 = FUN_1010c9d8(&local_54,0,0,0);
    if (cVar4 != '\0') {
      local_1c = 0;
      local_5c = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0xd0c) >> 0x20) + fStack_78,
                          (float)*(undefined8 *)(iVar3 + 0xd0c) + local_7c);
      FUN_100fdbf2(&local_5c,&fStack_3c,local_20,local_24,local_2c,&local_1c,0);
      if (0.0 < local_34) {
        FUN_100fd5ae(fStack_3c + *(float *)(iVar3 + 0xd24),fStack_40 + *(float *)(iVar3 + 0xd10),
                     param_1,local_88,0);
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

