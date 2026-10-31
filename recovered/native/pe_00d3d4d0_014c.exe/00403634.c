/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403634 */

undefined4 * FUN_00403634(undefined4 param_1,int *param_2,uint *param_3)

{
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406f00;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00403918(param_1,param_2,param_3);
  *local_24 = std::system_error::vftable;
  ExceptionList = local_1c;
  return local_24;
}

