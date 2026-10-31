/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10054454 */

undefined4 FUN_10054454(undefined4 param_1,int param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_1005ab50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10051841(local_50,*(undefined4 *)(param_2 + 4));
  local_14 = 0;
  FUN_10051841(local_38,*(int *)(param_2 + 8) + 1);
  local_14 = 1;
  FUN_100545ad(param_1," at line ",local_38,", column ",local_50);
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  *unaff_FS_OFFSET = local_1c;
  return param_1;
}

