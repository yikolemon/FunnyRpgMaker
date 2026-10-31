/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017f7e8 */

int __thiscall FUN_1017f7e8(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
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
  local_18 = &LAB_10180560;
  local_1c = ExceptionList;
  iVar4 = *param_1;
  local_38 = (param_1[1] - iVar4 >> 3) * -0x33333333 + 1;
  uVar1 = (param_1[2] - iVar4 >> 3) * -0x33333333;
  uVar2 = 0x6666666 - (uVar1 >> 1);
  uVar3 = (uVar1 >> 1) + uVar1;
  if (uVar3 <= local_38) {
    uVar3 = local_38;
  }
  if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
    uVar3 = 0x6666666;
  }
  ExceptionList = &local_1c;
  if (0x6666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_20 = (undefined1 *)&local_4c;
  local_48 = FUN_10001426(uVar3 * 0x28);
  local_40 = local_48 + (param_2 - iVar4) + 0x28;
  local_14 = 0;
  local_2c = (param_2 - iVar4) + local_48;
  local_4c = param_1;
  local_44 = uVar3;
  local_3c = local_40;
  local_34 = uVar3;
  local_30 = local_40;
  local_28 = param_1;
  local_24 = local_48;
  FUN_1017f9a0(local_2c,param_3);
  local_40 = local_2c;
  iVar4 = *local_28;
  iVar6 = local_28[1];
  local_14 = 0xffffffff;
  iVar5 = local_24;
  if (param_2 == iVar6) {
    for (; iVar4 != param_2; iVar4 = iVar4 + 0x28) {
      FUN_1017fb36(iVar5,iVar4);
      iVar5 = iVar5 + 0x28;
    }
    local_14 = 0xffffffff;
  }
  else {
    if (iVar4 != param_2) {
      do {
        FUN_1017fb36(iVar5,iVar4);
        iVar4 = iVar4 + 0x28;
        iVar5 = iVar5 + 0x28;
      } while (iVar4 != param_2);
      iVar6 = local_28[1];
    }
    local_14 = 0xffffffff;
    local_40 = local_24;
    iVar4 = local_30;
    for (; param_2 != iVar6; param_2 = param_2 + 0x28) {
      FUN_1017fb36(iVar4,param_2);
      iVar4 = iVar4 + 0x28;
    }
  }
  local_48 = 0;
  FUN_1017fa66(local_24,local_38,local_34);
  iVar4 = local_2c;
  local_14 = 0xffffffff;
  FUN_1017fada();
  ExceptionList = local_1c;
  return iVar4;
}

