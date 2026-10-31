/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400479b0 */

undefined8 * FUN_1400479b0(undefined8 *param_1)

{
  undefined4 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_38 = in_stack_00000028;
  FUN_140047a18(&local_28);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
}

