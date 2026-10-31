/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023e9b0 */

void FUN_18023e9b0(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = FUN_18023d650(&DAT_1804029b0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18023e720(5);
  }
  if (DAT_1804029fc != 0x7fffffff) {
    puVar2 = &DAT_180418550;
    do {
      iVar1 = *(int *)(puVar2 + 800);
      for (iVar3 = 0; (iVar1 != 0 && (iVar3 < 0x14)); iVar3 = iVar3 + 1) {
        if (*(longlong *)(puVar2 + (longlong)iVar3 * 0x28 + 0x10) == param_1) {
          *(undefined8 *)(puVar2 + (longlong)iVar3 * 0x28 + 0x10) = 0;
          *(int *)(puVar2 + 800) = *(int *)(puVar2 + 800) + -1;
          iVar1 = *(int *)(puVar2 + 800);
        }
      }
      puVar2 = *(undefined **)(puVar2 + 0x328);
    } while (puVar2 != (undefined *)0x0);
    FUN_18023d6e0(&DAT_1804029b0);
    return;
  }
  DAT_1804029fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_18023e720(6);
}

