/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400864b0 */

void FUN_1400864b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400967d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_140142f50);
    return;
  }
  if (iVar1 < 8) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_14013c9d0 + (longlong)iVar1 * 0x28));
    return;
  }
  return;
}

