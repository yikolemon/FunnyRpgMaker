/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140006f9b */

HMODULE FUN_140006f9b(undefined *param_1)

{
  code *lpModuleName;
  undefined1 auStack_38 [32];
  HMODULE local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  local_18 = (HMODULE)0x0;
  lpModuleName = FUN_140006f9b;
  if (param_1 != (undefined *)0x0) {
    lpModuleName = (code *)param_1;
  }
  GetModuleHandleExW(6,(LPCWSTR)lpModuleName,&local_18);
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}

