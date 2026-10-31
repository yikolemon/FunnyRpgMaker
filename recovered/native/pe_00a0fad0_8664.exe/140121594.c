/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121594 */

void FUN_140121594(void)

{
  PVOID pvVar1;
  longlong lVar2;
  
  if (DAT_1401ca634 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1401ca634);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      lVar2 = FUN_140121914();
      if (lVar2 == 0) goto LAB_1401215d0;
    }
    return;
  }
LAB_1401215d0:
                    /* WARNING: Subroutine does not return */
  FUN_140115938();
}

