/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019381a */

void FUN_1019381a(undefined4 param_1,float param_2,float *param_3,uint param_4,undefined2 param_5,
                 float *param_6)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_54;
  iVar2 = FUN_10190228(param_2,0xbf800000);
  puVar3 = (uint *)FUN_101902dc(param_5);
  if ((puVar3 != (uint *)0x0) && ((*puVar3 & 2) != 0)) {
    uVar4 = param_4 | 0xffffff;
    if ((*puVar3 & 1) == 0) {
      uVar4 = param_4;
    }
    fVar8 = DAT_1028b430;
    if (0.0 <= param_2) {
      fVar8 = param_2 / *(float *)(iVar2 + 0x10);
    }
    fVar7 = (float)puVar3[2] * fVar8 + (float)(int)*param_3;
    fVar5 = (float)puVar3[4] * fVar8 + (float)(int)*param_3;
    if ((param_6 == (float *)0x0) ||
       ((fVar7 < param_6[2] || fVar7 == param_6[2] && (*param_6 <= fVar5)))) {
      fVar6 = (float)puVar3[3] * fVar8 + (float)(int)param_3[1];
      local_48 = fVar8 * (float)puVar3[5] + (float)(int)param_3[1];
      local_4c = (float)puVar3[6];
      local_54 = (float)puVar3[7];
      local_50 = (float)puVar3[8];
      fVar8 = (float)puVar3[9];
      if (param_6 != (float *)0x0) {
        fVar1 = *param_6;
        if (fVar7 < fVar1) {
          local_4c = local_4c +
                     (local_50 - local_4c) * (DAT_1028b430 - (fVar5 - fVar1) / (fVar5 - fVar7));
          fVar7 = fVar1;
          local_44 = fVar8;
        }
        fVar1 = param_6[1];
        if (fVar6 < fVar1) {
          local_54 = local_54 +
                     (fVar8 - local_54) * (DAT_1028b430 - (local_48 - fVar1) / (local_48 - fVar6));
          fVar6 = fVar1;
        }
        fVar1 = param_6[2];
        if (fVar1 < fVar5) {
          local_50 = (local_50 - local_4c) * ((fVar1 - fVar7) / (fVar5 - fVar7)) + local_4c;
          fVar5 = fVar1;
        }
        fVar1 = param_6[3];
        if (fVar1 < local_48) {
          fVar8 = (fVar8 - local_54) * ((fVar1 - fVar6) / (local_48 - fVar6)) + local_54;
          local_48 = fVar1;
        }
        if (local_48 <= fVar6) goto LAB_10193b07;
      }
      local_44 = fVar8;
      local_40 = fVar5;
      local_3c = fVar7;
      local_38 = fVar6;
      FUN_10188516(6,4);
      local_1c = local_50;
      local_18 = local_44;
      local_24 = local_4c;
      local_20 = local_54;
      local_2c = local_40;
      local_28 = local_48;
      local_34 = local_3c;
      local_30 = local_38;
      FUN_10188774(&local_34,&local_2c,&local_24,&local_1c,uVar4);
    }
  }
LAB_10193b07:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_54)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

