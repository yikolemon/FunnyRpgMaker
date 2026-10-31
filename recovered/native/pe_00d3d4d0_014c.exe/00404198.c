/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404198 */

undefined4 * FUN_00404198(undefined4 param_1,int *param_2)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_00406fa0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_00404226(param_1,param_2);
  *local_20 = std::system_error::vftable;
  ExceptionList = local_18;
  return local_20;
}

