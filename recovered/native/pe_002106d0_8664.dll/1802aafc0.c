/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aafc0 */

DWORD __stdcall GetFileVersionInfoSizeW(LPCWSTR lptstrFilename,LPDWORD lpdwHandle)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802aafc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileVersionInfoSizeW(lptstrFilename,lpdwHandle);
  return DVar1;
}

