/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004f09c */

undefined4 * __thiscall
FUN_1004f09c(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_14;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = param_3;
  param_1[6] = param_4;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

