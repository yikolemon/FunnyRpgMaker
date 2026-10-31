/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10259420 */

void FUN_10259420(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10259440();
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

