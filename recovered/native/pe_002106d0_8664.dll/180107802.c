/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107802 */

void FUN_180107802(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_10 = CONCAT44((float)((ulonglong)*param_2 >> 0x20) -
                      (float)((ulonglong)*(undefined8 *)(param_1 + 0x168) >> 0x20),
                      (float)*param_2 - (float)*(undefined8 *)(param_1 + 0x168));
  FUN_1800fed08(&local_10,8,
                *(undefined4 *)
                 (*(longlong *)(param_1 + 0x150) + -4 + (longlong)*(int *)(param_1 + 0x148) * 4));
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

