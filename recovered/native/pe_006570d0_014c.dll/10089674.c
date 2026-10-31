/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10089674 */

int __thiscall FUN_10089674(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3490;
  local_1c = ExceptionList;
  iVar1 = *param_1;
  local_38 = (param_1[1] - iVar1 >> 4) + 1;
  uVar2 = param_1[2] - iVar1 >> 4;
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= local_38) {
    uVar3 = local_38;
  }
  if (0xfffffff - (uVar2 >> 1) < uVar2) {
    uVar3 = 0xfffffff;
  }
  ExceptionList = &local_1c;
  local_24 = param_1;
  if (uVar3 < 0x10000000) {
    local_20 = (undefined1 *)&local_4c;
    local_48 = FUN_10001426(uVar3 << 4);
    local_40 = (param_2 - iVar1) + local_48 + 0x10;
    local_4c = local_24;
    local_14 = 0;
    local_2c = (param_2 - iVar1) + local_48;
    local_44 = uVar3;
    local_3c = local_40;
    local_34 = uVar3;
    local_30 = local_40;
    local_28 = local_48;
    FUN_10080e50(*param_3);
    local_40 = local_2c;
    if (param_2 == local_24[1]) {
      FUN_10080024(*local_24,local_24[1],local_28,local_24);
    }
    else {
      FUN_10080024(*local_24,param_2,local_28,local_24);
      local_40 = local_28;
      FUN_10080024(param_2,local_24[1],local_30,local_24);
    }
    local_48 = 0;
    FUN_100800bc(local_28,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_1008037c();
    ExceptionList = local_1c;
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

