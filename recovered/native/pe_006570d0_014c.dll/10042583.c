/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042583 */

void FUN_10042583(int param_1)

{
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_14;
  local_c = &LAB_1005a480;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  if (*(int *)(param_1 + 0x38) != param_1 + 0x48) {
    ExceptionList = &local_10;
    thunk_FUN_10274120(*(int *)(param_1 + 0x38));
    ExceptionList = local_10;
  }
  return;
}

