/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012c9f0 */

void FUN_18012c9f0(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  float local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  ulonglong local_c0;
  
  local_c0 = DAT_180402640 ^ (ulonglong)auStack_108;
  lVar4 = (longlong)param_2 * 0x1c;
  fVar1 = *(float *)(param_1 + 0x98);
  local_e8 = 0.0;
  FUN_18012c6e4(local_d0,param_1,(longlong)param_2,fVar1);
  fVar6 = DAT_1802de570._4_4_;
  fVar5 = (float)DAT_1802de570;
  fVar2 = *(float *)(&DAT_1802de098 + lVar4);
  fVar7 = (float)*(undefined8 *)(&DAT_1802de080 + lVar4) * fVar1;
  fVar8 = (float)((ulonglong)*(undefined8 *)(&DAT_1802de080 + lVar4) >> 0x20) * fVar1;
  uVar3 = *(undefined8 *)(&DAT_1802de090 + lVar4);
  fVar11 = (float)local_d0._0_8_;
  fVar12 = SUB84(local_d0._0_8_,4);
  fVar9 = (float)local_d0._8_8_ - fVar11;
  fVar10 = SUB84(local_d0._8_8_,4) - fVar12;
  local_d8 = CONCAT44((float)((ulonglong)*(undefined8 *)(&DAT_1802de088 + lVar4) >> 0x20) * fVar10 +
                      fVar12 + DAT_1802de570._4_4_ + fVar8,
                      (float)*(undefined8 *)(&DAT_1802de088 + lVar4) * fVar9 + fVar11 +
                      (float)DAT_1802de570 + fVar7);
  local_e0 = 0;
  local_e8 = fVar2;
  FUN_18019117c(*(undefined8 *)(param_1 + 800),&local_d8,fVar1,DAT_1802dead4 + fVar2);
  local_e8 = DAT_1802dead8 + fVar2;
  local_d8 = CONCAT44(fVar10 * (float)((ulonglong)uVar3 >> 0x20) + fVar12 + fVar6 + fVar8,
                      fVar9 * (float)uVar3 + fVar11 + fVar5 + fVar7);
  local_e0 = 0;
  FUN_18019117c(*(undefined8 *)(param_1 + 800),&local_d8,fVar1,fVar2);
  lVar4 = *(longlong *)(param_1 + 800);
  local_e0 = 0;
  local_e8 = (float)param_4;
  FUN_18018fc54(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),param_3);
  *(undefined4 *)(lVar4 + 0x50) = 0;
  if (DAT_180402640 == (local_c0 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_c0 ^ (ulonglong)auStack_108);
}

