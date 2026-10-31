/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005bc7e */

undefined4 FUN_1005bc7e(void)

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
  local_14 = &LAB_100c1ee0;
  local_18 = ExceptionList;
  local_28 = 0;
  ExceptionList = &local_18;
  FUN_100c0650(&local_28,&local_1d);
  ExceptionList = local_18;
  return local_24;
}

