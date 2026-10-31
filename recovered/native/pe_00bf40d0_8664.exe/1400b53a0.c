/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b53a0 */

DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName,LPWSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b53a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableW(lpName,lpBuffer,nSize);
  return DVar1;
}

