/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a3842 */

void FUN_100a3842(int param_1)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_100c4140;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_100a37e8();
  local_8 = 0xffffffff;
  FUN_10228d00(*(undefined4 *)(param_1 + 0x38));
  FUN_1006c378();
  ExceptionList = local_10;
  return;
}

