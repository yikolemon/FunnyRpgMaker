/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ca6c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14009ca6c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1400a1528();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

