/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aea00 */

undefined4 * __thiscall
FUN_100aea00(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int *local_4c;
  undefined4 *local_48;
  uint local_44;
  undefined4 *local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 *local_30;
  int local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c46b0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar1 = *param_1;
  local_38 = (param_1[1] - iVar1 >> 3) + 1;
  uVar3 = param_1[2] - iVar1 >> 3;
  uVar4 = (uVar3 >> 1) + uVar3;
  if (uVar4 <= local_38) {
    uVar4 = local_38;
  }
  if (0x1fffffff - (uVar3 >> 1) < uVar3) {
    uVar4 = 0x1fffffff;
  }
  if (uVar4 < 0x20000000) {
    local_20 = (undefined1 *)&local_4c;
    local_48 = (undefined4 *)FUN_10001426(uVar4 * 8);
    local_3c = (int)local_48 + (param_2 - iVar1) + 8;
    local_14 = 0;
    local_40 = (undefined4 *)((param_2 - iVar1) + (int)local_48);
    uVar2 = *param_4;
    *local_40 = *param_3;
    local_40[1] = uVar2;
    local_4c = param_1;
    local_44 = uVar4;
    local_34 = uVar4;
    local_30 = local_40;
    local_2c = local_3c;
    local_28 = param_1;
    local_24 = local_48;
    if (param_2 == param_1[1]) {
      thunk_FUN_1001bee5(*param_1,param_1[1],local_48);
    }
    else {
      thunk_FUN_1001bee5(*param_1,param_2,local_48);
      local_40 = local_24;
      thunk_FUN_1001bee5(param_2,local_28[1],local_2c);
    }
    local_48 = (undefined4 *)0x0;
    FUN_100ae81c(local_24,local_38,local_34);
    local_14 = 0xffffffff;
    FUN_1001a25e();
    *unaff_FS_OFFSET = local_1c;
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}

