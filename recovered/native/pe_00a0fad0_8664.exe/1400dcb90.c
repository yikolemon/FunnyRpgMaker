/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dcb90 */

void FUN_1400dcb90(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140115938();
    }
  }
  return;
}

