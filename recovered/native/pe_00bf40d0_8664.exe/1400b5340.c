/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b5340 */

BOOL __stdcall IsWow64Process(HANDLE hProcess,PBOOL Wow64Process)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400b5340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWow64Process(hProcess,Wow64Process);
  return BVar1;
}

