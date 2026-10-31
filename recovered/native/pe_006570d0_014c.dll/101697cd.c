/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101697cd */

void FUN_101697cd(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  iVar8 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar3 = *(int *)(iVar8 + 0x14cc);
  uVar6 = FUN_10169777(param_1,param_2);
  iVar7 = FUN_1016936c(iVar3,uVar6);
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(int *)(iVar7 + 0x10) = param_2;
  *(undefined4 *)(iVar7 + 4) = param_3;
  *(int *)(iVar3 + 0x1e8) = iVar7;
  *(undefined1 *)(iVar3 + 0x1a4) = 0;
  *(undefined4 *)(iVar7 + 0x24) = *(undefined4 *)(iVar3 + 0x148);
  *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)(iVar3 + 0x15c);
  uVar6 = *(undefined4 *)(iVar3 + 0x290);
  uVar4 = *(undefined4 *)(iVar3 + 0x294);
  uVar5 = *(undefined4 *)(iVar3 + 0x298);
  *(undefined4 *)(iVar7 + 0x2c) = *(undefined4 *)(iVar3 + 0x28c);
  *(undefined4 *)(iVar7 + 0x30) = uVar6;
  *(undefined4 *)(iVar7 + 0x34) = uVar4;
  *(undefined4 *)(iVar7 + 0x38) = uVar5;
  uVar6 = *(undefined4 *)(iVar3 + 0x280);
  uVar4 = *(undefined4 *)(iVar3 + 0x284);
  uVar5 = *(undefined4 *)(iVar3 + 0x288);
  *(undefined4 *)(iVar7 + 0x4c) = *(undefined4 *)(iVar3 + 0x27c);
  *(undefined4 *)(iVar7 + 0x50) = uVar6;
  *(undefined4 *)(iVar7 + 0x54) = uVar4;
  *(undefined4 *)(iVar7 + 0x58) = uVar5;
  *(undefined4 *)(iVar3 + 0x27c) = *(undefined4 *)(iVar3 + 0x26c);
  *(undefined4 *)(iVar3 + 0x280) = *(undefined4 *)(iVar3 + 0x270);
  *(undefined4 *)(iVar3 + 0x284) = *(undefined4 *)(iVar3 + 0x274);
  *(undefined4 *)(iVar3 + 0x288) = *(undefined4 *)(iVar3 + 0x278);
  fVar2 = *(float *)(iVar8 + 0xd1c);
  fVar12 = (float10)FUN_100fdbca(*(float *)(iVar3 + 0x80) * DAT_102b70e0,
                                 *(undefined4 *)(iVar3 + 0x8c));
  fVar16 = *(float *)(iVar3 + 0x274);
  fVar13 = (float10)FUN_100fdbca(fVar2 - *(float *)(iVar3 + 0x80),0);
  fVar17 = *(float *)(iVar3 + 0x274);
  fVar15 = *(float *)(iVar3 + 0x188);
  fVar14 = (float10)FUN_100fdbca(fVar2 - *(float *)(iVar3 + 0x80),0);
  fVar15 = (fVar15 - fVar2) + (float)fVar14;
  *(float *)(iVar7 + 0x14) = fVar15;
  fVar15 = fVar15 + DAT_1028b430;
  fVar12 = (float10)FUN_100ea38a((fVar16 + fVar2) - (float)fVar13,(float)(int)fVar12 + fVar17);
  fVar12 = (float10)FUN_100fdbca((float)fVar12 - *(float *)(iVar3 + 0x50),fVar15);
  *(float *)(iVar7 + 0x18) = (float)fVar12;
  uVar6 = *(undefined4 *)(iVar3 + 0x148);
  *(undefined4 *)(iVar7 + 0x20) = uVar6;
  *(undefined4 *)(iVar7 + 0x1c) = uVar6;
  iVar8 = *(int *)(iVar7 + 0x5c);
  if ((iVar8 == 0) || (iVar8 == param_2 + 1)) {
    *(bool *)(iVar7 + 8) = iVar8 == 0;
    if (iVar8 == 0) {
      iVar8 = *(int *)(iVar7 + 0x60);
      goto LAB_10169a3d;
    }
  }
  else {
    iVar8 = *(int *)(iVar7 + 0x60);
    if (iVar8 < 0) {
      uVar6 = FUN_100fa1fa(0);
      if (*(int *)(iVar7 + 100) != 0) {
        FUN_1025b2d0(uVar6,*(int *)(iVar7 + 100),*(int *)(iVar7 + 0x5c) * 0x1c);
        FUN_100fa2cb(*(undefined4 *)(iVar7 + 100));
      }
      *(undefined4 *)(iVar7 + 100) = uVar6;
      *(undefined4 *)(iVar7 + 0x60) = 0;
      iVar8 = 0;
    }
    *(undefined4 *)(iVar7 + 0x5c) = 0;
    *(undefined1 *)(iVar7 + 8) = 1;
LAB_10169a3d:
    if (iVar8 <= param_2) {
      uVar6 = FUN_100fa1fa((param_2 + 1) * 0x1c);
      if (*(int *)(iVar7 + 100) != 0) {
        FUN_1025b2d0(uVar6,*(int *)(iVar7 + 100),*(int *)(iVar7 + 0x5c) * 0x1c);
        FUN_100fa2cb(*(undefined4 *)(iVar7 + 100));
      }
      *(undefined4 *)(iVar7 + 100) = uVar6;
      *(int *)(iVar7 + 0x60) = param_2 + 1;
    }
    if (param_2 < 0) goto LAB_10169c3d;
    iVar8 = *(int *)(iVar7 + 0x5c);
    iVar11 = 0;
    do {
      if (iVar8 == *(int *)(iVar7 + 0x60)) {
        if (iVar8 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar8 / 2 + iVar8;
        }
        iVar10 = iVar8 + 1;
        if (iVar8 + 1 < iVar9) {
          iVar10 = iVar9;
        }
        iVar9 = FUN_100fa1fa(iVar10 * 0x1c);
        if (*(int *)(iVar7 + 100) != 0) {
          FUN_1025b2d0(iVar9,*(int *)(iVar7 + 100),*(int *)(iVar7 + 0x5c) * 0x1c);
          FUN_100fa2cb(*(undefined4 *)(iVar7 + 100));
        }
        *(int *)(iVar7 + 100) = iVar9;
        *(int *)(iVar7 + 0x60) = iVar10;
        iVar8 = *(int *)(iVar7 + 0x5c);
      }
      else {
        iVar9 = *(int *)(iVar7 + 100);
      }
      iVar8 = iVar8 * 0x1c;
      *(float *)(iVar9 + iVar8) = (float)iVar11 / (float)param_2;
      puVar1 = (undefined4 *)(iVar9 + 4 + iVar8);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined8 *)(iVar9 + 0x14 + iVar8) = 0;
      iVar8 = *(int *)(iVar7 + 0x5c) + 1;
      *(int *)(iVar7 + 0x5c) = iVar8;
      iVar11 = iVar11 + 1;
    } while (param_2 + 1 != iVar11);
  }
  if (0 < param_2) {
    iVar8 = 0;
    iVar11 = 0xc;
    do {
      iVar9 = *(int *)(iVar7 + 100);
      fVar16 = *(float *)(iVar3 + 0x50);
      fVar12 = (float10)FUN_1016905b(iVar8);
      fVar17 = fVar16 + (float)fVar12 + DAT_102b70e0;
      fVar16 = *(float *)(iVar3 + 0x50);
      iVar8 = iVar8 + 1;
      fVar12 = (float10)FUN_1016905b(iVar8);
      fVar16 = fVar16 + (float)fVar12 + DAT_102b8a50 + DAT_102b70e0;
      *(float *)(iVar9 + iVar11) = (float)(int)fVar17;
      *(undefined4 *)(iVar9 + 4 + iVar11) = 0xff7fffff;
      *(float *)(iVar9 + 8 + iVar11) = (float)(int)fVar16;
      *(undefined4 *)(iVar9 + 0xc + iVar11) = 0x7f7fffff;
      FUN_1010fa6a(iVar3 + 0x28c);
      iVar11 = iVar11 + 0x1c;
    } while (param_2 != iVar8);
  }
LAB_10169c3d:
  if (1 < *(int *)(iVar7 + 0x10)) {
    FUN_1018dc92(*(undefined4 *)(iVar3 + 0x2e8),*(int *)(iVar7 + 0x10) + 1);
    FUN_1018de6c(*(undefined4 *)(iVar3 + 0x2e8),1);
    FUN_101692a9(0);
  }
  fVar12 = (float10)FUN_1016905b(*(undefined4 *)(iVar7 + 0xc));
  fVar13 = (float10)FUN_1016905b(*(int *)(iVar7 + 0xc) + 1);
  FUN_1011520a(((float)fVar13 - (float)fVar12) * DAT_102b8c94);
  fVar12 = (float10)FUN_100fdbca(fVar2 - *(float *)(iVar3 + 0x80),0);
  *(float *)(iVar3 + 0x18c) = (float)fVar12;
  *(float *)(iVar3 + 0x144) =
       (float)(int)(*(float *)(iVar3 + 0x188) + *(float *)(iVar3 + 0x50) + (float)fVar12);
  *(float *)(iVar3 + 0x274) = ((float)fVar13 + *(float *)(iVar3 + 0x50)) - fVar2;
  *(undefined4 *)(iVar3 + 0x278) = *(undefined4 *)(iVar3 + 0x2a8);
  return;
}

