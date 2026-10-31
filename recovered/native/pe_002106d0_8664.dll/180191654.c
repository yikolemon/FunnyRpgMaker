/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180191654 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180191654(longlong param_1,undefined8 *param_2,float *param_3,undefined4 param_4,
                  float param_5,float param_6,int param_7)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (param_7 < 1) {
    uVar8 = FUN_180102463(*param_3,param_3[1]);
    param_7 = FUN_18018f50a(param_1,uVar8);
  }
  lVar6 = (longlong)(param_7 + 1) + (longlong)*(int *)(param_1 + 0x50);
  iVar7 = (int)lVar6;
  if (*(int *)(param_1 + 0x54) < iVar7) {
    uVar3 = FUN_1800fe7f8(lVar6 * 8);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1802a82f0(uVar3,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
    }
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    *(int *)(param_1 + 0x54) = iVar7;
  }
  fVar9 = (float)FUN_180284590(param_4);
  fVar10 = (float)FUN_18028a830(param_4);
  if (-1 < param_7) {
    fVar14 = (float)(_DAT_1802b0ce0 ^ (uint)fVar10);
    iVar7 = 0;
    do {
      fVar13 = ((float)iVar7 / (float)param_7) * (param_6 - param_5) + param_5;
      fVar11 = (float)FUN_18028a830(fVar13);
      fVar1 = param_3[1];
      fVar12 = (float)FUN_180284590(fVar13);
      fVar13 = *param_3;
      uVar3 = *param_2;
      iVar5 = *(int *)(param_1 + 0x50);
      if (iVar5 == *(int *)(param_1 + 0x54)) {
        if (iVar5 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar5 / 2 + iVar5;
        }
        iVar4 = iVar5 + 1;
        if (iVar5 + 1 < iVar2) {
          iVar4 = iVar2;
        }
        lVar6 = FUN_1800fe7f8((longlong)iVar4 << 3);
        if (*(longlong *)(param_1 + 0x58) != 0) {
          FUN_1802a82f0(lVar6,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3)
          ;
          FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
        }
        *(longlong *)(param_1 + 0x58) = lVar6;
        *(int *)(param_1 + 0x54) = iVar4;
        iVar5 = *(int *)(param_1 + 0x50);
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x58);
      }
      *(ulonglong *)(lVar6 + (longlong)iVar5 * 8) =
           CONCAT44((float)((ulonglong)uVar3 >> 0x20) +
                    fVar12 * fVar13 * fVar10 + fVar11 * fVar1 * fVar9,
                    (float)uVar3 + fVar12 * fVar13 * fVar9 + fVar11 * fVar1 * fVar14);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      iVar7 = iVar7 + 1;
    } while (param_7 + 1 != iVar7);
  }
  return;
}

