/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015e4b2 */

undefined4 * __thiscall FUN_1015e4b2(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_50;
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
  
  local_20 = (undefined1 *)&local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f640;
  local_1c = ExceptionList;
  iVar1 = *param_1;
  local_38 = (param_1[1] - iVar1 >> 2) + 1;
  uVar2 = param_1[2] - iVar1 >> 2;
  uVar3 = (uVar2 >> 1) + uVar2;
  if (uVar3 <= local_38) {
    uVar3 = local_38;
  }
  if (0x3fffffff - (uVar2 >> 1) < uVar2) {
    uVar3 = 0x3fffffff;
  }
  ExceptionList = &local_1c;
  if (uVar3 < 0x40000000) {
    local_20 = (undefined1 *)&local_50;
    local_48 = (undefined4 *)FUN_10001426(uVar3 * 4);
    local_40 = (undefined4 *)((int)local_48 + (param_2 - iVar1) + 4);
    local_14 = 0;
    local_50 = 0;
    local_4c = param_1;
    local_44 = uVar3;
    local_3c = (int)local_40;
    local_34 = uVar3;
    local_30 = (int)local_40;
    local_2c = (undefined4 *)(param_2 - iVar1);
    local_28 = param_1;
    local_24 = local_48;
    FUN_100561d8(param_3,&local_50);
    local_40 = (undefined4 *)((int)local_2c + (int)local_24);
    *local_40 = local_50;
    local_2c = local_40;
    if (param_2 == local_28[1]) {
      thunk_FUN_100185ef(*local_28,local_28[1],local_24);
    }
    else {
      thunk_FUN_100185ef(*local_28,param_2,local_24);
      local_40 = local_24;
      thunk_FUN_100185ef(param_2,local_28[1],local_30);
    }
    local_48 = (undefined4 *)0x0;
    FUN_1001fb4c(local_24,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_1001a46e();
    ExceptionList = local_1c;
    return local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

