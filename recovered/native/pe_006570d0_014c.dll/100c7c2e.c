/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c7c2e */

int * __thiscall FUN_100c7c2e(int *param_1,undefined2 param_2)

{
  short sVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_2c [4];
  char local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c7f50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1;
  FUN_1007a540(param_1);
  uVar2 = 4;
  if (local_28 == '\x01') {
    local_14 = 1;
    sVar1 = FUN_100a14d0(param_2);
    uVar2 = (uint)(sVar1 == -1) << 2;
  }
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) == 0) << 2 |
               uVar2 | *(uint *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  FUN_1007a64a();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

