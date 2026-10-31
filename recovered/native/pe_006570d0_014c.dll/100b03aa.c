/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b03aa */

undefined4 * __thiscall FUN_100b03aa(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_18 = &LAB_100c47d0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = param_2;
  param_1[1] = 0;
  local_14 = 0;
  local_24 = param_1;
  uVar1 = FUN_10228350(0x54);
  local_24[1] = uVar1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

