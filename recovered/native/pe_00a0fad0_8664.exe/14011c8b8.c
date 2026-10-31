/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011c8b8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_14011c8b8(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140121578();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}

