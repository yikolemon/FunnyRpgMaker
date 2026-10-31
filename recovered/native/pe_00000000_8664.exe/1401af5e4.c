/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af5e4 */

BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001401af5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}

