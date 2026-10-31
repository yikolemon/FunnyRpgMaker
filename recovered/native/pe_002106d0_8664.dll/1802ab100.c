/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802ab100 */

void __stdcall OutputDebugStringW(LPCWSTR lpOutputString)

{
                    /* WARNING: Could not recover jumptable at 0x0001802ab100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OutputDebugStringW(lpOutputString);
  return;
}

