/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188e10 */

void FUN_140188e10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014019fbc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140f32960);
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_140f2aa00 + (longlong)iVar1 * 0x28));
    return;
  }
  return;
}

