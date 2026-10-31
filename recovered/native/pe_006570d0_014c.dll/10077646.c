/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10077646 */

void __thiscall FUN_10077646(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int *local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  int iStack_10;
  
  iVar4 = *param_1;
  local_14 = param_1[1];
  iVar2 = param_2 - (local_14 - iVar4);
  if (param_2 < (uint)(local_14 - iVar4)) {
    param_1[1] = iVar4 + param_2;
  }
  else if (iVar2 != 0) {
    if ((uint)(param_1[2] - iVar4) < param_2) {
      local_20 = (undefined1 *)&local_40;
      local_14 = 0xffffffff;
      local_18 = &LAB_100c2c30;
      local_1c = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = (int)&local_1c;
      if (-1 < (int)param_2) {
        iVar4 = *param_1;
        iVar2 = param_1[1];
        uVar1 = param_1[2] - iVar4;
        uVar3 = (uVar1 >> 1) + uVar1;
        if (uVar3 <= param_2) {
          uVar3 = param_2;
        }
        if ((uVar1 >> 1 ^ 0x7fffffff) < uVar1) {
          uVar3 = 0x7fffffff;
        }
        local_20 = (undefined1 *)&local_40;
        local_3c = FUN_10001426(uVar3);
        local_34 = (iVar2 - iVar4) + local_3c;
        local_14 = 0;
        iVar4 = local_3c + param_2;
        local_40 = param_1;
        local_38 = uVar3;
        local_30 = local_34;
        local_28 = uVar3;
        local_24 = local_3c;
        FUN_1001659a(local_34,iVar4);
        local_30 = iVar4;
        local_2c = param_1;
        thunk_FUN_1000b6c9(*param_1,param_1[1],local_24);
        local_3c = 0;
        FUN_1004d080(local_24,param_2,local_28);
        local_14 = 0xffffffff;
        FUN_1004d0d0();
        *unaff_FS_OFFSET = local_1c;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10016590();
    }
    iVar2 = iVar2 + local_14;
    local_18 = (undefined1 *)0x10077683;
    iStack_10 = iVar2;
    FUN_1001659a();
    param_1[1] = iVar2;
  }
  return;
}

