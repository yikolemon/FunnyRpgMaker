/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f3138 */

undefined4 FUN_100f3138(undefined4 param_1,undefined **param_2)

{
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_20;
  local_18 = &LAB_100f5640;
  local_1c = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_1c;
  FUN_100f33b2(param_1,&param_2,&DAT_1037925c);
  local_14 = 0xffffffff;
  param_2 = std::exception::vftable;
  FUN_10259020(&stack0x0000000c);
  ExceptionList = local_1c;
  return param_1;
}

