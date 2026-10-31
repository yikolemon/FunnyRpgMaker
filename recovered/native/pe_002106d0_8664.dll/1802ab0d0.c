/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab0d0 */

BOOL __stdcall IsWow64Process(HANDLE hProcess,PBOOL Wow64Process)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001802ab0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWow64Process(hProcess,Wow64Process);
  return BVar1;
}

