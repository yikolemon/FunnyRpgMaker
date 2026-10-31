/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073af4 */

undefined4 * FUN_10073af4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c29b0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  FUN_10073d60(*param_2,param_2[1],param_1);
  *local_20 = std::ios_base::failure::vftable;
  ExceptionList = local_18;
  return local_20;
}

