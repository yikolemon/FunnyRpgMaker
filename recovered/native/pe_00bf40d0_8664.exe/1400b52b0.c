/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b52b0 */

BOOL __stdcall
CreateProcessW(LPCWSTR lpApplicationName,LPWSTR lpCommandLine,
              LPSECURITY_ATTRIBUTES lpProcessAttributes,LPSECURITY_ATTRIBUTES lpThreadAttributes,
              BOOL bInheritHandles,DWORD dwCreationFlags,LPVOID lpEnvironment,
              LPCWSTR lpCurrentDirectory,LPSTARTUPINFOW lpStartupInfo,
              LPPROCESS_INFORMATION lpProcessInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b52b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CreateProcessW(lpApplicationName,lpCommandLine,lpProcessAttributes,lpThreadAttributes,
                         bInheritHandles,dwCreationFlags,lpEnvironment,lpCurrentDirectory,
                         lpStartupInfo,lpProcessInformation);
  return BVar1;
}

