/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a2014 */

void FUN_1403a2014(longlong param_1,float *param_2,float param_3,uint param_4,int param_5,
                  uint param_6)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  if (param_3 < DAT_1404ecffc) {
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 == *(int *)(param_1 + 0x54)) {
      if (iVar3 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar3 / 2 + iVar3;
      }
      iVar12 = iVar3 + 1;
      if (iVar3 + 1 < iVar7) {
        iVar12 = iVar7;
      }
      lVar5 = FUN_14030fcc8((longlong)iVar12 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1404b97c0(lVar5,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar5;
      *(int *)(param_1 + 0x54) = iVar12;
      iVar3 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar5 + (longlong)iVar3 * 8) = *(undefined8 *)param_2;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    return;
  }
  uVar8 = (ulonglong)param_6;
  if ((int)param_6 < 1) {
    iVar3 = FUN_1403a09da(param_1,param_3);
    uVar8 = 0x30 / (longlong)iVar3 & 0xffffffff;
  }
  uVar4 = FUN_14033d1af(uVar8,1,0xc);
  uVar10 = param_4 - param_5;
  if ((int)param_4 < param_5) {
    uVar10 = param_5 - param_4;
  }
  uVar11 = uVar10;
  if (1 < (int)uVar4) {
    uVar11 = uVar10 / uVar4;
    if (uVar10 % uVar4 != 0) {
      iVar3 = uVar11 + 2;
      bVar2 = true;
      uVar10 = uVar4 - (int)(uVar4 - uVar10 % uVar4) / 2;
      goto LAB_1403a2158;
    }
  }
  iVar3 = uVar11 + 1;
  bVar2 = false;
  uVar10 = uVar4;
LAB_1403a2158:
  iVar7 = *(int *)(param_1 + 0x50);
  iVar3 = iVar3 + iVar7;
  iVar12 = *(int *)(param_1 + 0x54);
  if (iVar12 < iVar3) {
    if (iVar12 == 0) {
      iVar12 = 8;
    }
    else {
      iVar12 = iVar12 / 2 + iVar12;
    }
    if (iVar12 <= iVar3) {
      iVar12 = iVar3;
    }
    lVar5 = FUN_14030fcc8((longlong)iVar12 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1404b97c0(lVar5,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0x58));
    }
    *(longlong *)(param_1 + 0x58) = lVar5;
    *(int *)(param_1 + 0x54) = iVar12;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x58);
  }
  *(int *)(param_1 + 0x50) = iVar3;
  uVar11 = param_4;
  if (0x2f < param_4) {
    iVar3 = ((uint)((int)param_4 / 6 + ((int)param_4 >> 0x1f)) >> 3) - ((int)param_4 >> 0x1f);
    uVar9 = param_4 + iVar3 * -0x30;
    uVar11 = param_4 + 0x30 + iVar3 * -0x30;
    if (-1 < (int)uVar9) {
      uVar11 = uVar9;
    }
  }
  pfVar6 = (float *)(lVar5 + (longlong)iVar7 * 8);
  if (param_5 < (int)param_4) {
    do {
      uVar9 = uVar11 + 0x30;
      if (-1 < (int)uVar11) {
        uVar9 = uVar11;
      }
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)(int)uVar9 * 8);
      *pfVar6 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 + (longlong)(int)uVar9 * 8) *
                param_3 + *param_2;
      pfVar6[1] = fVar1 * param_3 + param_2[1];
      pfVar6 = pfVar6 + 2;
      param_4 = param_4 - uVar10;
      uVar11 = uVar9 - uVar10;
      uVar10 = uVar4;
    } while (param_5 <= (int)param_4);
  }
  else {
    do {
      uVar9 = uVar11 - 0x30;
      if ((int)uVar11 < 0x30) {
        uVar9 = uVar11;
      }
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (longlong)(int)uVar9 * 8);
      *pfVar6 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 + (longlong)(int)uVar9 * 8) *
                param_3 + *param_2;
      pfVar6[1] = fVar1 * param_3 + param_2[1];
      pfVar6 = pfVar6 + 2;
      param_4 = param_4 + uVar10;
      uVar11 = uVar9 + uVar10;
      uVar10 = uVar4;
    } while ((int)param_4 <= param_5);
  }
  if (bVar2) {
    iVar3 = ((uint)(param_5 / 6 + (param_5 >> 0x1f)) >> 3) - (param_5 >> 0x1f);
    uVar4 = param_5 + iVar3 * -0x30;
    uVar10 = param_5 + 0x30 + iVar3 * -0x30;
    if (-1 < (int)uVar4) {
      uVar10 = uVar4;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x74 + (ulonglong)uVar10 * 8);
    *pfVar6 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x70 + (ulonglong)uVar10 * 8) * param_3 +
              *param_2;
    pfVar6[1] = param_3 * fVar1 + param_2[1];
  }
  return;
}

