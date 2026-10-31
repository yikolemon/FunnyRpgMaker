/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e6a5e */

void FUN_1400e6a5e(undefined8 param_1,undefined8 param_2,float param_3,float *param_4,uint param_5,
                  undefined2 param_6,float *param_7)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  float *local_e8;
  uint local_e0;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  lVar3 = FUN_1400e30e8(param_1,param_3,DAT_1401c86a4);
  puVar4 = (uint *)FUN_1400e3188(lVar3,param_6);
  if ((puVar4 != (uint *)0x0) && ((*puVar4 & 2) != 0)) {
    uVar2 = param_5 | 0xffffff;
    if ((*puVar4 & 1) == 0) {
      uVar2 = param_5;
    }
    fVar9 = DAT_1401c86c8;
    if (0.0 <= param_3) {
      fVar9 = param_3 / *(float *)(lVar3 + 0x14);
    }
    fVar7 = (float)puVar4[2] * fVar9 + (float)(int)*param_4;
    fVar5 = (float)puVar4[4] * fVar9 + (float)(int)*param_4;
    if ((param_7 == (float *)0x0) ||
       ((fVar7 < param_7[2] || fVar7 == param_7[2] && (*param_7 <= fVar5)))) {
      fVar6 = (float)puVar4[3] * fVar9 + (float)(int)param_4[1];
      fVar8 = fVar9 * (float)puVar4[5] + (float)(int)param_4[1];
      fVar9 = (float)puVar4[6];
      fVar10 = (float)puVar4[7];
      fVar12 = (float)puVar4[8];
      fVar11 = (float)puVar4[9];
      if (param_7 != (float *)0x0) {
        fVar1 = *param_7;
        if (fVar7 < fVar1) {
          fVar9 = fVar9 + (fVar12 - fVar9) * (DAT_1401c86c8 - (fVar5 - fVar1) / (fVar5 - fVar7));
          fVar7 = fVar1;
        }
        fVar1 = param_7[1];
        if (fVar6 < fVar1) {
          fVar10 = fVar10 + (fVar11 - fVar10) * (DAT_1401c86c8 - (fVar8 - fVar1) / (fVar8 - fVar6));
          fVar6 = fVar1;
        }
        fVar1 = param_7[2];
        if (fVar1 < fVar5) {
          fVar12 = (fVar12 - fVar9) * ((fVar1 - fVar7) / (fVar5 - fVar7)) + fVar9;
          fVar5 = fVar1;
        }
        fVar1 = param_7[3];
        if (fVar1 < fVar8) {
          fVar11 = (fVar11 - fVar10) * ((fVar1 - fVar6) / (fVar8 - fVar6)) + fVar10;
          fVar8 = fVar1;
        }
        if (fVar8 <= fVar6) goto LAB_1400e6d10;
      }
      FUN_1400dae70(param_2,6,4);
      local_e8 = &local_b8;
      local_e0 = uVar2;
      local_d0 = fVar7;
      local_cc = fVar6;
      local_c8 = fVar5;
      local_c4 = fVar8;
      local_c0 = fVar9;
      local_bc = fVar10;
      local_b8 = fVar12;
      local_b4 = fVar11;
      FUN_1400db0ac(param_2);
    }
  }
LAB_1400e6d10:
  if (DAT_140f17b40 != (local_b0 ^ (ulonglong)auStack_108)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_b0 ^ (ulonglong)auStack_108);
  }
  return;
}

