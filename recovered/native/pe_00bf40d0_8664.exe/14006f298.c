/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006f298 */

void FUN_14006f298(longlong *param_1,int param_2)

{
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14007a06f(param_1,&local_c,0);
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_38);
}

