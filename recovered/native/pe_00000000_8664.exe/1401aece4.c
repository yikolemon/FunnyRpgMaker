/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aece4 */

void FUN_1401aece4(void)

{
  PVOID pvVar1;
  longlong lVar2;
  
  if (DAT_140f29630 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_140f29630);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      lVar2 = FUN_1401af064();
      if (lVar2 == 0) goto LAB_1401aed20;
    }
    return;
  }
LAB_1401aed20:
                    /* WARNING: Subroutine does not return */
  FUN_1401a0758();
}

