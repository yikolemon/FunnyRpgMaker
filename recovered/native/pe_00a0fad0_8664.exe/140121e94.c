/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121e94 */

BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140121e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}

