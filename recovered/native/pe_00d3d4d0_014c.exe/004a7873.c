/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a7873 */

DWORD GetEnvironmentVariableW(LPCWSTR lpName,LPWSTR lpBuffer,DWORD nSize)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004a7873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetEnvironmentVariableW(lpName,lpBuffer,nSize);
  return DVar1;
}

