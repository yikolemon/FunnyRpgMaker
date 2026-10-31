/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10077d32 */

void __thiscall FUN_10077d32(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined1 local_40 [8];
  int local_38;
  int local_34;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2c90;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_10077de8(local_40,param_2,param_1 + 8);
  local_14 = 1;
  FUN_1007798c(local_38,local_34 - local_38);
  local_14 = 0xffffffff;
  FUN_10004eae();
  *unaff_FS_OFFSET = local_1c;
  return;
}

