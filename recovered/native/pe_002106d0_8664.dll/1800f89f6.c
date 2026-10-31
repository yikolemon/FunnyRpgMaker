/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f89f6 */

void FUN_1800f89f6(longlong *param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  if ((*param_1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(*param_1 + 0xb8) != '\x01')))) {
    local_c = 1;
    FUN_1800f92cc(param_1,&local_c,0);
    if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800f7329(4);
}

