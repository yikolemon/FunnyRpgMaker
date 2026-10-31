/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10091cfc */

undefined4 * __fastcall FUN_10091cfc(undefined4 *param_1)

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c38f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_24 = param_1;
  uVar1 = FUN_1022bce0(1);
  param_1[3] = uVar1;
  local_14 = 0;
  local_28 = local_24 + 2;
  uVar1 = FUN_10091db0(local_28);
  *local_24 = uVar1;
  uVar1 = FUN_10091ec2(local_28);
  local_24[1] = uVar1;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

