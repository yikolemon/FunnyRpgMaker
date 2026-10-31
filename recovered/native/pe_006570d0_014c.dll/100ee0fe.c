/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ee0fe */

undefined4 FUN_100ee0fe(void)

{
  undefined1 *local_38;
  undefined1 *local_34;
  undefined4 local_28;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_38;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f51f0;
  local_18 = ExceptionList;
  local_38 = &stack0x00000008;
  local_34 = &stack0x0000000c;
  ExceptionList = &local_18;
  FUN_100ee18a();
  ExceptionList = local_18;
  return local_28;
}

