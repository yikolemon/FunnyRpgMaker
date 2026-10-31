/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010e792 */

int * __fastcall FUN_1010e792(int param_1,int param_2,float *param_3,float *param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_18;
  
  iVar5 = DAT_1039d74c;
  uVar11 = param_5 | 1;
  if (param_1 != 0) {
    if ((*(int *)(DAT_1039d74c + 0x14dc) != 0) &&
       (*(int *)(*(int *)(DAT_1039d74c + 0x14dc) + 0x3b0) == param_1)) {
      uVar11 = param_5 | 0xa1;
    }
    uVar10 = uVar11 | 0x80;
    if ((*(uint *)(param_1 + 0xc) & 0x10200) != 0x10200) {
      uVar10 = uVar11;
    }
    uVar11 = *(uint *)(param_1 + 0xc) >> 7 & 0x20 | uVar10;
  }
  piVar6 = (int *)FUN_1010ad03(param_2);
  if (piVar6 == (int *)0x0) {
    piVar6 = (int *)FUN_100fa1fa(0x120);
    FUN_101016d2();
    *piVar6 = param_2;
    piVar6[0x17] = *(int *)(iVar5 + 0x1fe0);
    fVar1 = *param_3;
    fVar3 = param_3[1];
    piVar6[0x1c] = (int)fVar3;
    piVar6[0x1b] = (int)fVar1;
    piVar6[3] = (int)fVar3;
    piVar6[2] = (int)fVar1;
    fVar1 = *param_4;
    fVar3 = param_4[1];
    piVar6[0x1d] = (int)fVar1;
    piVar6[0x1e] = (int)fVar3;
    piVar6[4] = (int)fVar1;
    piVar6[5] = (int)fVar3;
    piVar6[1] = uVar11;
    FUN_101293f2();
    iVar8 = *(int *)(iVar5 + 0x1fe0);
    if (iVar8 == *(int *)(iVar5 + 0x1fe4)) {
      if (iVar8 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar8 / 2 + iVar8;
      }
      iVar12 = iVar8 + 1;
      if (iVar8 + 1 < iVar9) {
        iVar12 = iVar9;
      }
      iVar9 = FUN_100fa1fa(iVar12 * 4);
      if (*(int *)(iVar5 + 0x1fe8) != 0) {
        FUN_1025b2d0(iVar9,*(int *)(iVar5 + 0x1fe8),*(int *)(iVar5 + 0x1fe0) << 2);
        FUN_100fa2cb(*(undefined4 *)(iVar5 + 0x1fe8));
      }
      *(int *)(iVar5 + 0x1fe8) = iVar9;
      *(int *)(iVar5 + 0x1fe4) = iVar12;
      iVar8 = *(int *)(iVar5 + 0x1fe0);
    }
    else {
      iVar9 = *(int *)(iVar5 + 0x1fe8);
    }
    *(int **)(iVar9 + iVar8 * 4) = piVar6;
    *(int *)(iVar5 + 0x1fe0) = *(int *)(iVar5 + 0x1fe0) + 1;
    *(int *)(iVar5 + 0x2034) = *(int *)(iVar5 + 0x2034) + 1;
    if ((*(byte *)(iVar5 + 0x27b5) & 8) != 0) {
      if (param_1 == 0) {
        pcVar7 = "<NULL>";
      }
      else {
        pcVar7 = *(char **)(param_1 + 4);
      }
      FUN_100f99e6("[viewport] Add Viewport %08X \'%s\'\n",param_2,pcVar7);
    }
    iVar8 = *(int *)(iVar5 + 0x203c) + 1;
    *(int *)(iVar5 + 0x203c) = iVar8;
    piVar6[0x19] = iVar8;
    fVar13 = (float10)FUN_100ea38a(*(undefined4 *)(iVar5 + 0x1268),piVar6[2]);
    *(float *)(iVar5 + 0x1268) = (float)fVar13;
    fVar13 = (float10)FUN_100ea38a(*(undefined4 *)(iVar5 + 0x126c),piVar6[3]);
    *(float *)(iVar5 + 0x126c) = (float)fVar13;
    fVar13 = (float10)FUN_100fdbca(*(undefined4 *)(iVar5 + 0x1270),
                                   (float)piVar6[2] + (float)piVar6[4]);
    *(float *)(iVar5 + 0x1270) = (float)fVar13;
    fVar13 = (float10)FUN_100fdbca(*(undefined4 *)(iVar5 + 0x1274),
                                   (float)piVar6[3] + (float)piVar6[5]);
    *(float *)(iVar5 + 0x1274) = (float)fVar13;
    iVar8 = FUN_1010ede0(piVar6);
    piVar6[0xc] = *(int *)(iVar8 + 0x20);
  }
  else {
    fVar3 = (float)piVar6[2];
    fVar1 = (float)piVar6[3];
    if ((*(char *)((int)piVar6 + 0x55) != '\x01') ||
       (fVar14 = fVar1, fVar15 = fVar3, *piVar6 == 0x11111111)) {
      fVar15 = *param_3;
      fVar14 = param_3[1];
      piVar6[3] = (int)param_3[1];
      piVar6[2] = (int)fVar15;
    }
    fVar4 = (float)piVar6[4];
    fVar2 = (float)piVar6[5];
    if ((*(char *)((int)piVar6 + 0x56) != '\x01') ||
       (fVar16 = fVar2, fVar17 = fVar4, *piVar6 == 0x11111111)) {
      fVar17 = *param_4;
      fVar16 = param_4[1];
      piVar6[5] = (int)param_4[1];
      piVar6[4] = (int)fVar17;
    }
    piVar6[1] = piVar6[1] & 0x3000U | uVar11;
    if (((((fVar3 == fVar15) && (!NAN(fVar3) && !NAN(fVar15))) && (fVar1 == fVar14)) &&
        ((!NAN(fVar1) && !NAN(fVar14) && (fVar4 == fVar17)))) && (!NAN(fVar4) && !NAN(fVar17))) {
      if ((fVar2 == fVar16) && (!NAN(fVar2) && !NAN(fVar16))) goto code_r0x1010ea9a;
    }
    FUN_101293f2();
  }
code_r0x1010ea9a:
  piVar6[0x16] = param_1;
  piVar6[0x18] = *(int *)(iVar5 + 4);
  *(ulonglong *)(piVar6 + 8) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(piVar6 + 0x40) >> 0x20) +
                (float)((ulonglong)*(undefined8 *)(piVar6 + 2) >> 0x20),
                (float)*(undefined8 *)(piVar6 + 0x40) + (float)*(undefined8 *)(piVar6 + 2));
  FUN_10126046(&local_18,piVar6 + 0x40,piVar6 + 0x42);
  *(undefined8 *)(piVar6 + 10) = local_18;
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0xf8) = 1;
  }
  return piVar6;
}

