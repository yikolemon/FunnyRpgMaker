/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002d6cd */

undefined4 *
FUN_1002d6cd(undefined4 *param_1,int param_2,uint *param_3,uint *param_4,int param_5,uint param_6,
            undefined4 param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  char local_3c;
  int local_38;
  byte local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059950;
  local_1c = ExceptionList;
  local_2c = *param_4;
  local_24 = CONCAT31((int3)((uint)&local_1c >> 8),0x2e);
  ExceptionList = &local_1c;
  puVar2 = &local_54;
  if ((local_2c >> 0xe & 1) != 0) {
    local_54 = param_7;
    FUN_10025df0(&local_4c);
    local_14 = 0;
    piVar1 = (int *)FUN_1000c417(&local_4c);
    local_24 = (**(code **)(*piVar1 + 0xc))();
    local_14 = 0xffffffff;
    if ((local_48 != (int *)0x0) &&
       (puVar2 = (undefined4 *)(**(code **)(*local_48 + 8))(), puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    local_2c = *param_4;
    puVar2 = (undefined4 *)local_20;
  }
  local_20 = (undefined1 *)puVar2;
  uVar5 = *param_3;
  iVar3 = 0x1f;
  if ((uVar5 | 1) != 0) {
    for (; (uVar5 | 1) >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  local_40 = *(int *)(&DAT_102902d4 + iVar3 * 8) +
             (uint)CARRY4(uVar5,*(uint *)(&DAT_102902d0 + iVar3 * 8));
  iVar3 = *(int *)(&DAT_102902d4 + iVar3 * 8) + param_3[1] +
          (uint)CARRY4(uVar5,*(uint *)(&DAT_102902d0 + iVar3 * 8));
  if (((byte)local_2c & 7) == 1) {
LAB_1002d7dd:
    local_30 = iVar3 - 1;
    iVar3 = (local_40 + 1) - (uint)(param_5 == 0);
    local_3c = (char)local_24;
    if ((local_2c >> 0xd & 1) == 0) {
      local_28 = 0;
      if (local_40 == 1) {
        local_3c = '\0';
      }
    }
    else {
      local_28 = 0;
      if (0 < (int)(param_4[3] - local_40)) {
        local_28 = param_4[3] - local_40;
      }
      iVar3 = iVar3 + local_28;
    }
    uVar5 = -local_30;
    if ((int)-local_30 < 0) {
      uVar5 = local_30;
    }
    iVar4 = 4;
    if (99 < uVar5) {
      iVar4 = 6 - (uint)(uVar5 < 1000);
    }
    iVar3 = ((iVar4 + 1) - (uint)(local_3c == '\0')) + iVar3;
    local_4c = param_5;
    local_48 = (int *)*param_3;
    local_44 = param_3[1];
    local_38 = local_28;
    local_34 = ((local_2c >> 0xc & 1) == 0) << 5 | 0x45;
    if ((int)param_4[2] < 1) {
      uVar5 = iVar3 + *(int *)(param_2 + 4);
      if (*(uint *)(param_2 + 8) < uVar5) {
        (**(code **)(param_2 + 0xc))(param_2,uVar5);
      }
      FUN_1002dc20(&local_50,param_2);
      *param_1 = local_50;
    }
    else {
      FUN_1002e9b4(param_1,param_2,param_4,iVar3,iVar3,&local_4c);
    }
  }
  else {
    if ((local_2c & 7) != 2) {
      uVar5 = param_4[3];
      if ((int)param_4[3] < 1) {
        uVar5 = param_6;
      }
      if ((iVar3 < -3) || ((int)uVar5 < iVar3)) goto LAB_1002d7dd;
    }
    FUN_1002d902(param_1,param_2,param_3,local_40,(int)(char)local_24,param_4,param_5,param_7);
  }
  ExceptionList = local_1c;
  return param_1;
}

