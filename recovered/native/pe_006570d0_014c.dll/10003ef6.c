/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003ef6 */

undefined4 FUN_10003ef6(uint param_1)

{
  undefined4 local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_10005140;
  local_14 = ExceptionList;
  local_c = 0;
  ExceptionList = &local_14;
  FUN_10002cac();
  local_c = 0xffffffff;
  if ((param_1 & 1) != 0) {
    FUN_102283a0(local_1c,0x5c);
  }
  ExceptionList = local_14;
  return local_1c;
}

