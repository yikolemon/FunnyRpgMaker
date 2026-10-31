/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b9b88 */

int FUN_1400b9b88(undefined8 param_1,undefined4 param_2,undefined8 param_3,ulonglong param_4,
                 ulonglong param_5,undefined8 *param_6,uint param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  ulonglong local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 auStack_e0 [2];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8 [9];
  ulonglong local_60;
  
  lVar3 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_158;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x1608);
  iVar11 = 0;
  if (*(char *)(lVar1 + 0x10e) != '\0') goto LAB_1400ba0e8;
  local_100 = param_4;
  iVar8 = FUN_140080066(lVar1,param_1,0);
  fStack_b8 = (float)FUN_1400936b2();
  if ((*(byte *)(lVar3 + 0x1fa8) & 0x20) != 0) {
    iVar11 = *(int *)(lVar3 + 0x1fdc);
  }
  local_108 = param_3;
  local_f8 = FUN_14007b050(param_1,0);
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,0xbf800000);
  FUN_14007b686(&local_b0,param_1,local_f8,0);
  local_d0 = *(float *)(lVar1 + 0x158);
  fStack_cc = *(float *)(lVar1 + 0x15c);
  fStack_b8 = fStack_b8 + local_d0;
  fStack_b4 = *(float *)(lVar3 + 0xdf8) + *(float *)(lVar3 + 0xdf8) + local_ac + fStack_cc;
  fStack_c8 = 0.0;
  if (0.0 < local_b0) {
    fStack_c8 = local_b0 + *(float *)(lVar3 + 0xe0c);
  }
  fStack_c8 = fStack_c8 + fStack_b8;
  fStack_c4 = fStack_b4 + 0.0;
  cVar5 = (char)param_7;
  local_a8[0] = CONCAT44(fStack_c4 - fStack_cc,fStack_c8 - local_d0);
  local_c0 = local_d0;
  fStack_bc = fStack_cc;
  FUN_14008a82c();
  cVar6 = FUN_14008a9ce(&local_d0,iVar8,&local_c0,(ulonglong)(-1 < cVar5) << 0x14);
  if (cVar6 == '\0') {
    iVar11 = 0;
    goto LAB_1400ba0e8;
  }
  local_110 = param_6;
  if (param_6 == (undefined8 *)0x0) {
    lVar12 = FUN_1400b2976(param_2);
    local_110 = *(undefined8 **)(lVar12 + 0x10);
  }
  bVar7 = FUN_140080b88(&local_c0,iVar8,*(undefined4 *)(lVar3 + 0x1fe4));
  uVar4 = local_108;
  if (((-1 < cVar5) && (*(int *)(DAT_140f2a910 + 0x167c) == iVar8)) &&
     (*(int *)(DAT_140f2a910 + 0x27c8) == iVar8)) {
LAB_1400ba097:
    local_128 = (undefined8 *)local_100;
    local_120 = param_5;
    if ((param_7 >> 9 & 1) == 0) {
      local_128 = (undefined8 *)0;
      local_120 = 0;
    }
    local_130 = local_110;
    local_138 = (undefined8 *)uVar4;
    iVar11 = FUN_1400b5e53(&local_c0,iVar8,param_1,param_2);
    goto LAB_1400ba0e8;
  }
  if ((bVar7 == 0) || (cVar6 = FUN_140081ebc(0,0,iVar8), cVar6 == '\0')) {
    bVar15 = *(int *)(lVar3 + 0x2214) == iVar8;
    if (-1 < cVar5 && bVar15) {
LAB_1400b9dc0:
      if ((*(int *)(lVar3 + 0x2214) == iVar8) && ((*(byte *)(lVar3 + 0x2220) & 1) != 0))
      goto LAB_1400ba07b;
    }
    if (bVar15) goto LAB_1400b9dda;
  }
  else {
    FUN_140092507(0x290,iVar8,0);
    if (-1 < cVar5) {
      bVar15 = true;
      if (*(char *)(lVar3 + 0x138) == '\0') goto LAB_1400b9dc0;
LAB_1400ba07b:
      puVar13 = (undefined8 *)FUN_1400b2976(param_2);
      FUN_1401c5180(lVar3 + 0x16b8,uVar4,*puVar13);
      goto LAB_1400ba097;
    }
LAB_1400b9dda:
    puVar13 = (undefined8 *)FUN_1400b2976(param_2);
    FUN_1401c5180(lVar3 + 0x16b8,local_108,*puVar13);
    FUN_140080508(iVar8,lVar1);
    FUN_140095319(iVar8,lVar1);
    FUN_140081404(lVar1,0);
    *(byte *)(lVar3 + 0x1f90) = *(byte *)(lVar3 + 0x1f90) | 3;
  }
  iVar14 = 9;
  if (*(int *)(lVar3 + 0x167c) != iVar8) {
    iVar14 = bVar7 + 7;
  }
  uVar9 = FUN_14007a557(iVar14);
  FUN_14007bdca(&local_c0,iVar8,0);
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,*(undefined4 *)(lVar3 + 0xdfc));
  FUN_14007ba95(CONCAT44(fStack_bc,local_c0),CONCAT44(fStack_b4,fStack_b8),uVar9,0);
  if ((iVar11 != 0) && (0.0 < *(float *)(lVar3 + 0xe90))) {
    uVar9 = *(undefined4 *)(lVar3 + 0xdfc);
    uVar10 = FUN_14007a641(iVar11);
    FUN_14007bd52(&local_c0,uVar10,uVar9);
  }
  FUN_14007bc0f(CONCAT44(fStack_bc,local_c0),CONCAT44(fStack_b4,fStack_b8),
                *(undefined4 *)(lVar3 + 0xdfc));
  uVar4 = local_108;
  local_118 = &local_e8;
  local_e8 = 0;
  auStack_e0[0] = 0;
  local_120 = CONCAT44(local_120._4_4_,param_7);
  local_128 = local_110;
  local_130 = (undefined8 *)param_5;
  local_138 = (undefined8 *)local_100;
  iVar11 = FUN_1400b6a04(&local_c0,iVar8,param_2,local_108);
  if ((char)iVar11 != '\0') {
    FUN_1400807a3(iVar8);
  }
  if ((float)local_e8 < (float)auStack_e0[0]) {
    uVar2 = *(undefined8 *)(lVar1 + 800);
    uVar9 = *(undefined4 *)(lVar3 + 0xe3c);
    uVar10 = FUN_14007a557(*(int *)(lVar3 + 0x167c) == iVar8 | 0x14);
    local_138 = (undefined8 *)CONCAT44(local_138._4_4_,uVar9);
    local_130 = (undefined8 *)((ulonglong)local_130 & 0xffffffff00000000);
    FUN_1400de294(uVar2,&local_e8,auStack_e0,uVar10);
  }
  local_138 = local_110;
  iVar8 = FUN_1400b2988(local_a8,0x40,param_2,uVar4);
  if (*(char *)(lVar3 + 0x2a40) == '\x01') {
    FUN_140096567("{","}");
  }
  local_130 = &local_f0;
  local_f0 = DAT_1401c8640;
  local_128 = (undefined8 *)0x0;
  local_138 = (undefined8 *)0x0;
  FUN_14007b731(&local_c0,&fStack_b8,local_a8,(longlong)local_a8 + (longlong)iVar8);
  if (0.0 < local_b0) {
    FUN_14007b084(CONCAT44(fStack_bc + *(float *)(lVar3 + 0xdf8),
                           fStack_b8 + *(float *)(lVar3 + 0xe0c)),param_1,local_f8,0);
  }
LAB_1400ba0e8:
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_158)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_158);
}

