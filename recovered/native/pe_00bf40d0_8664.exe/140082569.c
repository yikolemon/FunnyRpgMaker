/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140082569 */

void FUN_140082569(longlong param_1,int param_2,int param_3)

{
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  FUN_14001c423(param_1,param_2 * param_3,&local_c);
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_38);
}

