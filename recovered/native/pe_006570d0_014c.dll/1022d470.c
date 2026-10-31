/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d470 */

void FUN_1022d470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  DWORD DVar3;
  undefined *puVar4;
  void *local_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_10288890;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = &DAT_1039d0b8;
  iVar2 = FUN_1022c1e0(&DAT_10388f60,DAT_10388d00 ^ (uint)&stack0xfffffffc);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(5);
  }
  if (DAT_10388f8c == 0x7fffffff) {
    DAT_10388f8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1022d330(6);
  }
  do {
    do {
      if (*(int *)(puVar4 + 400) != 0x14) {
        iVar2 = 0;
        goto LAB_1022d4f0;
      }
      puVar1 = (undefined4 *)(puVar4 + 0x194);
      puVar4 = (undefined *)*puVar1;
    } while (puVar4 != (undefined *)0x0);
    puVar4 = (undefined *)FUN_1026d360(1,0x198);
    *puVar1 = puVar4;
  } while (puVar4 != (undefined *)0x0);
  goto LAB_1022d526;
  while (iVar2 = iVar2 + 1, iVar2 < 0x14) {
LAB_1022d4f0:
    if (*(int *)(puVar4 + iVar2 * 0x14 + 8) == 0) {
      DVar3 = GetCurrentThreadId();
      *(DWORD *)(puVar4 + iVar2 * 0x14 + 4) = DVar3;
      *(undefined4 *)(puVar4 + iVar2 * 0x14 + 8) = param_2;
      *(undefined4 *)(puVar4 + iVar2 * 0x14 + 0xc) = param_1;
      *(undefined4 *)(puVar4 + iVar2 * 0x14 + 0x10) = param_3;
      *(int *)(puVar4 + 400) = *(int *)(puVar4 + 400) + 1;
      break;
    }
  }
LAB_1022d526:
  FUN_1022c200(&DAT_10388f60);
  ExceptionList = local_10;
  return;
}

