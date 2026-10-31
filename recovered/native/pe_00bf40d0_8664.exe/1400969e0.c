/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400969e0 */

short * FUN_1400969e0(longlong param_1)

{
  short *psVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (*(short *)(param_1 + lVar3 * 2) != 0);
    lVar4 = lVar4 + 2;
    psVar1 = _malloc_base(lVar4 * 2);
    if (psVar1 != (short *)0x0) {
      uVar2 = FUN_1400a1b80(psVar1,lVar4,param_1);
      if ((int)uVar2 == 0) {
        return psVar1;
      }
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return (short *)0x0;
}

