/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013cb9f */

int FUN_1013cb9f(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                float param_6,int param_7)

{
  float fVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  float local_a8;
  float local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  float local_8c [5];
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
  local_14 = DAT_10388d00 ^ (uint)&local_bc;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar10 = 0;
  if (*(char *)(*(int *)(iVar2 + 0x14cc) + 0xfe) != '\0') goto LAB_1013d0f5;
  local_bc = *(int *)(iVar2 + 0x14cc);
  local_ac = FUN_101021d4(param_1,0);
  fVar12 = (float10)FUN_10115533();
  local_a8 = (float)fVar12;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  if ((*(byte *)(iVar2 + 0x1e48) & 0x20) != 0) {
    iVar10 = *(int *)(iVar2 + 0x1e7c);
  }
  local_b8 = iVar10;
  local_a4 = local_a8;
  local_b0 = FUN_100fd57d(param_1,0);
  FUN_100fdb2e(&local_5c,param_1,local_b0,0,0xbf800000);
  fVar1 = *(float *)(iVar2 + 0xd10);
  local_8c[4] = *(float *)(local_bc + 0x144);
  fStack_78 = *(float *)(local_bc + 0x148);
  fStack_64 = local_a4 + local_8c[4];
  fStack_60 = fVar1 + fVar1 + local_58 + fStack_78;
  fStack_74 = 0.0;
  if (0.0 < local_5c) {
    fStack_74 = local_5c + *(float *)(iVar2 + 0xd24);
  }
  fStack_74 = fStack_74 + fStack_64;
  fStack_70 = fStack_60 + 0.0;
  cVar3 = (char)param_7;
  local_54[0] = CONCAT44(fStack_70 - fStack_78,fStack_74 - local_8c[4]);
  local_6c = local_8c[4];
  fStack_68 = fStack_78;
  FUN_1010c810(local_54,fVar1);
  iVar10 = local_ac;
  cVar4 = FUN_1010c9d8(local_8c + 4,local_ac,&local_6c,(uint)(-1 < cVar3) << 0x14);
  if (cVar4 == '\0') {
    iVar10 = 0;
    goto LAB_1013d0f5;
  }
  local_a4 = param_6;
  if (param_6 == 0.0) {
    iVar6 = FUN_10133ec9(param_2);
    local_a4 = *(float *)(iVar6 + 8);
  }
  bVar5 = FUN_10102cf2(&local_6c,iVar10,*(undefined4 *)(iVar2 + 0x1e84));
  if (((-1 < cVar3) && (*(int *)(DAT_1039d74c + 0x1528) == iVar10)) &&
     (*(int *)(DAT_1039d74c + 0x254c) == iVar10)) {
LAB_1013d0b8:
    uVar9 = (param_7 << 0x16) >> 0x1f;
    iVar10 = FUN_10137bfa(&local_6c,iVar10,param_1,param_2,param_3,local_a4,uVar9 & param_4,
                          param_5 & uVar9);
    goto LAB_1013d0f5;
  }
  if ((bVar5 == 0) || (cVar4 = FUN_10103eee(0,0,iVar10), cVar4 == '\0')) {
    bVar11 = *(int *)(iVar2 + 0x2058) == iVar10;
    if (-1 < cVar3 && bVar11) {
LAB_1013cdc6:
      if ((*(int *)(iVar2 + 0x2058) == iVar10) && ((*(byte *)(iVar2 + 0x2064) & 1) != 0))
      goto LAB_1013d08d;
    }
    if (bVar11) goto LAB_1013cddf;
  }
  else {
    FUN_101143b4(0x290,iVar10,0);
    if (-1 < cVar3) {
      bVar11 = true;
      if (*(char *)(iVar2 + 0x104) == '\0') goto LAB_1013cdc6;
LAB_1013d08d:
      puVar8 = (undefined4 *)FUN_10133ec9(param_2);
      FUN_1025b2d0(iVar2 + 0x1560,param_3,*puVar8);
      goto LAB_1013d0b8;
    }
LAB_1013cddf:
    puVar8 = (undefined4 *)FUN_10133ec9(param_2);
    FUN_1025b2d0(iVar2 + 0x1560,param_3,*puVar8);
    iVar6 = local_bc;
    FUN_101026ba(iVar10,local_bc);
    FUN_101171b7(iVar10,iVar6);
    FUN_101034e2(iVar6,0);
    *(byte *)(iVar2 + 0x1e30) = *(byte *)(iVar2 + 0x1e30) | 3;
  }
  iVar6 = 9;
  if (*(int *)(iVar2 + 0x1528) != iVar10) {
    iVar6 = bVar5 + 7;
  }
  uVar7 = FUN_100fcb39(iVar6,0x3f800000);
  FUN_100fe25e(&local_6c,iVar10,0);
  FUN_100fdee9(local_6c,fStack_68,fStack_64,fStack_60,uVar7,0,*(undefined4 *)(iVar2 + 0xd14));
  if ((local_b8 != 0) && (0.0 < *(float *)(iVar2 + 0xda8))) {
    local_b4 = *(undefined4 *)(iVar2 + 0xd14);
    uVar7 = FUN_100fcc12(local_b8,0x3f800000);
    FUN_100fe1dc(&local_6c,uVar7,local_b4);
  }
  FUN_100fe07c(local_6c,fStack_68,fStack_64,fStack_60,*(undefined4 *)(iVar2 + 0xd14));
  local_8c[0] = 0.0;
  local_8c[1] = 0.0;
  local_8c[2] = 0.0;
  local_8c[3] = 0.0;
  iVar6 = FUN_10138721(&local_6c,iVar10,param_2,param_3,param_4,param_5,local_a4,param_7,local_8c);
  if ((char)iVar6 != '\0') {
    FUN_10102913(iVar10);
  }
  local_b8 = iVar6;
  if (local_8c[0] < local_8c[2]) {
    local_bc = *(int *)(iVar2 + 0xd54);
    uVar7 = FUN_100fcb39(*(int *)(iVar2 + 0x1528) == iVar10 | 0x14,0x3f800000);
    FUN_1018b85a(local_8c,local_8c + 2,uVar7,local_bc,0);
  }
  iVar10 = FUN_10133ed7(local_54,0x40,param_2,param_3,local_a4);
  if (*(char *)(iVar2 + 0x2748) == '\x01') {
    FUN_10118366("{","}");
  }
  local_94 = DAT_102b89c0;
  FUN_100fdbf2(&local_6c,&fStack_64,local_54,(int)local_54 + iVar10,0,&local_94,0);
  iVar10 = local_b8;
  if (0.0 < local_5c) {
    FUN_100fd5ae(fStack_64 + *(float *)(iVar2 + 0xd24),fStack_68 + *(float *)(iVar2 + 0xd10),param_1
                 ,local_b0,0);
    iVar10 = local_b8;
  }
LAB_1013d0f5:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_bc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar10;
}

