/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100994f0 */

bool FUN_100994f0(int *param_1)

{
  int iVar1;
  int *unaff_FS_OFFSET;
  undefined4 local_30 [3];
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3bc0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1[1] - *param_1;
  FUN_10076b48(local_30,&local_24);
  local_14 = 0xffffffff;
  iVar1 = FUN_102595e0(*param_1,local_30[0],param_1[1] - *param_1);
  FUN_10004eae();
  *unaff_FS_OFFSET = local_1c;
  return iVar1 == 0;
}

