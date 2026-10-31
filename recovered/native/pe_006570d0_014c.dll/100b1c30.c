/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1c30 */

undefined1 * __thiscall
FUN_100b1c30(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *local_4c;
  undefined1 *local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4840;
  local_1c = ExceptionList;
  local_24 = (undefined1 *)*param_1;
  local_38 = (param_1[1] - (int)local_24 >> 1) + 1;
  uVar1 = param_1[2] - (int)local_24 >> 1;
  uVar2 = (uVar1 >> 1) + uVar1;
  if (uVar2 <= local_38) {
    uVar2 = local_38;
  }
  if ((uVar1 >> 1 ^ 0x7fffffff) < uVar1) {
    uVar2 = 0x7fffffff;
  }
  ExceptionList = &local_1c;
  if (-1 < (int)uVar2) {
    iVar3 = param_2 - (int)local_24;
    local_20 = (undefined1 *)&local_4c;
    local_48 = (undefined1 *)FUN_10001426(uVar2 * 2);
    local_3c = local_48 + iVar3 + 2;
    local_14 = 0;
    local_40 = local_48 + iVar3;
    *local_40 = *param_3;
    local_40[1] = *param_4;
    local_4c = param_1;
    local_44 = uVar2;
    local_34 = uVar2;
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = param_1;
    local_24 = local_48;
    if (param_2 == param_1[1]) {
      thunk_FUN_100464e4(*param_1,param_1[1],local_48);
    }
    else {
      thunk_FUN_100464e4(*param_1,param_2,local_48);
      local_40 = local_24;
      thunk_FUN_100464e4(param_2,local_28[1],local_2c);
    }
    local_48 = (undefined1 *)0x0;
    FUN_100b1d90(local_24,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_100b1de2();
    ExceptionList = local_1c;
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

