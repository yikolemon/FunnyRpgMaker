/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189e10 */

void FUN_140189e10(void)

{
  DWORD DVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  DVar1 = GetCurrentThreadId();
  iVar2 = FUN_14018a2b0(&DAT_140f17c40);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401896d0(5);
  }
  if (DAT_140f17c8c != 0x7fffffff) {
    puVar3 = &DAT_140f2ac20;
    do {
      iVar2 = *(int *)(puVar3 + 800);
      for (iVar4 = 0; (iVar2 != 0 && (iVar4 < 0x14)); iVar4 = iVar4 + 1) {
        if ((*(longlong *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) != 0) &&
           (*(DWORD *)(puVar3 + (longlong)iVar4 * 0x28 + 8) == DVar1)) {
          if (*(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar3 + (longlong)iVar4 * 0x28 + 0x20) = 1;
          }
          FUN_140189dd0(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x18));
          FUN_14018a340(*(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10));
          *(undefined8 *)(puVar3 + (longlong)iVar4 * 0x28 + 0x10) = 0;
          *(int *)(puVar3 + 800) = *(int *)(puVar3 + 800) + -1;
          iVar2 = *(int *)(puVar3 + 800);
        }
      }
      puVar3 = *(undefined **)(puVar3 + 0x328);
    } while (puVar3 != (undefined *)0x0);
    FUN_14018a340(&DAT_140f17c40);
    return;
  }
  DAT_140f17c8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_1401896d0(6);
}

