/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014d05e */

void FUN_18014d05e(void)

{
  undefined8 in_R9;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res20;
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_res20 = in_R9;
  FUN_18014c21c();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

