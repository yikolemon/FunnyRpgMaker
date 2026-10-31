/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a83e */

longlong * FUN_14002a83e(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if ((param_2 != param_3) && (*(longlong *)(param_2 + 0x20) != *param_4)) {
    do {
      FUN_14001010a(&local_30);
      if (local_30 == param_3) break;
    } while (*(longlong *)(local_30 + 0x20) != *param_4);
  }
  *param_1 = local_30;
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_58);
}

