/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021982 */

void __fastcall FUN_10021982(int *param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10059650;
  local_10 = ExceptionList;
  local_18 = *param_1;
  if (local_18 != 0) {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    FUN_102283a0(local_18,4);
    ExceptionList = local_10;
  }
  return;
}

