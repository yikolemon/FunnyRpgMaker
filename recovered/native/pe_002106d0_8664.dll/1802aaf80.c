/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aaf80 */

BOOL __stdcall
CreateProcessW(LPCWSTR lpApplicationName,LPWSTR lpCommandLine,
              LPSECURITY_ATTRIBUTES lpProcessAttributes,LPSECURITY_ATTRIBUTES lpThreadAttributes,
              BOOL bInheritHandles,DWORD dwCreationFlags,LPVOID lpEnvironment,
              LPCWSTR lpCurrentDirectory,LPSTARTUPINFOW lpStartupInfo,
              LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802aaf80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateProcessW(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return BVar1;
}

