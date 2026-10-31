/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755ac2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755ac2(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong auStack_30 [2];
  uint uVar7;
  
  uVar7 = (uint)((ulonglong)unaff_RBP >> 0x20);
  uVar6 = (ulonglong)uVar7;
  auStack_30[0] = uVar6;
  uVar2 = FUN_14075544d();
  uVar3 = (ulonglong)((int)auStack_30 + 8);
  if (uVar2 != uVar7) {
    uVar7 = *(uint *)(uVar3 + 0x14);
    uVar5 = (ulonglong)_DAT_150af3233;
    uVar1 = *(uint *)(uVar5 + 0x14cc);
    *(undefined8 *)(uVar3 - 8) = *(undefined8 *)(uVar3 + 0x2c);
    *(undefined8 *)(uVar3 - 0x10) = *(undefined8 *)(uVar3 + 0x24);
    *(undefined8 *)(uVar3 - 0x18) = *(undefined8 *)(uVar3 + 0x1c);
    *(ulonglong *)(uVar3 - 0x20) = (ulonglong)uVar2;
    *(ulonglong *)(uVar3 - 0x28) = uVar6;
    *(undefined8 *)(uVar3 - 0x30) = *(undefined8 *)(uVar3 + 4);
    *(ulonglong *)(uVar3 - 0x38) = (ulonglong)uVar7;
    *(undefined8 *)(uVar3 - 0x40) = *(undefined8 *)((ulonglong)uVar1 + 0x2e8);
    *(undefined8 *)(uVar3 - 0x48) = 0x140755b0b;
    FUN_140755813();
    uVar4 = (ulonglong)((int)(uVar3 - 0x40) + 0x20);
    if (*(char *)(uVar5 + 0x2748) == '\x01') {
      *(ulonglong *)(uVar4 - 8) = (ulonglong)uVar2;
      *(ulonglong *)(uVar4 - 0x10) = uVar6;
      *(ulonglong *)(uVar4 - 0x18) = (ulonglong)uVar7;
      *(undefined8 *)(uVar4 - 0x20) = 0x140755b1f;
      FUN_140755578();
    }
  }
  return;
}

