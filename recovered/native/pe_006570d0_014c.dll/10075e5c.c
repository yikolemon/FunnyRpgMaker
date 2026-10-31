/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10075e5c */

void __thiscall FUN_10075e5c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2b40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_10075f1c(param_1 + 8,param_2);
  local_14 = 0;
  FUN_10075f74(local_28);
  local_14 = 0xffffffff;
  if (local_24 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*local_24 + 8))();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *unaff_FS_OFFSET = local_1c;
  return;
}

