/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101000c8 */

int __fastcall FUN_101000c8(int param_1)

{
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_1012ca40;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  local_14 = 1;
  local_24 = param_1;
  FUN_10101ab2();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

