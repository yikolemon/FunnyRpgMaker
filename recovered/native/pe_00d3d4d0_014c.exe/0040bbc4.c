/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040bbc4 */

undefined4 * __fastcall FUN_0040bbc4(undefined4 *param_1,int param_2)

{
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_00417fa0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_1c = param_1;
  FUN_0040bd1e(param_1,param_2);
  *local_1c = std::format_error::vftable;
  ExceptionList = local_14;
  return local_1c;
}

