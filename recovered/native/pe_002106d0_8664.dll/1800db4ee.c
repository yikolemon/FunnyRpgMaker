/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db4ee */

void FUN_1800db4ee(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [56];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (8 < param_2 - (longlong)param_1) {
    local_10 = *(undefined8 *)(param_2 + -8);
    *(undefined8 *)(param_2 + -8) = *param_1;
    FUN_1800db45f(param_1,0,(param_2 + -8) - (longlong)param_1 >> 3);
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

