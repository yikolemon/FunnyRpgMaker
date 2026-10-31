/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101375ae */

int FUN_101375ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8)

{
  float fVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float10 fVar12;
  undefined1 auStack_b0 [3];
  byte local_ad;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  float local_98;
  float local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  float local_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float local_5c;
  float local_58;
  undefined8 local_54 [8];
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_b0;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar9 = 0;
  if (*(char *)(*(int *)(iVar2 + 0x14cc) + 0xfe) != '\0') goto LAB_10137b4a;
  local_ac = *(int *)(iVar2 + 0x14cc);
  local_9c = FUN_101021d4(param_1,0);
  fVar12 = (float10)FUN_10115533();
  local_98 = (float)fVar12;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  if ((*(byte *)(iVar2 + 0x1e48) & 0x20) != 0) {
    iVar9 = *(int *)(iVar2 + 0x1e7c);
  }
  local_a0 = iVar9;
  local_94 = local_98;
  local_a4 = FUN_100fd57d(param_1,0);
  FUN_100fdb2e(&local_5c,param_1,local_a4,0,0xbf800000);
  fVar1 = *(float *)(iVar2 + 0xd10);
  local_7c = *(float *)(local_ac + 0x144);
  fStack_78 = *(float *)(local_ac + 0x148);
  fStack_64 = local_94 + local_7c;
  fStack_60 = fVar1 + fVar1 + local_58 + fStack_78;
  fStack_74 = 0.0;
  if (0.0 < local_5c) {
    fStack_74 = local_5c + *(float *)(iVar2 + 0xd24);
  }
  fStack_74 = fStack_74 + fStack_64;
  fStack_70 = fStack_60 + 0.0;
  cVar5 = (char)param_8;
  local_54[0] = CONCAT44(fStack_70 - fStack_78,fStack_74 - local_7c);
  local_6c = local_7c;
  fStack_68 = fStack_78;
  FUN_1010c810(local_54,fVar1);
  iVar7 = local_9c;
  cVar3 = FUN_1010c9d8(&local_7c,local_9c,&local_6c,(uint)(-1 < cVar5) << 0x14);
  if (cVar3 == '\0') {
    iVar9 = 0;
    goto LAB_10137b4a;
  }
  local_94 = param_7;
  if (param_7 == 0.0) {
    iVar9 = FUN_10133ec9(param_2);
    local_94 = *(float *)(iVar9 + 8);
  }
  local_ad = FUN_10102cf2(&local_6c,iVar7,*(undefined4 *)(iVar2 + 0x1e84));
  if (((cVar5 < '\0') || (*(int *)(DAT_1039d74c + 0x1528) != iVar7)) ||
     (*(int *)(DAT_1039d74c + 0x254c) != iVar7)) {
    cVar3 = '\0';
    if (local_ad == 0) {
      cVar4 = '\0';
      uVar8 = extraout_EDX;
    }
    else {
      cVar4 = FUN_10103eee(0,0,iVar7);
      uVar8 = extraout_EDX_00;
      if (*(short *)(iVar2 + 0xb22) == 2) {
        cVar3 = FUN_10113c9d(0x290,iVar7);
        uVar8 = extraout_EDX_01;
      }
    }
    if (cVar4 == '\0' && cVar3 == '\0') {
      bVar10 = *(int *)(iVar2 + 0x2058) == iVar7;
      uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),!bVar10);
    }
    else {
      FUN_101143b4(0x290,iVar7,0);
      bVar10 = true;
      uVar8 = 0;
    }
    if ((cVar5 < '\0') || (!bVar10)) {
LAB_1013780e:
      if (cVar5 < '\0') {
LAB_1013787c:
        bVar11 = false;
      }
      else {
        bVar11 = false;
        if (*(char *)(iVar2 + 0x7d) != '\0') {
          if ((local_ad != 1 || *(int *)(iVar2 + 0x1528) != iVar7) ||
             (*(char *)(iVar2 + 0xb36) != '\x01')) goto LAB_1013787c;
          cVar5 = FUN_10113fae(0,*(float *)(iVar2 + 0x90) * DAT_102b70e0);
          bVar11 = cVar5 == '\0';
          if (bVar11) {
            *(int *)(iVar2 + 0x2058) = iVar7;
            *(undefined4 *)(iVar2 + 0x2064) = 1;
          }
        }
      }
    }
    else if (cVar4 == '\0') {
      bVar11 = true;
      if (cVar3 == '\0') goto LAB_101377fb;
    }
    else {
      bVar11 = true;
      if (cVar3 == '\0' && *(char *)(iVar2 + 0x104) == '\0') {
LAB_101377fb:
        if ((*(int *)(iVar2 + 0x2058) != iVar7) ||
           (bVar11 = true, (*(byte *)(iVar2 + 0x2064) & 1) == 0)) goto LAB_1013780e;
      }
    }
    if (bVar10) {
      local_a8 = uVar8;
      puVar6 = (undefined4 *)FUN_10133ec9(param_2);
      FUN_1025b2d0(iVar2 + 0x1560,param_3,*puVar6);
      uVar8 = local_a8;
    }
    iVar9 = local_ac;
    if ((char)uVar8 == '\0' && !bVar11) {
      FUN_101026ba(iVar7,local_ac);
      FUN_101171b7(iVar7,iVar9);
      FUN_101034e2(iVar9,0);
      *(undefined4 *)(iVar2 + 0x1e30) = 3;
    }
    else if (bVar11) goto LAB_101378c2;
    iVar9 = 9;
    if (*(int *)(iVar2 + 0x1528) != iVar7) {
      iVar9 = local_ad + 7;
    }
    uVar8 = FUN_100fcb39(iVar9,0x3f800000);
    FUN_100fe25e(&local_6c,iVar7,0);
    FUN_100fdee9(local_6c,fStack_68,fStack_64,fStack_60,uVar8,0,*(undefined4 *)(iVar2 + 0xd14));
    if ((local_a0 != 0) && (0.0 < *(float *)(iVar2 + 0xda8))) {
      local_ac = *(int *)(iVar2 + 0xd14);
      uVar8 = FUN_100fcc12(local_a0,0x3f800000);
      FUN_100fe1dc(&local_6c,uVar8,local_ac);
    }
    FUN_100fe07c(local_6c,fStack_68,fStack_64,fStack_60,*(undefined4 *)(iVar2 + 0xd14));
    iVar9 = FUN_10134b35(iVar7,param_2,param_3,param_4,param_5,param_6,local_94,param_8);
    if ((char)iVar9 != '\0') {
      FUN_10102913(iVar7);
    }
    iVar7 = FUN_10133ed7(local_54,0x40,param_2,param_3,local_94);
    if (*(char *)(iVar2 + 0x2748) == '\x01') {
      FUN_10118366("{","}");
    }
    local_84 = DAT_102b89c0;
    FUN_100fdbf2(&local_6c,&fStack_64,local_54,(int)local_54 + iVar7,0,&local_84,0);
    if (0.0 < local_5c) {
      FUN_100fd5ae(fStack_64 + *(float *)(iVar2 + 0xd24),fStack_68 + *(float *)(iVar2 + 0xd10),
                   param_1,local_a4,0);
    }
  }
  else {
LAB_101378c2:
    cVar5 = FUN_10137b93(param_5,param_6);
    if (cVar5 == '\0') {
      param_6 = 0;
      param_5 = 0;
    }
    iVar9 = FUN_10137bfa(&local_6c,iVar7,param_1,param_2,param_3,local_94,param_5,param_6);
  }
LAB_10137b4a:
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_b0)) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

