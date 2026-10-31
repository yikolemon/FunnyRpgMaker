/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d640 */

void FUN_1022d640(void)

{
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10288870;
  local_10 = ExceptionList;
  uVar1 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = &DAT_1039d0b8;
  DVar2 = GetCurrentThreadId();
  iVar3 = FUN_1022c1e0(&DAT_10388f60,uVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(5);
  }
  if (DAT_10388f8c == 0x7fffffff) {
    DAT_10388f8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(6);
  }
  do {
    iVar3 = *(int *)(puVar4 + 400);
    for (iVar5 = 0; (iVar3 != 0 && (iVar5 < 0x14)); iVar5 = iVar5 + 1) {
      if ((*(int *)(puVar4 + iVar5 * 0x14 + 8) != 0) &&
         (*(DWORD *)(puVar4 + iVar5 * 0x14 + 4) == DVar2)) {
        if (*(undefined4 **)(puVar4 + iVar5 * 0x14 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(puVar4 + iVar5 * 0x14 + 0x10) = 1;
        }
        FUN_1022c7a0(*(undefined4 *)(puVar4 + iVar5 * 0x14 + 0xc));
        FUN_1022c200(*(undefined4 *)(puVar4 + iVar5 * 0x14 + 8));
        *(undefined4 *)(puVar4 + iVar5 * 0x14 + 8) = 0;
        *(int *)(puVar4 + 400) = *(int *)(puVar4 + 400) + -1;
        iVar3 = *(int *)(puVar4 + 400);
      }
    }
    puVar4 = *(undefined **)(puVar4 + 0x194);
  } while (puVar4 != (undefined *)0x0);
  FUN_1022c200(&DAT_10388f60);
  ExceptionList = local_10;
  return;
}

