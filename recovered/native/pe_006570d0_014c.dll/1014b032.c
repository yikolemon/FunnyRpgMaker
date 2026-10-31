/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b032 */

undefined4 * __fastcall FUN_1014b032(undefined4 *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = FUN_10152814;
  param_1[4] = 1;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

