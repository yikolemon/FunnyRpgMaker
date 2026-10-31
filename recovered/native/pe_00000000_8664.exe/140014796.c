/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140014796 */

void FUN_140014796(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140193164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x80) + 0x30));
  return;
}

