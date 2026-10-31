/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010462d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010462d(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
  float fVar12;
  float local_28;
  undefined4 uStack_24;
  float local_20;
  undefined8 uStack_1c;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  iVar6 = *(int *)(DAT_1039d74c + 0x2700);
  if (0 < iVar6) {
    uVar10 = iVar6 + 1;
    iVar8 = iVar6 * 0x14;
    iVar9 = -iVar6;
    do {
      iVar8 = iVar8 + -0x14;
      iVar2 = *(int *)(iVar3 + 0x2708);
      if (*(int *)(iVar2 + 4 + iVar8) == 7) {
        FUN_1025b2d0(iVar2 + iVar8,iVar2 + iVar8 + 0x14,(iVar6 + iVar9) * 0x14);
        iVar6 = *(int *)(iVar3 + 0x2700) + -1;
        *(int *)(iVar3 + 0x2700) = iVar6;
      }
      uVar10 = uVar10 - 1;
      iVar9 = iVar9 + 1;
    } while (1 < uVar10);
  }
  FUN_10101a75(iVar3,0);
  *(undefined4 *)(iVar3 + 0x1210) = *(undefined4 *)(iVar3 + 0x120c);
  FUN_10105195();
  *(undefined4 *)(iVar3 + 0x120c) = *(undefined4 *)(iVar3 + 0x30);
  FUN_10105247();
  fVar12 = *(float *)(iVar3 + 0x48);
  *(double *)(iVar3 + 0x18) = (double)fVar12 + *(double *)(iVar3 + 0x18);
  *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  *(undefined2 *)(iVar3 + 0x25ea) = 0;
  *(undefined4 *)(iVar3 + 0x14c0) = 0;
  if (*(int *)(iVar3 + 0x2600) < 0) {
    uVar7 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x2604) != 0) {
      FUN_1025b2d0(uVar7,*(int *)(iVar3 + 0x2604),*(int *)(iVar3 + 0x25fc) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x2604));
    }
    *(undefined4 *)(iVar3 + 0x2604) = uVar7;
    *(undefined4 *)(iVar3 + 0x2600) = 0;
    fVar12 = *(float *)(iVar3 + 0x48);
  }
  *(undefined4 *)(iVar3 + 0x25fc) = 0;
  *(float *)(iVar3 + 0x2990) =
       (fVar12 - *(float *)(iVar3 + 0x2898 + *(int *)(iVar3 + 0x2988) * 4)) +
       *(float *)(iVar3 + 0x2990);
  *(float *)(iVar3 + 0x2898 + *(int *)(iVar3 + 0x2988) * 4) = fVar12;
  iVar6 = *(int *)(iVar3 + 0x2988);
  iVar8 = (int)((ulonglong)((longlong)(iVar6 + 1) * -0x77777777) >> 0x20) + iVar6 + 1;
  *(int *)(iVar3 + 0x2988) = iVar6 + ((iVar8 >> 5) - (iVar8 >> 0x1f)) * -0x3c + 1;
  iVar6 = FUN_100fa683(*(int *)(iVar3 + 0x298c) + 1,0x3c);
  *(int *)(iVar3 + 0x298c) = iVar6;
  uVar10 = -(uint)(0.0 < *(float *)(iVar3 + 0x2990));
  *(uint *)(iVar3 + 0xc4) =
       ~uVar10 & (uint)DAT_102b89b4 |
       (uint)(DAT_1028b430 / (*(float *)(iVar3 + 0x2990) / (float)iVar6)) & uVar10;
  if (*(int *)(iVar3 + 0x1474) < 0) {
    uVar7 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x1478) != 0) {
      FUN_1025b2d0(uVar7,*(int *)(iVar3 + 0x1478),*(int *)(iVar3 + 0x1470) * 0x1c);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x1478));
    }
    *(undefined4 *)(iVar3 + 0x1478) = uVar7;
    *(undefined4 *)(iVar3 + 0x1474) = 0;
  }
  *(undefined4 *)(iVar3 + 0x1470) = 0;
  FUN_101052b5(*(undefined1 *)(iVar3 + 0x7a));
  FUN_101058f6();
  FUN_1010611a();
  FUN_10106170();
  FUN_10106260();
  *(undefined1 *)(iVar3 + 1) = 1;
  iVar6 = *(int *)(iVar3 + 0x1fe0);
  if (iVar6 != 0) {
    iVar8 = *(int *)(iVar3 + 0x1fe8);
    iVar9 = 0;
    do {
      iVar2 = *(int *)(iVar8 + iVar9);
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      *(undefined1 *)(iVar2 + 0x98) = 0;
      iVar9 = iVar9 + 4;
    } while (iVar6 << 2 != iVar9);
  }
  if ((*(char *)(iVar3 + 0x2250) != '\0') && (*(int *)(iVar3 + 0x2268) == *(int *)(iVar3 + 0x1528)))
  {
    FUN_10103c09(*(int *)(iVar3 + 0x2268));
  }
  uVar7 = 0;
  if (*(char *)(iVar3 + 0xa1) == '\x01') {
    if (*(char *)(iVar3 + 0x104) == '\0') {
      *(undefined4 *)(iVar3 + 0x1508) = 0;
    }
    if (1 < *(int *)(iVar3 + 0x1518)) {
      uVar7 = *(undefined4 *)(iVar3 + 0x1514);
      goto LAB_101048fb;
    }
  }
  else {
LAB_101048fb:
    *(undefined4 *)(iVar3 + 0x1508) = uVar7;
  }
  if (*(int *)(iVar3 + 0x1514) == 0) {
    iVar6 = *(int *)(iVar3 + 0x1510);
    *(undefined8 *)(iVar3 + 0x151c) = 0;
    if (iVar6 != 0) goto LAB_1010493d;
LAB_10104970:
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar3 + 0x1510);
    if (iVar6 == 0) goto LAB_10104970;
    if (*(int *)(iVar3 + 0x1528) == iVar6) {
      *(undefined4 *)(iVar3 + 0x1520) = 0;
    }
LAB_1010493d:
    *(float *)(iVar3 + 0x151c) = *(float *)(iVar3 + 0x151c) + *(float *)(iVar3 + 0x48);
    if (*(int *)(iVar3 + 0x1528) != iVar6) {
      *(float *)(iVar3 + 0x1520) = *(float *)(iVar3 + 0x48) + *(float *)(iVar3 + 0x1520);
    }
  }
  *(int *)(iVar3 + 0x1514) = iVar6;
  iVar8 = 0;
  *(undefined4 *)(iVar3 + 0x1518) = 0;
  *(undefined4 *)(iVar3 + 0x1510) = 0;
  *(undefined2 *)(iVar3 + 0x1524) = 0;
  iVar6 = *(int *)(iVar3 + 0x1528);
  if (iVar6 == 0) {
    fVar12 = *(float *)(iVar3 + 0x48);
  }
  else {
    if ((*(int *)(iVar3 + 0x152c) == iVar6) || (*(int *)(iVar3 + 0x1550) != iVar6)) {
      fVar12 = *(float *)(iVar3 + 0x48);
      iVar8 = iVar6;
    }
    else {
      if ((*(byte *)(iVar3 + 0x27b4) & 2) != 0) {
        FUN_100f99e6("NewFrame(): ClearActiveID() 0x%08X because it isn\'t marked alive anymore!\n",
                     iVar6);
      }
      FUN_101028d8();
      fVar12 = *(float *)(iVar3 + 0x48);
      iVar8 = *(int *)(iVar3 + 0x1528);
      if (*(int *)(iVar3 + 0x1528) == 0) {
        iVar8 = 0;
        goto LAB_101049fa;
      }
    }
    *(float *)(iVar3 + 0x1530) = *(float *)(iVar3 + 0x1530) + fVar12;
  }
LAB_101049fa:
  *(float *)(iVar3 + 0x156c) = *(float *)(iVar3 + 0x156c) + fVar12;
  *(int *)(iVar3 + 0x1550) = iVar8;
  *(undefined4 *)(iVar3 + 0x152c) = 0;
  *(undefined1 *)(iVar3 + 0x1539) = 0;
  *(undefined1 *)(iVar3 + 0x1534) = 0;
  if ((*(int *)(iVar3 + 0x254c) != 0) && (iVar8 != *(int *)(iVar3 + 0x254c))) {
    *(undefined4 *)(iVar3 + 0x254c) = 0;
  }
  if ((*(int *)(iVar3 + 0x2548) != 0) && (*(int *)(iVar3 + 0x2548) != *(int *)(iVar3 + 0x1554))) {
    *(undefined4 *)(iVar3 + 0x2548) = 0;
  }
  if (iVar8 == 0) {
    *(undefined4 *)(iVar3 + 0x1e30) = 0;
    *(undefined1 *)(iVar3 + 0x1e34) = 0;
  }
  if (*(int *)(iVar3 + 0x1558) < *(int *)(iVar3 + 4)) {
    *(undefined4 *)(iVar3 + 0x1554) = 0;
  }
  *(undefined1 *)(iVar3 + 0x155d) = 0;
  iVar6 = *(int *)(iVar3 + 0x2448);
  if (iVar6 == 0) {
    iVar8 = 0;
LAB_10104ab2:
    *(int *)(iVar3 + 0x2458) = iVar8;
  }
  else {
    iVar8 = iVar6;
    if (*(float *)(iVar3 + 0x11f0) <= *(float *)(iVar3 + 0x2464)) goto LAB_10104ab2;
  }
  if (*(int *)(iVar3 + 0x14d0) == 0) {
    uVar7 = 0;
LAB_10104ada:
    *(undefined4 *)(iVar3 + 0x245c) = uVar7;
  }
  else if (*(float *)(iVar3 + 0x11f0) <= *(float *)(iVar3 + 0x2464)) {
    uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x14d0) + 8);
    goto LAB_10104ada;
  }
  *(int *)(iVar3 + 0x244c) = iVar6;
  if (iVar6 == 0) {
    if (0.0 < *(float *)(iVar3 + 0x2450)) {
      local_28 = *(float *)(iVar3 + 0x2454) + fVar12;
      *(float *)(iVar3 + 0x2454) = local_28;
      fVar11 = (float10)FUN_100fdbca(0x3e800000,fVar12 + fVar12);
      local_20 = (float)fVar11;
      if (local_20 <= local_28) {
        *(undefined8 *)(iVar3 + 0x2450) = 0;
      }
    }
  }
  else {
    *(float *)(iVar3 + 0x2450) = fVar12 + *(float *)(iVar3 + 0x2450);
    *(undefined4 *)(iVar3 + 0x2454) = 0;
    *(undefined4 *)(iVar3 + 0x2448) = 0;
  }
  FUN_101063d8();
  *(undefined4 *)(iVar3 + 0x22d0) = *(undefined4 *)(iVar3 + 0x22cc);
  *(undefined4 *)(iVar3 + 0x22cc) = 0;
  *(undefined4 *)(iVar3 + 0x22c4) = *(undefined4 *)(iVar3 + 0x22c0);
  *(undefined4 *)(iVar3 + 0x22c0) = 0;
  *(undefined4 *)(iVar3 + 0x22c8) = 0x7f7fffff;
  *(undefined2 *)(iVar3 + 0x2251) = 0;
  *(undefined4 *)(iVar3 + 0x22d8) = 0;
  if (*(char *)(iVar3 + 0x2250) == '\x01') {
    iVar6 = *(int *)(iVar3 + 0x1528);
    if (iVar6 == 0) {
      iVar6 = FUN_100fa6c3("##DragDropCancelHandler",0,0);
    }
    cVar4 = FUN_101065b0(0x20e,0x1000,iVar6);
    if (cVar4 != '\0') {
      FUN_101028d8();
      FUN_10106638();
    }
  }
  *(undefined4 *)(iVar3 + 0x25ec) = 0;
  FUN_101066e2();
  FUN_10106f03();
  uVar7 = FUN_1010731f(iVar3);
  local_28 = DAT_102b89b4;
  if ((*(char *)(iVar3 + 0x1f6d) != '\0') || (*(float *)(iVar3 + 0x84) < 0.0)) {
    uStack_24 = 0;
  }
  else {
    local_28 = (float)*(double *)(iVar3 + 0x18) - *(float *)(iVar3 + 0x84);
    uStack_24 = CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  iVar6 = *(int *)(iVar3 + 0x1484);
  if (iVar6 != 0) {
    iVar8 = *(int *)(iVar3 + 0x148c);
    iVar9 = 0;
    do {
      iVar2 = *(int *)(iVar8 + iVar9);
      bVar1 = *(byte *)(iVar2 + 0xf9);
      *(byte *)(iVar2 + 0xfa) = bVar1;
      *(undefined1 *)(iVar2 + 0xf9) = 0;
      *(undefined1 *)(iVar2 + 0xfb) = 0;
      *(undefined2 *)(iVar2 + 0x10a) = *(undefined2 *)(iVar2 + 0x108);
      *(undefined2 *)(iVar2 + 0x108) = 0;
      if (((((byte)uStack_24 & bVar1) == 0) && (*(char *)(iVar2 + 0x408) == '\0')) &&
         (*(float *)(iVar2 + 700) <= local_28 && local_28 != *(float *)(iVar2 + 700))) {
        FUN_101024ef(iVar2);
      }
      iVar9 = iVar9 + 4;
    } while (iVar6 << 2 != iVar9);
  }
  FUN_10104173(iVar3 + 0xe4);
  FUN_10103a81();
  iVar6 = FUN_1010400a();
  if ((iVar6 != 0) || ((*(int *)(iVar3 + 0x221c) != 0 && (0.0 < *(float *)(iVar3 + 0x222c))))) {
    fVar11 = (float10)FUN_100ea38a(*(float *)(iVar3 + 0x48) * DAT_102b8a58 +
                                   *(float *)(iVar3 + 0x224c),0x3f800000);
  }
  else {
    fVar11 = (float10)FUN_100fdbca(*(float *)(iVar3 + 0x48) * DAT_102b7108 +
                                   *(float *)(iVar3 + 0x224c),0);
  }
  *(float *)(iVar3 + 0x224c) = (float)fVar11;
  *(undefined4 *)(iVar3 + 0x2460) = 0;
  *(undefined4 *)(iVar3 + 0x299c) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x2998) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x2994) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x267c) = *(undefined4 *)(iVar3 + 0x2668);
  *(undefined4 *)(iVar3 + 0x2680) = *(undefined4 *)(iVar3 + 0x266c);
  *(undefined4 *)(iVar3 + 0x2684) = *(undefined4 *)(iVar3 + 0x2670);
  *(undefined4 *)(iVar3 + 0x2688) = *(undefined4 *)(iVar3 + 0x2674);
  *(undefined4 *)(iVar3 + 0x268c) = *(undefined4 *)(iVar3 + 0x2678);
  *(undefined2 *)(iVar3 + 0x2668) = 0;
  FUN_1010740f();
  iVar6 = *(int *)(iVar3 + 0x2340);
  if (0 < iVar6) {
    iVar9 = 0;
    iVar8 = 0;
    do {
      fVar12 = *(float *)(*(int *)(iVar3 + 0x2348) + iVar8 * 4);
      if ((0.0 <= fVar12) && (fVar12 < local_28)) {
        FUN_1016834b(*(int *)(iVar3 + 9000) + iVar9);
        iVar6 = *(int *)(iVar3 + 0x2340);
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 0x204;
    } while (iVar8 < iVar6);
  }
  if (*(int *)(iVar3 + 0x2314) != 0) {
    iVar6 = *(int *)(iVar3 + 0x231c);
    iVar8 = *(int *)(iVar3 + 0x2314) * 0x7c;
    do {
      if ((0.0 <= *(float *)(iVar6 + 8)) && (*(float *)(iVar6 + 8) < local_28)) {
        FUN_101683fa(iVar6);
      }
      iVar6 = iVar6 + 0x7c;
      iVar8 = iVar8 + -0x7c;
    } while (iVar8 != 0);
  }
  if (*(char *)(iVar3 + 0x1f6d) != '\0') {
    FUN_1010233c();
  }
  *(undefined1 *)(iVar3 + 0x1f6d) = 0;
  if ((*(int *)(iVar3 + 0x2048) != 0) && (*(char *)(*(int *)(iVar3 + 0x2048) + 0xfa) == '\0')) {
    FUN_10107908(_DAT_102b7080,_UNK_102b7084,_UNK_102b7088,_UNK_102b708c);
  }
  if (*(int *)(iVar3 + 0x14ac) < 0) {
    uVar7 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x14b0) != 0) {
      FUN_1025b2d0(uVar7,*(int *)(iVar3 + 0x14b0),*(int *)(iVar3 + 0x14a8) * 0x70);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x14b0));
    }
    *(undefined4 *)(iVar3 + 0x14b0) = uVar7;
    *(undefined4 *)(iVar3 + 0x14ac) = 0;
  }
  *(undefined4 *)(iVar3 + 0x14a8) = 0;
  if (*(int *)(iVar3 + 0x1fcc) < 0) {
    uVar7 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x1fd0) != 0) {
      FUN_1025b2d0(uVar7,*(int *)(iVar3 + 0x1fd0),*(int *)(iVar3 + 0x1fc8) * 0x28);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x1fd0));
    }
    *(undefined4 *)(iVar3 + 0x1fd0) = uVar7;
    *(undefined4 *)(iVar3 + 0x1fcc) = 0;
  }
  *(undefined4 *)(iVar3 + 0x1fc8) = 0;
  if (*(int *)(iVar3 + 0x1fa8) < 0) {
    uVar7 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x1fac) != 0) {
      FUN_1025b2d0(uVar7,*(int *)(iVar3 + 0x1fac),*(int *)(iVar3 + 0x1fa4) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x1fac));
    }
    *(undefined4 *)(iVar3 + 0x1fac) = uVar7;
    *(undefined4 *)(iVar3 + 0x1fa8) = 0;
    *(undefined4 *)(iVar3 + 0x1fa4) = 0;
  }
  else {
    *(undefined4 *)(iVar3 + 0x1fa4) = 0;
    if (*(int *)(iVar3 + 0x1fa8) != 0) {
      iVar6 = *(int *)(iVar3 + 0x1fac);
      iVar8 = 0;
      goto LAB_10104fe5;
    }
  }
  iVar6 = FUN_100fa1fa(0x20);
  if (*(int *)(iVar3 + 0x1fac) != 0) {
    FUN_1025b2d0(iVar6,*(int *)(iVar3 + 0x1fac),*(int *)(iVar3 + 0x1fa4) << 2);
    FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x1fac));
  }
  *(int *)(iVar3 + 0x1fac) = iVar6;
  *(undefined4 *)(iVar3 + 0x1fa8) = 8;
  iVar8 = *(int *)(iVar3 + 0x1fa4);
LAB_10104fe5:
  *(undefined4 *)(iVar6 + iVar8 * 4) = 0x10;
  iVar6 = *(int *)(iVar3 + 0x1fa4);
  *(int *)(iVar3 + 0x1fa4) = iVar6 + 1;
  *(undefined4 *)(iVar3 + 0x1e40) = *(undefined4 *)(*(int *)(iVar3 + 0x1fac) + iVar6 * 4);
  if (*(int *)(iVar3 + 0x1fb4) < 0) {
    uVar7 = FUN_100fa1fa(0);
    if (*(int *)(iVar3 + 0x1fb8) != 0) {
      FUN_1025b2d0(uVar7,*(int *)(iVar3 + 0x1fb8),*(int *)(iVar3 + 0x1fb0) * 0x3c);
      FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x1fb8));
    }
    *(undefined4 *)(iVar3 + 0x1fb8) = uVar7;
    *(undefined4 *)(iVar3 + 0x1fb4) = 0;
  }
  *(undefined4 *)(iVar3 + 0x1fb0) = 0;
  FUN_10107997(iVar3);
  FUN_10107abd();
  FUN_10107be5();
  FUN_10107c1d();
  if ((*(char *)(iVar3 + 0x27dd) != '\0') &&
     (cVar4 = *(char *)(iVar3 + 0x27dd) + -1, *(char *)(iVar3 + 0x27dd) = cVar4, cVar4 == '\0')) {
    *(undefined4 *)(iVar3 + 0x1e44) = 0;
    *(undefined1 *)(iVar3 + 0x27de) = 0;
  }
  if ((*(char *)(iVar3 + 0x27dc) != '\0') &&
     (cVar4 = *(char *)(iVar3 + 0x27dc) + -1, *(char *)(iVar3 + 0x27dc) = cVar4, cVar4 == '\0')) {
    FUN_100f99e6("(Debug Log: Auto-disabled some ImGuiDebugLogFlags after 2 frames)\n");
    *(uint *)(iVar3 + 0x27b4) = *(uint *)(iVar3 + 0x27b4) & ~*(uint *)(iVar3 + 0x27d8);
    *(undefined4 *)(iVar3 + 0x27d8) = 0;
  }
  *(undefined1 *)(iVar3 + 2) = 1;
  uStack_1c = DAT_102b8be0;
  FUN_10107cf6(&uStack_1c,4);
  FUN_10107d2b("Debug##Default",0,0);
  *(undefined4 *)(iVar3 + 0x2790) = 0;
  FUN_1010a49b(iVar3 + 0x2794);
  cVar4 = -1;
  if (*(char *)(iVar3 + 0xa4) == '\x01') {
    if (*(char *)(iVar3 + 0x27e4) == -1) {
      cVar4 = '\0';
    }
    else {
      sVar5 = (short)*(char *)(iVar3 + 0x27e4) + (ushort)((*(byte *)(iVar3 + 4) & 3) == 0);
      uVar10 = sVar5 * 0x6667;
      cVar4 = (char)sVar5 + ((char)(uVar10 >> 0x12) - (char)((int)uVar10 >> 0x1f)) * -10;
    }
  }
  *(char *)(iVar3 + 0x27e4) = cVar4;
  FUN_10101a75(iVar3,1);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

