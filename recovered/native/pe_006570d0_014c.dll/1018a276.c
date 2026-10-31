/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018a276 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1018a276(int param_1,float *param_2,float *param_3,float param_4,float param_5,float param_6,
            int param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  
  if (param_7 < 1) {
    fVar11 = (float10)FUN_100fdbca(*param_3,param_3[1]);
    param_7 = FUN_101880ee((float)fVar11);
  }
  iVar10 = param_7 + *(int *)(param_1 + 0x38) + 1;
  if (*(int *)(param_1 + 0x3c) < iVar10) {
    uVar6 = FUN_100fa1fa(iVar10 * 8);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1025b2d0(uVar6,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x40) = uVar6;
    *(int *)(param_1 + 0x3c) = iVar10;
  }
  fVar11 = (float10)FUN_1026d4b0((double)param_4);
  fVar12 = (float10)FUN_102704b0((double)param_4);
  if (-1 < param_7) {
    fVar15 = (float)((uint)(float)fVar12 ^ _DAT_1028f620);
    iVar10 = 0;
    do {
      dVar3 = (double)(((float)iVar10 / (float)param_7) * (param_6 - param_5) + param_5);
      fVar13 = (float10)FUN_102704b0(dVar3);
      fVar1 = param_3[1];
      fVar14 = (float10)FUN_1026d4b0(dVar3);
      fVar2 = *param_3;
      fVar4 = *param_2;
      fVar5 = param_2[1];
      iVar7 = *(int *)(param_1 + 0x38);
      if (iVar7 == *(int *)(param_1 + 0x3c)) {
        if (iVar7 == 0) {
          iVar8 = 8;
        }
        else {
          iVar8 = iVar7 / 2 + iVar7;
        }
        iVar9 = iVar7 + 1;
        if (iVar7 + 1 < iVar8) {
          iVar9 = iVar8;
        }
        iVar8 = FUN_100fa1fa(iVar9 * 8);
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_1025b2d0(iVar8,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
          FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
        }
        *(int *)(param_1 + 0x40) = iVar8;
        *(int *)(param_1 + 0x3c) = iVar9;
        iVar7 = *(int *)(param_1 + 0x38);
      }
      else {
        iVar8 = *(int *)(param_1 + 0x40);
      }
      *(ulonglong *)(iVar8 + iVar7 * 8) =
           CONCAT44(fVar5 + fVar2 * (float)fVar14 * (float)fVar12 +
                            fVar1 * (float)fVar13 * (float)fVar11,
                    fVar4 + fVar2 * (float)fVar14 * (float)fVar11 + fVar1 * (float)fVar13 * fVar15);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      iVar10 = iVar10 + 1;
    } while (param_7 + 1 != iVar10);
  }
  return;
}

