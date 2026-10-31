/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b9b12 */

undefined4 * __fastcall FUN_101b9b12(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_101bcf80;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  local_14 = 0;
  local_28 = param_1 + 3;
  local_24 = param_1;
  FUN_100fb460(&DAT_10356101);
  local_24[0x48] = 0;
  local_24[0x47] = 0;
  local_24[0x49] = 0;
  local_14 = 2;
  *(undefined1 *)(local_24 + 0x4a) = 1;
  FUN_101ba1b0();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

