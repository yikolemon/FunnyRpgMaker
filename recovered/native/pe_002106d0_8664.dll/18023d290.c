/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d290 */

void FUN_18023d290(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018027f8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_180420fb0);
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_180417f20 + (longlong)iVar1 * 0x28));
    return;
  }
  return;
}

