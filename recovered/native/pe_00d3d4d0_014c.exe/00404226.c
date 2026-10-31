/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404226 */

undefined4 * FUN_00404226(undefined4 param_1,int *param_2)

{
  int local_3c [6];
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_14 = 0xffffffff;
  local_18 = &LAB_00406fb0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  (**(code **)(*param_2 + 8))(local_3c,param_1);
  local_14 = 0;
  FUN_00403bd2(local_24,local_3c);
  local_14 = 0xffffffff;
  FUN_0040230a(local_3c);
  *local_24 = std::_System_error::vftable;
  local_24[3] = param_1;
  local_24[4] = param_2;
  ExceptionList = local_1c;
  return local_24;
}

