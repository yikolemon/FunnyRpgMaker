/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014630d */

void FUN_18014630d(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = &local_10;
  local_10 = 0;
  local_28 = in_stack_00000030;
  uStack_20 = in_stack_00000038;
  local_30 = in_stack_00000028;
  FUN_1801420c6();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

