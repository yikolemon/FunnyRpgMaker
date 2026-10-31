/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015f374 */

int FUN_1015f374(undefined4 param_1,undefined4 param_2)

{
  int local_2c;
  undefined1 local_25;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f670;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100a92f2(param_1,&local_25);
  local_14 = 0;
  local_2c = local_24 + 0x18;
  FUN_1000334a(param_2);
  ExceptionList = local_1c;
  return local_24;
}

