/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f986 */

void __thiscall FUN_1001f986(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  int *piStack_10;
  
  iVar3 = *param_1;
  local_1c = param_1[1];
  uVar2 = local_1c - iVar3 >> 2;
  local_18 = (undefined1 *)(param_2 - uVar2);
  if (param_2 < uVar2) {
    iVar3 = iVar3 + param_2 * 4;
  }
  else {
    if (param_2 < uVar2 || local_18 == (undefined1 *)0x0) {
      return;
    }
    if ((uint)(param_1[2] - iVar3 >> 2) < param_2) {
      local_20 = (undefined1 *)&local_40;
      local_14 = 0xffffffff;
      local_18 = &LAB_10059580;
      local_1c = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = (int)&local_1c;
      if (0x3fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      uVar1 = param_1[2] - *param_1 >> 2;
      uVar2 = (uVar1 >> 1) + uVar1;
      if (uVar2 <= param_2) {
        uVar2 = param_2;
      }
      if (0x3fffffff - (uVar1 >> 1) < uVar1) {
        uVar2 = 0x3fffffff;
      }
      if (0x3fffffff < uVar2) {
        local_20 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
        FUN_1000146d();
      }
      iVar3 = param_1[1] - *param_1;
      local_20 = (undefined1 *)&local_40;
      local_3c = FUN_10001426(uVar2 * 4);
      local_34 = local_3c + iVar3;
      local_14 = 0;
      local_40 = param_1;
      local_38 = uVar2;
      local_30 = local_34;
      local_2c = uVar2;
      local_28 = param_1;
      local_24 = local_3c;
      local_30 = FUN_1001fb08(local_34,param_2 - (iVar3 >> 2),param_3,param_1);
      thunk_FUN_100185ef(*local_28,local_28[1],local_24);
      local_3c = 0;
      FUN_1001fb4c(local_24,param_2,local_2c);
      local_14 = 0xffffffff;
      FUN_1001a46e();
      *unaff_FS_OFFSET = local_1c;
      return;
    }
    local_14 = param_3;
    local_20 = (undefined1 *)0x1001f9d3;
    piStack_10 = param_1;
    iVar3 = FUN_1001fb08();
  }
  param_1[1] = iVar3;
  return;
}

