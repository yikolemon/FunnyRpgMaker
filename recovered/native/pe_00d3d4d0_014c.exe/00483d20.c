/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483d20 */

void FUN_00483d20(void)

{
  DWORD DVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_004a7380;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = &DAT_0051bd48;
  DVar1 = GetCurrentThreadId();
  iVar2 = FUN_004839f0((uint *)&DAT_0050ea28);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00483bb0(5);
  }
  if (DAT_0050ea54 == 0x7fffffff) {
    DAT_0050ea54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_00483bb0(6);
  }
  do {
    iVar2 = *(int *)(puVar3 + 400);
    for (iVar4 = 0; (iVar2 != 0 && (iVar4 < 0x14)); iVar4 = iVar4 + 1) {
      if ((*(int *)(puVar3 + iVar4 * 0x14 + 8) != 0) &&
         (*(DWORD *)(puVar3 + iVar4 * 0x14 + 4) == DVar1)) {
        if (*(undefined4 **)(puVar3 + iVar4 * 0x14 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(puVar3 + iVar4 * 0x14 + 0x10) = 1;
        }
        FUN_00484310(*(int *)(puVar3 + iVar4 * 0x14 + 0xc));
        FUN_00483a10(*(int *)(puVar3 + iVar4 * 0x14 + 8));
        *(undefined4 *)(puVar3 + iVar4 * 0x14 + 8) = 0;
        *(int *)(puVar3 + 400) = *(int *)(puVar3 + 400) + -1;
        iVar2 = *(int *)(puVar3 + 400);
      }
    }
    puVar3 = *(undefined **)(puVar3 + 0x194);
  } while (puVar3 != (undefined *)0x0);
  FUN_00483a10(0x50ea28);
  ExceptionList = local_10;
  return;
}

