/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10079c1d */

int * FUN_10079c1d(int *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 local_40 [4];
  char local_3c;
  int local_38;
  size_t local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2cc0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_34 = _strlen(param_2);
  uVar4 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24);
  local_24 = uVar4 - local_34;
  local_38 = iVar1 - (uint)(uVar4 < local_34);
  local_28 = 0;
  local_2c = 0;
  if ((SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar4 != 0))) !=
      (int)(-iVar1 - (uint)(uVar4 != 0)) < 0 &&
      (iVar1 != 0 || (uint)-iVar1 < (uint)(local_34 < uVar4))) {
    local_2c = local_24;
    local_28 = local_38;
  }
  FUN_1007a540(param_1);
  uVar4 = 4;
  if (local_3c != '\x01') goto code_r0x10079e01;
  iVar1 = *(int *)(*param_1 + 4);
  if (((*(uint *)((int)param_1 + iVar1 + 0x14) & 0x1c0) != 0x40) &&
     ((int)(uint)(local_2c == 0) <= local_28)) {
    do {
      local_30 = 0;
      local_14 = 1;
      iVar1 = FUN_1007a612((int)*(char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      if (iVar1 == -1) goto LAB_10079de8;
      uVar4 = local_24 - 1;
      iVar3 = local_38 + -1 + (uint)(local_24 != 0);
      bVar5 = 1 < local_24;
      bVar6 = SBORROW4(0,local_38);
      iVar1 = -local_38;
      local_38 = iVar3;
      local_24 = uVar4;
    } while ((bVar6 != SBORROW4(iVar1,(uint)bVar5)) != (int)(iVar1 - (uint)bVar5) < 0);
    iVar1 = *(int *)(*param_1 + 4);
    local_2c = 0;
    local_28 = 0;
  }
  local_30 = 0;
  local_14 = 1;
  uVar7 = (**(code **)(**(int **)((int)param_1 + iVar1 + 0x38) + 0x24))(param_2,local_34,0);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  uVar2 = (uint)uVar7 ^ local_34;
  uVar4 = (uint)(uVar2 != 0 || iVar1 != 0) << 2;
  if ((uVar2 == 0 && iVar1 == 0) && ((int)(uint)(local_2c == 0) <= local_28)) {
    do {
      local_24 = uVar4;
      local_30 = local_24;
      iVar1 = FUN_1007a612((int)*(char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      if (iVar1 == -1) goto LAB_10079de8;
      uVar2 = local_2c - 1;
      iVar3 = local_28 + -1 + (uint)(local_2c != 0);
      bVar5 = 1 < local_2c;
      bVar6 = SBORROW4(0,local_28);
      iVar1 = -local_28;
      uVar4 = local_24;
      local_2c = uVar2;
      local_28 = iVar3;
    } while ((bVar6 != SBORROW4(iVar1,(uint)bVar5)) != (int)(iVar1 - (uint)bVar5) < 0);
  }
code_r0x10079dee:
  iVar1 = *(int *)(*param_1 + 4);
  *(undefined4 *)((int)param_1 + iVar1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + iVar1 + 0x20) = 0;
code_r0x10079e01:
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) << 2 |
               uVar4 | *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  FUN_1007a64a();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
LAB_10079de8:
  uVar4 = 4;
  goto code_r0x10079dee;
}

