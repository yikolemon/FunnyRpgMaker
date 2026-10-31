/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101896ac */

void __thiscall
FUN_101896ac(int param_1,float *param_2,float param_3,uint param_4,int param_5,int param_6)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  if (DAT_102b70e0 <= param_3) {
    if (param_6 < 1) {
      iVar3 = FUN_101880ee(param_3);
      param_6 = (int)(0x30 / (longlong)iVar3);
    }
    uVar4 = FUN_10125d9a(param_6,1,0xc);
    uVar9 = param_4 - param_5;
    if ((int)param_4 < param_5) {
      uVar9 = param_5 - param_4;
    }
    uVar10 = uVar4;
    if ((int)uVar4 < 2) {
      iVar3 = uVar9 + 1;
      bVar2 = false;
    }
    else {
      uVar8 = uVar9 % uVar4;
      if (uVar8 == 0) {
        iVar3 = uVar9 / uVar4 + 1;
      }
      else {
        iVar3 = uVar9 / uVar4 + 2;
        uVar10 = uVar4 - (int)(uVar4 - uVar8) / 2;
      }
      bVar2 = uVar8 != 0;
    }
    iVar6 = *(int *)(param_1 + 0x38);
    iVar11 = *(int *)(param_1 + 0x3c);
    iVar3 = iVar3 + iVar6;
    if (iVar11 < iVar3) {
      if (iVar11 == 0) {
        iVar11 = 8;
      }
      else {
        iVar11 = iVar11 / 2 + iVar11;
      }
      if (iVar11 <= iVar3) {
        iVar11 = iVar3;
      }
      iVar5 = FUN_100fa1fa(iVar11 * 8);
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar5,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
      }
      *(int *)(param_1 + 0x40) = iVar5;
      *(int *)(param_1 + 0x3c) = iVar11;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x38) = iVar3;
    uVar9 = param_4;
    if (0x2f < param_4) {
      iVar3 = ((uint)((int)param_4 / 6 + ((int)param_4 >> 0x1f)) >> 3) - ((int)param_4 >> 0x1f);
      uVar8 = param_4 + iVar3 * -0x30;
      uVar9 = param_4 + 0x30 + iVar3 * -0x30;
      if (-1 < (int)uVar8) {
        uVar9 = uVar8;
      }
    }
    pfVar7 = (float *)(iVar5 + iVar6 * 8);
    if (param_5 < (int)param_4) {
      do {
        uVar8 = uVar9 + 0x30;
        if (-1 < (int)uVar9) {
          uVar8 = uVar9;
        }
        fVar1 = *(float *)(*(int *)(param_1 + 0x2c) + 0x5c + uVar8 * 8);
        *pfVar7 = *(float *)(*(int *)(param_1 + 0x2c) + 0x58 + uVar8 * 8) * param_3 + *param_2;
        pfVar7[1] = fVar1 * param_3 + param_2[1];
        pfVar7 = pfVar7 + 2;
        param_4 = param_4 - uVar10;
        uVar9 = uVar8 - uVar10;
        uVar10 = uVar4;
      } while (param_5 <= (int)param_4);
    }
    else {
      do {
        uVar8 = uVar9 - 0x30;
        if ((int)uVar9 < 0x30) {
          uVar8 = uVar9;
        }
        fVar1 = *(float *)(*(int *)(param_1 + 0x2c) + 0x5c + uVar8 * 8);
        *pfVar7 = *(float *)(*(int *)(param_1 + 0x2c) + 0x58 + uVar8 * 8) * param_3 + *param_2;
        pfVar7[1] = fVar1 * param_3 + param_2[1];
        pfVar7 = pfVar7 + 2;
        param_4 = param_4 + uVar10;
        uVar9 = uVar8 + uVar10;
        uVar10 = uVar4;
      } while ((int)param_4 <= param_5);
    }
    if (bVar2) {
      iVar3 = ((uint)(param_5 / 6 + (param_5 >> 0x1f)) >> 3) - (param_5 >> 0x1f);
      iVar6 = param_5 + iVar3 * -0x30;
      iVar3 = param_5 + 0x30 + iVar3 * -0x30;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      fVar1 = *(float *)(*(int *)(param_1 + 0x2c) + 0x5c + iVar3 * 8);
      *pfVar7 = *(float *)(*(int *)(param_1 + 0x2c) + 0x58 + iVar3 * 8) * param_3 + *param_2;
      pfVar7[1] = param_3 * fVar1 + param_2[1];
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == *(int *)(param_1 + 0x3c)) {
      if (iVar3 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar3 / 2 + iVar3;
      }
      iVar11 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar11 = iVar6;
      }
      iVar6 = FUN_100fa1fa(iVar11 * 8);
      if (*(int *)(param_1 + 0x40) != 0) {
        FUN_1025b2d0(iVar6,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
      }
      *(int *)(param_1 + 0x40) = iVar6;
      *(int *)(param_1 + 0x3c) = iVar11;
      iVar3 = *(int *)(param_1 + 0x38);
    }
    else {
      iVar6 = *(int *)(param_1 + 0x40);
    }
    *(undefined8 *)(iVar6 + iVar3 * 8) = *(undefined8 *)param_2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  return;
}

