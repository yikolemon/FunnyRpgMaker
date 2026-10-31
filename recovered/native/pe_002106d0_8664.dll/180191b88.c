/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180191b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180191b88(int *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  int param_11)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  while( true ) {
    param_11 = param_11 + 1;
    fVar7 = param_8 - param_2;
    fVar8 = param_9 - param_3;
    fVar9 = fVar8 * (param_4 - param_8) - fVar7 * (param_5 - param_9);
    fVar10 = fVar8 * (param_6 - param_8) - fVar7 * (param_7 - param_9);
    uVar5 = -(uint)((float)((uint)fVar9 ^ _DAT_1802b0ce0) <= fVar9);
    uVar6 = -(uint)((float)((uint)fVar10 ^ _UNK_1802b0ce4) <= fVar10);
    fVar9 = (float)(~uVar6 & ((uint)fVar10 ^ _UNK_1802b0ce4) | (uint)fVar10 & uVar6) +
            (float)(~uVar5 & ((uint)fVar9 ^ _DAT_1802b0ce0) | (uint)fVar9 & uVar5);
    if (fVar9 * fVar9 < (fVar7 * fVar7 + fVar8 * fVar8) * param_10) {
      iVar1 = *param_1;
      if (iVar1 == param_1[1]) {
        if (iVar1 == 0) {
          iVar3 = 8;
        }
        else {
          iVar3 = iVar1 / 2 + iVar1;
        }
        iVar4 = iVar1 + 1;
        if (iVar1 + 1 < iVar3) {
          iVar4 = iVar3;
        }
        lVar2 = FUN_1800fe7f8((longlong)iVar4 << 3);
        if (*(longlong *)(param_1 + 2) != 0) {
          FUN_1802a82f0(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1 << 3);
          FUN_1800fe8d4(*(undefined8 *)(param_1 + 2));
        }
        *(longlong *)(param_1 + 2) = lVar2;
        param_1[1] = iVar4;
        iVar1 = *param_1;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 2);
      }
      *(float *)(lVar2 + (longlong)iVar1 * 8) = param_8;
      *(float *)(lVar2 + 4 + (longlong)iVar1 * 8) = param_9;
      *param_1 = *param_1 + 1;
      return;
    }
    if (param_11 == 0xb) break;
    fVar9 = (param_2 + param_4) * (float)DAT_1802de570;
    fVar7 = (param_6 + param_4) * DAT_1802de570._4_4_;
    param_6 = (param_6 + param_8) * DAT_1802dbb2c;
    fVar10 = (fVar9 + fVar7) * (float)DAT_1802de570;
    param_4 = (param_6 + fVar7) * DAT_1802de570._4_4_;
    fVar11 = (param_4 + fVar10) * DAT_1802dbb2c;
    fVar7 = (param_3 + param_5) * (float)DAT_1802de570;
    fVar8 = (param_7 + param_5) * DAT_1802de570._4_4_;
    param_7 = (param_7 + param_9) * DAT_1802dbb2c;
    fVar12 = (fVar7 + fVar8) * (float)DAT_1802de570;
    param_5 = (param_7 + fVar8) * DAT_1802de570._4_4_;
    fVar8 = (param_5 + fVar12) * DAT_1802dbb2c;
    FUN_180191b88(param_1,param_2,param_3,fVar9,fVar7,fVar10,fVar12,fVar11,fVar8,param_10,param_11);
    param_2 = fVar11;
    param_3 = fVar8;
  }
  return;
}

