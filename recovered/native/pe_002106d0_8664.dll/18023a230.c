/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023a230 */

void FUN_18023a230(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}

