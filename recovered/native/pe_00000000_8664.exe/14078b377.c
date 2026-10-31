/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078b377 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078b377(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar4;
  
  uVar3 = (int)&stack0xfffffffffffffff0 - 0x14;
  uVar4 = (ulonglong)uVar3;
  uVar7 = (ulonglong)_DAT_150b28ad9;
  uVar1 = *(uint *)(uVar7 + 0x255c);
  *(ulonglong *)(uVar7 + 0x255c) = (ulonglong)uVar1;
  *(ulonglong *)(uVar4 - 8) = (ulonglong)uVar1;
  *(undefined8 *)(uVar4 - 0x10) = 0x1033aa4c;
  *(undefined8 *)(uVar4 - 0x18) = 0x10;
  *(ulonglong *)(uVar4 - 0x20) = (ulonglong)uVar3;
  *(undefined8 *)(uVar4 - 0x28) = 0x14078b3aa;
  FUN_140752381();
  uVar5 = (ulonglong)((int)(uVar4 - 0x20) + 0x10);
  uVar1 = *(uint *)(uVar7 + 0x14cc);
  *(ulonglong *)(uVar5 - 8) = (ulonglong)uVar3;
  *(undefined8 *)(uVar5 - 0x10) = *(undefined8 *)((ulonglong)uVar1 + 4);
  *(undefined8 *)(uVar5 - 0x18) = 0x14078b3bc;
  iVar2 = FUN_1408c84e0();
  puVar6 = (undefined1 *)(ulonglong)((int)(uVar5 - 0x10) + 8);
  if (iVar2 == 0) {
    *(undefined8 *)(puVar6 + -8) = 0x14078b3d7;
    FUN_14076e49b();
  }
  else {
    *(undefined8 *)(puVar6 + -8) = 0x1034a8d0;
    *(undefined8 *)(puVar6 + -0x10) = 0x14078b3cd;
    FUN_140754dc5();
    puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -8) + 4);
  }
  if (_DAT_150b140e3 == (*(uint *)(puVar6 + 0x10) ^ (uint)puVar6)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar6 + -8) = &UNK_14078b3f8;
  FUN_1408802b0(*(uint *)(puVar6 + 0x10) ^ (uint)puVar6);
}

