/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100aff7a */

int FUN_100aff7a(int param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_1c;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c4780;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  FUN_1000334a(param_2);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *unaff_FS_OFFSET = local_18;
  return param_1;
}

