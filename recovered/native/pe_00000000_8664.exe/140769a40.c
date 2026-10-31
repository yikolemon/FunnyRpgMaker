/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140769a40(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uStack_28;
  
  puVar7 = &stack0xffffffffffffffe0;
  uVar5 = (uint)(unaff_RBX >> 0x20);
  uVar8 = (ulonglong)_DAT_150b0719a;
  if ((unaff_RBX & 0xffffcf4000000000) != 0) {
    uStack_28 = 0x1034b6c2;
    FUN_140754dc5();
    puVar7 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
  }
  uVar1 = *(uint *)(uVar8 + 0x14d0);
  uVar9 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  if ((unaff_RBX & 0x400000000) == 0) {
    uVar2 = *(uint *)(uVar8 + 0x14cc);
    uVar6 = (ulonglong)uVar2;
    if ((unaff_RBX & 0x200000000) != 0) {
      *(ulonglong *)(puVar7 + -8) = (ulonglong)((uVar5 & 0x10) >> 4);
      *(undefined8 *)(puVar7 + -0x10) = 0x140769a99;
      uVar6 = FUN_1407699de(uVar2,(unaff_RBX & 0x800000000) == 0);
      puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -8) + 4);
    }
    if ((unaff_RBX & 0x100000000) == 0) {
      if (uVar1 != (uint)uVar6) {
        return 0;
      }
    }
    else {
      *(ulonglong *)(puVar7 + -8) = (ulonglong)((uVar5 & 0x10) >> 4);
      *(ulonglong *)(puVar7 + -0x10) = (ulonglong)((unaff_RBX & 0x800000000) == 0);
      *(ulonglong *)(puVar7 + -0x18) = uVar6;
      *(ulonglong *)(puVar7 + -0x20) = uVar9;
      *(undefined8 *)(puVar7 + -0x28) = 0x140769ac0;
      cVar4 = FUN_140769991();
      puVar7 = (undefined1 *)(ulonglong)((int)(puVar7 + -0x20) + 0x10);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  *(ulonglong *)(puVar7 + -8) = (ulonglong)uVar5;
  *(ulonglong *)(puVar7 + -0x10) = uVar9;
  *(undefined8 *)(puVar7 + -0x18) = 0x140769ace;
  cVar4 = FUN_14075a83d();
  if ((cVar4 != '\0') &&
     (((((char)(unaff_RBX >> 0x20) < '\0' || (*(int *)(uVar8 + 0x1528) == 0)) ||
       (*(char *)(uVar8 + 0x1535) != '\0')) || (*(int *)(uVar8 + 0x1528) == *(int *)(uVar9 + 0xb4)))
     )) {
    if ((uVar5 >> 0xc & 1) != 0) {
      uVar3 = *(undefined4 *)(uVar8 + 0x11fc);
      *(undefined8 *)((ulonglong)((int)(puVar7 + -0x10) + 8) - 8) = 0x140769b07;
      uVar5 = FUN_14075ab48(uVar5,uVar3);
    }
    if (((uVar5 >> 0xd & 1) == 0) || (*(int *)(uVar8 + 0x245c) == *(int *)(uVar9 + 8))) {
      return 1;
    }
  }
  return 0;
}

