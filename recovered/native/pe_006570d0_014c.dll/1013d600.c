/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013d600 */

undefined4
FUN_1013d600(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,uint param_8)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  float local_88;
  ulonglong local_84;
  undefined4 local_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 local_6c;
  float fStack_68;
  undefined8 uStack_64;
  float local_5c [2];
  undefined8 local_54 [8];
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_a0;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar6 = *(int *)(iVar1 + 0x14cc);
  uVar7 = 0;
  if (*(char *)(iVar6 + 0xfe) != '\0') goto LAB_1013d995;
  local_90 = iVar1;
  local_98 = FUN_101021d4(param_1,0);
  local_94 = FUN_100fd57d(param_1,0);
  iVar1 = local_90;
  FUN_100fdb2e(local_5c,param_1,local_94,0,0xbf800000);
  local_6c = *(undefined4 *)(iVar6 + 0x144);
  fStack_68 = *(float *)(iVar6 + 0x148);
  fVar8 = (float)*(undefined8 *)(iVar6 + 0x144);
  fVar9 = (float)((ulonglong)*(undefined8 *)(iVar6 + 0x144) >> 0x20);
  fVar12 = 0.0;
  fVar10 = (float)*param_2 + fVar8;
  fVar11 = (float)((ulonglong)*param_2 >> 0x20) + fVar9;
  uStack_64 = CONCAT44(fVar11,fVar10);
  if (0.0 < local_5c[0]) {
    fVar12 = local_5c[0] + *(float *)(iVar1 + 0xd24);
  }
  local_54[0] = CONCAT44((fVar11 + 0.0) - fVar9,(fVar12 + fVar10) - fVar8);
  local_a0 = iVar6;
  FUN_1010c810(local_54,*(undefined4 *)(iVar1 + 0xd10));
  iVar6 = local_98;
  uVar7 = 0;
  cVar2 = FUN_1010c9d8(&local_6c,local_98,0,0);
  if (cVar2 == '\0') goto LAB_1013d995;
  local_9c = param_7;
  if (param_7 == 0) {
    iVar4 = FUN_10133ec9(param_3);
    local_9c = *(int *)(iVar4 + 8);
  }
  bVar3 = FUN_10102cf2(&local_6c,iVar6,*(undefined4 *)(iVar1 + 0x1e84));
  iVar4 = local_a0;
  if (bVar3 == 0) {
LAB_1013d77a:
    if (*(int *)(iVar1 + 0x2058) == iVar6) goto LAB_1013d782;
  }
  else {
    cVar2 = FUN_10103eee(0,0,iVar6);
    if (cVar2 == '\0') goto LAB_1013d77a;
    FUN_101143b4(0x290,iVar6,0);
LAB_1013d782:
    FUN_101026ba(iVar6,iVar4);
    FUN_101171b7(iVar6,iVar4);
    FUN_101034e2(iVar4,0);
    *(byte *)(iVar1 + 0x1e30) = *(byte *)(iVar1 + 0x1e30) | 0xc;
  }
  iVar4 = 9;
  if (*(int *)(iVar1 + 0x1528) != iVar6) {
    iVar4 = bVar3 + 7;
  }
  uVar7 = FUN_100fcb39(iVar4,0x3f800000);
  FUN_100fe25e(&local_6c,iVar6,0);
  FUN_100fdee9(local_6c,fStack_68,(float)uStack_64,uStack_64._4_4_,uVar7,1,
               *(undefined4 *)(iVar1 + 0xd14));
  local_7c = 0;
  fStack_78 = 0.0;
  uStack_74 = 0;
  fStack_70 = 0.0;
  uVar7 = FUN_10138721(&local_6c,iVar6,param_3,param_4,param_5,param_6,local_9c,param_8 | 0x100000,
                       &local_7c);
  if ((char)uVar7 != '\0') {
    FUN_10102913(local_98);
  }
  if (fStack_78 < fStack_70) {
    local_a0 = *(int *)(iVar1 + 0xd54);
    uVar5 = FUN_100fcb39(*(int *)(iVar1 + 0x1528) == local_98 | 0x14,0x3f800000);
    FUN_1018b85a(&local_7c,&uStack_74,uVar5,local_a0,0);
  }
  iVar6 = FUN_10133ed7(local_54,0x40,param_3,param_4,local_9c);
  local_84 = (ulonglong)DAT_102b70e0;
  local_88 = fStack_68 + *(float *)(iVar1 + 0xd10);
  local_8c = local_6c;
  FUN_100fdbf2(&local_8c,&uStack_64,local_54,(int)local_54 + iVar6,0,&local_84,0);
  if (0.0 < local_5c[0]) {
    FUN_100fd5ae((float)uStack_64 + *(float *)(iVar1 + 0xd24),fStack_68 + *(float *)(iVar1 + 0xd10),
                 param_1,local_94,0);
  }
LAB_1013d995:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_a0)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

