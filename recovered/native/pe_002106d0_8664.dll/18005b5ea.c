/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b5ea */

void FUN_18005b5ea(undefined4 param_1)

{
  undefined1 auStack_38 [32];
  undefined4 *local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_18 = &local_c;
  local_c = param_1;
  FUN_18005b638();
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

