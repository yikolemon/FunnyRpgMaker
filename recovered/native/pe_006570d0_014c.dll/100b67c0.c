/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b67c0 */

void __thiscall FUN_100b67c0(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int *local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_5c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4a40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_4 != 0) {
    iVar2 = param_1[1];
    local_30 = iVar2;
    local_24 = param_1;
    if ((uint)(param_1[2] - iVar2 >> 2) < param_4) {
      iVar4 = *param_1;
      iVar2 = iVar2 - iVar4 >> 2;
      if (0x3fffffffU - iVar2 < param_4) {
        local_20 = (undefined1 *)&local_5c;
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      local_44 = iVar2 + param_4;
      uVar3 = param_1[2] - iVar4 >> 2;
      uVar1 = (uVar3 >> 1) + uVar3;
      if (uVar1 <= local_44) {
        uVar1 = local_44;
      }
      if (0x3fffffff - (uVar3 >> 1) < uVar3) {
        uVar1 = 0x3fffffff;
      }
      if (0x3fffffff < uVar1) {
        local_20 = (undefined1 *)&local_5c;
                    /* WARNING: Subroutine does not return */
        FUN_1000146d();
      }
      local_20 = (undefined1 *)&local_5c;
      local_58 = FUN_10001426(uVar1 * 4);
      local_48 = (param_2 - iVar4) + local_58;
      local_50 = local_48 + param_4 * 4;
      local_5c = local_24;
      local_14 = 0;
      local_54 = uVar1;
      local_4c = local_50;
      local_40 = uVar1;
      local_3c = local_50;
      local_2c = iVar4;
      local_28 = local_58;
      thunk_FUN_1009fa47(param_3,param_4,local_48);
      local_50 = local_48;
      if (param_2 == local_30 && param_4 == 1) {
        thunk_FUN_100185ef(local_2c,local_30,local_28);
      }
      else {
        thunk_FUN_100185ef(local_2c,param_2,local_28);
        local_50 = local_28;
        thunk_FUN_100185ef(param_2,local_30,local_3c);
      }
      local_58 = 0;
      FUN_1001fb4c(local_28,local_44,local_40);
      local_14 = 0xffffffff;
      FUN_1001a46e();
    }
    else if (param_4 < (uint)(iVar2 - param_2 >> 2)) {
      iVar4 = iVar2 + param_4 * -4;
      local_20 = (undefined1 *)&local_5c;
      thunk_FUN_100185ef(iVar4,iVar2,iVar2);
      local_24[1] = iVar2 + param_4 * 4;
      FUN_1007ace1(param_2,iVar4,iVar2);
      local_28 = param_2 + param_4 * 4;
      local_14 = 1;
      thunk_FUN_1009fa47(param_3,param_4,param_2);
    }
    else {
      iVar4 = param_2 + param_4 * 4;
      local_28 = iVar4;
      thunk_FUN_100185ef(param_2,iVar2,iVar4);
      local_24[1] = (iVar2 - param_2) + iVar4;
      local_14 = 4;
      thunk_FUN_1009fa47(param_3,param_4,param_2);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

