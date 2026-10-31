/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a7f7c */

void FUN_1400a7f7c(wchar_t *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  WCHAR local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1400a1e0c((ushort *)param_1,0x59,local_28,9);
  if (iVar1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_48);
}

