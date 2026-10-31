/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040186c */

int * __cdecl FUN_0040186c(int *param_1,char *param_2)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 local_50 [4];
  char local_4c;
  undefined1 local_48 [4];
  int *local_44;
  int *local_40;
  size_t local_3c;
  char *local_38;
  uint local_34;
  int local_30;
  void *local_2c;
  uint local_28;
  void *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406d60;
  local_1c = ExceptionList;
  local_38 = param_2;
  ExceptionList = &local_1c;
  local_3c = _strlen(param_2);
  uVar7 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  iVar1 = *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24);
  bVar8 = (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar7 != 0))) !=
          (int)(-iVar1 - (uint)(uVar7 != 0)) < 0;
  local_30 = CONCAT31(local_30._1_3_,bVar8);
  local_34 = uVar7 - local_3c;
  local_2c = (void *)(iVar1 - (uint)(uVar7 < local_3c));
  local_24 = (void *)0x0;
  local_28 = 0;
  if (bVar8 && (iVar1 != 0 || (uint)-iVar1 < (uint)(local_3c < uVar7))) {
    local_28 = local_34;
    local_24 = local_2c;
  }
  FUN_00404fb4(local_50,param_1);
  local_14 = 0;
  uVar7 = 4;
  if (local_4c == '\x01') {
    local_44 = *(int **)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x30) + 4);
    (**(code **)(*local_44 + 4))();
    local_14 = 2;
    local_40 = FUN_00405085(local_48);
    local_14 = 0xffffffff;
    if ((local_44 != (int *)0x0) &&
       (puVar4 = (undefined4 *)(**(code **)(*local_44 + 8))(), puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    local_30 = 0;
    if ((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x14) & 0x1c0) == 0x40) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      if ((int)(uint)(local_28 == 0) <= (int)local_24) {
        do {
          local_14 = 1;
          sVar2 = FUN_00405198(*(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                               *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
          if (sVar2 == -1) {
            uVar7 = 4;
            local_28 = local_34;
            local_24 = local_2c;
            goto LAB_00401a69;
          }
          uVar7 = local_34 - 1;
          pvVar6 = (void *)((int)local_2c + ((local_34 != 0) - 1));
          bVar8 = 1 < local_34;
          bVar9 = SBORROW4(0,(int)local_2c);
          iVar1 = -(int)local_2c;
          local_34 = uVar7;
          local_2c = pvVar6;
        } while ((bVar9 != SBORROW4(iVar1,(uint)bVar8)) != (int)(iVar1 - (uint)bVar8) < 0);
        local_24 = (void *)0x0;
        uVar7 = 0;
        local_28 = 0;
      }
    }
LAB_00401a69:
    for (; (uVar7 == 0 && ((int)(uint)(local_3c == 0) <= local_30)); local_3c = local_3c - 1) {
      local_2c = *(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38);
      local_14 = 1;
      uVar3 = (**(code **)(*local_40 + 0x30))((int)*local_38);
      sVar2 = FUN_00405198(local_2c,uVar3);
      uVar7 = (uint)(sVar2 == -1) << 2;
      local_30 = local_30 + -1 + (uint)(local_3c != 0);
      local_38 = local_38 + 1;
    }
    if ((uVar7 == 0) && ((int)(uint)(local_28 == 0) <= (int)local_24)) {
      local_14 = 1;
      do {
        sVar2 = FUN_00405198(*(void **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38),
                             *(undefined2 *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (sVar2 == -1) {
          uVar7 = 4;
          break;
        }
        uVar5 = local_28 - 1;
        pvVar6 = (void *)((int)local_24 + ((local_28 != 0) - 1));
        uVar7 = 0;
        bVar8 = 1 < local_28;
        bVar9 = SBORROW4(0,(int)local_24);
        iVar1 = -(int)local_24;
        local_28 = uVar5;
        local_24 = pvVar6;
      } while ((bVar9 != SBORROW4(iVar1,(uint)bVar8)) != (int)(iVar1 - (uint)bVar8) < 0);
    }
    iVar1 = *(int *)(*param_1 + 4);
    *(undefined4 *)((int)param_1 + iVar1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x20) = 0;
  }
  iVar1 = *(int *)(*param_1 + 4);
  local_14 = 0;
  FUN_00405f74((void *)((int)param_1 + iVar1),
               (uint)(*(int *)((int)param_1 + iVar1 + 0x38) == 0) << 2 |
               uVar7 | *(uint *)((int)param_1 + iVar1 + 0xc),'\0');
  local_14 = 0xffffffff;
  FUN_004051ca();
  ExceptionList = local_1c;
  return param_1;
}

