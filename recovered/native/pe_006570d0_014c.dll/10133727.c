/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10133727 */

undefined4 FUN_10133727(undefined4 param_1,byte param_2,uint param_3,float *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined4 uVar7;
  byte bVar8;
  int extraout_ECX;
  int iVar9;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  bool bVar10;
  float10 fVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  byte *local_90;
  float local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint local_7c;
  float local_78;
  undefined4 local_74;
  int local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  char local_47;
  byte local_46;
  byte local_45;
  uint local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float local_2c;
  undefined8 local_28;
  uint local_20;
  uint uStack_1c;
  byte local_15;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_9c;
  local_15 = param_2;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar3 + 0x14cc);
  uVar5 = 0;
  if (*(char *)(iVar1 + 0xfe) != '\0') goto LAB_10133de8;
  local_70 = iVar3;
  local_9c = FUN_101021d4(param_1,0);
  local_74 = FUN_100fd57d(param_1,0);
  FUN_100fdb2e(&local_20,param_1,local_74,0,0xbf800000);
  fVar14 = (float)*(undefined8 *)param_4;
  fVar15 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  uVar12 = -(uint)(fVar14 != 0.0);
  uVar13 = -(uint)(fVar15 != 0.0);
  local_28 = CONCAT44(~uVar13 & uStack_1c,~uVar12 & local_20) |
             CONCAT44((uint)fVar15 & uVar13,(uint)fVar14 & uVar12);
  local_78 = *(float *)(iVar1 + 0x144);
  local_68 = *(float *)(iVar1 + 0x148) + *(float *)(iVar1 + 0x17c);
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_30 = local_78;
  local_2c = local_68;
  FUN_1010c810(&local_28,0);
  pfVar6 = (float *)(iVar1 + 0x27c);
  if ((param_3 & 2) == 0) {
    pfVar6 = &local_30;
  }
  fVar14 = *pfVar6;
  if (((param_3 >> 0x18 & 1) == 0) && ((*param_4 != 0.0 || (NAN(*param_4))))) {
    fVar15 = (float)local_28;
  }
  else {
    pfVar6 = (float *)(iVar1 + 0x284);
    if ((param_3 & 2) == 0) {
      pfVar6 = (float *)(iVar1 + 0x274);
    }
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_8c = fVar14;
    fVar11 = (float10)FUN_100fdbca(local_20,*pfVar6 - fVar14);
    fVar15 = (float)fVar11;
    local_28 = CONCAT44(local_28._4_4_,fVar15);
    fVar14 = local_8c;
    local_6c = fVar15;
  }
  iVar3 = local_70;
  local_40 = CONCAT44(local_68,fVar14);
  uStack_38 = CONCAT44(local_28._4_4_ + local_68,fVar15 + fVar14);
  if ((param_3 >> 0x1a & 1) == 0) {
    fVar16 = 0.0;
    if ((param_3 & 2) == 0) {
      fVar16 = *(float *)(local_70 + 0xd1c);
    }
    fVar17 = (float)(int)(DAT_102b89c0._4_4_ * *(float *)(local_70 + 0xd20));
    local_40 = CONCAT44(local_68 - fVar17,fVar14 - (float)(int)((float)DAT_102b89c0 * fVar16));
    uStack_38 = CONCAT44(local_28._4_4_ + local_68 + (*(float *)(local_70 + 0xd20) - fVar17),
                         fVar15 + fVar14 + (fVar16 - (float)(int)((float)DAT_102b89c0 * fVar16)));
  }
  iVar9 = (param_3 & 8) * 8;
  if ((param_3 & 2) == 0) {
    cVar4 = FUN_1010c9d8(&local_40,local_9c,0,iVar9);
    uVar5 = extraout_EDX;
  }
  else {
    local_8c = *(float *)(iVar1 + 0x28c);
    local_98 = *(undefined4 *)(iVar1 + 0x294);
    *(undefined4 *)(iVar1 + 0x28c) = *(undefined4 *)(iVar1 + 0x27c);
    *(undefined4 *)(iVar1 + 0x294) = *(undefined4 *)(iVar1 + 0x284);
    cVar4 = FUN_1010c9d8(&local_40,local_9c,0,iVar9);
    *(float *)(iVar1 + 0x28c) = local_8c;
    *(undefined4 *)(iVar1 + 0x294) = local_98;
    uVar5 = extraout_EDX_00;
  }
  bVar10 = (*(byte *)(iVar3 + 0x1e86) & 0x40) == 0;
  local_90 = (byte *)(iVar3 + 0x1e84);
  uVar7 = CONCAT31((int3)((uint)uVar5 >> 8),bVar10);
  local_8c = (float)CONCAT31((int3)((uint)local_90 >> 8),1);
  if (cVar4 == '\0') {
    if ((((bVar10) || (*(char *)(iVar3 + 0x23c0) != '\x01')) ||
        (*(float *)(iVar3 + 0x23d0) <= local_40._4_4_)) ||
       ((uStack_38._4_4_ < *(float *)(iVar3 + 0x23c8) ||
         uStack_38._4_4_ == *(float *)(iVar3 + 0x23c8) ||
        (*(float *)(iVar3 + 0x23cc) <= (float)local_40)))) {
      uVar5 = 0;
      goto LAB_10133de8;
    }
    uVar7 = 0;
    local_8c = 0.0;
    uVar5 = 0;
    if ((float)uStack_38 < *(float *)(iVar3 + 0x23c4) ||
        (float)uStack_38 == *(float *)(iVar3 + 0x23c4)) goto LAB_10133de8;
  }
  bVar8 = (byte)((*(uint *)(iVar3 + 0x1e40) & 0x40) >> 6) | (param_3 & 8) == 0;
  local_7c = (uint)bVar8;
  local_98 = uVar7;
  if (bVar8 == 0) {
    FUN_10111871(1);
  }
  if ((param_3 & 2) != 0) {
    if (*(int *)(iVar3 + 0x2308) == 0) {
      if (*(int *)(iVar1 + 0x1e8) != 0) {
        FUN_101692e8();
      }
    }
    else {
      FUN_101658a9();
    }
    *(byte *)(iVar3 + 0x1e89) = *(byte *)(iVar3 + 0x1e89) | 2;
    uVar5 = *(undefined4 *)(iVar1 + 0x290);
    uVar7 = *(undefined4 *)(iVar1 + 0x294);
    uVar2 = *(undefined4 *)(iVar1 + 0x298);
    *(undefined4 *)(iVar3 + 0x1ebc) = *(undefined4 *)(iVar1 + 0x28c);
    *(undefined4 *)(iVar3 + 0x1ec0) = uVar5;
    *(undefined4 *)(iVar3 + 0x1ec4) = uVar7;
    *(undefined4 *)(iVar3 + 0x1ec8) = uVar2;
  }
  iVar9 = local_9c;
  uVar12 = param_3 >> 0x10 & 0x80;
  local_44 = uVar12 + 0x120;
  if ((param_3 & 4) == 0) {
    local_44 = uVar12;
  }
  local_44 = local_44 + (param_3 >> 0x12 & 0x10 | param_3 >> 7 & 0x100000 | param_3 >> 3 & 0x20000);
  if (((param_3 & 0x10) != 0) || ((local_90[1] & 0x40) != 0)) {
    local_44 = local_44 | 0x1000;
  }
  if ((char)local_98 == '\0') {
    FUN_1013053e(local_9c,&local_15,&local_44);
    local_47 = FUN_1012d77e(&local_40,iVar9,&local_45,&local_46,local_44);
    uVar5 = FUN_10130650(iVar9,&local_15,&local_47);
    local_94 = CONCAT31((int3)((uint)uVar5 >> 8),1);
    bVar10 = true;
    if (local_47 != '\0') goto LAB_10133bee;
LAB_10133bca:
    local_94 = 0;
    if ((param_3 >> 0x19 & 1) == 0) goto LAB_10133c5b;
    bVar10 = false;
    uVar5 = 0;
    if (local_45 != 0) goto LAB_10133bee;
  }
  else {
    cVar4 = FUN_1012d77e(&local_40,local_9c,&local_45,&local_46,local_44);
    iVar9 = extraout_ECX;
    if (((((param_3 & 0x40) == 0) || (iVar9 = *(int *)(iVar3 + 0x2204), iVar9 == 0)) ||
        (iVar9 != local_9c)) ||
       ((iVar9 = *(int *)(iVar3 + 0x1e3c), *(int *)(iVar3 + 0x2208) != iVar9 ||
        ((*(byte *)(iVar3 + 0x220d) & 0x10) != 0)))) {
      local_94 = CONCAT31((int3)((uint)iVar9 >> 8),1);
      bVar10 = true;
      if (cVar4 == '\0') goto LAB_10133bca;
    }
    else {
      local_15 = 1;
      bVar10 = true;
      local_94 = 0;
    }
LAB_10133bee:
    if (((*(char *)(iVar3 + 0x2041) == '\0') && (*(int *)(iVar3 + 0x2048) == iVar1)) &&
       (*(int *)(iVar3 + 0x2050) == *(int *)(iVar1 + 0x19c))) {
      fStack_50 = (float)*(undefined8 *)(iVar1 + 0x154);
      fStack_4c = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x154) >> 0x20);
      local_58 = (float)local_40 - fStack_50;
      fStack_54 = local_40._4_4_ - fStack_4c;
      fStack_50 = (float)uStack_38 - fStack_50;
      fStack_4c = uStack_38._4_4_ - fStack_4c;
      FUN_1011714e(local_9c,*(int *)(iVar3 + 0x2050),*(undefined4 *)(iVar3 + 0x1e3c),&local_58);
      if (*(char *)(iVar3 + 0x6a) == '\x01') {
        *(undefined1 *)(iVar3 + 0x2040) = 0;
      }
    }
    if (bVar10) {
      FUN_10102913(local_9c);
      uVar5 = 1;
    }
    else {
LAB_10133c5b:
      uVar5 = 0;
    }
  }
  if (local_15 != param_2) {
    *(byte *)(iVar3 + 0x1e88) = *(byte *)(iVar3 + 0x1e88) | 8;
  }
  bVar8 = (byte)local_98;
  if (local_8c._0_1_ != '\0') {
    local_45 = (byte)((param_3 & 0x20) >> 5) | local_45;
    if (((local_15 | local_45) & 1) != 0) {
      bVar8 = 0x19;
      if (local_45 != 0) {
        bVar8 = local_46 | 0x1a;
      }
      uVar7 = FUN_100fcb39(bVar8,0x3f800000);
      FUN_100fdee9((float)local_40,local_40._4_4_,(float)uStack_38,uStack_38._4_4_,uVar7,0,0);
      bVar8 = (byte)local_98;
    }
    if (*(int *)(iVar3 + 0x2044) == local_9c) {
      FUN_100fe25e(&local_40,local_9c,(uint)(bVar8 ^ 1) * 4 + 10);
    }
  }
  if ((param_3 & 2) != 0) {
    if (*(int *)(iVar3 + 0x2308) == 0) {
      if (*(int *)(iVar1 + 0x1e8) != 0) {
        FUN_1016932e();
      }
    }
    else {
      FUN_101658f6();
    }
  }
  if (local_8c._0_1_ != '\0') {
    local_68 = local_68 + local_28._4_4_;
    fVar11 = (float10)FUN_100ea38a(local_78 + (float)local_28,*(undefined4 *)(iVar1 + 0x274));
    local_58 = (float)fVar11;
    fStack_54 = local_68;
    FUN_100fdbf2(&local_30,&local_58,param_1,local_74,&local_20,iVar3 + 0xdb8,&local_40);
  }
  if (((((char)local_94 != '\0') && ((param_3 & 1) == 0)) &&
      ((*(uint *)(iVar1 + 0xc) & 0x4000000) != 0)) && ((*local_90 & 0x10) != 0)) {
    FUN_1011648c();
  }
  if ((char)local_7c == '\0') {
    FUN_10111961();
  }
LAB_10133de8:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_9c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar5;
}

