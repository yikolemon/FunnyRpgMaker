/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10228350 */

void FUN_10228350(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = FUN_1026faa0(param_1);
  while( true ) {
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_102684d0(param_1);
    if (iVar2 == 0) break;
    iVar2 = FUN_1026faa0(param_1);
  }
  if (param_1 == -1) {
    FUN_102348c0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10228470();
}

