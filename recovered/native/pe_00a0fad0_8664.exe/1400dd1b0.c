/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd1b0 */

DWORD FUN_1400dd1b0(LPCWSTR param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = SetCurrentDirectoryW(param_1);
  if (BVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400dd1c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar2 = GetLastError();
  return DVar2;
}

