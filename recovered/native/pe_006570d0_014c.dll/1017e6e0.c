/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017e6e0 */

undefined4 * __thiscall FUN_1017e6e0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_10;
  *param_1 = *param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *unaff_FS_OFFSET = iVar1;
  return param_1;
}

