/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004c2ef */

undefined8 * FUN_14004c2ef(undefined8 *param_1)

{
  undefined4 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_38 = in_stack_00000028;
  FUN_14004c357(&local_28);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

