/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00406288 */

undefined4 * FUN_00406288(undefined4 param_1,int *param_2,uint *param_3)

{
  uint local_3c [6];
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_00407100;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_00402bae(local_3c,param_3);
  local_14 = 0;
  FUN_00403918(param_1,param_2,local_3c);
  local_14 = 0xffffffff;
  FUN_0040230a((int *)local_3c);
  *local_24 = std::system_error::vftable;
  ExceptionList = local_1c;
  return local_24;
}

