/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b664c */

void FUN_1401b664c(wchar_t *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1401af6c0(param_1,0x59,local_28);
  if (iVar1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

