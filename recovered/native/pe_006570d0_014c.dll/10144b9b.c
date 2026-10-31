/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10144b9b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10144b9b(undefined4 param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  float10 fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  char *pcVar13;
  undefined4 uVar14;
  float local_b8;
  int local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  int local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  float fStack_2c;
  undefined1 local_26;
  char local_25;
  float local_24;
  float fStack_20;
  undefined8 uStack_1c;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_b8;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar6 = *(int *)(iVar1 + 0x14cc);
  if (*(char *)(iVar6 + 0xfe) != '\0') {
    uVar4 = 0;
    goto LAB_1014525a;
  }
  iVar3 = FUN_101021d4(param_1,0);
  fVar7 = (float10)FUN_101155f9();
  fStack_a8 = (float)fVar7;
  local_24 = *(float *)(iVar6 + 0x144);
  fStack_20 = *(float *)(iVar6 + 0x148);
  fVar10 = (float)*param_4;
  fVar11 = (float)((ulonglong)*param_4 >> 0x20);
  uVar8 = -(uint)(fVar10 == 0.0);
  uVar9 = -(uint)(fVar11 == 0.0);
  local_b0 = (float)(~uVar8 & (uint)fVar10 | (uint)fStack_a8 & uVar8);
  fStack_ac = (float)(~uVar9 & (uint)fVar11 | (uint)fStack_a8 & uVar9);
  fVar10 = (float)*(undefined8 *)(iVar6 + 0x144) + local_b0;
  fVar11 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0x144) >> 0x20) + fStack_ac;
  uStack_1c = CONCAT44(fVar11,fVar10);
  uVar4 = 0;
  if (fStack_a8 <= fStack_ac) {
    uVar4 = *(undefined4 *)(iVar1 + 0xd10);
  }
  local_88 = iVar1;
  local_38 = CONCAT44(fVar11 - (float)((ulonglong)*(undefined8 *)(iVar6 + 0x144) >> 0x20),
                      fVar10 - (float)*(undefined8 *)(iVar6 + 0x144));
  fStack_a4 = fStack_a8;
  local_a0 = fStack_ac;
  fStack_9c = fStack_ac;
  fStack_98 = fStack_ac;
  fStack_94 = fStack_ac;
  local_7c = fStack_a8;
  FUN_1010c810(&local_38,uVar4);
  cVar2 = FUN_1010c9d8(&local_24,iVar3,0,0);
  uVar4 = 0;
  if (cVar2 == '\0') goto LAB_1014525a;
  local_b4 = iVar3;
  local_8c = FUN_1012d77e(&local_24,iVar3,&local_25,&local_26,0);
  uVar8 = param_3 & 0xffff9fff;
  if ((param_3 & 0x1002) == 0) {
    uVar8 = param_3;
  }
  local_38 = *param_2;
  uStack_30 = *(undefined4 *)(param_2 + 1);
  fStack_2c = *(float *)((int)param_2 + 0xc);
  if ((uVar8 >> 0x1c & 1) != 0) {
    FUN_100faedd(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4),uStack_30,&local_38,
                 (int)&local_38 + 4,&uStack_30);
  }
  local_48 = local_38;
  local_40 = uStack_30;
  local_3c = 0x3f800000;
  fVar7 = (float10)FUN_100ea38a(local_b0,local_a0);
  iVar1 = local_88;
  local_80 = (float)fVar7;
  local_a0 = local_80 / _DAT_102b95c0;
  fVar7 = (float10)FUN_100ea38a(*(undefined4 *)(local_88 + 0xd14),DAT_102b70e0 * local_a0);
  local_b0 = (float)fVar7;
  local_58 = local_24;
  fStack_54 = fStack_20;
  fStack_50 = (float)uStack_1c;
  fStack_4c = uStack_1c._4_4_;
  fVar10 = 0.0;
  if ((uVar8 >> 10 & 1) == 0) {
    local_58 = local_24 + _DAT_102b95d0;
    fStack_54 = fStack_20 + _UNK_102b95d4;
    fStack_50 = (float)uStack_1c + _UNK_102b95d8;
    fStack_4c = uStack_1c._4_4_ + _UNK_102b95dc;
    fVar10 = DAT_102b95e0;
  }
  local_84 = local_b0;
  if (((uVar8 >> 0xe & 1) == 0) || (DAT_1028b430 <= fStack_2c)) {
    puVar5 = &local_48;
    if ((uVar8 >> 0xc & 1) == 0) {
      puVar5 = &local_38;
    }
    local_68 = *puVar5;
    uStack_60 = *(undefined4 *)(puVar5 + 1);
    fStack_5c = *(float *)((int)puVar5 + 0xc);
    if (((uVar8 >> 0xd & 1) != 0) || (DAT_1028b430 <= fStack_5c)) {
      uVar4 = FUN_100fcba2(&local_68);
      pfVar12 = &fStack_50;
      uVar14 = 0;
      goto LAB_101450b4;
    }
    local_b8 = fVar10;
    uVar4 = FUN_100fcba2(&local_68);
    FUN_10194f91(*(undefined4 *)(iVar6 + 0x2e8),local_58,fStack_54,fStack_50,fStack_4c,uVar4,
                 local_a0,local_b8,local_b8,local_b0,0);
  }
  else {
    local_78 = (float)(int)((local_58 + fStack_50) * DAT_102b70e0 + DAT_102b70e0);
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    if ((uVar8 >> 0xd & 1) == 0) {
      local_90 = fVar10 - local_a0;
      local_b8 = fVar10;
      uVar4 = FUN_100fcba2(&local_38);
      FUN_10194f91(*(undefined4 *)(iVar6 + 0x2e8),local_58 + local_a0,fStack_54,fStack_50,fStack_4c,
                   uVar4,local_a0,local_90,local_b8,local_b0,0xa0);
    }
    else {
      local_b8 = *(float *)(iVar6 + 0x2e8);
      uVar4 = FUN_100fcba2(&local_38);
      local_68 = CONCAT44(fStack_54,local_a0 + local_58);
      FUN_1018b85a(&local_68,&fStack_50,uVar4,local_b0,0xa0);
    }
    uVar4 = FUN_100fcba2(&local_48);
    pfVar12 = (float *)&local_68;
    local_68 = CONCAT44(fStack_4c,local_78);
    uVar14 = 0x50;
LAB_101450b4:
    FUN_1018b85a(&local_58,pfVar12,uVar4,local_b0,uVar14);
  }
  iVar6 = local_b4;
  FUN_100fe25e(&local_24,local_b4,0);
  if ((uVar8 >> 10 & 1) == 0) {
    if (*(float *)(iVar1 + 0xd18) <= 0.0) {
      local_a0 = (float)(int)*(float *)(iVar1 + 0x1204);
      fStack_9c = 0.0;
      fStack_98 = 0.0;
      fStack_94 = 0.0;
      uVar4 = FUN_100fcb39(7,0x3f800000);
      iVar6 = local_b4;
      FUN_1018b762(&local_24,&uStack_1c,uVar4,local_b0,local_a0,0);
    }
    else {
      FUN_100fe07c(local_24,fStack_20,(float)uStack_1c,uStack_1c._4_4_,local_b0);
    }
  }
  if ((((uVar8 >> 9 & 1) == 0) && (*(int *)(iVar1 + 0x1528) == iVar6)) &&
     (cVar2 = FUN_101179e3(0), cVar2 != '\0')) {
    if ((uVar8 & 2) == 0) {
      uVar4 = 0x10;
      pcVar13 = "_COL4F";
    }
    else {
      uVar4 = 0xc;
      pcVar13 = "_COL3F";
    }
    FUN_10117c4b(pcVar13,&local_38,uVar4,2);
    local_68 = 0;
    FUN_10144b9b(param_1,param_2,uVar8,&local_68);
    FUN_10114a0e(0,0xbf800000);
    FUN_1012cbcc("Color",0,0);
    FUN_10117c1f();
  }
  uVar4 = local_8c;
  if ((((uVar8 & 0x40) == 0) && (local_25 != '\0')) &&
     (cVar2 = FUN_10102a1a(0x1000), uVar4 = local_8c, cVar2 != '\0')) {
    FUN_10147815(param_1,param_2,uVar8 & 0x18007002);
    uVar4 = local_8c;
  }
LAB_1014525a:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar4;
}

