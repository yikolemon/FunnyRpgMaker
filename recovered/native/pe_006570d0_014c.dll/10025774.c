/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10025774 */

undefined4 * __fastcall FUN_10025774(undefined4 param_1,undefined4 param_2)

{
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10058e20;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000648a(param_2);
  *local_1c = fmt::v12::format_error::vftable;
  ExceptionList = local_14;
  return local_1c;
}

