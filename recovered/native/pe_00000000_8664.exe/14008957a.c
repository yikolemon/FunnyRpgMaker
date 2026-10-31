/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008957a */

void FUN_14008957a(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar3 = DAT_140f2a910;
  iVar6 = *(int *)(DAT_140f2a910 + 8);
  if (iVar6 != *(int *)(DAT_140f2a910 + 4)) {
    FUN_140088532();
    iVar6 = *(int *)(lVar3 + 4);
  }
  if (*(int *)(lVar3 + 0x10) == iVar6) {
    return;
  }
  *(int *)(lVar3 + 0x10) = iVar6;
  *(undefined4 *)(lVar3 + 0xfc) = 0;
  FUN_14007f8cb(lVar3,4);
  iVar6 = *(int *)(lVar3 + 0x2178);
  if ((longlong)iVar6 != 0) {
    lVar10 = *(longlong *)(lVar3 + 0x2180);
    lVar13 = 0;
    do {
      lVar12 = *(longlong *)(lVar10 + lVar13);
      FUN_140089855(lVar12);
      if (*(longlong *)(lVar12 + 0xb8) != 0) {
        if ((*(float *)(lVar12 + 0xac) == (float)*(double *)(lVar3 + 0x18)) &&
           (!NAN(*(float *)(lVar12 + 0xac)) && !NAN((float)*(double *)(lVar3 + 0x18)))) {
          uVar7 = FUN_140081264(lVar12);
          FUN_1400e0bf9(lVar12 + 200,*(undefined8 *)(lVar12 + 0x110),uVar7);
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar6 * 8 != lVar13);
  }
  FUN_1400899b1();
  lVar10 = *(longlong *)(lVar3 + 0x23e8);
  if (lVar10 == 0) {
    lVar10 = 0;
    lVar13 = 0;
  }
  else {
    if ((*(byte *)(lVar10 + 0x15) & 0x20) == 0) {
      lVar10 = *(longlong *)(lVar10 + 0x428);
    }
    else {
      lVar10 = 0;
    }
    lVar13 = *(longlong *)(lVar3 + 0x23f8);
  }
  iVar6 = *(int *)(lVar3 + 0x15a8);
  if ((longlong)iVar6 != 0) {
    lVar12 = *(longlong *)(lVar3 + 0x15b0);
    lVar11 = 0;
    do {
      lVar2 = *(longlong *)(lVar12 + lVar11);
      cVar5 = FUN_14008851d(lVar2);
      if (cVar5 != '\0') {
        if ((lVar2 != lVar13 && lVar2 != lVar10) && (*(uint *)(lVar2 + 0x14) & 0x1000000) == 0) {
          FUN_1400a5247(lVar2,*(uint *)(lVar2 + 0x14) >> 0x19 & 1);
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar6 * 8 != lVar11);
  }
  bVar4 = true;
  do {
    bVar8 = bVar4;
    if (lVar10 != 0) {
      cVar5 = FUN_14008851d(lVar10);
      if (cVar5 != '\0') {
        FUN_1400a5247(lVar10,*(uint *)(lVar10 + 0x14) >> 0x19 & 1);
      }
    }
    lVar10 = lVar13;
    bVar4 = false;
  } while (bVar8);
  if ((*(char *)(lVar3 + 0x8c) != '\0') && (*(int *)(lVar3 + 0x2698) != -1)) {
    FUN_14007bf8a(*(undefined8 *)(lVar3 + 0x118),*(undefined4 *)(lVar3 + 0xed8),
                  *(int *)(lVar3 + 0x2698),0xffffffff,0xff000000,0x30000000);
  }
  *(undefined8 *)(lVar3 + 0xf4) = 0;
  if ((longlong)*(int *)(lVar3 + 0x2178) != 0) {
    plVar9 = *(longlong **)(lVar3 + 0x2180);
    plVar1 = plVar9 + *(int *)(lVar3 + 0x2178);
    do {
      lVar10 = *plVar9;
      FUN_140089d75(lVar10 + 0x110);
      if (*(longlong *)(lVar10 + 0xc0) != 0) {
        if ((*(float *)(lVar10 + 0xb0) == (float)*(double *)(lVar3 + 0x18)) &&
           (!NAN(*(float *)(lVar10 + 0xb0)) && !NAN((float)*(double *)(lVar3 + 0x18)))) {
          uVar7 = FUN_14007c4e4(lVar10);
          FUN_1400e0bf9(lVar10 + 200,*(undefined8 *)(lVar10 + 0x110),uVar7);
        }
      }
      iVar6 = *(int *)(lVar10 + 0xd8);
      if ((longlong)iVar6 != 0) {
        lVar13 = *(longlong *)(lVar10 + 0xe0);
        lVar12 = 0;
        do {
          FUN_1400da79e(*(undefined8 *)(lVar13 + lVar12));
          lVar12 = lVar12 + 8;
        } while ((longlong)iVar6 * 8 != lVar12);
      }
      *(int *)(lVar3 + 0xf4) = *(int *)(lVar3 + 0xf4) + *(int *)(lVar10 + 0xd4);
      *(int *)(lVar3 + 0xf8) = *(int *)(lVar3 + 0xf8) + *(int *)(lVar10 + 0xd0);
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  if (((*(byte *)(lVar3 + 0x34) & 0x10) != 0) &&
     (iVar6 = *(int *)(lVar3 + 0x1300), (longlong)iVar6 != 0)) {
    lVar10 = *(longlong *)(lVar3 + 0x1308);
    lVar13 = 0;
    do {
      FUN_1400e59a4(*(undefined8 *)(lVar10 + lVar13));
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar6 * 8 != lVar13);
  }
  FUN_14007f8cb(lVar3,5);
  return;
}

