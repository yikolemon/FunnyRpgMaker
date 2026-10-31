/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10087942 */

int FUN_10087942(undefined4 param_1)

{
  undefined1 auStack_48 [8];
  undefined1 local_40 [16];
  int local_30 [2];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_48;
  local_18 = 0xffffffff;
  local_1c = &LAB_100c3380;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_10080804(0);
  local_18 = 0;
  FUN_100879de(local_30,param_1,local_40);
  local_18 = 0xffffffff;
  FUN_1007f222();
  ExceptionList = local_20;
  return local_30[0] + 0x18;
}

