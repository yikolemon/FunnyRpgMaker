/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aa468 */

int FUN_100aa468(undefined4 param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  int local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_100c4460;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_1000334a(param_1);
  *(undefined4 *)(local_1c + 0x18) = *param_2;
  *unaff_FS_OFFSET = local_14;
  return local_1c;
}

