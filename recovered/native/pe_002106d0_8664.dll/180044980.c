/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180044980 */

void FUN_180044980(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_18023d650();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18023e720(5);
  }
  if (*(int *)(param_1 + 0x4c) != 0x7fffffff) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_18023e720(6);
}

