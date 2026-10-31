/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028c2e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18028c2e0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1802910d8();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

