/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018ae44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1018ae44(int param_1,float *param_2,float *param_3,undefined8 *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  undefined8 *local_48;
  undefined8 *local_44;
  int local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  undefined8 *local_34;
  undefined8 *local_30;
  undefined8 *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  if (DAT_102b70e0 <= (float)param_4) {
    uVar5 = param_5 | 0xf0;
    if ((param_5 & 0x1f0) != 0) {
      uVar5 = param_5;
    }
    param_5 = uVar5;
    uVar5 = ~param_5;
    fVar8 = DAT_102b70e0;
    if ((uVar5 & 0xc0) != 0) {
      fVar8 = DAT_1028b430;
    }
    fVar9 = DAT_102b70e0;
    if ((uVar5 & 0x30) != 0) {
      fVar9 = fVar8;
    }
    local_44 = (undefined8 *)
               ((float)((uint)(*param_3 - *param_2) & _DAT_1028b410) * fVar9 + DAT_102b8a50);
    local_48 = param_4;
    fVar7 = (float10)FUN_100ea38a();
    fVar8 = DAT_102b70e0;
    if ((uVar5 & 0xa0) != 0) {
      fVar8 = DAT_1028b430;
    }
    fVar9 = DAT_102b70e0;
    if ((uVar5 & 0x50) != 0) {
      fVar9 = fVar8;
    }
    local_44 = (undefined8 *)
               ((float)((uint)(param_3[1] - param_2[1]) & _DAT_1028b410) * fVar9 + DAT_102b8a50);
    local_48 = (undefined8 *)(float)fVar7;
    fVar7 = (float10)FUN_100ea38a();
    param_4 = (undefined8 *)(float)fVar7;
    local_30 = param_4;
  }
  if (((float)param_4 < DAT_102b70e0) || ((param_5 & 0x1f0) == 0x100)) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 == *(int *)(param_1 + 0x3c)) {
      if (iVar4 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar4 / 2 + iVar4;
      }
      iVar6 = iVar4 + 1;
      if (iVar4 + 1 < iVar3) {
        iVar6 = iVar3;
      }
      local_48 = (undefined8 *)(iVar6 * 8);
      puVar1 = (undefined8 *)FUN_100fa1fa();
      if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        local_40 = *(int *)(param_1 + 0x38) << 3;
        local_48 = puVar1;
        local_44 = *(undefined8 **)(param_1 + 0x40);
        FUN_1025b2d0();
        local_48 = *(undefined8 **)(param_1 + 0x40);
        FUN_100fa2cb();
      }
      *(undefined8 **)(param_1 + 0x40) = puVar1;
      *(int *)(param_1 + 0x3c) = iVar6;
      iVar4 = *(int *)(param_1 + 0x38);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
    }
    puVar1[iVar4] = *(undefined8 *)param_2;
    iVar3 = *(int *)(param_1 + 0x38);
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x38) = iVar4;
    puVar1 = (undefined8 *)param_2[1];
    fVar8 = *param_3;
    if (iVar4 == *(int *)(param_1 + 0x3c)) {
      iVar3 = iVar3 + 2;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      local_48 = (undefined8 *)(iVar3 * 8);
      local_2c = puVar1;
      puVar2 = (undefined8 *)FUN_100fa1fa();
      if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        local_40 = *(int *)(param_1 + 0x38) << 3;
        local_48 = puVar2;
        local_44 = *(undefined8 **)(param_1 + 0x40);
        FUN_1025b2d0();
        local_48 = *(undefined8 **)(param_1 + 0x40);
        FUN_100fa2cb();
      }
      *(undefined8 **)(param_1 + 0x40) = puVar2;
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar4 = *(int *)(param_1 + 0x38);
      puVar1 = local_2c;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    *(float *)(puVar2 + iVar4) = fVar8;
    *(undefined8 **)((int)puVar2 + iVar4 * 8 + 4) = puVar1;
    iVar3 = *(int *)(param_1 + 0x38);
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x38) = iVar4;
    if (iVar4 == *(int *)(param_1 + 0x3c)) {
      iVar3 = iVar3 + 2;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      local_48 = (undefined8 *)(iVar3 * 8);
      puVar1 = (undefined8 *)FUN_100fa1fa();
      if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        local_40 = *(int *)(param_1 + 0x38) << 3;
        local_48 = puVar1;
        local_44 = *(undefined8 **)(param_1 + 0x40);
        FUN_1025b2d0();
        local_48 = *(undefined8 **)(param_1 + 0x40);
        FUN_100fa2cb();
      }
      *(undefined8 **)(param_1 + 0x40) = puVar1;
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar4 = *(int *)(param_1 + 0x38);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 0x40);
    }
    puVar1[iVar4] = *(undefined8 *)param_3;
    iVar3 = *(int *)(param_1 + 0x38);
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x38) = iVar4;
    puVar1 = (undefined8 *)param_3[1];
    fVar8 = *param_2;
    if (iVar4 == *(int *)(param_1 + 0x3c)) {
      iVar3 = iVar3 + 2;
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 / 2 + iVar4;
      }
      if (iVar3 < iVar4) {
        iVar3 = iVar4;
      }
      local_48 = (undefined8 *)(iVar3 * 8);
      local_2c = puVar1;
      puVar2 = (undefined8 *)FUN_100fa1fa();
      if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
        local_40 = *(int *)(param_1 + 0x38) << 3;
        local_48 = puVar2;
        local_44 = *(undefined8 **)(param_1 + 0x40);
        FUN_1025b2d0();
        local_48 = *(undefined8 **)(param_1 + 0x40);
        FUN_100fa2cb();
      }
      *(undefined8 **)(param_1 + 0x40) = puVar2;
      *(int *)(param_1 + 0x3c) = iVar3;
      iVar4 = *(int *)(param_1 + 0x38);
      puVar1 = local_2c;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    *(float *)(puVar2 + iVar4) = fVar8;
    *(undefined8 **)((int)puVar2 + iVar4 * 8 + 4) = puVar1;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  else {
    local_44 = (undefined8 *)0x0;
    if ((param_5 & 0x10) != 0) {
      local_44 = param_4;
    }
    local_38 = (undefined8 *)0x0;
    if ((param_5 & 0x20) != 0) {
      local_38 = param_4;
    }
    local_2c = (undefined8 *)0x0;
    if ((char)param_5 < '\0') {
      local_2c = param_4;
    }
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_34 = (undefined8 *)0x0;
    if ((param_5 & 0x40) != 0) {
      local_34 = param_4;
    }
    local_1c = CONCAT44((float)local_44 + (float)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                        (float)local_44 + (float)*(undefined8 *)param_2);
    local_3c = 9;
    local_40 = 6;
    local_48 = &local_1c;
    FUN_10189c26();
    local_1c = CONCAT44(param_2[1] + (float)local_38,*param_3 - (float)local_38);
    local_40 = 9;
    local_44 = local_38;
    local_3c = 0xc;
    local_48 = &local_1c;
    FUN_10189c26();
    local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)param_3 >> 0x20) - (float)local_2c,
                        (float)*(undefined8 *)param_3 - (float)local_2c);
    local_3c = 3;
    local_44 = local_2c;
    local_40 = 0;
    local_48 = &local_1c;
    FUN_10189c26();
    local_1c = CONCAT44(param_3[1] - (float)local_34,*param_2 + (float)local_34);
    local_3c = 6;
    local_40 = 3;
    local_44 = local_34;
    local_48 = &local_1c;
    FUN_10189c26();
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

