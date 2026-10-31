/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180221c58 */

void FUN_180221c58(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_18022ca2f(param_1,&local_c,0);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

