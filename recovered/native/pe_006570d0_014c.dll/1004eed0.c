/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004eed0 */

undefined1 * __thiscall
FUN_1004eed0(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_18;
  local_10 = &LAB_1005a890;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_4;
  local_c = 0xffffffff;
  FUN_10013efc();
  *unaff_FS_OFFSET = local_14;
  return param_1;
}

