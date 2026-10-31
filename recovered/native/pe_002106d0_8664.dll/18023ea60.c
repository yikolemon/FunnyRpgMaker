/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023ea60 */

void FUN_18023ea60(void)

{
  DWORD DVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  DVar1 = GetCurrentThreadId();
  iVar2 = FUN_18023d650(&DAT_1804029b0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18023e720(5);
  }
  if (DAT_1804029fc != 0x7fffffff) {
    puVar3 = &DAT_180418550;
    do {
      iVar2 = *(int *)(puVar3 + 800);
      for (iVar4 = 0; (iVar2 != 0 && (iVar4 < 0x14)); iVar4 = iVar4 + 1) {
        if ((*(longlong *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) != 0) &&
           (*(DWORD *)(puVar3 + (longlong)iVar4 * 0x28 + 8) == DVar1)) {
          if (*(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) = 1;
          }
          FUN_18023daf0(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x18));
          FUN_18023d6e0(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10));
          *(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) = 0;
          *(int *)(puVar3 + 800) = *(int *)(puVar3 + 800) + -1;
          iVar2 = *(int *)(puVar3 + 800);
        }
      }
      puVar3 = *(undefined **)(puVar3 + 0x328);
    } while (puVar3 != (undefined *)0x0);
    FUN_18023d6e0(&DAT_1804029b0);
    return;
  }
  DAT_1804029fc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_18023e720(6);
}

