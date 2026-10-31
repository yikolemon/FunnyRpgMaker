/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dcef0 */

DWORD FUN_1400dcef0(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400dcf09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

