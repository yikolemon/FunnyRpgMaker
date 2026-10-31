/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403918 */

undefined4 * FUN_00403918(undefined4 param_1,int *param_2,uint *param_3)

{
  uint in_stack_ffffffa8;
  uint in_stack_ffffffac;
  uint in_stack_ffffffb0;
  uint in_stack_ffffffb4;
  int in_stack_ffffffb8;
  uint local_40 [6];
  undefined1 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  local_18 = &LAB_00406f30;
  local_1c = ExceptionList;
  local_20 = &stack0xffffff9c;
  local_28 = &stack0xffffffa8;
  ExceptionList = &local_1c;
  FUN_00403b4c(local_28,param_3);
  local_14 = 0xffffffff;
  FUN_00403a36(local_40,param_1,param_2,in_stack_ffffffa8,in_stack_ffffffac,in_stack_ffffffb0,
               in_stack_ffffffb4,in_stack_ffffffb8,param_3);
  local_14 = 1;
  local_20 = (undefined1 *)local_40;
  FUN_00403bd2(local_24,local_40);
  local_14 = 0xffffffff;
  FUN_0040230a((int *)local_40);
  *local_24 = std::_System_error::vftable;
  local_24[3] = param_1;
  local_24[4] = param_2;
  ExceptionList = local_1c;
  return local_24;
}

