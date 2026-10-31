/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012ff1a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1012ff1a(undefined4 param_1,byte *param_2)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  byte bVar9;
  undefined4 uVar7;
  undefined2 uVar10;
  uint uVar8;
  int iVar11;
  float10 fVar12;
  float fVar13;
  uint local_c4;
  undefined4 local_c0;
  int local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 local_a8;
  int local_a4;
  float local_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_c4;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar11 = *(int *)(iVar2 + 0x14cc);
  uVar7 = 0;
  if (*(char *)(iVar11 + 0xfe) != '\0') goto LAB_10130510;
  local_a4 = iVar2;
  local_b8 = (float)FUN_101021d4(param_1,0);
  local_a8 = FUN_100fd57d(param_1,0);
  iVar2 = local_a4;
  FUN_100fdb2e(&local_24,param_1,local_a8,0,0xbf800000);
  fVar12 = (float10)FUN_101155f9();
  local_84 = (float)fVar12;
  local_a0 = *(float *)(iVar11 + 0x144);
  fStack_9c = *(float *)(iVar11 + 0x148);
  fVar1 = *(float *)(iVar2 + 0xd10);
  fVar13 = 0.0;
  if (0.0 < local_24) {
    fVar13 = local_24 + *(float *)(iVar2 + 0xd24);
  }
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  fStack_2c = fVar13 + local_84 + local_a0;
  fStack_28 = fVar1 + fVar1 + local_20 + fStack_9c;
  uStack_98 = 0;
  uStack_94 = 0;
  local_1c = CONCAT44(fStack_28 - fStack_9c,fStack_2c - local_a0);
  local_bc = iVar11;
  local_80 = local_84;
  local_34 = local_a0;
  fStack_30 = fStack_9c;
  FUN_1010c810(&local_1c,fVar1);
  uVar7 = FUN_1010c9d8(&local_34,local_b8,0,0);
  fVar1 = local_b8;
  cVar6 = (char)uVar7;
  if (cVar6 == '\0') {
    if ((((((*(uint *)(iVar2 + 0x1e84) >> 0x16 & 1) == 0) || (*(char *)(iVar2 + 0x23c0) != '\x01'))
         || (*(float *)(iVar2 + 0x23d0) <= fStack_30)) ||
        ((fStack_28 < *(float *)(iVar2 + 0x23c8) || fStack_28 == *(float *)(iVar2 + 0x23c8) ||
         (*(float *)(iVar2 + 0x23cc) <= local_34)))) ||
       (fStack_2c < *(float *)(iVar2 + 0x23c4) || fStack_2c == *(float *)(iVar2 + 0x23c4))) {
      uVar7 = 0;
      goto LAB_10130510;
    }
    local_35 = *param_2;
LAB_10130106:
    local_c4 = CONCAT31(local_c4._1_3_,(char)uVar7);
    FUN_1013053e(local_b8,&local_35,0);
    local_38 = FUN_1012d77e(&local_34,fVar1,&local_36,&local_37,0);
    uVar3 = (undefined1)local_c4;
    FUN_10130650(fVar1,&local_35,&local_38);
    uVar8 = CONCAT22((short)((uint)fVar1 >> 0x10),CONCAT11(local_35,uVar3));
  }
  else {
    bVar9 = *param_2;
    uVar10 = (undefined2)((uint)uVar7 >> 0x10);
    uVar7 = CONCAT22(uVar10,CONCAT11(bVar9,cVar6));
    local_35 = bVar9;
    if ((*(uint *)(iVar2 + 0x1e84) >> 0x16 & 1) != 0) goto LAB_10130106;
    local_38 = FUN_1012d77e(&local_34,local_b8,&local_36,&local_37,0);
    uVar8 = CONCAT22(uVar10,CONCAT11(bVar9 ^ local_38,cVar6));
  }
  bVar9 = (byte)(uVar8 >> 8);
  if (*param_2 != bVar9) {
    *param_2 = bVar9;
    local_38 = 1;
    FUN_10102913(local_b8);
  }
  fVar1 = local_b8;
  local_c4 = *(uint *)(iVar2 + 0x1e84);
  fVar13 = local_80 + local_a0;
  if ((byte)uVar8 != 0) {
    local_70 = fStack_9c;
    fStack_6c = fStack_9c;
    fStack_68 = fStack_9c;
    fStack_64 = fStack_9c;
    local_60 = fStack_9c + local_80;
    fStack_5c = fStack_9c;
    fStack_58 = fStack_9c;
    fStack_54 = fStack_9c;
    fStack_b4 = fStack_7c;
    fStack_b0 = fStack_78;
    fStack_ac = fStack_74;
    local_b8 = local_80 + local_a0;
    FUN_100fe25e(&local_34,fVar1,0);
    uVar4 = local_c4;
    iVar11 = 7;
    if ((uVar8 & 0x100) != 0) {
      iVar11 = 0x13;
    }
    if ((local_c4 & 0x1000) != 0) {
      iVar11 = 0x13;
    }
    if (local_36 != 0) {
      iVar11 = 9 - (uint)((local_37 & local_36) == 0);
    }
    uVar7 = FUN_100fcb39(iVar11,0x3f800000);
    local_c0 = FUN_100fcb39(0x12,0x3f800000);
    FUN_100fdee9(local_a0,local_70,local_b8,local_60,uVar7,1,*(undefined4 *)(iVar2 + 0xd14));
    uVar7 = local_c0;
    if ((uVar4 & 0x1000) == 0) {
      fVar13 = local_b8;
      if (*param_2 == 1) {
        fVar12 = (float10)FUN_100fdbca(0x3f800000,(float)(int)(local_80 / DAT_102b8a58));
        local_88 = (float)fVar12;
        FUN_10193ceb(*(undefined4 *)(local_bc + 0x2e8),local_a0 + local_88,local_70 + local_88,uVar7
                     ,local_80 - (local_88 + local_88));
        fVar13 = local_b8;
      }
    }
    else {
      local_50 = (float)(int)(local_80 / _DAT_102b94f0);
      fStack_4c = (float)(int)fStack_7c;
      fStack_48 = (float)(int)fStack_78;
      fStack_44 = (float)(int)fStack_74;
      fVar12 = (float10)FUN_100fdbca(0x3f800000,local_50);
      local_8c = (float)fVar12;
      local_80 = local_8c;
      fVar12 = (float10)FUN_100fdbca(0x3f800000,local_50);
      local_90 = (float)fVar12;
      local_1c = CONCAT44(local_60 - local_80,local_b8 - local_90);
      local_3c = local_70 + local_80;
      local_40 = local_a0 + local_90;
      FUN_1018b85a(&local_40,&local_1c,local_c0,*(undefined4 *)(iVar2 + 0xd14),0);
      fVar13 = local_b8;
    }
  }
  local_1c = CONCAT44(*(float *)(iVar2 + 0xd10) + fStack_9c,*(float *)(iVar2 + 0xd24) + fVar13);
  if (*(char *)(iVar2 + 0x2748) == '\x01') {
    puVar5 = &DAT_1033b867;
    if (((local_c4 >> 0xc & 1) == 0) && (puVar5 = &DAT_1033b90c, *param_2 != 0)) {
      puVar5 = &DAT_1033b895;
    }
    FUN_100fd6a8(&local_1c,puVar5,0);
  }
  if (((byte)uVar8 & 0.0 < local_24) == 1) {
    FUN_100fd5ae((undefined4)local_1c,local_1c._4_4_,param_1,local_a8,0);
  }
  uVar7 = CONCAT31((int3)(uVar8 >> 8),local_38);
LAB_10130510:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_c4)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

