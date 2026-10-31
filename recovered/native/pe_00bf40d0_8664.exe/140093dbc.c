/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093dbc */

short * FUN_140093dbc(undefined1 (*param_1) [32])

{
  int iVar1;
  ulonglong uVar2;
  short *psVar3;
  
  if (((param_1 == (undefined1 (*) [32])0x0) || (uVar2 = FUN_14009d080(param_1,0x55), 0x54 < uVar2))
     || (psVar3 = _malloc_base(uVar2 * 2 + 2), psVar3 == (short *)0x0)) {
    psVar3 = (short *)0x0;
  }
  else {
    iVar1 = FUN_1400a6f60(psVar3,uVar2 + 1,(longlong)param_1,uVar2 + 1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
  return psVar3;
}

