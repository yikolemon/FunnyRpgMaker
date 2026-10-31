/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180244af0 */

void thunk_FUN_180239630(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = _malloc_base();
  while( true ) {
    if (lVar2 != 0) {
      return;
    }
    iVar3 = FUN_18027db20(param_1);
    if (iVar3 == 0) break;
    lVar2 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
    FUN_180246480();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239770();
}

