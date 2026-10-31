/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1544 */

void FUN_1400a1544(void)

{
  PVOID pvVar1;
  __acrt_ptd *p_Var2;
  
  if (DAT_14013bbf0 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_14013bbf0);
  }
  if (pvVar1 != (PVOID)0xffffffffffffffff) {
    if (pvVar1 == (PVOID)0x0) {
      p_Var2 = FUN_1400a18c4();
      if (p_Var2 == (__acrt_ptd *)0x0) goto LAB_1400a1580;
    }
    return;
  }
LAB_1400a1580:
                    /* WARNING: Subroutine does not return */
  FUN_140096cf8();
}

