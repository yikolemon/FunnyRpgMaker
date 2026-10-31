/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140082604 */

void FUN_140082604(void)

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
  
  lVar3 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar8 = (ulonglong)*(int *)(DAT_140f2a910 + 0x29b8);
  if (0 < (longlong)uVar8) {
    lVar13 = -uVar8;
    uVar11 = uVar8 + 1;
    lVar14 = uVar8 << 5;
    do {
      lVar14 = lVar14 + -0x20;
      lVar2 = *(longlong *)(lVar3 + 0x29c0);
      if (*(int *)(lVar2 + 4 + lVar14) == 7) {
        FUN_1401c5180(lVar2 + lVar14,lVar2 + lVar14 + 0x20,((int)uVar8 + lVar13) * 0x20);
        uVar6 = *(int *)(lVar3 + 0x29b8) - 1;
        uVar8 = (ulonglong)uVar6;
        *(uint *)(lVar3 + 0x29b8) = uVar6;
      }
      lVar13 = lVar13 + 1;
      uVar11 = uVar11 - 1;
    } while (1 < uVar11);
  }
  FUN_14007f8cb(lVar3,0);
  *(undefined4 *)(lVar3 + 0x12f8) = *(undefined4 *)(lVar3 + 0x12f4);
  FUN_140083171();
  *(undefined4 *)(lVar3 + 0x12f4) = *(undefined4 *)(lVar3 + 0x30);
  FUN_140083241();
  fVar17 = *(float *)(lVar3 + 0x48);
  *(double *)(lVar3 + 0x18) = (double)fVar17 + *(double *)(lVar3 + 0x18);
  *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
  *(undefined2 *)(lVar3 + 0x2866) = 0;
  *(undefined4 *)(lVar3 + 0x15f8) = 0;
  if (*(int *)(lVar3 + 0x2884) < 0) {
    uVar9 = FUN_140077ab4(0);
    if (*(longlong *)(lVar3 + 0x2888) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(lVar3 + 0x2888),(longlong)*(int *)(lVar3 + 0x2880) << 2);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x2888));
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
  iVar7 = FUN_140077fbc(*(int *)(lVar3 + 0x2cc4) + 1);
  *(int *)(lVar3 + 0x2cc4) = iVar7;
  uVar6 = -(uint)(0.0 < *(float *)(lVar3 + 0x2cc8));
  *(uint *)(lVar3 + 0xf0) =
       ~uVar6 & (uint)DAT_1402112e4 |
       (uint)(DAT_1401c86c8 / (*(float *)(lVar3 + 0x2cc8) / (float)iVar7)) & uVar6;
  if (*(int *)(lVar3 + 0x1594) < 0) {
    uVar9 = FUN_140077ab4(0);
    if (*(longlong *)(lVar3 + 0x1598) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(lVar3 + 0x1598),(longlong)*(int *)(lVar3 + 0x1590) * 0x1c);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x1598));
    }
    *(undefined8 *)(lVar3 + 0x1598) = uVar9;
    *(undefined4 *)(lVar3 + 0x1594) = 0;
  }
  *(undefined4 *)(lVar3 + 0x1590) = 0;
  FUN_1400832b4();
  FUN_140083940();
  FUN_140084191();
  FUN_1400841f3();
  FUN_1400842e9();
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
    FUN_140081bc7();
  }
  uVar16 = 0;
  if (*(char *)(lVar3 + 0xb5) == '\x01') {
    if (*(char *)(lVar3 + 0x138) == '\0') {
      *(undefined4 *)(lVar3 + 0x165c) = 0;
    }
    if (1 < *(int *)(lVar3 + 0x166c)) {
      uVar16 = *(undefined4 *)(lVar3 + 0x1668);
      goto LAB_140082907;
    }
  }
  else {
LAB_140082907:
    *(undefined4 *)(lVar3 + 0x165c) = uVar16;
  }
  if (*(int *)(lVar3 + 0x1668) == 0) {
    iVar7 = *(int *)(lVar3 + 0x1664);
    *(undefined8 *)(lVar3 + 0x1670) = 0;
    if (iVar7 != 0) goto LAB_140082949;
LAB_14008297c:
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(lVar3 + 0x1664);
    if (iVar7 == 0) goto LAB_14008297c;
    if (*(int *)(lVar3 + 0x167c) == iVar7) {
      *(undefined4 *)(lVar3 + 0x1674) = 0;
    }
LAB_140082949:
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
        FUN_1400772a6();
      }
      FUN_14008076e();
      fVar17 = *(float *)(lVar3 + 0x48);
      iVar10 = *(int *)(lVar3 + 0x167c);
      if (*(int *)(lVar3 + 0x167c) == 0) {
        iVar10 = 0;
        goto LAB_140082a04;
      }
    }
    *(float *)(lVar3 + 0x1684) = *(float *)(lVar3 + 0x1684) + fVar17;
  }
LAB_140082a04:
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
LAB_140082abc:
    *(int *)(lVar3 + 0x2690) = iVar10;
  }
  else {
    iVar10 = iVar7;
    if (*(float *)(lVar3 + 0x12d8) <= *(float *)(lVar3 + 0x269c)) goto LAB_140082abc;
  }
  if (*(longlong *)(lVar3 + 0x1610) == 0) {
    uVar16 = 0;
LAB_140082ae6:
    *(undefined4 *)(lVar3 + 0x2694) = uVar16;
  }
  else if (*(float *)(lVar3 + 0x12d8) <= *(float *)(lVar3 + 0x269c)) {
    uVar16 = *(undefined4 *)(*(longlong *)(lVar3 + 0x1610) + 0x10);
    goto LAB_140082ae6;
  }
  *(int *)(lVar3 + 0x2684) = iVar7;
  if (iVar7 == 0) {
    if (0.0 < *(float *)(lVar3 + 0x2688)) {
      fVar17 = *(float *)(lVar3 + 0x268c) + fVar17;
      *(float *)(lVar3 + 0x268c) = fVar17;
      fVar15 = (float)FUN_14007b71f(DAT_140210020);
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
  FUN_14008446a();
  *(undefined4 *)(lVar3 + 0x24b0) = *(undefined4 *)(lVar3 + 0x24ac);
  *(undefined4 *)(lVar3 + 0x24a4) = *(undefined4 *)(lVar3 + 0x24a0);
  *(undefined4 *)(lVar3 + 0x24a0) = 0;
  *(undefined8 *)(lVar3 + 0x24a8) = 0x7f7fffff;
  *(undefined2 *)(lVar3 + 0x2429) = 0;
  *(undefined4 *)(lVar3 + 0x24b8) = 0;
  if (*(char *)(lVar3 + 0x2428) == '\x01') {
    iVar7 = *(int *)(lVar3 + 0x167c);
    if (iVar7 == 0) {
      iVar7 = FUN_140077ff5("##DragDropCancelHandler",0,0);
    }
    cVar4 = FUN_14008467f(0x20e,0x1000,iVar7);
    if (cVar4 != '\0') {
      FUN_14008076e();
      FUN_14008470a();
    }
  }
  *(undefined8 *)(lVar3 + 0x2868) = 0;
  FUN_1400847ca();
  FUN_140084fc7();
  FUN_1400853e0(lVar3);
  if ((*(char *)(lVar3 + 0x20e1) != '\0') || (*(float *)(lVar3 + 0x98) < 0.0)) {
    bVar12 = 0;
    fVar17 = DAT_1402112e4;
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
        FUN_140080348();
      }
      lVar14 = lVar14 + 8;
    } while ((longlong)iVar7 * 8 != lVar14);
  }
  FUN_140082145(lVar3 + 0x118);
  FUN_140081a26();
  lVar13 = FUN_140081fc1();
  if ((lVar13 != 0) || ((*(longlong *)(lVar3 + 0x23e8) != 0 && (0.0 < *(float *)(lVar3 + 0x2404)))))
  {
    uVar16 = FUN_14004863e(*(float *)(lVar3 + 0x48) * DAT_14020fff0 + *(float *)(lVar3 + 0x2424),
                           DAT_1401c86c8);
  }
  else {
    uVar16 = FUN_14007b71f(*(float *)(lVar3 + 0x48) * DAT_1401c86cc + *(float *)(lVar3 + 0x2424),0);
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
  FUN_1400854e4();
  iVar7 = *(int *)(lVar3 + 0x2540);
  if (0 < iVar7) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      fVar15 = *(float *)(*(longlong *)(lVar3 + 0x2548) + lVar13 * 4);
      if ((0.0 <= fVar15) && (fVar15 < fVar17)) {
        FUN_1401156b3(*(longlong *)(lVar3 + 0x2520) + lVar14);
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
        FUN_14011576f(lVar13);
      }
      lVar13 = lVar13 + 0x88;
      lVar14 = lVar14 + -0x88;
    } while (lVar14 != 0);
  }
  if (*(char *)(lVar3 + 0x20e1) != '\0') {
    FUN_1400801b5();
  }
  *(undefined1 *)(lVar3 + 0x20e1) = 0;
  if ((*(longlong *)(lVar3 + 0x2200) != 0) &&
     (*(char *)(*(longlong *)(lVar3 + 0x2200) + 0x10a) == '\0')) {
    FUN_14008592b(0,0,0,1);
  }
  if (*(int *)(lVar3 + 0x15dc) < 0) {
    uVar9 = FUN_140077ab4(0);
    if (*(longlong *)(lVar3 + 0x15e0) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(lVar3 + 0x15e0),(longlong)*(int *)(lVar3 + 0x15d8) * 0x78);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x15e0));
    }
    *(undefined8 *)(lVar3 + 0x15e0) = uVar9;
    *(undefined4 *)(lVar3 + 0x15dc) = 0;
  }
  *(undefined4 *)(lVar3 + 0x15d8) = 0;
  if (*(int *)(lVar3 + 0x215c) < 0) {
    uVar9 = FUN_140077ab4(0);
    if (*(longlong *)(lVar3 + 0x2160) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(lVar3 + 0x2160),(longlong)*(int *)(lVar3 + 0x2158) * 0x38);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x2160));
    }
    *(undefined8 *)(lVar3 + 0x2160) = uVar9;
    *(undefined4 *)(lVar3 + 0x215c) = 0;
  }
  *(undefined4 *)(lVar3 + 0x2158) = 0;
  if (*(int *)(lVar3 + 0x212c) < 0) {
    uVar9 = FUN_140077ab4(0);
    if (*(longlong *)(lVar3 + 0x2130) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(lVar3 + 0x2130),(longlong)*(int *)(lVar3 + 0x2128) << 2);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x2130));
    }
    *(undefined8 *)(lVar3 + 0x2130) = uVar9;
    *(undefined8 *)(lVar3 + 0x2128) = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x2128) = 0;
    if (*(int *)(lVar3 + 0x212c) != 0) {
      lVar13 = *(longlong *)(lVar3 + 0x2130);
      lVar14 = 0;
      goto LAB_140082fa7;
    }
  }
  lVar13 = FUN_140077ab4(0x20);
  if (*(longlong *)(lVar3 + 0x2130) != 0) {
    FUN_1401c5180(lVar13,*(longlong *)(lVar3 + 0x2130),(longlong)*(int *)(lVar3 + 0x2128) << 2);
    FUN_140077b90(*(undefined8 *)(lVar3 + 0x2130));
  }
  *(longlong *)(lVar3 + 0x2130) = lVar13;
  *(undefined4 *)(lVar3 + 0x212c) = 8;
  lVar14 = (longlong)*(int *)(lVar3 + 0x2128);
LAB_140082fa7:
  *(undefined4 *)(lVar13 + lVar14 * 4) = 0x10;
  iVar7 = *(int *)(lVar3 + 0x2128);
  *(int *)(lVar3 + 0x2128) = iVar7 + 1;
  *(undefined4 *)(lVar3 + 0x1fa0) =
       *(undefined4 *)(*(longlong *)(lVar3 + 0x2130) + (longlong)iVar7 * 4);
  if (*(int *)(lVar3 + 0x213c) < 0) {
    uVar9 = FUN_140077ab4(0);
    if (*(longlong *)(lVar3 + 0x2140) != 0) {
      FUN_1401c5180(uVar9,*(longlong *)(lVar3 + 0x2140),(longlong)*(int *)(lVar3 + 0x2138) * 0x3c);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x2140));
    }
    *(undefined8 *)(lVar3 + 0x2140) = uVar9;
    *(undefined4 *)(lVar3 + 0x213c) = 0;
  }
  *(undefined4 *)(lVar3 + 0x2138) = 0;
  FUN_1400859cc(lVar3);
  FUN_140085b0d();
  FUN_140085c3d();
  FUN_140085c80();
  if ((*(char *)(lVar3 + 0x2b01) != '\0') &&
     (cVar4 = *(char *)(lVar3 + 0x2b01) + -1, *(char *)(lVar3 + 0x2b01) = cVar4, cVar4 == '\0')) {
    *(undefined4 *)(lVar3 + 0x1fa4) = 0;
    *(undefined1 *)(lVar3 + 0x2b02) = 0;
  }
  if ((*(char *)(lVar3 + 0x2b00) != '\0') &&
     (cVar4 = *(char *)(lVar3 + 0x2b00) + -1, *(char *)(lVar3 + 0x2b00) = cVar4, cVar4 == '\0')) {
    FUN_1400772a6("(Debug Log: Auto-disabled some ImGuiDebugLogFlags after 2 frames)\n");
    *(uint *)(lVar3 + 0x2acc) = *(uint *)(lVar3 + 0x2acc) & ~*(uint *)(lVar3 + 0x2afc);
    *(undefined4 *)(lVar3 + 0x2afc) = 0;
  }
  *(undefined1 *)(lVar3 + 2) = 1;
  local_68 = DAT_140211490;
  FUN_140085d59(&local_68,4);
  FUN_140085d7e("Debug##Default",0,0);
  *(undefined4 *)(lVar3 + 0x2aa4) = 0;
  FUN_140088318(lVar3 + 0x2aa8);
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
  if (DAT_140f17b40 != (local_60 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_60 ^ (ulonglong)auStack_88);
  }
  FUN_14007f8cb(lVar3,1);
  return;
}

