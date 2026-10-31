/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014a69a */

undefined4 * __fastcall FUN_1014a69a(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_10156250;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  local_14 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_24 = param_1;
  FUN_101527b6();
  local_24[0x12] = 0;
  local_24[0x13] = 0;
  local_24[0x14] = 0;
  local_24[0x15] = 0;
  local_24[0xe] = 0;
  local_24[0xf] = 0;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[10] = 0;
  local_24[0xb] = 0;
  local_24[0xc] = 0;
  local_24[0xd] = 0;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

