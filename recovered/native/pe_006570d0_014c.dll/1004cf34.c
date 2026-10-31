/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004cf34 */

undefined1 * __thiscall FUN_1004cf34(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *unaff_FS_OFFSET;
  int *local_4c;
  undefined1 *local_48;
  uint local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005a830;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = *param_1;
  if (param_1[1] - iVar1 != 0x7fffffff) {
    local_38 = (param_1[1] - iVar1) + 1;
    uVar2 = param_1[2] - iVar1;
    uVar3 = (uVar2 >> 1) + uVar2;
    if (uVar3 <= local_38) {
      uVar3 = local_38;
    }
    if ((uVar2 >> 1 ^ 0x7fffffff) < uVar2) {
      uVar3 = 0x7fffffff;
    }
    local_24 = param_1;
    local_20 = (undefined1 *)&local_4c;
    local_48 = (undefined1 *)FUN_10001426(uVar3);
    local_3c = local_48 + (param_2 - iVar1) + 1;
    local_4c = local_24;
    local_14 = 0;
    local_40 = local_48 + (param_2 - iVar1);
    *local_40 = *param_3;
    local_44 = uVar3;
    local_34 = uVar3;
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = local_48;
    if (param_2 == local_24[1]) {
      thunk_FUN_1000b6c9(*local_24,local_24[1],local_48);
    }
    else {
      thunk_FUN_1000b6c9(*local_24,param_2,local_48);
      local_40 = local_28;
      thunk_FUN_1000b6c9(param_2,local_24[1],local_2c);
    }
    local_48 = (undefined1 *)0x0;
    FUN_1004d080(local_28,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_1004d0d0();
    *unaff_FS_OFFSET = local_1c;
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016590();
}

