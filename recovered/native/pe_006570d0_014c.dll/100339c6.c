/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100339c6 */

void __fastcall FUN_100339c6(int *param_1)

{
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_18;
  local_c = &LAB_10059ac0;
  local_10 = ExceptionList;
  local_18 = *param_1;
  if (local_18 != 0) {
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_1003371e();
    local_8 = 0xffffffff;
    FUN_102283a0(local_18,0x98);
    ExceptionList = local_10;
  }
  return;
}

