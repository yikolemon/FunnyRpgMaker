/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018a5f0 */

void FUN_14018a5f0(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1401a0758();
    }
  }
  return;
}

