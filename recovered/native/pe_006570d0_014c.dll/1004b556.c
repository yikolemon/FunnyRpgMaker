/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004b556 */

int __thiscall FUN_1004b556(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_1005a7d0;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_c = 0;
  local_1c = param_1;
  FUN_1004d262(param_2);
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

