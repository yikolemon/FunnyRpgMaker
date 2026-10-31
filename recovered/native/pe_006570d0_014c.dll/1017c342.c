/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017c342 */

int __thiscall FUN_1017c342(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_101803c0;
  local_1c = ExceptionList;
  iVar3 = *param_1;
  local_38 = (param_1[1] - iVar3 >> 5) + 1;
  uVar1 = param_1[2] - iVar3 >> 5;
  uVar2 = (uVar1 >> 1) + uVar1;
  if (uVar2 <= local_38) {
    uVar2 = local_38;
  }
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    uVar2 = 0x7ffffff;
  }
  ExceptionList = &local_1c;
  if (0x7ffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_4c;
  local_48 = FUN_10001426(uVar2 << 5);
  local_40 = local_48 + (param_2 - iVar3) + 0x20;
  local_14 = 0;
  local_2c = (param_2 - iVar3) + local_48;
  local_4c = param_1;
  local_44 = uVar2;
  local_3c = local_40;
  local_34 = uVar2;
  local_30 = local_40;
  local_28 = param_1;
  local_24 = local_48;
  FUN_1017c4e8(param_3);
  local_40 = local_2c;
  iVar3 = *local_28;
  iVar5 = local_28[1];
  local_14 = 0xffffffff;
  iVar4 = local_24;
  if (param_2 == iVar5) {
    for (; iVar3 != param_2; iVar3 = iVar3 + 0x20) {
      FUN_1017c911(iVar4,iVar3);
      iVar4 = iVar4 + 0x20;
    }
    local_14 = 0xffffffff;
  }
  else {
    if (iVar3 != param_2) {
      do {
        FUN_1017c911(iVar4,iVar3);
        iVar3 = iVar3 + 0x20;
        iVar4 = iVar4 + 0x20;
      } while (iVar3 != param_2);
      iVar5 = local_28[1];
    }
    local_14 = 0xffffffff;
    local_40 = local_24;
    iVar3 = local_30;
    for (; param_2 != iVar5; param_2 = param_2 + 0x20) {
      FUN_1017c911(iVar3,param_2);
      iVar3 = iVar3 + 0x20;
    }
  }
  local_48 = 0;
  FUN_1017c846(local_24,local_38,local_34);
  iVar3 = local_2c;
  local_14 = 0xffffffff;
  FUN_1017c8b8();
  ExceptionList = local_1c;
  return iVar3;
}

