/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dc6a0 */

void FUN_1400dc6a0(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
  }
  return;
}

