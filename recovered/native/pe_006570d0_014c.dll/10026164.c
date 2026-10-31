/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10026164 */

void __fastcall FUN_10026164(undefined4 *param_1)

{
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10059880;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = fmt::v12::format_facet<std::locale>::vftable;
  local_8 = 0xffffffff;
  local_18 = param_1;
  FUN_10001fee();
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_10;
  return;
}

