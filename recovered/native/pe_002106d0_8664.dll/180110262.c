/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180110262 */

void FUN_180110262(void)

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
  
  lVar3 = DAT_180419160;
  iVar6 = *(int *)(DAT_180419160 + 8);
  if (iVar6 != *(int *)(DAT_180419160 + 4)) {
    FUN_18010f21a();
    iVar6 = *(int *)(lVar3 + 4);
  }
  if (*(int *)(lVar3 + 0x10) == iVar6) {
    return;
  }
  *(int *)(lVar3 + 0x10) = iVar6;
  *(undefined4 *)(lVar3 + 0xfc) = 0;
  FUN_1801065b3(lVar3,4);
  iVar6 = *(int *)(lVar3 + 0x2178);
  if ((longlong)iVar6 != 0) {
    lVar10 = *(longlong *)(lVar3 + 0x2180);
    lVar13 = 0;
    do {
      lVar12 = *(longlong *)(lVar10 + lVar13);
      FUN_18011053d(lVar12);
      if (*(longlong *)(lVar12 + 0xb8) != 0) {
        if ((*(float *)(lVar12 + 0xac) == (float)*(double *)(lVar3 + 0x18)) &&
           (!NAN(*(float *)(lVar12 + 0xac)) && !NAN((float)*(double *)(lVar3 + 0x18)))) {
          uVar7 = FUN_180107f4c(lVar12);
          FUN_180195685(lVar12 + 200,*(undefined8 *)(lVar12 + 0x110),uVar7);
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar6 * 8 != lVar13);
  }
  FUN_180110699();
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
      cVar5 = FUN_18010f205(lVar2);
      if (cVar5 != '\0') {
        if ((lVar2 != lVar13 && lVar2 != lVar10) && (*(uint *)(lVar2 + 0x14) & 0x1000000) == 0) {
          FUN_18012c317(lVar2,*(uint *)(lVar2 + 0x14) >> 0x19 & 1);
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar6 * 8 != lVar11);
  }
  bVar4 = true;
  do {
    bVar8 = bVar4;
    if (lVar10 != 0) {
      cVar5 = FUN_18010f205(lVar10);
      if (cVar5 != '\0') {
        FUN_18012c317(lVar10,*(uint *)(lVar10 + 0x14) >> 0x19 & 1);
      }
    }
    lVar10 = lVar13;
    bVar4 = false;
  } while (bVar8);
  if ((*(char *)(lVar3 + 0x8c) != '\0') && (*(int *)(lVar3 + 0x2698) != -1)) {
    FUN_180102cce(*(undefined8 *)(lVar3 + 0x118),*(undefined4 *)(lVar3 + 0xed8),
                  *(int *)(lVar3 + 0x2698),0xffffffff,0xff000000,0x30000000);
  }
  *(undefined8 *)(lVar3 + 0xf4) = 0;
  if ((longlong)*(int *)(lVar3 + 0x2178) != 0) {
    plVar9 = *(longlong **)(lVar3 + 0x2180);
    plVar1 = plVar9 + *(int *)(lVar3 + 0x2178);
    do {
      lVar10 = *plVar9;
      FUN_180110a5d(lVar10 + 0x110);
      if (*(longlong *)(lVar10 + 0xc0) != 0) {
        if ((*(float *)(lVar10 + 0xb0) == (float)*(double *)(lVar3 + 0x18)) &&
           (!NAN(*(float *)(lVar10 + 0xb0)) && !NAN((float)*(double *)(lVar3 + 0x18)))) {
          uVar7 = FUN_180103228(lVar10);
          FUN_180195685(lVar10 + 200,*(undefined8 *)(lVar10 + 0x110),uVar7);
        }
      }
      iVar6 = *(int *)(lVar10 + 0xd8);
      if ((longlong)iVar6 != 0) {
        lVar13 = *(longlong *)(lVar10 + 0xe0);
        lVar12 = 0;
        do {
          FUN_18018f22a(*(undefined8 *)(lVar13 + lVar12));
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
      FUN_18019a430(*(undefined8 *)(lVar10 + lVar13));
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar6 * 8 != lVar13);
  }
  FUN_1801065b3(lVar3,5);
  return;
}

