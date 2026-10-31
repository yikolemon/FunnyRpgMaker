/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004961bb */

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004961bb(void)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if ((DAT_0051ae80 == 0xffffffff) || (iVar1 = FUN_00496937(DAT_0051ae80), iVar1 == 0)) {
    p_Var2 = FUN_004964a5();
    if (p_Var2 != (__acrt_ptd *)0x0) {
      return;
    }
  }
  else if (iVar1 != -1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

