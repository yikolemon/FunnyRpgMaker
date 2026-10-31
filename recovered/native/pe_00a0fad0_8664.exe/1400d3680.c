/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3680 */

void FUN_1400d3680(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = _malloc_base();
  while( true ) {
    if (lVar2 != 0) {
      return;
    }
    iVar3 = FUN_1401118e0(param_1);
    if (iVar3 == 0) break;
    lVar2 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
    FUN_1400ddcb0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9cb0();
}

