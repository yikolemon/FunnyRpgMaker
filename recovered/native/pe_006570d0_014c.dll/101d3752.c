/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d3752 */

int __thiscall FUN_101d3752(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_101d6110;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined1 *)(param_1 + 0x28) = 0;
  local_14 = 0;
  local_24 = param_1;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1001860e(param_2);
    *(undefined1 *)(local_24 + 0x28) = 1;
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

