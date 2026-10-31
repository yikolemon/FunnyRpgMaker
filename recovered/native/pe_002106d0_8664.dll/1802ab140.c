/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab140 */

DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName,LPWSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableW(lpName,lpBuffer,nSize);
  return DVar1;
}

