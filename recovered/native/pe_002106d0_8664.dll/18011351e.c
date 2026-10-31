/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011351e */

int * FUN_18011351e(longlong param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                   uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  undefined4 uVar18;
  float fVar19;
  undefined8 local_60 [5];
  
  lVar7 = DAT_180419160;
  uVar15 = param_5 | 1;
  if (param_1 != 0) {
    if ((*(longlong *)(DAT_180419160 + 0x1628) != 0) &&
       (*(longlong *)(*(longlong *)(DAT_180419160 + 0x1628) + 0x428) == param_1)) {
      uVar15 = param_5 | 0xa1;
    }
    uVar6 = uVar15 | 0x80;
    if ((*(uint *)(param_1 + 0x14) & 0x10200) != 0x10200) {
      uVar6 = uVar15;
    }
    uVar15 = *(uint *)(param_1 + 0x14) >> 7 & 0x20 | uVar6;
  }
  piVar12 = (int *)FUN_18010f8b9(param_2);
  if (piVar12 == (int *)0x0) {
    piVar12 = (int *)FUN_1800fe7f8(0x168);
    FUN_1801061a2(piVar12);
    *piVar12 = param_2;
    piVar12[0x20] = *(int *)(lVar7 + 0x2178);
    uVar5 = *param_3;
    *(undefined8 *)(piVar12 + 0x24) = uVar5;
    *(undefined8 *)(piVar12 + 2) = uVar5;
    uVar5 = *param_4;
    *(undefined8 *)(piVar12 + 0x26) = uVar5;
    *(undefined8 *)(piVar12 + 4) = uVar5;
    piVar12[1] = uVar15;
    FUN_18012f4e4(piVar12);
    iVar11 = *(int *)(lVar7 + 0x2178);
    if (iVar11 == *(int *)(lVar7 + 0x217c)) {
      if (iVar11 == 0) {
        iVar14 = 8;
      }
      else {
        iVar14 = iVar11 / 2 + iVar11;
      }
      iVar16 = iVar11 + 1;
      if (iVar11 + 1 < iVar14) {
        iVar16 = iVar14;
      }
      lVar13 = FUN_1800fe7f8((longlong)iVar16 << 3);
      if (*(longlong *)(lVar7 + 0x2180) != 0) {
        FUN_1802a82f0(lVar13,*(longlong *)(lVar7 + 0x2180),(longlong)*(int *)(lVar7 + 0x2178) << 3);
        FUN_1800fe8d4(*(undefined8 *)(lVar7 + 0x2180));
      }
      *(longlong *)(lVar7 + 0x2180) = lVar13;
      *(int *)(lVar7 + 0x217c) = iVar16;
      iVar11 = *(int *)(lVar7 + 0x2178);
    }
    else {
      lVar13 = *(longlong *)(lVar7 + 0x2180);
    }
    *(int **)(lVar13 + (longlong)iVar11 * 8) = piVar12;
    *(int *)(lVar7 + 0x2178) = *(int *)(lVar7 + 0x2178) + 1;
    *(int *)(lVar7 + 0x21e8) = *(int *)(lVar7 + 0x21e8) + 1;
    if ((*(byte *)(lVar7 + 0x2acd) & 8) != 0) {
      if (param_1 == 0) {
        pcVar17 = "<NULL>";
      }
      else {
        pcVar17 = *(char **)(param_1 + 8);
      }
      FUN_1800fdfea("[viewport] Add Viewport %08X \'%s\'\n",param_2,pcVar17);
    }
    iVar11 = *(int *)(lVar7 + 0x21f0) + 1;
    *(int *)(lVar7 + 0x21f0) = iVar11;
    piVar12[0x22] = iVar11;
    uVar18 = FUN_1800eebe2();
    *(undefined4 *)(lVar7 + 0x1370) = uVar18;
    uVar18 = FUN_1800eebe2();
    *(undefined4 *)(lVar7 + 0x1374) = uVar18;
    uVar18 = FUN_180102463();
    *(undefined4 *)(lVar7 + 0x1378) = uVar18;
    uVar18 = FUN_180102463();
    *(undefined4 *)(lVar7 + 0x137c) = uVar18;
    lVar13 = FUN_180113b98(piVar12);
    piVar12[0xc] = *(int *)(lVar13 + 0x20);
  }
  else {
    fVar1 = (float)piVar12[2];
    fVar2 = (float)piVar12[3];
    if ((*(char *)((longlong)piVar12 + 0x71) != '\x01') ||
       (fVar8 = fVar1, fVar19 = fVar2, *piVar12 == 0x11111111)) {
      uVar5 = *param_3;
      *(undefined8 *)(piVar12 + 2) = uVar5;
      fVar8 = (float)uVar5;
      fVar19 = (float)((ulonglong)uVar5 >> 0x20);
    }
    fVar3 = (float)piVar12[4];
    fVar4 = (float)piVar12[5];
    if ((*(char *)((longlong)piVar12 + 0x72) != '\x01') ||
       (fVar9 = fVar3, fVar10 = fVar4, *piVar12 == 0x11111111)) {
      uVar5 = *param_4;
      *(undefined8 *)(piVar12 + 4) = uVar5;
      fVar9 = (float)uVar5;
      fVar10 = (float)((ulonglong)uVar5 >> 0x20);
    }
    piVar12[1] = piVar12[1] & 0x3000U | uVar15;
    if (((((fVar1 == fVar8) && (!NAN(fVar1) && !NAN(fVar8))) && (fVar2 == fVar19)) &&
        ((!NAN(fVar2) && !NAN(fVar19) && (fVar3 == fVar9)))) && (!NAN(fVar3) && !NAN(fVar9))) {
      if ((fVar4 == fVar10) && (!NAN(fVar4) && !NAN(fVar10))) goto code_r0x000180113829;
    }
    FUN_18012f4e4(piVar12);
  }
code_r0x000180113829:
  *(longlong *)(piVar12 + 0x1e) = param_1;
  piVar12[0x21] = *(int *)(lVar7 + 4);
  *(ulonglong *)(piVar12 + 8) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(piVar12 + 0x52) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(piVar12 + 2) >> 0x20),
                (float)*(undefined8 *)(piVar12 + 0x52) + (float)*(undefined8 *)(piVar12 + 2));
  FUN_18012bf4a(piVar12,local_60,piVar12 + 0x52,piVar12 + 0x54);
  *(undefined8 *)(piVar12 + 10) = local_60[0];
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  return piVar12;
}

