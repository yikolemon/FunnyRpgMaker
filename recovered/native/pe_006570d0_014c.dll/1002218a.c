/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002218a */

undefined4 FUN_1002218a(void)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_1d;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_28;
  local_10 = 0xffffffff;
  local_14 = &LAB_10059690;
  local_18 = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_18;
  FUN_10022c40(&local_28,&local_1d);
  ExceptionList = local_18;
  return local_24;
}

