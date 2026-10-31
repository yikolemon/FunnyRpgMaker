/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10229020 */

DWORD FUN_10229020(HANDLE param_1,LPWIN32_FIND_DATAW param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = FindNextFileW(param_1,param_2);
  if (BVar1 != 0) {
    return 0;
  }
  DVar2 = GetLastError();
  return DVar2;
}

