/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802356a1 */

void FUN_1802356a1(undefined8 param_1,int param_2,int param_3)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  FUN_1801c9a4b(param_1,param_2 * param_3,local_c);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

