/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100143a8 */

undefined4 FUN_100143a8(undefined4 param_1)

{
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = local_28;
  local_c = 0xffffffff;
  local_10 = &LAB_10058f20;
  local_14 = ExceptionList;
  local_24 = param_1;
  ExceptionList = &local_14;
  FUN_100181d6();
  ExceptionList = local_14;
  return local_1c;
}

