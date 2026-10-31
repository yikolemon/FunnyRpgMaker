/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258880 */

undefined4 FUN_10258880(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_10272260();
  piVar1 = *(int **)(iVar2 + 0x24);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return 0;
}

