/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100801d4 */

undefined4 * __thiscall FUN_100801d4(int *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int *local_4c;
  undefined4 *local_48;
  uint local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3050;
  local_1c = ExceptionList;
  iVar1 = *param_1;
  local_38 = (param_1[1] - iVar1 >> 4) + 1;
  uVar5 = param_1[2] - iVar1 >> 4;
  uVar6 = (uVar5 >> 1) + uVar5;
  if (uVar6 <= local_38) {
    uVar6 = local_38;
  }
  if (0xfffffff - (uVar5 >> 1) < uVar5) {
    uVar6 = 0xfffffff;
  }
  ExceptionList = &local_1c;
  if (uVar6 < 0x10000000) {
    local_20 = (undefined1 *)&local_4c;
    local_48 = (undefined4 *)FUN_10001426(uVar6 << 4);
    local_3c = (int)local_48 + (param_2 - iVar1) + 0x10;
    local_40 = (undefined4 *)((param_2 - iVar1) + (int)local_48);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    *local_40 = *param_3;
    local_40[1] = uVar2;
    local_40[2] = uVar3;
    local_40[3] = uVar4;
    *(undefined1 *)param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    local_4c = param_1;
    local_44 = uVar6;
    local_34 = uVar6;
    local_30 = local_3c;
    local_2c = local_40;
    local_28 = param_1;
    local_24 = local_48;
    if (param_2 == param_1[1]) {
      local_14 = 1;
      FUN_10080024(*param_1,param_1[1],local_48,param_1);
    }
    else {
      local_14 = 1;
      FUN_10080024(*param_1,param_2,local_48,param_1);
      local_40 = local_24;
      FUN_10080024(param_2,local_28[1],local_30,local_28);
    }
    local_48 = (undefined4 *)0x0;
    FUN_100800bc(local_24,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_1008037c();
    ExceptionList = local_1c;
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

