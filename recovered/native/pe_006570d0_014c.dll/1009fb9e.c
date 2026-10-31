/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009fb9e */

void __thiscall FUN_1009fb9e(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
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
  int *local_14;
  
  iVar4 = *param_1;
  local_1c = param_1[1];
  iVar1 = local_1c - iVar4 >> 2;
  local_18 = (undefined1 *)(param_2 + iVar1 * 0x3b13b13b);
  if (param_2 < (uint)(iVar1 * -0x3b13b13b)) {
    iVar4 = iVar4 + param_2 * 0x34;
    for (iVar1 = iVar4; iVar1 != local_1c; iVar1 = iVar1 + 0x34) {
      local_18 = (undefined1 *)0x1009fbd1;
      local_14 = (int *)iVar1;
      FUN_1009cf3e();
    }
    param_1[1] = iVar4;
  }
  else if (local_18 != (undefined1 *)0x0) {
    if ((uint)((param_1[2] - iVar4 >> 2) * -0x3b13b13b) < param_2) {
      local_20 = (undefined1 *)&local_40;
      local_14 = (int *)0xffffffff;
      local_18 = &LAB_100c3f30;
      local_1c = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = (int)&local_1c;
      if (0x4ec4ec4 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_10016590();
      }
      uVar2 = (param_1[2] - *param_1 >> 2) * -0x3b13b13b;
      uVar3 = 0x4ec4ec4 - (uVar2 >> 1);
      uVar5 = (uVar2 >> 1) + uVar2;
      if (uVar5 <= param_2) {
        uVar5 = param_2;
      }
      if (uVar3 <= uVar2 && uVar2 - uVar3 != 0) {
        uVar5 = 0x4ec4ec4;
      }
      if (uVar5 < 0x4ec4ec5) {
        iVar4 = param_1[1] - *param_1;
        local_20 = (undefined1 *)&local_40;
        local_3c = FUN_10001426(uVar5 * 0x34);
        local_34 = local_3c + iVar4;
        local_14 = (int *)0x0;
        local_40 = param_1;
        local_38 = uVar5;
        local_30 = local_34;
        local_2c = uVar5;
        local_28 = param_1;
        local_24 = local_3c;
        local_30 = FUN_1009fd5e(local_34,(iVar4 >> 2) * 0x3b13b13b + param_2,param_1);
        iVar4 = *local_28;
        iVar1 = local_28[1];
        local_14 = (int *)0xffffffff;
        iVar6 = local_24;
        for (; iVar4 != iVar1; iVar4 = iVar4 + 0x34) {
          FUN_1009f5d3(iVar6,iVar4);
          iVar6 = iVar6 + 0x34;
        }
        local_14 = (int *)0xffffffff;
        local_3c = 0;
        FUN_1009f50a(local_24,param_2,local_2c);
        FUN_1009f57c();
        *unaff_FS_OFFSET = local_1c;
        return;
      }
      local_20 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
      FUN_1000146d();
    }
    local_20 = (undefined1 *)0x1009fc07;
    local_14 = param_1;
    iVar4 = FUN_1009fd5e();
    param_1[1] = iVar4;
  }
  return;
}

