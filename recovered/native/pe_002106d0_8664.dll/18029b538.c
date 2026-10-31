/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029b538 */

void FUN_18029b538(wchar_t *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_48;
  iVar1 = FUN_180291b20(param_1,0x59,local_28);
  if (iVar1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_48);
}

