/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017d2aa */

int FUN_1017d2aa(undefined4 param_1,undefined4 param_2)

{
  int local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_c = 0xffffffff;
  local_10 = &LAB_10180430;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1000334a(param_2);
  *(undefined1 *)(local_1c + 0x18) = 0;
  ExceptionList = local_14;
  return local_1c;
}

