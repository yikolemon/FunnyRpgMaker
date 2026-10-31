/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100756a4 */

undefined4 * __thiscall FUN_100756a4(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *unaff_FS_OFFSET;
  undefined1 local_7c [80];
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_7c;
  local_18 = &LAB_100c2ae0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = std::exception::vftable;
  local_2c = param_1 + 1;
  param_1[2] = 0;
  param_1[1] = 0;
  local_14 = 0;
  *param_1 = FileReaderException::vftable;
  local_24 = param_1;
  FUN_10075be2();
  local_14 = 1;
  local_28 = local_24 + 3;
  piVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  FUN_1007671c(local_28,param_2,(int)param_2 + *piVar1 * 2);
  local_14 = 0xffffffff;
  FUN_10075d64();
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

