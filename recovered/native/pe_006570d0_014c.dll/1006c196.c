/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006c196 */

int FUN_1006c196(int param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2560;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_1006c24e();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(local_24 + 0x38) = uVar1;
  local_14 = 1;
  FUN_100128b2(param_1);
  FUN_1006c2ce(param_1 + 0x1c);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

