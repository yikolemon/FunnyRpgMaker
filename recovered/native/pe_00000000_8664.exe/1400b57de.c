/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b57de */

int FUN_1400b57de(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 local_120;
  byte local_10d;
  undefined4 local_10c;
  undefined8 *local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8 [9];
  ulonglong local_70;
  
  lVar3 = DAT_140f2a910;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_158;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar1 = *(longlong *)(lVar3 + 0x1608);
  iVar10 = 0;
  if (*(char *)(lVar1 + 0x10e) != '\0') goto LAB_1400b5d95;
  iVar8 = FUN_140080066(lVar1,param_1,0);
  fStack_c8 = (float)FUN_1400936b2();
  if ((*(byte *)(lVar3 + 0x1fa8) & 0x20) != 0) {
    iVar10 = *(int *)(lVar3 + 0x1fdc);
  }
  local_100 = param_3;
  local_f0 = FUN_14007b050(param_1,0);
  local_138 = (undefined8 *)CONCAT44(local_138._4_4_,0xbf800000);
  FUN_14007b686(&local_c0,param_1,local_f0,0);
  local_e0 = *(float *)(lVar1 + 0x158);
  fStack_dc = *(float *)(lVar1 + 0x15c);
  fStack_c8 = fStack_c8 + local_e0;
  fStack_c4 = *(float *)(lVar3 + 0xdf8) + *(float *)(lVar3 + 0xdf8) + local_bc + fStack_dc;
  fStack_d8 = 0.0;
  if (0.0 < local_c0) {
    fStack_d8 = local_c0 + *(float *)(lVar3 + 0xe0c);
  }
  fStack_d8 = fStack_d8 + fStack_c8;
  fStack_d4 = fStack_c4 + 0.0;
  cVar7 = (char)param_8;
  local_b8[0] = CONCAT44(fStack_d4 - fStack_dc,fStack_d8 - local_e0);
  local_d0 = local_e0;
  fStack_cc = fStack_dc;
  FUN_14008a82c();
  cVar5 = FUN_14008a9ce(&local_e0,iVar8,&local_d0,(ulonglong)(-1 < cVar7) << 0x14);
  if (cVar5 == '\0') {
    iVar10 = 0;
    goto LAB_1400b5d95;
  }
  local_108 = param_7;
  if (param_7 == (undefined8 *)0x0) {
    lVar13 = FUN_1400b2976(param_2);
    local_108 = *(undefined8 **)(lVar13 + 0x10);
  }
  bVar6 = FUN_140080b88(&local_d0,iVar8,*(undefined4 *)(lVar3 + 0x1fe4));
  if (((cVar7 < '\0') || (*(int *)(DAT_140f2a910 + 0x167c) != iVar8)) ||
     (*(int *)(DAT_140f2a910 + 0x27c8) != iVar8)) {
    local_10d = bVar6;
    if (bVar6 == 0) {
      uVar16 = 0;
      cVar5 = '\0';
    }
    else {
      cVar5 = '\0';
      uVar9 = FUN_140081ebc(0,0,iVar8);
      uVar16 = (ulonglong)uVar9;
      if (*(short *)(lVar3 + 0xb5a) == 2) {
        cVar5 = FUN_140091dcf(0x290,iVar8);
      }
    }
    local_f4 = param_2;
    if ((char)uVar16 == '\0' && cVar5 == '\0') {
      bVar17 = *(int *)(lVar3 + 0x2214) == iVar8;
      local_10c = (undefined4)CONCAT71((int7)(uVar16 >> 8),!bVar17);
    }
    else {
      local_10c = 0;
      FUN_140092507(0x290,iVar8,0);
      bVar17 = true;
    }
    if ((cVar7 < '\0') || (!bVar17)) {
LAB_1400b5a6f:
      bVar2 = false;
      if ((-1 < cVar7) && (bVar2 = false, *(char *)(lVar3 + 0x91) != '\0')) {
        if ((local_10d == 1 && *(int *)(lVar3 + 0x167c) == iVar8) &&
           (*(char *)(lVar3 + 0xb6e) == '\x01')) {
          bVar2 = false;
          cVar7 = FUN_1400920f5(0,*(float *)(lVar3 + 0xa4) * DAT_1401c86a0);
          if (cVar7 == '\0') {
            *(int *)(lVar3 + 0x2214) = iVar8;
            *(undefined4 *)(lVar3 + 0x2220) = 1;
            bVar2 = true;
          }
        }
        else {
          bVar2 = false;
        }
      }
    }
    else if ((char)uVar16 == '\0') {
      bVar2 = true;
      if (cVar5 == '\0') goto LAB_1400b5a59;
    }
    else {
      bVar2 = true;
      if (cVar5 == '\0' && *(char *)(lVar3 + 0x138) == '\0') {
LAB_1400b5a59:
        if ((*(int *)(lVar3 + 0x2214) != iVar8) ||
           (bVar2 = true, (*(byte *)(lVar3 + 0x2220) & 1) == 0)) goto LAB_1400b5a6f;
      }
    }
    param_2 = local_f4;
    if (bVar17) {
      puVar14 = (undefined8 *)FUN_1400b2976(local_f4);
      FUN_1401c5180(lVar3 + 0x16b8,local_100,*puVar14);
    }
    if ((char)local_10c == '\0' && !bVar2) {
      FUN_140080508(iVar8,lVar1);
      FUN_140095319(iVar8,lVar1);
      FUN_140081404(lVar1,0);
      *(undefined4 *)(lVar3 + 0x1f90) = 3;
    }
    else if (bVar2) goto LAB_1400b5b14;
    iVar15 = 9;
    if (*(int *)(lVar3 + 0x167c) != iVar8) {
      iVar15 = local_10d + 7;
    }
    uVar11 = FUN_14007a557(iVar15);
    FUN_14007bdca(&local_d0,iVar8,0);
    local_138 = (undefined8 *)CONCAT44(local_138._4_4_,*(undefined4 *)(lVar3 + 0xdfc));
    FUN_14007ba95(CONCAT44(fStack_cc,local_d0),CONCAT44(fStack_c4,fStack_c8),uVar11,0);
    if ((iVar10 != 0) && (0.0 < *(float *)(lVar3 + 0xe90))) {
      uVar11 = *(undefined4 *)(lVar3 + 0xdfc);
      uVar12 = FUN_14007a641(iVar10);
      FUN_14007bd52(&local_d0,uVar12,uVar11);
    }
    FUN_14007bc0f(CONCAT44(fStack_cc,local_d0),CONCAT44(fStack_c4,fStack_c8),
                  *(undefined4 *)(lVar3 + 0xdfc));
    uVar4 = local_100;
    puVar14 = local_108;
    local_120 = CONCAT44(local_120._4_4_,param_8);
    local_128 = local_108;
    local_130 = (undefined8 *)param_6;
    local_138 = (undefined8 *)param_5;
    iVar10 = FUN_1400b34c6(iVar8,param_2,local_100,param_4);
    if ((char)iVar10 != '\0') {
      FUN_1400807a3(iVar8);
    }
    local_138 = puVar14;
    iVar8 = FUN_1400b2988(local_b8,0x40,param_2,uVar4);
    if (*(char *)(lVar3 + 0x2a40) == '\x01') {
      FUN_140096567("{","}");
    }
    local_130 = &local_e8;
    local_e8 = DAT_1401c8640;
    local_128 = (undefined8 *)0x0;
    local_138 = (undefined8 *)0x0;
    FUN_14007b731(&local_d0,&fStack_c8,local_b8,(longlong)local_b8 + (longlong)iVar8);
    if (0.0 < local_c0) {
      FUN_14007b084(CONCAT44(fStack_cc + *(float *)(lVar3 + 0xdf8),
                             fStack_c8 + *(float *)(lVar3 + 0xe0c)),param_1,local_f0,0);
    }
  }
  else {
LAB_1400b5b14:
    cVar7 = FUN_1400b5de3(param_8,param_2,param_5,param_6);
    local_128 = (undefined8 *)0x0;
    local_120 = local_128;
    if (cVar7 != '\0') {
      local_128 = (undefined8 *)param_5;
      local_120 = param_6;
    }
    local_130 = local_108;
    local_138 = (undefined8 *)local_100;
    iVar10 = FUN_1400b5e53(&local_d0,iVar8,param_1,param_2);
  }
LAB_1400b5d95:
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_158)) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_158);
}

