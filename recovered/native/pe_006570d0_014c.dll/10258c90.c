/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258c90 */

void FUN_10258c90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = FUN_10272260();
  if (param_1 == *(int *)(iVar4 + 0x24)) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    iVar4 = FUN_10272260();
    *(undefined4 *)(iVar4 + 0x24) = uVar2;
    return;
  }
  iVar4 = FUN_10272260();
  iVar4 = *(int *)(iVar4 + 0x24);
  iVar3 = *(int *)(iVar4 + 4);
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    piVar1 = (int *)(iVar4 + 4);
    iVar4 = *piVar1;
    if (param_1 == iVar4) break;
    iVar3 = *(int *)(iVar4 + 4);
  }
  *piVar1 = *(int *)(param_1 + 4);
  return;
}

