/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b4f0 */

void FUN_14008b4f0(void)

{
  DWORD DVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  int iVar5;
  
  DVar1 = GetCurrentThreadId();
  uVar3 = FUN_14008b1e0((uint *)&DAT_14012ebf0);
  if ((int)uVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14008b2a0(5);
  }
  if (DAT_14012ec3c != 0x7fffffff) {
    puVar4 = &DAT_14013cf20;
    do {
      iVar2 = *(int *)(puVar4 + 800);
      for (iVar5 = 0; (iVar2 != 0 && (iVar5 < 0x14)); iVar5 = iVar5 + 1) {
        if ((*(longlong *)(puVar4 + (longlong)iVar5 * 0x28 + 0x10) != 0) &&
           (*(DWORD *)(puVar4 + (longlong)iVar5 * 0x28 + 8) == DVar1)) {
          if (*(undefined4 **)(puVar4 + (longlong)iVar5 * 0x28 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(puVar4 + (longlong)iVar5 * 0x28 + 0x20) = 1;
          }
          FUN_14008b8f0(*(longlong *)(puVar4 + (longlong)iVar5 * 0x28 + 0x18));
          FUN_14008b270(*(longlong *)(puVar4 + (longlong)iVar5 * 0x28 + 0x10));
          *(undefined8 *)(puVar4 + (longlong)iVar5 * 0x28 + 0x10) = 0;
          *(int *)(puVar4 + 800) = *(int *)(puVar4 + 800) + -1;
          iVar2 = *(int *)(puVar4 + 800);
        }
      }
      puVar4 = *(undefined **)(puVar4 + 0x328);
    } while (puVar4 != (undefined *)0x0);
    FUN_14008b270(0x14012ebf0);
    return;
  }
  DAT_14012ec3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  FUN_14008b2a0(6);
}

