/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10031265 */

undefined4 *
FUN_10031265(undefined4 *param_1,int param_2,uint *param_3,uint *param_4,int param_5,uint param_6,
            undefined4 param_7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int *local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int local_48;
  char local_44;
  int local_40;
  byte local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_10059a40;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  local_70 = CONCAT31((int3)((uint)&local_20 >> 8),0x2e);
  puVar1 = &stack0xfffffffc;
  puVar2 = &local_70;
  if ((*param_4 & 0x4000) != 0) {
    local_2c = param_7;
    FUN_10025df0(&local_60);
    local_18 = 0;
    piVar3 = (int *)FUN_1000c417(&local_60);
    local_70 = (**(code **)(*piVar3 + 0xc))();
    local_18 = 0xffffffff;
    puVar1 = local_28;
    puVar2 = (undefined4 *)local_24;
    if ((local_5c != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_5c + 8))(), puVar1 = local_28,
       puVar2 = (undefined4 *)local_24, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
      puVar1 = local_28;
      puVar2 = (undefined4 *)local_24;
    }
  }
  local_24 = (undefined1 *)puVar2;
  local_28 = puVar1;
  uVar8 = param_3[1];
  if (uVar8 == 0) {
    uVar6 = *param_3 | 1;
    uVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    uVar5 = uVar5 ^ 0x1f | 0x20;
  }
  else {
    uVar5 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    uVar5 = uVar5 ^ 0x1f;
  }
  uVar5 = (uint)(byte)(&DAT_10290499)[uVar5 ^ 0x3f];
  local_48 = uVar5 - (uVar8 < *(uint *)(&DAT_102904e4 + uVar5 * 8) ||
                     uVar8 - *(uint *)(&DAT_102904e4 + uVar5 * 8) <
                     (uint)(*param_3 < *(uint *)(&DAT_102904e0 + uVar5 * 8)));
  local_64 = *param_4;
  if (((byte)local_64 & 7) == 1) {
LAB_10031391:
    local_38 = (local_48 + param_3[2]) - 1;
    local_6c = (local_48 + 1) - (uint)(param_5 == 0);
    local_44 = (char)local_70;
    if ((local_64 >> 0xd & 1) == 0) {
      local_68 = 0;
      if (local_48 == 1) {
        local_44 = '\0';
      }
    }
    else {
      local_68 = 0;
      if (0 < (int)(param_4[3] - local_48)) {
        local_68 = param_4[3] - local_48;
      }
      local_6c = local_6c + local_68;
    }
    uVar8 = -local_38;
    if ((int)-local_38 < 0) {
      uVar8 = local_38;
    }
    iVar7 = 4;
    if (99 < uVar8) {
      iVar7 = 6 - (uint)(uVar8 < 1000);
    }
    iVar7 = ((iVar7 + 1) - (uint)(local_44 == '\0')) + local_6c;
    local_60 = param_5;
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_40 = local_68;
    local_3c = ((local_64 >> 0xc & 1) == 0) << 5 | 0x45;
    if ((int)param_4[2] < 1) {
      uVar8 = iVar7 + *(int *)(param_2 + 4);
      if (*(uint *)(param_2 + 8) < uVar8) {
        (**(code **)(param_2 + 0xc))(param_2,uVar8);
      }
      FUN_100317e2(&local_30,param_2);
      *param_1 = local_30;
    }
    else {
      FUN_100320e2(param_1,param_2,param_4,iVar7,iVar7,&local_60);
    }
  }
  else {
    if ((local_64 & 7) != 2) {
      iVar7 = local_48 + param_3[2];
      uVar8 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVar8 = param_6;
      }
      if ((iVar7 < -3) || ((int)uVar8 < iVar7)) goto LAB_10031391;
    }
    FUN_100314c3(param_1,param_2,param_3,local_48,(int)(char)local_70,param_4,param_5,param_7);
  }
  *unaff_FS_OFFSET = local_20;
  return param_1;
}

