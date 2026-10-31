/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752a35 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140752a35(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  
  uVar5 = (int)&stack0xffffffffffffffe0 - 8;
  puVar7 = (undefined1 *)(ulonglong)uVar5;
  uVar1 = *(uint *)(puVar7 + 0x24);
  uVar3 = (ulonglong)*(uint *)(puVar7 + 0x1c);
  *(uint *)(puVar7 + 4) = _DAT_150adb74a ^ uVar5;
  if (*(uint *)(puVar7 + 0x1c) != uVar1) {
    uVar5 = *(uint *)(puVar7 + 0x20);
    *(ulonglong *)(puVar7 + -8) = (ulonglong)uVar1;
    *(ulonglong *)(puVar7 + -0x10) = uVar3;
    *(undefined8 *)(puVar7 + -0x18) = 0x140752a5f;
    uVar4 = FUN_140752a1a();
    uVar6 = (int)(puVar7 + -0x10) + 8;
    uVar8 = (ulonglong)uVar6;
    *(ulonglong *)(uVar8 - 8) = (ulonglong)uVar5;
    *(ulonglong *)(uVar8 - 0x10) = uVar4;
    *(int **)(uVar8 - 0x18) = (int *)(ulonglong)uVar6;
    *(undefined8 *)(uVar8 - 0x20) = 0x140752a6e;
    iVar2 = FUN_140750fa5();
    puVar7 = (undefined1 *)(ulonglong)((int)(uVar8 - 0x18) + 0xc);
    uVar3 = (ulonglong)uVar1;
    if (*(int *)(ulonglong)uVar6 == 0xfffd) {
      uVar3 = uVar4 & 0xffffffff;
    }
    if ((int)(uVar1 - (int)uVar4) < iVar2) {
      uVar3 = uVar4 & 0xffffffff;
    }
  }
  if (_DAT_150adb792 != (*(uint *)(puVar7 + 4) ^ (uint)puVar7)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_140752aa9;
    FUN_1408802b0(*(uint *)(puVar7 + 4) ^ (uint)puVar7);
  }
  return uVar3;
}

