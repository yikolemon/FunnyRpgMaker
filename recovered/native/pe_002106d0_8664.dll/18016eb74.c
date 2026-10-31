/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016eb74 */

void FUN_18016eb74(undefined8 param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  lVar10 = DAT_180419160;
  *(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1;
  lVar4 = *(longlong *)(lVar10 + 0x1608);
  uVar6 = FUN_18016eb10();
  lVar8 = FUN_18016e74e(lVar4,uVar6);
  *(undefined4 *)(lVar8 + 0xc) = 0;
  *(uint *)(lVar8 + 0x10) = param_2;
  *(undefined4 *)(lVar8 + 4) = param_3;
  *(longlong *)(lVar4 + 0x208) = lVar8;
  *(undefined1 *)(lVar4 + 0x1b8) = 0;
  *(undefined4 *)(lVar8 + 0x24) = *(undefined4 *)(lVar4 + 0x15c);
  *(undefined4 *)(lVar8 + 0x28) = *(undefined4 *)(lVar4 + 0x170);
  uVar9 = *(undefined8 *)(lVar4 + 0x2c0);
  *(undefined8 *)(lVar8 + 0x2c) = *(undefined8 *)(lVar4 + 0x2b8);
  *(undefined8 *)(lVar8 + 0x34) = uVar9;
  uVar9 = *(undefined8 *)(lVar4 + 0x2b0);
  *(undefined8 *)(lVar8 + 0x4c) = *(undefined8 *)(lVar4 + 0x2a8);
  *(undefined8 *)(lVar8 + 0x54) = uVar9;
  *(undefined8 *)(lVar4 + 0x2a8) = *(undefined8 *)(lVar4 + 0x298);
  *(undefined8 *)(lVar4 + 0x2b0) = *(undefined8 *)(lVar4 + 0x2a0);
  fVar2 = *(float *)(lVar10 + 0xe04);
  fVar16 = (float)FUN_180102463(*(float *)(lVar4 + 0x90) * DAT_1802dbb2c,
                                *(undefined4 *)(lVar4 + 0x9c));
  fVar19 = *(float *)(lVar4 + 0x2a0);
  fVar17 = (float)FUN_180102463(fVar2 - *(float *)(lVar4 + 0x90),0);
  fVar20 = *(float *)(lVar4 + 0x2a0);
  fVar3 = *(float *)(lVar4 + 0x19c);
  fVar18 = (float)FUN_180102463(fVar2 - *(float *)(lVar4 + 0x90),0);
  fVar18 = (fVar3 - fVar2) + fVar18;
  *(float *)(lVar8 + 0x14) = fVar18;
  fVar18 = fVar18 + DAT_1802ac570;
  fVar19 = (float)FUN_1800eebe2((fVar19 + fVar2) - fVar17,(float)(int)fVar16 + fVar20);
  uVar6 = FUN_180102463(fVar19 - *(float *)(lVar4 + 0x60),fVar18);
  *(undefined4 *)(lVar8 + 0x18) = uVar6;
  uVar6 = *(undefined4 *)(lVar4 + 0x15c);
  *(undefined4 *)(lVar8 + 0x20) = uVar6;
  *(undefined4 *)(lVar8 + 0x1c) = uVar6;
  iVar14 = *(int *)(lVar8 + 0x60);
  iVar12 = param_2 + 1;
  if ((iVar14 == 0) || (iVar14 == iVar12)) {
    *(bool *)(lVar8 + 8) = iVar14 == 0;
    if (iVar14 == 0) {
      iVar14 = *(int *)(lVar8 + 100);
      goto LAB_18016ed61;
    }
  }
  else {
    iVar14 = *(int *)(lVar8 + 100);
    if (iVar14 < 0) {
      iVar14 = 0;
      uVar9 = FUN_1800fe7f8(0);
      if (*(longlong *)(lVar8 + 0x68) != 0) {
        FUN_1802a82f0(uVar9,*(longlong *)(lVar8 + 0x68),(longlong)*(int *)(lVar8 + 0x60) * 0x1c);
        FUN_1800fe8d4(*(undefined8 *)(lVar8 + 0x68));
      }
      *(undefined8 *)(lVar8 + 0x68) = uVar9;
      *(undefined4 *)(lVar8 + 100) = 0;
    }
    *(undefined4 *)(lVar8 + 0x60) = 0;
    *(undefined1 *)(lVar8 + 8) = 1;
LAB_18016ed61:
    if (iVar14 <= (int)param_2) {
      uVar9 = FUN_1800fe7f8((longlong)iVar12 * 0x1c);
      if (*(longlong *)(lVar8 + 0x68) != 0) {
        FUN_1802a82f0(uVar9,*(longlong *)(lVar8 + 0x68),(longlong)*(int *)(lVar8 + 0x60) * 0x1c);
        FUN_1800fe8d4(*(undefined8 *)(lVar8 + 0x68));
      }
      *(undefined8 *)(lVar8 + 0x68) = uVar9;
      *(int *)(lVar8 + 100) = iVar12;
    }
    if ((int)param_2 < 0) goto LAB_18016ef2c;
    iVar14 = *(int *)(lVar8 + 0x60);
    iVar15 = 0;
    do {
      if (iVar14 == *(int *)(lVar8 + 100)) {
        if (iVar14 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar14 / 2 + iVar14;
        }
        iVar13 = iVar14 + 1;
        if (iVar14 + 1 < iVar7) {
          iVar13 = iVar7;
        }
        lVar10 = FUN_1800fe7f8((longlong)iVar13 * 0x1c);
        if (*(longlong *)(lVar8 + 0x68) != 0) {
          FUN_1802a82f0(lVar10,*(longlong *)(lVar8 + 0x68),(longlong)*(int *)(lVar8 + 0x60) * 0x1c);
          FUN_1800fe8d4(*(undefined8 *)(lVar8 + 0x68));
        }
        *(longlong *)(lVar8 + 0x68) = lVar10;
        *(int *)(lVar8 + 100) = iVar13;
        iVar14 = *(int *)(lVar8 + 0x60);
      }
      else {
        lVar10 = *(longlong *)(lVar8 + 0x68);
      }
      lVar5 = (longlong)iVar14 * 0x1c;
      *(float *)(lVar10 + lVar5) = (float)iVar15 / (float)(int)param_2;
      puVar1 = (undefined8 *)(lVar10 + 4 + lVar5);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar10 + 0x14 + lVar5) = 0;
      iVar14 = *(int *)(lVar8 + 0x60) + 1;
      *(int *)(lVar8 + 0x60) = iVar14;
      iVar15 = iVar15 + 1;
    } while (iVar12 != iVar15);
  }
  fVar20 = DAT_1802dbb2c;
  fVar19 = DAT_1802bb8e0;
  if (0 < (int)param_2) {
    lVar10 = 0xc;
    uVar11 = 0;
    do {
      lVar5 = *(longlong *)(lVar8 + 0x68);
      fVar3 = *(float *)(lVar4 + 0x60);
      fVar17 = (float)FUN_18016e43a(uVar11 & 0xffffffff);
      fVar16 = *(float *)(lVar4 + 0x60);
      uVar11 = uVar11 + 1;
      fVar18 = (float)FUN_18016e43a(uVar11 & 0xffffffff);
      *(float *)(lVar5 + lVar10) = (float)(int)(fVar17 + fVar3 + fVar20);
      *(undefined4 *)(lVar5 + 4 + lVar10) = 0xff7fffff;
      *(float *)(lVar5 + 8 + lVar10) = (float)(int)(fVar18 + fVar16 + fVar19 + fVar20);
      *(undefined4 *)(lVar5 + 0xc + lVar10) = 0x7f7fffff;
      FUN_1801147ea(lVar5 + lVar10,lVar4 + 0x2b8);
      lVar10 = lVar10 + 0x1c;
    } while (param_2 != uVar11);
  }
LAB_18016ef2c:
  if (1 < *(int *)(lVar8 + 0x10)) {
    FUN_18019537c(lVar8 + 0x70,*(undefined8 *)(lVar4 + 800),*(int *)(lVar8 + 0x10) + 1);
    FUN_180195542(lVar8 + 0x70,*(undefined8 *)(lVar4 + 800),1);
    FUN_18016e65a(0);
  }
  fVar19 = (float)FUN_18016e43a(*(undefined4 *)(lVar8 + 0xc));
  fVar20 = (float)FUN_18016e43a(*(int *)(lVar8 + 0xc) + 1);
  FUN_18011a05a((fVar20 - fVar19) * DAT_1802de7b4);
  fVar19 = (float)FUN_180102463(fVar2 - *(float *)(lVar4 + 0x90),0);
  *(float *)(lVar4 + 0x1a0) = fVar19;
  *(float *)(lVar4 + 0x158) =
       (float)(int)(*(float *)(lVar4 + 0x19c) + *(float *)(lVar4 + 0x60) + fVar19);
  *(float *)(lVar4 + 0x2a0) = (fVar20 + *(float *)(lVar4 + 0x60)) - fVar2;
  *(undefined4 *)(lVar4 + 0x2a4) = *(undefined4 *)(lVar4 + 0x2d4);
  return;
}

