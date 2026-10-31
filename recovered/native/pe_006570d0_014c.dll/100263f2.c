/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100263f2 */

undefined4 * __thiscall FUN_100263f2(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100598a0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = fmt::v12::format_facet<std::locale>::vftable;
  local_c = 0xffffffff;
  local_1c = param_1;
  FUN_10001fee();
  FUN_10001fee();
  FUN_10001fee();
  puVar1 = local_1c;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(local_1c,0x50);
  }
  ExceptionList = local_14;
  return puVar1;
}

