/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076542d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076542d(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint unaff_EBX;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uStack_28;
  ulonglong uStack_20;
  
  uVar5 = (ulonglong)unaff_EBX;
  uVar6 = (ulonglong)_DAT_150b02b86;
  *(undefined1 *)(uVar5 + 0xff) = 0;
  if ((*(byte *)(uVar6 + 0x1ed1) & 4) == 0) {
    return;
  }
  uVar1 = *(uint *)(uVar6 + 0x1f68);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(uVar5 + 0x100) != '\0') {
    return;
  }
  if (*(char *)(uVar5 + 0x101) == '\0') {
    puVar4 = &stack0xffffffffffffffe8;
    if (((uVar1 & 2) != 0) && (puVar4 = &stack0xffffffffffffffe8, *(uint *)(uVar6 + 0x14d0) != 0)) {
      uVar2 = *(uint *)((ulonglong)*(uint *)(uVar6 + 0x14d0) + 0x3a8);
      uStack_28 = (ulonglong)uVar2;
      if (*(uint *)(uVar5 + 0x3a8) == uVar2) {
        return;
      }
      uStack_20 = uVar5;
      cVar3 = FUN_14075a8c7();
      puVar4 = (undefined1 *)(ulonglong)((int)&uStack_28 + 8);
      if (cVar3 != '\0') {
        return;
      }
    }
    if (((uVar1 & 4) != 0) && (*(uint *)(uVar6 + 0x2048) != 0)) {
      uVar1 = *(uint *)((ulonglong)*(uint *)(uVar6 + 0x2048) + 0x3a8);
      if (*(uint *)(uVar5 + 0x3a8) == uVar1) {
        return;
      }
      *(ulonglong *)(puVar4 + -8) = uVar5;
      *(ulonglong *)(puVar4 + -0x10) = (ulonglong)uVar1;
      *(undefined8 *)(puVar4 + -0x18) = 0x1407654ba;
      cVar3 = FUN_14075a8c7();
      if (cVar3 != '\0') {
        return;
      }
    }
    *(undefined4 *)(uVar5 + 0x2e8) = 0;
    *(undefined1 *)(uVar5 + 0xff) = 1;
    return;
  }
  return;
}

