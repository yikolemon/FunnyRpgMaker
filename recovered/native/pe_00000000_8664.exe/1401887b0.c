/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401887b0 */

void FUN_1401887b0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = _malloc_base();
  while( true ) {
    if (lVar2 != 0) {
      return;
    }
    iVar3 = FUN_14019c710(param_1);
    if (iVar3 == 0) break;
    lVar2 = _malloc_base(param_1);
  }
  if (param_1 == -1) {
    FUN_14018e070();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140189870();
}

