/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140051726 */

void FUN_140051726(longlong param_1,char *param_2)

{
  undefined1 auStack_38 [44];
  int local_c;
  ulonglong local_8;
  
  local_8 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  FUN_140021e43(param_1,param_2,&local_c);
  if (DAT_14012ea80 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_8 ^ (ulonglong)auStack_38);
}

