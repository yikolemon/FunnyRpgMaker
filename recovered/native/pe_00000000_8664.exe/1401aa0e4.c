/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aa0e4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401aa0e4(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1401aecc8();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

