/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101510ff */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101510ff(undefined4 param_1,float *param_2,uint param_3,float param_4,float param_5,
                 undefined4 param_6,int param_7,int param_8,byte param_9,undefined1 *param_10,
                 undefined1 *param_11)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  undefined4 local_84 [20];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_a8;
  local_9c = DAT_1039d74c;
  local_90 = FUN_100fd57d(param_6,0);
  FUN_100fdb2e(local_1c,param_6,local_90,0,0xbf800000);
  fVar3 = local_9c;
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = 0;
  }
  if (param_11 != (undefined1 *)0x0) {
    *param_11 = 0;
  }
  fVar12 = *param_2;
  if (param_2[2] - fVar12 <= DAT_1028b430) goto LAB_1015150e;
  local_20 = param_2[3];
  local_a0 = param_2[2] - param_4;
  local_28 = param_2[1] + param_5;
  local_2c = param_4 + fVar12;
  fVar13 = local_a0;
  local_a8 = local_28;
  if (param_11 != (undefined1 *)0x0) {
    *param_11 = local_a0 < local_2c + local_1c[0];
    fVar12 = *param_2;
    local_a8 = param_5 + param_2[1];
    fVar13 = param_2[2] - param_4;
  }
  local_a4 = *(float *)((int)local_9c + 0x1228);
  local_24 = local_a0;
  fVar11 = (float10)FUN_100fdbca(fVar12,fVar13 - local_a4);
  fVar12 = (float)fVar11;
  local_30 = local_a8;
  bVar8 = true;
  if ((*(int *)((int)fVar3 + 0x1510) != param_7) && (*(int *)((int)fVar3 + 0x1510) != param_8)) {
    bVar8 = *(int *)((int)fVar3 + 0x1528) == param_8 || *(int *)((int)fVar3 + 0x1528) == param_7;
  }
  local_88 = fVar12;
  local_34 = fVar12;
  if (param_8 == 0) {
    bVar2 = false;
  }
  else {
    if (param_9 == 0) {
      fVar13 = *(float *)((int)fVar3 + 0xd78);
    }
    else {
      fVar13 = *(float *)((int)fVar3 + 0xd74);
    }
    bVar2 = fVar13 < 0.0;
    if ((bool)(0.0 <= fVar13 & bVar8)) {
      local_98 = param_2[2] - *param_2;
      local_94 = fVar12;
      fVar11 = (float10)FUN_100fdbca(local_a4,fVar13);
      local_8c = (float)fVar11;
      bVar2 = local_8c <= local_98;
      fVar12 = local_94;
    }
  }
  if (((param_3 & 1) == 0) || (param_2[2] < local_a4 + fVar12)) {
    if (bVar2) goto LAB_1015136f;
    uVar7 = 0;
  }
  else {
    if ((bool)(bVar8 & bVar2)) {
LAB_1015136f:
      puVar9 = (undefined4 *)((int)fVar3 + 0x1e80);
      puVar10 = local_84;
      for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_a8 = (float)FUN_1012e639(param_8,&local_34);
      puVar9 = local_84;
      puVar10 = (undefined4 *)((int)fVar3 + 0x1e80);
      for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      if (bVar8 && (char)((param_3 & 4) >> 2) == '\0') {
        bVar4 = FUN_1010377a(2,0);
        local_a8 = (float)CONCAT31((int3)((uint)local_a8 >> 8),SUB41(local_a8,0) | bVar4);
      }
      pfVar1 = (float *)((int)local_9c + 0xd74 + (uint)(param_9 ^ 1) * 4);
      uVar7 = SUB41(local_a8,0);
      if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
        local_24 = local_a0 - local_a4;
        goto LAB_101514ab;
      }
    }
    else {
      local_a8 = local_a8 + DAT_102b70e0 * local_a4;
      local_9c = DAT_102b70e0 * local_a4 + fVar12;
      uVar5 = FUN_100fcb39(0x3a,0x3f800000);
      FUN_10193c4a(param_1,local_9c,local_a8,uVar5);
      uVar7 = 0;
    }
    local_a0 = local_a0 + local_a4 * _DAT_102b9674;
    local_24 = local_a0;
  }
LAB_101514ab:
  FUN_10118366(&DAT_1033ecca,&DAT_1033b92b);
  FUN_100fdc57(param_1,&local_2c,&local_24,local_a0,param_6,local_90,local_1c);
  if (param_10 != (undefined1 *)0x0) {
    *param_10 = uVar7;
  }
LAB_1015150e:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

