/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d570 */

void FUN_1022d570(int param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10288890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = &DAT_1039d0b8;
  iVar1 = FUN_1022c1e0(&DAT_10388f60,DAT_10388d00 ^ (uint)&stack0xfffffffc);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(5);
  }
  if (DAT_10388f8c == 0x7fffffff) {
    DAT_10388f8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(6);
  }
  do {
    iVar1 = *(int *)(puVar3 + 400);
    for (iVar2 = 0; (iVar1 != 0 && (iVar2 < 0x14)); iVar2 = iVar2 + 1) {
      if (*(int *)(puVar3 + iVar2 * 0x14 + 8) == param_1) {
        *(undefined4 *)(puVar3 + iVar2 * 0x14 + 8) = 0;
        *(int *)(puVar3 + 400) = *(int *)(puVar3 + 400) + -1;
        iVar1 = *(int *)(puVar3 + 400);
      }
    }
    puVar3 = *(undefined **)(puVar3 + 0x194);
  } while (puVar3 != (undefined *)0x0);
  FUN_1022c200(&DAT_10388f60);
  ExceptionList = local_10;
  return;
}

