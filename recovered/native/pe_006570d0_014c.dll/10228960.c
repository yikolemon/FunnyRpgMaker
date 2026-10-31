/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10228960 */

void FUN_10228960(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
  }
  return;
}

