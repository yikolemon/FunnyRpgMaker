/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007a9e4 */

void __thiscall FUN_1007a9e4(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int *local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
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
  local_18 = &LAB_100c2d40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  if (param_4 != 0) {
    iVar2 = param_1[1];
    local_30 = iVar2;
    local_24 = param_1;
    if ((uint)(param_1[2] - iVar2) < param_4) {
      local_2c = *param_1;
      if ((iVar2 - local_2c ^ 0x7fffffffU) < param_4) {
        local_20 = (undefined1 *)&local_5c;
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      local_48 = (iVar2 - local_2c) + param_4;
      uVar3 = param_1[2] - local_2c;
      uVar4 = (uVar3 >> 1) + uVar3;
      if (uVar4 <= local_48) {
        uVar4 = local_48;
      }
      if ((uVar3 >> 1 ^ 0x7fffffff) < uVar3) {
        uVar4 = 0x7fffffff;
      }
      local_20 = (undefined1 *)&local_5c;
      local_58 = FUN_10001426(uVar4);
      local_3c = (param_2 - local_2c) + local_58;
      local_50 = local_3c + param_4;
      local_14 = 0;
      local_5c = param_1;
      local_54 = uVar4;
      local_4c = local_50;
      local_44 = uVar4;
      local_40 = local_50;
      local_28 = local_58;
      thunk_FUN_10006e05(param_3,param_4,local_3c);
      local_50 = local_3c;
      if (param_2 == local_30 && param_4 == 1) {
        thunk_FUN_1000b6c9(local_2c,local_30,local_28);
      }
      else {
        thunk_FUN_1000b6c9(local_2c,param_2,local_28);
        local_50 = local_28;
        thunk_FUN_1000b6c9(param_2,local_30,local_40);
      }
      local_58 = 0;
      FUN_1004d080(local_28,local_48,local_44);
      local_14 = 0xffffffff;
      FUN_1004d0d0();
    }
    else if (param_4 < (uint)(iVar2 - param_2)) {
      local_20 = (undefined1 *)&local_5c;
      thunk_FUN_1000b6c9(iVar2 - param_4,iVar2,iVar2);
      local_24[1] = iVar2 + param_4;
      FUN_1007ace1(param_2,iVar2 - param_4,iVar2);
      local_28 = param_2 + param_4;
      local_14 = 1;
      thunk_FUN_10006e05(param_3,param_4,param_2);
    }
    else {
      iVar1 = param_2 + param_4;
      local_28 = iVar1;
      thunk_FUN_1000b6c9(param_2,iVar2,iVar1);
      local_24[1] = (iVar2 - param_2) + iVar1;
      local_14 = 4;
      thunk_FUN_10006e05(param_3,param_4,param_2);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

