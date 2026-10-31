/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180173d30 */

void FUN_180173d30(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30 [5];
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_30[0] = param_1;
  FUN_1801766cf(local_30);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}

