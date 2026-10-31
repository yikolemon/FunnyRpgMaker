/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4cb6 */

void FUN_100f4cb6(int param_1)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_100f5750;
  local_10 = ExceptionList;
  if (param_1 != 0) {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    FUN_100f23d8();
    local_8 = 0xffffffff;
    FUN_10001fee();
    FUN_102283a0(param_1,0x34);
    ExceptionList = local_10;
  }
  return;
}

