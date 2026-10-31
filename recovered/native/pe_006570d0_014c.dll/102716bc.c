/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102716bc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

void FUN_102716bc(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_102743cd();
  pcVar1 = *(code **)(iVar2 + 0xc);
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

