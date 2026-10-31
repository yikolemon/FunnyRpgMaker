/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd160 */

ulonglong FUN_1400dd160(DWORD param_1,LPWSTR param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  
  DVar1 = GetCurrentDirectoryW(param_1,param_2);
  if ((DVar1 != 0) && (DVar1 <= param_1)) {
    return (ulonglong)DVar1;
  }
  DVar2 = GetLastError();
  return CONCAT44(DVar2,DVar1);
}

