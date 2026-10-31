/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c0cc */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_1027c0cc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_14;
  
  iVar2 = FUN_102743cd();
  if (((*(uint *)(iVar2 + 0x350) & DAT_1039bbd0) != 0) &&
     (iVar1 = *(int *)(iVar2 + 0x4c), iVar1 != 0)) {
    ExceptionList = uStack_14;
    return iVar1;
  }
  ___acrt_lock(4);
  iVar2 = __updatetlocinfoEx_nolock((int *)(iVar2 + 0x4c),DAT_103a50f0);
  FUN_1027c12c();
  if (iVar2 != 0) {
    iVar2 = FUN_1027c135();
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}

