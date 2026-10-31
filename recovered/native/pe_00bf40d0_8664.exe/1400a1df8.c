/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1df8 */

BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001400a1df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}

