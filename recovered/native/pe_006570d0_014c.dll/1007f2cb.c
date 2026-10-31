/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007f2cb */

int * FUN_1007f2cb(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  bool bVar3;
  undefined8 uVar4;
  undefined1 local_38 [4];
  char local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3000;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar2 = *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0x20);
  local_30 = uVar2 - param_3;
  if (uVar2 < param_3) {
    local_30 = 0;
  }
  local_24 = 0;
  if ((int)(uint)(uVar2 == 0) <= *(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x24)) {
    local_24 = local_30;
  }
  FUN_1007a540(param_1);
  uVar2 = 4;
  if (local_34 == '\x01') {
    iVar1 = *(int *)(*param_1 + 4);
    if ((local_24 != 0) && ((*(uint *)((int)param_1 + iVar1 + 0x14) & 0x1c0) != 0x40)) {
      do {
        local_28 = 0;
        local_14 = 1;
        iVar1 = FUN_1007a612((int)*(char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
        if (iVar1 == -1) {
          local_2c = 4;
          local_24 = local_30;
          goto code_r0x1007f3ea;
        }
        local_30 = local_30 + -1;
      } while (local_30 != 0);
      iVar1 = *(int *)(*param_1 + 4);
      local_24 = 0;
    }
    local_28 = 0;
    local_14 = 1;
    local_2c = 0;
    uVar4 = (**(code **)(**(int **)((int)param_1 + iVar1 + 0x38) + 0x24))(param_2,param_3,0);
    uVar2 = 4;
    if ((uint)uVar4 == param_3 && (int)((ulonglong)uVar4 >> 0x20) == 0) {
code_r0x1007f3ea:
      do {
        bVar3 = local_24 == 0;
        local_24 = local_24 + -1;
        uVar2 = local_2c;
        if (bVar3) goto code_r0x1007f41e;
        local_28 = local_2c;
        iVar1 = FUN_1007a612((int)*(char *)((int)param_1 + *(int *)(*param_1 + 4) + 0x40));
      } while (iVar1 != -1);
      uVar2 = 4;
    }
code_r0x1007f41e:
    iVar1 = *(int *)(*param_1 + 4);
    *(undefined4 *)((int)param_1 + iVar1 + 0x24) = 0;
    *(undefined4 *)((int)param_1 + iVar1 + 0x20) = 0;
  }
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) == 0) << 2 |
               uVar2 | *(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  FUN_1007a64a();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

