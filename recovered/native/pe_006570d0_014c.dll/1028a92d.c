/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a92d */

BOOL GetFileVersionInfoW(LPCWSTR lptstrFilename,DWORD dwHandle,DWORD dwLen,LPVOID lpData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x1028a92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileVersionInfoW(lptstrFilename,dwHandle,dwLen,lpData);
  return BVar1;
}

