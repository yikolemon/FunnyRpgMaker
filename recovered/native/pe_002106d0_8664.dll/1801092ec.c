/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801092ec */

void FUN_1801092ec(void)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  lVar3 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar8 = (ulonglong)*(int *)(DAT_180419160 + 0x29b8);
  if (0 < (longlong)uVar8) {
    lVar13 = -uVar8;
    uVar11 = uVar8 + 1;
    lVar14 = uVar8 << 5;
    do {
      lVar14 = lVar14 + -0x20;
      lVar2 = *(longlong *)(lVar3 + 0x29c0);
      if (*(int *)(lVar2 + 4 + lVar14) == 7) {
        FUN_1802a82f0(lVar2 + lVar14,lVar2 + lVar14 + 0x20,((int)uVar8 + lVar13) * 0x20);
        uVar6 = *(int *)(lVar3 + 0x29b8) - 1;
        uVar8 = (ulonglong)uVar6;
        *(uint *)(lVar3 + 0x29b8) = uVar6;
      }
      lVar13 = lVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
  }
  FUN_1801065b3(lVar3,0);
  *(undefined4 *)(lVar3 + 0x12f8) = *(undefined4 *)(lVar3 + 0x12f4);
  FUN_180109e59();
  *(undefined4 *)(lVar3 + 0x12f4) = *(undefined4 *)(lVar3 + 0x30);
  FUN_180109f29();
  fVar17 = *(float *)(lVar3 + 0x48);
  *(double *)(lVar3 + 0x18) = (double)fVar17 + *(double *)(lVar3 + 0x18);
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  *(undefined2 *)(lVar3 + 0x2866) = 0;
  *(undefined4 *)(lVar3 + 0x15f8) = 0;
  if (*(int *)(lVar3 + 0x2884) < 0) {
    uVar9 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar3 + 0x2888) != 0) {
      FUN_1802a82f0(uVar9,*(longlong *)(lVar3 + 0x2888),(longlong)*(int *)(lVar3 + 0x2880) << 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x2888));
    }
    *(undefined8 *)(lVar3 + 0x2888) = uVar9;
    *(undefined4 *)(lVar3 + 0x2884) = 0;
    fVar17 = *(float *)(lVar3 + 0x48);
  }
  *(undefined4 *)(lVar3 + 0x2880) = 0;
  *(float *)(lVar3 + 0x2cc8) =
       (fVar17 - *(float *)(lVar3 + 0x2bd0 + (longlong)*(int *)(lVar3 + 0x2cc0) * 4)) +
       *(float *)(lVar3 + 0x2cc8);
  *(float *)(lVar3 + 0x2bd0 + (longlong)*(int *)(lVar3 + 0x2cc0) * 4) = fVar17;
  iVar7 = *(int *)(lVar3 + 0x2cc0);
  iVar10 = (int)((ulonglong)((longlong)(iVar7 + 1) * -0x77777777) >> 0x20) + iVar7 + 1;
  *(int *)(lVar3 + 0x2cc0) = iVar7 + ((iVar10 >> 5) - (iVar10 >> 0x1f)) * -0x3c + 1;
  iVar7 = FUN_1800fed00(*(int *)(lVar3 + 0x2cc4) + 1);
  *(int *)(lVar3 + 0x2cc4) = iVar7;
  uVar6 = -(uint)(0.0 < *(float *)(lVar3 + 0x2cc8));
  *(uint *)(lVar3 + 0xf0) =
       ~uVar6 & (uint)DAT_1802de564 |
       (uint)(DAT_1802ac570 / (*(float *)(lVar3 + 0x2cc8) / (float)iVar7)) & uVar6;
  if (*(int *)(lVar3 + 0x1594) < 0) {
    uVar9 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar3 + 0x1598) != 0) {
      FUN_1802a82f0(uVar9,*(longlong *)(lVar3 + 0x1598),(longlong)*(int *)(lVar3 + 0x1590) * 0x1c);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x1598));
    }
    *(undefined8 *)(lVar3 + 0x1598) = uVar9;
    *(undefined4 *)(lVar3 + 0x1594) = 0;
  }
  *(undefined4 *)(lVar3 + 0x1590) = 0;
  FUN_180109f9c();
  FUN_18010a628();
  FUN_18010ae79();
  FUN_18010aedb();
  FUN_18010afd1();
  *(undefined1 *)(lVar3 + 1) = 1;
  iVar7 = *(int *)(lVar3 + 0x2178);
  if ((longlong)iVar7 != 0) {
    lVar13 = *(longlong *)(lVar3 + 0x2180);
    lVar14 = 0;
    do {
      lVar2 = *(longlong *)(lVar13 + lVar14);
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined1 *)(lVar2 + 200) = 0;
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar7 * 8 != lVar14);
  }
  if ((*(char *)(lVar3 + 0x2428) != '\0') && (*(int *)(lVar3 + 0x2444) == *(int *)(lVar3 + 0x167c)))
  {
    FUN_1801088af();
  }
  uVar16 = 0;
  if (*(char *)(lVar3 + 0xb5) == '\x01') {
    if (*(char *)(lVar3 + 0x138) == '\0') {
      *(undefined4 *)(lVar3 + 0x165c) = 0;
    }
    if (1 < *(int *)(lVar3 + 0x166c)) {
      uVar16 = *(undefined4 *)(lVar3 + 0x1668);
      goto LAB_1801095ef;
    }
  }
  else {
LAB_1801095ef:
    *(undefined4 *)(lVar3 + 0x165c) = uVar16;
  }
  if (*(int *)(lVar3 + 0x1668) == 0) {
    iVar7 = *(int *)(lVar3 + 0x1664);
    *(undefined8 *)(lVar3 + 0x1670) = 0;
    if (iVar7 != 0) goto LAB_180109631;
LAB_180109664:
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(lVar3 + 0x1664);
    if (iVar7 == 0) goto LAB_180109664;
    if (*(int *)(lVar3 + 0x167c) == iVar7) {
      *(undefined4 *)(lVar3 + 0x1674) = 0;
    }
LAB_180109631:
    *(float *)(lVar3 + 0x1670) = *(float *)(lVar3 + 0x1670) + *(float *)(lVar3 + 0x48);
    if (*(int *)(lVar3 + 0x167c) != iVar7) {
      *(float *)(lVar3 + 0x1674) = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0x1674);
    }
  }
  *(int *)(lVar3 + 0x1668) = iVar7;
  iVar10 = 0;
  *(undefined4 *)(lVar3 + 0x166c) = 0;
  *(undefined4 *)(lVar3 + 0x1664) = 0;
  *(undefined2 *)(lVar3 + 0x1678) = 0;
  iVar7 = *(int *)(lVar3 + 0x167c);
  if (iVar7 == 0) {
    fVar17 = *(float *)(lVar3 + 0x48);
  }
  else {
    if ((*(int *)(lVar3 + 0x1680) == iVar7) || (*(int *)(lVar3 + 0x16a8) != iVar7)) {
      fVar17 = *(float *)(lVar3 + 0x48);
      iVar10 = iVar7;
    }
    else {
      if ((*(byte *)(lVar3 + 0x2acc) & 2) != 0) {
        FUN_1800fdfea();
      }
      FUN_180107456();
      fVar17 = *(float *)(lVar3 + 0x48);
      iVar10 = *(int *)(lVar3 + 0x167c);
      if (*(int *)(lVar3 + 0x167c) == 0) {
        iVar10 = 0;
        goto LAB_1801096ec;
      }
    }
    *(float *)(lVar3 + 0x1684) = *(float *)(lVar3 + 0x1684) + fVar17;
  }
LAB_1801096ec:
  *(float *)(lVar3 + 0x16c4) = *(float *)(lVar3 + 0x16c4) + fVar17;
  *(int *)(lVar3 + 0x16a8) = iVar10;
  *(undefined4 *)(lVar3 + 0x1680) = 0;
  *(undefined1 *)(lVar3 + 0x168d) = 0;
  *(undefined1 *)(lVar3 + 0x1688) = 0;
  if ((*(int *)(lVar3 + 0x27c8) != 0) && (iVar10 != *(int *)(lVar3 + 0x27c8))) {
    *(undefined4 *)(lVar3 + 0x27c8) = 0;
  }
  if ((*(int *)(lVar3 + 0x27c4) != 0) && (*(int *)(lVar3 + 0x27c4) != *(int *)(lVar3 + 0x16ac))) {
    *(undefined4 *)(lVar3 + 0x27c4) = 0;
  }
  if (iVar10 == 0) {
    *(undefined4 *)(lVar3 + 0x1f90) = 0;
    *(undefined1 *)(lVar3 + 0x1f94) = 0;
  }
  if (*(int *)(lVar3 + 0x16b0) < *(int *)(lVar3 + 4)) {
    *(undefined4 *)(lVar3 + 0x16ac) = 0;
  }
  *(undefined1 *)(lVar3 + 0x16b5) = 0;
  iVar7 = *(int *)(lVar3 + 0x2680);
  if (iVar7 == 0) {
    iVar10 = 0;
LAB_1801097a4:
    *(int *)(lVar3 + 0x2690) = iVar10;
  }
  else {
    iVar10 = iVar7;
    if (*(float *)(lVar3 + 0x12d8) <= *(float *)(lVar3 + 0x269c)) goto LAB_1801097a4;
  }
  if (*(longlong *)(lVar3 + 0x1610) == 0) {
    uVar16 = 0;
LAB_1801097ce:
    *(undefined4 *)(lVar3 + 0x2694) = uVar16;
  }
  else if (*(float *)(lVar3 + 0x12d8) <= *(float *)(lVar3 + 0x269c)) {
    uVar16 = *(undefined4 *)(*(longlong *)(lVar3 + 0x1610) + 0x10);
    goto LAB_1801097ce;
  }
  *(int *)(lVar3 + 0x2684) = iVar7;
  if (iVar7 == 0) {
    if (0.0 < *(float *)(lVar3 + 0x2688)) {
      fVar17 = *(float *)(lVar3 + 0x268c) + fVar17;
      *(float *)(lVar3 + 0x268c) = fVar17;
      fVar15 = (float)FUN_180102463(DAT_1802de728);
      if (fVar15 <= fVar17) {
        *(undefined8 *)(lVar3 + 0x2688) = 0;
      }
    }
  }
  else {
    *(float *)(lVar3 + 0x2688) = fVar17 + *(float *)(lVar3 + 0x2688);
    *(undefined4 *)(lVar3 + 0x268c) = 0;
    *(undefined4 *)(lVar3 + 0x2680) = 0;
  }
  FUN_18010b152();
  *(undefined4 *)(lVar3 + 0x24b0) = *(undefined4 *)(lVar3 + 0x24ac);
  *(undefined4 *)(lVar3 + 0x24a4) = *(undefined4 *)(lVar3 + 0x24a0);
  *(undefined4 *)(lVar3 + 0x24a0) = 0;
  *(undefined8 *)(lVar3 + 0x24a8) = 0x7f7fffff;
  *(undefined2 *)(lVar3 + 0x2429) = 0;
  *(undefined4 *)(lVar3 + 0x24b8) = 0;
  if (*(char *)(lVar3 + 0x2428) == '\x01') {
    iVar7 = *(int *)(lVar3 + 0x167c);
    if (iVar7 == 0) {
      iVar7 = FUN_1800fed39("##DragDropCancelHandler",0,0);
    }
    cVar4 = FUN_18010b367(0x20e,0x1000,iVar7);
    if (cVar4 != '\0') {
      FUN_180107456();
      FUN_18010b3f2();
    }
  }
  *(undefined8 *)(lVar3 + 0x2868) = 0;
  FUN_18010b4b2();
  FUN_18010bcaf();
  FUN_18010c0c8(lVar3);
  if ((*(char *)(lVar3 + 0x20e1) != '\0') || (*(float *)(lVar3 + 0x98) < 0.0)) {
    bVar12 = 0;
    fVar17 = DAT_1802de564;
  }
  else {
    fVar17 = (float)*(double *)(lVar3 + 0x18) - *(float *)(lVar3 + 0x98);
    bVar12 = 1;
  }
  iVar7 = *(int *)(lVar3 + 0x15a8);
  if ((longlong)iVar7 != 0) {
    lVar13 = *(longlong *)(lVar3 + 0x15b0);
    lVar14 = 0;
    do {
      lVar2 = *(longlong *)(lVar13 + lVar14);
      bVar1 = *(byte *)(lVar2 + 0x109);
      *(byte *)(lVar2 + 0x10a) = bVar1;
      *(undefined1 *)(lVar2 + 0x109) = 0;
      *(undefined1 *)(lVar2 + 0x10b) = 0;
      *(undefined2 *)(lVar2 + 0x11a) = *(undefined2 *)(lVar2 + 0x118);
      *(undefined2 *)(lVar2 + 0x118) = 0;
      if ((((bVar12 & bVar1) == 0) && (*(char *)(lVar2 + 0x494) == '\0')) &&
         (*(float *)(lVar2 + 0x2e8) <= fVar17 && fVar17 != *(float *)(lVar2 + 0x2e8))) {
        FUN_180107030();
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar7 * 8 != lVar14);
  }
  FUN_180108e2d(lVar3 + 0x118);
  FUN_18010870e();
  lVar13 = FUN_180108ca9();
  if ((lVar13 != 0) || ((*(longlong *)(lVar3 + 0x23e8) != 0 && (0.0 < *(float *)(lVar3 + 0x2404)))))
  {
    uVar16 = FUN_1800eebe2(*(float *)(lVar3 + 0x48) * DAT_1802de604 + *(float *)(lVar3 + 0x2424),
                           DAT_1802ac570);
  }
  else {
    uVar16 = FUN_180102463(*(float *)(lVar3 + 0x48) * DAT_1802dc2d8 + *(float *)(lVar3 + 0x2424),0);
  }
  *(undefined4 *)(lVar3 + 0x2424) = uVar16;
  *(undefined4 *)(lVar3 + 0x2698) = 0;
  *(undefined4 *)(lVar3 + 0x2cd4) = 0xffffffff;
  *(undefined8 *)(lVar3 + 0x2ccc) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0x290c) = *(undefined4 *)(lVar3 + 0x28f8);
  *(undefined4 *)(lVar3 + 0x2910) = *(undefined4 *)(lVar3 + 0x28fc);
  *(undefined4 *)(lVar3 + 0x2914) = *(undefined4 *)(lVar3 + 0x2900);
  *(undefined4 *)(lVar3 + 0x2918) = *(undefined4 *)(lVar3 + 0x2904);
  *(undefined4 *)(lVar3 + 0x291c) = *(undefined4 *)(lVar3 + 0x2908);
  *(undefined2 *)(lVar3 + 0x28f8) = 0;
  FUN_18010c1cc();
  iVar7 = *(int *)(lVar3 + 0x2540);
  if (0 < iVar7) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      fVar15 = *(float *)(*(longlong *)(lVar3 + 0x2548) + lVar13 * 4);
      if ((0.0 <= fVar15) && (fVar15 < fVar17)) {
        FUN_18016d6e3(*(longlong *)(lVar3 + 0x2520) + lVar14);
        iVar7 = *(int *)(lVar3 + 0x2540);
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x250;
    } while (lVar13 < iVar7);
  }
  if ((longlong)*(int *)(lVar3 + 0x2508) != 0) {
    lVar13 = *(longlong *)(lVar3 + 0x2510);
    lVar14 = (longlong)*(int *)(lVar3 + 0x2508) * 0x88;
    do {
      if ((0.0 <= *(float *)(lVar13 + 8)) && (*(float *)(lVar13 + 8) < fVar17)) {
        FUN_18016d79f(lVar13);
      }
      lVar13 = lVar13 + 0x88;
      lVar14 = lVar14 + -0x88;
    } while (lVar14 != 0);
  }
  if (*(char *)(lVar3 + 0x20e1) != '\0') {
    FUN_180106e9d();
  }
  *(undefined1 *)(lVar3 + 0x20e1) = 0;
  if ((*(longlong *)(lVar3 + 0x2200) != 0) &&
     (*(char *)(*(longlong *)(lVar3 + 0x2200) + 0x10a) == '\0')) {
    FUN_18010c613(0,0,0,1);
  }
  if (*(int *)(lVar3 + 0x15dc) < 0) {
    uVar9 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar3 + 0x15e0) != 0) {
      FUN_1802a82f0(uVar9,*(longlong *)(lVar3 + 0x15e0),(longlong)*(int *)(lVar3 + 0x15d8) * 0x78);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x15e0));
    }
    *(undefined8 *)(lVar3 + 0x15e0) = uVar9;
    *(undefined4 *)(lVar3 + 0x15dc) = 0;
  }
  *(undefined4 *)(lVar3 + 0x15d8) = 0;
  if (*(int *)(lVar3 + 0x215c) < 0) {
    uVar9 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar3 + 0x2160) != 0) {
      FUN_1802a82f0(uVar9,*(longlong *)(lVar3 + 0x2160),(longlong)*(int *)(lVar3 + 0x2158) * 0x38);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x2160));
    }
    *(undefined8 *)(lVar3 + 0x2160) = uVar9;
    *(undefined4 *)(lVar3 + 0x215c) = 0;
  }
  *(undefined4 *)(lVar3 + 0x2158) = 0;
  if (*(int *)(lVar3 + 0x212c) < 0) {
    uVar9 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar3 + 0x2130) != 0) {
      FUN_1802a82f0(uVar9,*(longlong *)(lVar3 + 0x2130),(longlong)*(int *)(lVar3 + 0x2128) << 2);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x2130));
    }
    *(undefined8 *)(lVar3 + 0x2130) = uVar9;
    *(undefined8 *)(lVar3 + 0x2128) = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x2128) = 0;
    if (*(int *)(lVar3 + 0x212c) != 0) {
      lVar13 = *(longlong *)(lVar3 + 0x2130);
      lVar14 = 0;
      goto LAB_180109c8f;
    }
  }
  lVar13 = FUN_1800fe7f8(0x20);
  if (*(longlong *)(lVar3 + 0x2130) != 0) {
    FUN_1802a82f0(lVar13,*(longlong *)(lVar3 + 0x2130),(longlong)*(int *)(lVar3 + 0x2128) << 2);
    FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x2130));
  }
  *(longlong *)(lVar3 + 0x2130) = lVar13;
  *(undefined4 *)(lVar3 + 0x212c) = 8;
  lVar14 = (longlong)*(int *)(lVar3 + 0x2128);
LAB_180109c8f:
  *(undefined4 *)(lVar13 + lVar14 * 4) = 0x10;
  iVar7 = *(int *)(lVar3 + 0x2128);
  *(int *)(lVar3 + 0x2128) = iVar7 + 1;
  *(undefined4 *)(lVar3 + 0x1fa0) =
       *(undefined4 *)(*(longlong *)(lVar3 + 0x2130) + (longlong)iVar7 * 4);
  if (*(int *)(lVar3 + 0x213c) < 0) {
    uVar9 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar3 + 0x2140) != 0) {
      FUN_1802a82f0(uVar9,*(longlong *)(lVar3 + 0x2140),(longlong)*(int *)(lVar3 + 0x2138) * 0x3c);
      FUN_1800fe8d4(*(undefined8 *)(lVar3 + 0x2140));
    }
    *(undefined8 *)(lVar3 + 0x2140) = uVar9;
    *(undefined4 *)(lVar3 + 0x213c) = 0;
  }
  *(undefined4 *)(lVar3 + 0x2138) = 0;
  FUN_18010c6b4(lVar3);
  FUN_18010c7f5();
  FUN_18010c925();
  FUN_18010c968();
  if ((*(char *)(lVar3 + 0x2b01) != '\0') &&
     (cVar4 = *(char *)(lVar3 + 0x2b01) + -1, *(char *)(lVar3 + 0x2b01) = cVar4, cVar4 == '\0')) {
    *(undefined4 *)(lVar3 + 0x1fa4) = 0;
    *(undefined1 *)(lVar3 + 0x2b02) = 0;
  }
  if ((*(char *)(lVar3 + 0x2b00) != '\0') &&
     (cVar4 = *(char *)(lVar3 + 0x2b00) + -1, *(char *)(lVar3 + 0x2b00) = cVar4, cVar4 == '\0')) {
    FUN_1800fdfea("(Debug Log: Auto-disabled some ImGuiDebugLogFlags after 2 frames)\n");
    *(uint *)(lVar3 + 0x2acc) = *(uint *)(lVar3 + 0x2acc) & ~*(uint *)(lVar3 + 0x2afc);
    *(undefined4 *)(lVar3 + 0x2afc) = 0;
  }
  *(undefined1 *)(lVar3 + 2) = 1;
  local_68 = DAT_1802de730;
  FUN_18010ca41(&local_68,4);
  FUN_18010ca66("Debug##Default",0,0);
  *(undefined4 *)(lVar3 + 0x2aa4) = 0;
  FUN_18010f000(lVar3 + 0x2aa8);
  cVar4 = -1;
  if (*(char *)(lVar3 + 0xb8) == '\x01') {
    if (*(char *)(lVar3 + 0x2b08) == -1) {
      cVar4 = '\0';
    }
    else {
      sVar5 = (short)*(char *)(lVar3 + 0x2b08) + (ushort)((*(byte *)(lVar3 + 4) & 3) == 0);
      uVar6 = sVar5 * 0x6667;
      cVar4 = (char)sVar5 + ((char)(uVar6 >> 0x12) - (char)((int)uVar6 >> 0x1f)) * -10;
    }
  }
  *(char *)(lVar3 + 0x2b08) = cVar4;
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_88);
  }
  FUN_1801065b3(lVar3,1);
  return;
}

