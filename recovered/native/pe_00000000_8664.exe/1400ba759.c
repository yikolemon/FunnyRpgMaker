/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ba759 */

undefined4
FUN_1400ba759(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,longlong param_7,uint param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  longlong local_128;
  ulonglong *local_120;
  longlong local_118;
  uint local_110;
  undefined8 *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e4;
  ulonglong local_e0;
  undefined8 local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0 [2];
  undefined8 local_a8 [9];
  ulonglong local_60;
  
  lVar4 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar4 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) != '\0') {
    uVar8 = 0;
    goto LAB_1400bab15;
  }
  local_fc = param_3;
  iVar7 = FUN_140080066(lVar2,param_1,0);
  uVar10 = FUN_14007b050(param_1,0);
  local_128 = CONCAT44(local_128._4_4_,0xbf800000);
  FUN_14007b686(local_b0,param_1,uVar10,0);
  local_c0 = *(undefined8 *)(lVar2 + 0x158);
  fVar16 = 0.0;
  fVar14 = (float)*param_2 + (float)local_c0;
  fVar13 = (float)((ulonglong)local_c0 >> 0x20);
  fVar15 = (float)((ulonglong)*param_2 >> 0x20) + fVar13;
  local_b8 = CONCAT44(fVar15,fVar14);
  if (0.0 < local_b0[0]) {
    fVar16 = local_b0[0] + *(float *)(lVar4 + 0xe0c);
  }
  local_a8[0] = CONCAT44((fVar15 + 0.0) - fVar13,(fVar16 + fVar14) - (float)local_c0);
  FUN_14008a82c(local_a8,*(undefined4 *)(lVar4 + 0xdf8));
  uVar8 = 0;
  cVar5 = FUN_14008a9ce(&local_c0,iVar7,0,0);
  if (cVar5 == '\0') goto LAB_1400bab15;
  local_f8 = uVar10;
  local_f0 = param_4;
  if (param_7 == 0) {
    lVar11 = FUN_1400b2976(local_fc);
    param_7 = *(longlong *)(lVar11 + 0x10);
  }
  bVar6 = FUN_140080b88(&local_c0,iVar7,*(undefined4 *)(lVar4 + 0x1fe4));
  if (bVar6 == 0) {
LAB_1400ba8f0:
    if (*(int *)(lVar4 + 0x2214) == iVar7) goto LAB_1400ba8f9;
  }
  else {
    cVar5 = FUN_140081ebc(0,0,iVar7);
    if (cVar5 == '\0') goto LAB_1400ba8f0;
    FUN_140092507(0x290,iVar7,0);
LAB_1400ba8f9:
    FUN_140080508(iVar7,lVar2);
    FUN_140095319(iVar7,lVar2);
    FUN_140081404(lVar2,0);
    *(byte *)(lVar4 + 0x1f90) = *(byte *)(lVar4 + 0x1f90) | 0xc;
  }
  iVar12 = 9;
  if (*(int *)(lVar4 + 0x167c) != iVar7) {
    iVar12 = bVar6 + 7;
  }
  uVar8 = FUN_14007a557(iVar12,DAT_1401c86c8);
  FUN_14007bdca(&local_c0,iVar7,0);
  local_128 = CONCAT44(local_128._4_4_,*(undefined4 *)(lVar4 + 0xdfc));
  FUN_14007ba95(local_c0,local_b8,uVar8,1);
  uVar10 = local_f0;
  local_108 = &stack0xffffffffffffff28;
  local_d8 = 0;
  uStack_d0 = 0;
  local_110 = param_8 | 0x100000;
  local_120 = (ulonglong *)param_6;
  local_128 = param_5;
  local_118 = param_7;
  uVar8 = FUN_1400b6a04(&local_c0,iVar7,local_fc,local_f0);
  if ((char)uVar8 != '\0') {
    FUN_1400807a3(iVar7);
  }
  if (fStack_d4 < uStack_d0._4_4_) {
    uVar3 = *(undefined8 *)(lVar2 + 800);
    uVar1 = *(undefined4 *)(lVar4 + 0xe3c);
    uVar9 = FUN_14007a557(*(int *)(lVar4 + 0x167c) == iVar7 | 0x14,DAT_1401c86c8);
    local_128 = CONCAT44(local_128._4_4_,uVar1);
    local_120 = (ulonglong *)((ulonglong)local_120 & 0xffffffff00000000);
    FUN_1400de294(uVar3,&stack0xffffffffffffff28,&uStack_d0,uVar9);
  }
  local_128 = param_7;
  iVar7 = FUN_1400b2988(local_a8,0x40,local_fc,uVar10);
  local_e0 = (ulonglong)DAT_1401c86a0;
  local_120 = &local_e0;
  local_e4 = local_c0._4_4_ + *(float *)(lVar4 + 0xdf8);
  local_e8 = (undefined4)local_c0;
  local_118 = 0;
  local_128 = 0;
  FUN_14007b731(&local_e8,&local_b8,local_a8,(longlong)local_a8 + (longlong)iVar7);
  if (0.0 < local_b0[0]) {
    FUN_14007b084(CONCAT44(local_c0._4_4_ + *(float *)(lVar4 + 0xdf8),
                           (float)local_b8 + *(float *)(lVar4 + 0xe0c)),param_1,local_f8,0);
  }
LAB_1400bab15:
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_148)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_148);
}

