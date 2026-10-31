/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032af19 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032af19(void)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  
  lVar5 = DAT_14062a630;
  local_70 = ram0x000140613b10 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(DAT_14062a630 + 0x1608);
  iVar2 = *(int *)(DAT_14062a630 + 0x1fe0);
  uVar3 = *(uint *)(DAT_14062a630 + 0x1fe4);
  local_88 = *(float *)(DAT_14062a630 + 0x1ffc);
  fStack_84 = *(float *)(DAT_14062a630 + 0x2000);
  fStack_80 = *(float *)(DAT_14062a630 + 0x2004);
  fStack_7c = *(float *)(DAT_14062a630 + 0x2008);
  if (*(char *)(lVar4 + 0x1b8) == '\0') {
    local_88 = (float)FUN_140328ebe(local_88,*(undefined4 *)(lVar4 + 0x2b8),
                                    *(undefined4 *)(lVar4 + 0x2c0));
    fStack_80 = (float)FUN_140328ebe(fStack_80,*(undefined4 *)(lVar4 + 0x2b8),
                                     *(undefined4 *)(lVar4 + 0x2c0));
  }
  if (*(char *)(lVar5 + 0x2262) == '\0') {
    uVar8 = uVar3 & 0x40;
  }
  else {
    uVar8 = uVar3 & 0x40;
    if (*(int *)(lVar5 + 0x220c) == *(int *)(lVar4 + 0x1b0) && uVar8 == 0) {
      if ((uVar3 & 4) == 0) {
        FUN_140328920(lVar5 + 0x2268);
        *(undefined1 *)(lVar5 + 0x2262) = 0;
        uVar7 = 1;
        if (*(char *)(DAT_14062a630 + 0x22a1) == '\0') {
          uVar7 = *(undefined1 *)(DAT_14062a630 + 0x2262);
        }
        *(undefined1 *)(DAT_14062a630 + 0x2261) = uVar7;
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        if (*(int *)(lVar5 + 0x2270) == 0) {
          FUN_140328920(lVar5 + 0x2268);
        }
      }
    }
  }
  if ((uVar8 == 0 & *(byte *)(lVar5 + 0x22a1)) == 1) {
    uVar8 = *(uint *)(lVar5 + 0x22a4);
    if (((uVar8 >> 9 & 1) != 0) || ((*(byte *)(lVar4 + 0x16) & 1) == 0)) {
      if ((uVar8 >> 10 & 1) == 0) {
        if (((uVar8 & 0x10) != 0) || (*(int *)(lVar5 + 0x21f8) != iVar2)) {
          lVar9 = lVar5 + 0x2358;
          if (lVar4 == *(longlong *)(lVar5 + 0x2200)) {
            lVar9 = lVar5 + 0x22e8;
          }
          cVar6 = FUN_14033e69b(lVar9,&local_88);
          if (cVar6 != '\0') {
            FUN_140328920(lVar9);
          }
          fVar13 = fStack_7c;
          fVar12 = fStack_84;
          if ((*(byte *)(lVar5 + 0x22a4) & 0x20) != 0) {
            if (fStack_84 < *(float *)(lVar4 + 0x284)) {
              if (((*(float *)(lVar4 + 0x27c) < fStack_7c) && (local_88 < *(float *)(lVar4 + 0x280))
                  ) && (*(float *)(lVar4 + 0x278) <= fStack_80 &&
                        fStack_80 != *(float *)(lVar4 + 0x278))) {
                fVar10 = (float)FUN_140328ebe(fStack_7c);
                fVar11 = (float)FUN_140328ebe(fVar12,*(undefined4 *)(lVar4 + 0x27c),
                                              *(undefined4 *)(lVar4 + 0x284));
                if ((fVar13 - fVar12) * DAT_1404ed8e4 <= fVar10 - fVar11) {
                  cVar6 = FUN_14033e69b(lVar5 + 0x2320,&local_88);
                  if (cVar6 != '\0') {
                    FUN_140328920(lVar5 + 0x2320);
                  }
                }
              }
            }
          }
        }
      }
      else {
        FUN_14033e564(iVar2,uVar3);
      }
    }
  }
  if (*(int *)(lVar5 + 0x21f8) == iVar2) {
    if (*(longlong *)(lVar5 + 0x2200) != lVar4) {
      FUN_140328560(lVar4);
    }
    *(undefined4 *)(lVar5 + 0x220c) = *(undefined4 *)(lVar4 + 0x1b0);
    FUN_140328290(*(undefined4 *)(lVar5 + 0x1f9c));
    *(undefined4 *)(lVar5 + 0x2208) = *(undefined4 *)(lVar5 + 0x1f9c);
    *(undefined1 *)(lVar5 + 0x21f7) = 1;
    *(uint *)(lVar5 + 0x2210) = uVar3;
    if ((*(byte *)(lVar5 + 0x1fe6) & 0x20) != 0) {
      *(undefined8 *)(lVar5 + 0x2258) = *(undefined8 *)(lVar5 + 0x1fb8);
    }
    fVar12 = (float)*(undefined8 *)(lVar4 + 0x168);
    fVar13 = (float)((ulonglong)*(undefined8 *)(lVar4 + 0x168) >> 0x20);
    pfVar1 = (float *)(lVar4 + 0x458 + (longlong)*(int *)(lVar4 + 0x1b0) * 0x10);
    *pfVar1 = local_88 - fVar12;
    pfVar1[1] = fStack_84 - fVar13;
    pfVar1[2] = fStack_80 - fVar12;
    pfVar1[3] = fStack_7c - fVar13;
  }
  if (ram0x000140613b10 == (local_70 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_70 ^ (ulonglong)auStack_a8);
}

