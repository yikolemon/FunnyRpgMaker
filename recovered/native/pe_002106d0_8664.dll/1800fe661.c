/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe661 */

undefined8 *
FUN_1800fe661(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             float *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_88 [32];
  float local_68;
  float local_64;
  float local_60 [2];
  float local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_180402640 ^ (ulonglong)auStack_88;
  FUN_1800fe454(local_58,param_2,param_3,param_5);
  FUN_1800fe454(local_60,param_3,param_4,param_5);
  FUN_1800fe454(&local_68,param_4,param_2,param_5);
  fVar1 = param_5[1];
  fVar2 = *param_5;
  fVar8 = fVar1 - local_60[1];
  fVar10 = fVar1 - local_58[1];
  fVar11 = fVar2 - local_60[0];
  fVar12 = fVar2 - local_58[0];
  fVar8 = fVar11 * fVar11 + fVar8 * fVar8;
  fVar10 = fVar12 * fVar12 + fVar10 * fVar10;
  uVar9 = FUN_1800eebe2(fVar8,(fVar2 - local_68) * (fVar2 - local_68) +
                              (fVar1 - local_64) * (fVar1 - local_64));
  uVar9 = FUN_1800eebe2(fVar10,uVar9);
  iVar6 = -(uint)(extraout_XMM0_Da == fVar8);
  iVar7 = -(uint)(extraout_XMM0_Da == fVar10);
  auVar3._4_4_ = iVar6;
  auVar3._0_4_ = iVar6;
  auVar3._8_4_ = iVar7;
  auVar3._12_4_ = iVar7;
  uVar4 = movmskpd(uVar9,auVar3);
  pfVar5 = &local_68;
  if ((uVar4 & 1) != 0) {
    pfVar5 = local_60;
  }
  if ((uVar4 & 2) != 0) {
    pfVar5 = local_58;
  }
  *param_1 = *(undefined8 *)pfVar5;
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_88)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_88);
}

