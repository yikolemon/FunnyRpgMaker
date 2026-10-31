/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100314c3 */

undefined4
FUN_100314c3(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            uint *param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_7c;
  int local_78;
  undefined4 *local_74;
  undefined4 **local_70;
  uint *local_6c;
  undefined4 **local_68;
  uint *local_64;
  undefined4 *local_60;
  uint *local_5c;
  undefined1 *local_58;
  undefined4 **local_54;
  int local_50;
  undefined4 *local_4c;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_7c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059a50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = *(int *)(param_3 + 8);
  iVar3 = iVar1 + param_4;
  local_28 = (param_4 + 1) - (uint)(param_7 == 0);
  local_30 = iVar3;
  if (-1 < iVar1) {
    local_28 = iVar1 + local_28;
    local_24 = param_6[3] - iVar3;
    uVar2 = *param_6;
    if ((uVar2 >> 0xd & 1) != 0) {
      if ((uVar2 & 7) != 2 && (int)local_24 < 1) {
        local_24 = 0;
      }
      uVar5 = 0;
      if (0 < (int)local_24) {
        uVar5 = local_24;
      }
      local_28 = local_28 + 1 + uVar5;
    }
    local_20 = (undefined1 *)&local_7c;
    FUN_1002ddc8(param_8,uVar2 >> 0xe & 1);
    local_14 = 2;
    iVar3 = FUN_1002732e(iVar3);
    local_7c = &param_7;
    local_78 = param_3;
    local_74 = &param_4;
    local_70 = &local_60;
    local_6c = param_6;
    local_68 = (undefined4 **)&param_5;
    local_64 = &local_24;
    FUN_10031990(param_1,param_2,param_6,iVar3 + local_28,iVar3 + local_28,&local_7c);
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10001fee();
    goto code_r0x100316ba;
  }
  if (0 < iVar3) {
    local_24 = param_6[3] - param_4 & (int)(*param_6 << 0x12) >> 0x1f;
    local_2c = local_24;
    if ((int)local_24 < 1) {
      local_2c = 0;
    }
    local_20 = (undefined1 *)&local_7c;
    FUN_1002ddc8(param_8,*param_6 >> 0xe & 1);
    local_14 = 5;
    iVar3 = FUN_1002732e(iVar3);
    iVar3 = iVar3 + local_28 + local_2c + 1;
    local_7c = &param_7;
    local_78 = param_3;
    local_74 = &param_4;
    local_70 = (undefined4 **)&local_30;
    local_6c = &param_5;
    local_68 = &local_60;
    local_64 = &local_24;
    FUN_10031cd2(param_1,param_2,param_6,iVar3,iVar3,&local_7c);
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10001fee();
    goto code_r0x100316ba;
  }
  local_7c = (undefined4 *)-iVar3;
  if (param_4 == 0) {
    puVar4 = (undefined4 *)param_6[3];
    if ((int)puVar4 < (int)local_7c && -1 < (int)puVar4) {
      local_7c = puVar4;
    }
    if (local_7c != (undefined4 *)0x0) goto code_r0x100316fc;
    local_24 = CONCAT31(local_24._1_3_,(char)((*param_6 & 0x2000) >> 0xd));
    iVar3 = 2 - (uint)((*param_6 & 0x2000) == 0);
    puVar4 = (undefined4 *)0x0;
  }
  else {
code_r0x100316fc:
    local_24 = CONCAT31(local_24._1_3_,1);
    iVar3 = 2;
    puVar4 = local_7c;
  }
  iVar3 = local_28 + iVar3 + (int)puVar4;
  local_60 = &param_7;
  local_5c = &local_24;
  local_58 = (undefined1 *)&param_5;
  local_54 = &local_7c;
  local_50 = param_3;
  local_4c = &param_4;
  FUN_1002a868(param_1,param_2,param_6,iVar3,iVar3,&local_60);
code_r0x100316ba:
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

