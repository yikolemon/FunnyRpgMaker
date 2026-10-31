/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002ffc5 */

undefined4 *
FUN_1002ffc5(undefined4 *param_1,int param_2,undefined8 *param_3,uint *param_4,int param_5,
            uint param_6,undefined4 param_7)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 unaff_EBX;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined8 local_4c;
  undefined4 local_44;
  int local_40;
  char local_3c;
  int local_38;
  byte local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_58;
  local_14 = 0xffffffff;
  local_18 = &LAB_100599f0;
  local_1c = ExceptionList;
  uVar6 = *param_4;
  uVar2 = CONCAT31((int3)((uint)unaff_EBX >> 8),0x2e);
  ExceptionList = &local_1c;
  puVar3 = &local_58;
  if ((uVar6 >> 0xe & 1) != 0) {
    local_58 = param_7;
    FUN_10025df0(&local_50);
    local_14 = 0;
    piVar1 = (int *)FUN_1000c417(&local_50);
    uVar2 = (**(code **)(*piVar1 + 0xc))();
    local_14 = 0xffffffff;
    if (((int *)local_4c != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(*(int *)local_4c + 8))(), puVar3 != (undefined4 *)0x0))
    {
      (**(code **)*puVar3)(1);
    }
    uVar6 = *param_4;
    puVar3 = (undefined4 *)local_20;
  }
  local_20 = (undefined1 *)puVar3;
  local_40 = *(int *)((int)param_3 + 4);
  if (((byte)uVar6 & 7) == 1) {
LAB_100300ae:
    local_30 = (*(int *)(param_3 + 1) + local_40) - 1;
    iVar7 = (local_40 + 1) - (uint)(param_5 == 0);
    if ((uVar6 >> 0xd & 1) == 0) {
      uVar2 = uVar2 & 0xff;
      local_28 = 0;
      if (local_40 == 1) {
        uVar2 = 0;
      }
    }
    else {
      local_28 = 0;
      if (0 < (int)(param_4[3] - local_40)) {
        local_28 = param_4[3] - local_40;
      }
      iVar7 = iVar7 + local_28;
    }
    uVar4 = -local_30;
    if ((int)-local_30 < 0) {
      uVar4 = local_30;
    }
    iVar5 = 4;
    if (99 < uVar4) {
      iVar5 = 6 - (uint)(uVar4 < 1000);
    }
    local_3c = (char)uVar2;
    iVar7 = ((iVar5 + 1) - (uint)(local_3c == '\0')) + iVar7;
    local_50 = param_5;
    local_4c = *param_3;
    local_44 = *(undefined4 *)(param_3 + 1);
    local_38 = local_28;
    local_34 = ((uVar6 >> 0xc & 1) == 0) << 5 | 0x45;
    local_2c = local_30;
    local_24 = uVar2;
    if ((int)param_4[2] < 1) {
      uVar6 = iVar7 + *(int *)(param_2 + 4);
      if (*(uint *)(param_2 + 8) < uVar6) {
        (**(code **)(param_2 + 0xc))(param_2,uVar6);
      }
      FUN_100304fe(&local_54,param_2);
      *param_1 = local_54;
    }
    else {
      FUN_10030e05(param_1,param_2,param_4,iVar7,iVar7,&local_50);
    }
  }
  else {
    if ((uVar6 & 7) != 2) {
      iVar7 = *(int *)(param_3 + 1) + local_40;
      uVar4 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVar4 = param_6;
      }
      if ((iVar7 < -3) || ((int)uVar4 < iVar7)) goto LAB_100300ae;
    }
    FUN_100301df(param_1,param_2,param_3,local_40,(int)(char)uVar2,param_4,param_5,param_7);
  }
  ExceptionList = local_1c;
  return param_1;
}

