/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802910f4 */

void FUN_1802910f4(void)

{
  PVOID pvVar1;
  longlong lVar2;
  
  if (DAT_180415e90 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_180415e90);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      lVar2 = FUN_1802914c4();
      if (lVar2 == 0) goto LAB_180291130;
    }
    return;
  }
LAB_180291130:
                    /* WARNING: Subroutine does not return */
  abort();
}

