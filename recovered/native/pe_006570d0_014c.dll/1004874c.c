/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004874c */

undefined4 * __thiscall FUN_1004874c(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  undefined1 *local_18;
  int local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_1005a710;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_14;
  local_c = 0xffffffff;
  *param_1 = std::numpunct<wchar_t>::vftable;
  local_1c = param_1;
  FUN_1000e124();
  puVar1 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x18);
  }
  *unaff_FS_OFFSET = local_14;
  return puVar1;
}

