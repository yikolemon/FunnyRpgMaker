/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012d594 */

void FUN_1012d594(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  float fVar5;
  float local_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    FUN_100fa5d7(&local_18,&local_1c,param_1,param_2);
    FUN_100fdb2e(&local_24,local_18,local_1c,0,0xbf800000);
    local_2c = 0.0;
    if (0.0 < local_24) {
      local_2c = *(float *)(iVar2 + 0xd0c) + *(float *)(iVar2 + 0xd0c) + local_24;
    }
    local_2c = *(float *)(iVar2 + 0x1228) + local_2c;
    local_28 = local_20;
    fVar5 = *(float *)(iVar1 + 0x144);
    local_4c = *(float *)(iVar1 + 0x148);
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_5c = *(float *)(iVar1 + 0x17c);
    uStack_54 = 0;
    uStack_50 = 0;
    fStack_58 = fVar5;
    FUN_1010c810(&local_2c,0);
    local_38 = CONCAT44(local_2c + fStack_58,local_4c + local_5c);
    local_30 = local_28 + local_4c + local_5c;
    local_3c = fVar5;
    cVar3 = FUN_1010c9d8(&local_3c,0,0,0);
    if (cVar3 != '\0') {
      uVar4 = FUN_100fcb39(0,0x3f800000);
      fVar5 = *(float *)(iVar2 + 0x1228) * DAT_102b70e0;
      FUN_10193c4a(*(undefined4 *)(iVar1 + 0x2e8),*(float *)(iVar2 + 0xd0c) + fVar5 + local_3c,
                   fVar5 + (float)local_38,uVar4);
      FUN_100fd5ae(*(float *)(iVar2 + 0xd0c) + *(float *)(iVar2 + 0xd0c) +
                   *(float *)(iVar2 + 0x1228) + local_3c,(float)local_38 + 0.0,local_18,local_1c,0);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_5c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

