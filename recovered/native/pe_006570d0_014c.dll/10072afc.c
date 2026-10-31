/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072afc */

undefined1 * __fastcall FUN_10072afc(undefined1 *param_1)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_28 [2];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c28a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_28[0] = param_1 + 0x10;
  FUN_100731ba(1);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

