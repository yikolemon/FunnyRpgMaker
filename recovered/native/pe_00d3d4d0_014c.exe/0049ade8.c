/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049ade8 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

int FUN_0049ade8(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 uStack_14;
  
  iVar2 = FUN_004961ad();
  if (((*(uint *)(iVar2 + 0x350) & DAT_0051b640) != 0) &&
     (iVar1 = *(int *)(iVar2 + 0x4c), iVar1 != 0)) {
    ExceptionList = uStack_14;
    return iVar1;
  }
  ___acrt_lock(4);
  ppuVar3 = __updatetlocinfoEx_nolock((int *)(iVar2 + 0x4c),DAT_00521b90);
  FUN_0049ae48();
  if (ppuVar3 != (undefined **)0x0) {
    iVar2 = FUN_0049ae51();
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_004903c8();
}

