/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000875a */

undefined8 * FUN_18000875a(undefined8 *param_1)

{
  undefined4 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = in_stack_00000028;
  FUN_1800087c2(&local_28);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

