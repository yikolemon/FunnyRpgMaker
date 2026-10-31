/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012bff8 */

void FUN_18012bff8(longlong param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_108;
  if (0xffffff < param_2) {
    lVar5 = *(longlong *)(param_1 + 0x48);
    fVar3 = *(float *)(lVar5 + 8);
    fVar4 = *(float *)(lVar5 + 0xc);
    fVar8 = (float)*(undefined8 *)(lVar5 + 0x10) + fVar3;
    fVar9 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x10) >> 0x20) + fVar4;
    piVar2 = *(int **)(*(longlong *)(param_1 + 0x428) + 800);
    local_78 = fVar3;
    fStack_74 = fVar4;
    fStack_70 = fVar8;
    fStack_6c = fVar9;
    FUN_18018ecc2(piVar2 + 0x22,piVar2);
    if (*piVar2 == 0) {
      FUN_18018f126(piVar2);
    }
    local_c0 = CONCAT44(fVar9 + DAT_1802dc280._4_4_,fVar8 + (float)DAT_1802dc280);
    local_d0 = CONCAT44(fVar4 + DAT_1802de550._4_4_,fVar3 + (float)DAT_1802de550);
    FUN_18018f5a4(piVar2,&local_d0,&local_c0,0);
    local_e0 = 0;
    local_e8 = 0;
    FUN_180192d20(piVar2,&local_78,&fStack_70,param_2);
    iVar1 = *piVar2;
    puVar6 = (undefined8 *)(*(longlong *)(piVar2 + 2) + (longlong)iVar1 * 0x48 + -0x48);
    puVar7 = &local_c0;
    for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *piVar2 = iVar1 + -1;
    FUN_18012c218(piVar2);
    FUN_18018f126(piVar2);
    FUN_18018f750(piVar2);
    if ((*(byte *)(*(longlong *)(param_1 + 0x418) + 0x495) & 1) != 0) {
      lVar5 = FUN_18011189e(*(undefined8 *)(param_1 + 0x428));
      piVar2 = *(int **)(lVar5 + 800);
      FUN_18018ecc2(piVar2 + 0x22,piVar2);
      if (*piVar2 == 0) {
        FUN_18018f126(piVar2);
      }
      FUN_18018f5a4(piVar2,&local_78,&fStack_70,0);
      lVar5 = *(longlong *)(param_1 + 0x418);
      local_c0 = *(undefined8 *)(lVar5 + 0x60);
      fStack_b8 = (float)*(undefined8 *)(lVar5 + 0x68) + *(float *)(lVar5 + 0x60);
      fStack_b4 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x68) >> 0x20) +
                  *(float *)(lVar5 + 100);
      lVar5 = *(longlong *)(param_1 + 0x428);
      local_d0 = *(undefined8 *)(lVar5 + 0x60);
      fStack_c8 = (float)*(undefined8 *)(lVar5 + 0x68) + *(float *)(lVar5 + 0x60);
      fStack_c4 = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x68) >> 0x20) +
                  *(float *)(lVar5 + 100);
      local_e8 = 0;
      FUN_18019c60e(piVar2,&local_d0,&local_c0,param_2);
      FUN_18018f750(piVar2);
    }
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_108);
}

