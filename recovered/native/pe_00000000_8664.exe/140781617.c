/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140781617 */

void FUN_140781617(void)

{
  uint uVar1;
  uint uVar3;
  ulonglong uVar5;
  longlong in_FS_OFFSET;
  undefined4 *puVar2;
  ulonglong uVar4;
  
  uVar5 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar3 = (int)&stack0xfffffffffffffff0 - 0x10;
  uVar4 = (ulonglong)uVar3;
  uVar1 = (int)&stack0xfffffffffffffff8 - 0x10;
  puVar2 = (undefined4 *)(ulonglong)uVar1;
  puVar2[-1] = uVar3;
  puVar2[2] = 0xffffffff;
  puVar2[1] = 0x1012cba0;
  *puVar2 = *(undefined4 *)(in_FS_OFFSET + 0x140781639);
  *(uint *)(in_FS_OFFSET + 0x87d8300000000) = uVar1;
  if (uVar3 == 0) {
    *(undefined4 *)(in_FS_OFFSET + 0x5e10c48300000000) = *(undefined4 *)(uVar5 - 0x10);
    return;
  }
  *(undefined4 *)(uVar5 - 8) = 1;
  *(undefined4 *)(uVar5 - 8) = 2;
  *(undefined4 *)(uVar5 - 8) = 0xffffffff;
  *(undefined4 *)(uVar5 - 8) = 0;
  *(undefined4 *)(uVar5 - 8) = 0xffffffff;
  uVar1 = *(uint *)((ulonglong)*(uint *)(uVar5 + 8) + 0xa0);
  if (uVar1 != 0) {
    *(ulonglong *)(uVar4 - 8) = (ulonglong)uVar1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar4 - 0x10) = &UNK_140781684;
    FUN_14075219b();
  }
  uVar1 = *(uint *)((ulonglong)*(uint *)(uVar5 + 8) + 0xc);
  if (uVar1 != 0) {
    *(ulonglong *)(uVar4 - 8) = (ulonglong)uVar1;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(uVar4 - 0x10) = &UNK_140781699;
    FUN_14075219b();
  }
  *(ulonglong *)(uVar4 - 8) = (ulonglong)*(uint *)(uVar5 + 8);
                    /* WARNING: Subroutine does not return */
  *(undefined **)(uVar4 - 0x10) = &UNK_1407816a3;
  FUN_14075219b();
}

