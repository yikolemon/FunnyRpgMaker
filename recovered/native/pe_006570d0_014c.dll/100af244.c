/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100af244 */

undefined4 __thiscall FUN_100af244(undefined4 param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_48;
  undefined4 local_44;
  undefined1 local_3c [28];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4700;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_44 = param_2;
  local_48 = local_3c;
  FUN_100021d4();
  local_14 = 0;
  local_48 = local_3c;
  FUN_100128b2();
  local_14 = 0xffffffff;
  FUN_10001134();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

