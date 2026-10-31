/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e6c8 */

int * __thiscall FUN_1007e6c8(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  longlong lVar2;
  undefined1 local_2c [4];
  char local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2f30;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1;
  FUN_1007a540(param_1);
  uVar1 = 4;
  if (local_28 == '\x01') {
    if (param_4 < (int)(uint)(param_3 == 0)) {
      uVar1 = 0;
    }
    else {
      local_14 = 1;
      lVar2 = (**(code **)(**(int **)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) + 0x24))
                        (param_2,param_3,param_4);
      uVar1 = (uint)(lVar2 != CONCAT44(param_4,param_3)) << 2;
    }
  }
  local_14 = 0;
  FUN_10073a60((uint)(*(int *)((int)local_24 + *(int *)(*local_24 + 4) + 0x38) == 0) << 2 |
               uVar1 | *(uint *)((int)local_24 + *(int *)(*local_24 + 4) + 0xc),0);
  local_14 = 0xffffffff;
  FUN_1007a64a();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

