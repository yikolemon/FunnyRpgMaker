/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3a00 */

void FUN_1400d3a00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140115307. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140354d90);
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_1401cc2d0 + (longlong)iVar1 * 0x28));
    return;
  }
  return;
}

