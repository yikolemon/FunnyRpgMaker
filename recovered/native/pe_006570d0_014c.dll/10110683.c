/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10110683 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10110683(int param_1,float *param_2,undefined4 param_3,undefined1 *param_4)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  float fVar7;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float local_30;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_ac;
  local_a8 = *(float *)(param_1 + 0xc);
  if (((uint)local_a8 & 0x20) == 0) {
    bVar5 = *(int *)(DAT_1039d74c + 0xcf8) != -1;
  }
  else {
    bVar5 = false;
  }
  local_90 = *(float *)(DAT_1039d74c + 0x1e40);
  *(uint *)(DAT_1039d74c + 0x1e40) = (uint)local_90 | 4;
  *(undefined4 *)(param_1 + 0x19c) = 1;
  local_a0 = *(float *)(iVar2 + 0xd0c);
  local_6c = *(float *)(iVar2 + 0x1228);
  local_1c = 0;
  local_24 = 0;
  local_ac = local_a0;
  if (param_4 != (undefined1 *)0x0) {
    local_1c = CONCAT44(param_2[1] + *(float *)(iVar2 + 0xd10),(param_2[2] - local_a0) - local_6c);
    local_ac = *(float *)(iVar2 + 0xd24) + local_6c + local_a0;
  }
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  if (bVar5) {
    if (*(int *)(iVar2 + 0xcf8) == 0) {
      local_24 = CONCAT44(*(float *)(iVar2 + 0xd10) +
                          (float)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                          local_a0 + (float)*(undefined8 *)param_2);
      local_a0 = local_a0 + *(float *)(iVar2 + 0xd24) + local_6c;
    }
    else if (*(int *)(iVar2 + 0xcf8) == 1) {
      local_24 = CONCAT44(param_2[1] + *(float *)(iVar2 + 0xd10),(param_2[2] - local_ac) - local_6c)
      ;
      local_ac = local_ac + *(float *)(iVar2 + 0xd24) + local_6c;
    }
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_9c = 0;
    uVar4 = FUN_101021d4("#COLLAPSE",0);
    cVar3 = FUN_1012e8bb(uVar4,&local_24,0);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0xfd) = 1;
    }
  }
  else {
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
  }
  if (param_4 != (undefined1 *)0x0) {
    *(byte *)(iVar2 + 0x1e42) = *(byte *)(iVar2 + 0x1e42) | 2;
    uVar4 = FUN_101021d4("#CLOSE",0);
    cVar3 = FUN_1012e639(uVar4,&local_1c);
    if (cVar3 != '\0') {
      *param_4 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(float *)(iVar2 + 0x1e40) = local_90;
  local_6c = local_6c * DAT_102b7114;
  local_90 = 0.0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  if (((uint)local_a8 >> 0x12 & 1) != 0) {
    local_90 = local_6c;
    uStack_8c = uStack_68;
    uStack_88 = uStack_64;
    uStack_84 = uStack_60;
  }
  FUN_100fdb2e(&local_3c,param_3,0,1,0xbf800000);
  local_5c = local_90 + local_3c;
  fStack_58 = fStack_38 + 0.0;
  local_2c = CONCAT44(fStack_58,local_5c);
  if (*(float *)(iVar2 + 0xd0c) < local_a0) {
    local_a0 = local_a0 + *(float *)(iVar2 + 0xd24);
  }
  if (*(float *)(iVar2 + 0xd0c) < local_ac) {
    local_ac = local_ac + *(float *)(iVar2 + 0xd24);
  }
  fVar7 = *(float *)(iVar2 + 0xcf0);
  uStack_54 = 0;
  uStack_50 = 0;
  if ((0.0 < fVar7) && (fVar7 < DAT_1028b430)) {
    fVar7 = (float)((uint)(fVar7 + DAT_102b8d58) & _DAT_1028b410);
    fVar7 = DAT_1028b430 - (fVar7 + fVar7);
    local_90 = DAT_1028b430;
    if (fVar7 <= DAT_1028b430) {
      local_90 = fVar7;
    }
    local_90 = (float)(~-(uint)(fVar7 < 0.0) & (uint)local_90);
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_a4 = (((param_2[2] - *param_2) - local_a0) - local_ac) - local_5c;
    fVar6 = (float10)FUN_100fdbca(local_a0,local_ac);
    fVar6 = (float10)FUN_100ea38a((float)fVar6,local_a4);
    local_70 = (float)fVar6;
    local_90 = local_90 * local_70;
    fVar6 = (float10)FUN_100fdbca(local_a0,local_90);
    local_a0 = (float)fVar6;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_74 = local_a0;
    fVar6 = (float10)FUN_100fdbca(local_ac,local_90);
    local_ac = (float)fVar6;
    local_78 = local_ac;
  }
  local_30 = param_2[3];
  local_90 = param_2[1];
  local_a4 = param_2[2] - local_ac;
  local_a0 = local_a0 + *param_2;
  local_ac = local_30;
  local_3c = local_a0;
  fStack_38 = local_90;
  local_34 = local_a4;
  fVar6 = (float10)FUN_100ea38a(*(float *)(iVar2 + 0xd24) + local_a4,param_2[2]);
  uVar1 = (uint)local_a8 >> 0x12;
  local_a8 = (float)fVar6;
  local_4c = local_a0;
  local_48 = local_90;
  local_40 = local_ac;
  local_7c = local_a8;
  local_44 = local_a8;
  if ((uVar1 & 1) != 0) {
    fVar6 = (float10)FUN_10112cc4(((local_a4 - local_a0) - local_5c) * *(float *)(iVar2 + 0xcf0) +
                                  local_a0 + local_5c,local_a0,local_a4);
    local_80 = (float)fVar6;
    if (local_a0 < local_80) {
      local_ac = (local_ac + local_90) * DAT_102b70e0;
      local_a0 = local_80;
      uVar4 = FUN_100fcb39(0x3a,0x3f800000);
      FUN_10193c4a(*(undefined4 *)(param_1 + 0x2e8),local_a0,local_ac,uVar4);
      fVar6 = (float10)FUN_100ea38a(local_a8,local_a0 - (float)(int)(local_6c * DAT_102b70e0));
      local_44 = (float)fVar6;
    }
  }
  FUN_100fdbf2(&local_3c,&local_34,param_3,0,&local_2c,(float *)(iVar2 + 0xcf0),&local_4c);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_ac)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

