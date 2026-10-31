/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bb70a */

undefined4 * __fastcall FUN_101bb70a(undefined4 *param_1)

{
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_18 = &LAB_101bcfe0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = 0x10101;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 10;
  param_1[4] = 4;
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  local_14 = 0;
  local_28 = param_1 + 9;
  local_24 = param_1;
  FUN_1014b032();
  local_14 = 2;
  local_24[0x11] = 0;
  *(undefined2 *)(local_24 + 0x12) = 0;
  local_24[0x13] = 0;
  local_24[0x14] = 0;
  local_24[0x15] = 0;
  local_24[0x16] = 0;
  local_24[0x17] = 0;
  local_24[0x18] = 0;
  local_24[0x19] = 0;
  local_24[0x1a] = 0;
  *(undefined8 *)(local_24 + 0x1b) = 0;
  FUN_101bc774(10000);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

