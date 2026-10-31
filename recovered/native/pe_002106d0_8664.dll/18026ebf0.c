/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026ebf0 */

void FUN_18026ebf0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18026ec10();
  if (lVar1 != 0) {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

