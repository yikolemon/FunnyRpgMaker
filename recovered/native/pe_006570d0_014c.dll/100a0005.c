/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0005 */

int * FUN_100a0005(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 local_40 [4];
  char local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3f70;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_34 = FUN_10271d80(param_2);
  uVar5 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  iVar2 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24);
  local_24 = uVar5 - local_34;
  local_38 = iVar2 - (uint)(uVar5 < local_34);
  local_28 = 0;
  local_2c = 0;
  if ((SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(uVar5 != 0))) !=
      (int)(-iVar2 - (uint)(uVar5 != 0)) < 0 &&
      (iVar2 != 0 || (uint)-iVar2 < (uint)(local_34 < uVar5))) {
    local_2c = local_24;
    local_28 = local_38;
  }
  FUN_1007a540(param_1);
  uVar5 = 4;
  if (local_3c != '\x01') goto code_r0x100a01eb;
  iVar2 = *(int *)(*param_1 + 4);
  if (((*(uint *)((int)param_1 + iVar2 + 0x14) & 0x1c0) != 0x40) &&
     ((int)(uint)(local_2c == 0) <= local_28)) {
    do {
      local_30 = 0;
      local_14 = 1;
      sVar1 = FUN_100a14d0(*(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      if (sVar1 == -1) goto LAB_100a01d2;
      uVar5 = local_24 - 1;
      iVar4 = local_38 + -1 + (uint)(local_24 != 0);
      bVar6 = 1 < local_24;
      bVar7 = SBORROW4(0,local_38);
      iVar2 = -local_38;
      local_38 = iVar4;
      local_24 = uVar5;
    } while ((bVar7 != SBORROW4(iVar2,(uint)bVar6)) != (int)(iVar2 - (uint)bVar6) < 0);
    iVar2 = *(int *)(*param_1 + 4);
    local_2c = 0;
    local_28 = 0;
  }
  local_30 = 0;
  local_14 = 1;
  uVar8 = (**(code **)(**(int **)((int)param_1 + iVar2 + 0x38) + 0x24))(param_2,local_34,0);
  iVar2 = (int)((ulonglong)uVar8 >> 0x20);
  uVar3 = (uint)uVar8 ^ local_34;
  uVar5 = (uint)(uVar3 != 0 || iVar2 != 0) << 2;
  if ((uVar3 == 0 && iVar2 == 0) && ((int)(uint)(local_2c == 0) <= local_28)) {
    do {
      local_24 = uVar5;
      local_30 = local_24;
      sVar1 = FUN_100a14d0(*(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      if (sVar1 == -1) goto LAB_100a01d2;
      uVar3 = local_2c - 1;
      iVar4 = local_28 + -1 + (uint)(local_2c != 0);
      bVar6 = 1 < local_2c;
      bVar7 = SBORROW4(0,local_28);
      iVar2 = -local_28;
      uVar5 = local_24;
      local_2c = uVar3;
      local_28 = iVar4;
    } while ((bVar7 != SBORROW4(iVar2,(uint)bVar6)) != (int)(iVar2 - (uint)bVar6) < 0);
  }
code_r0x100a01d8:
  iVar2 = *(int *)(*param_1 + 4);
  *(undefined4 *)((int)param_1 + iVar2 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + iVar2 + 0x20) = 0;
code_r0x100a01eb:
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) << 2 |
               uVar5 | *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  FUN_1007a64a();
  ExceptionList = local_1c;
  return param_1;
LAB_100a01d2:
  uVar5 = 4;
  goto code_r0x100a01d8;
}

