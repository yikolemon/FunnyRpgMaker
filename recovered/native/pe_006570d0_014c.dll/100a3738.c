/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a3738 */

int FUN_100a3738(undefined4 param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  int local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c4130;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  FUN_1006c196(param_1,0);
  *(undefined4 *)(local_20 + 0x40) = 0;
  *(undefined4 *)(local_20 + 0x44) = 0;
  *(undefined4 *)(local_20 + 0x48) = 0;
  *(undefined4 *)(local_20 + 0x4c) = param_2;
  *(undefined1 *)(local_20 + 0x50) = 1;
  *unaff_FS_OFFSET = local_18;
  return local_20;
}

