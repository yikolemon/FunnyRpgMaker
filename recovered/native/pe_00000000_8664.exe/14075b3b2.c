/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075b3b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075b3b2(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBX;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint unaff_EBP;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uStack_28;
  
  uVar2 = (uint)((ulonglong)unaff_RBX >> 0x20);
  uVar11 = (ulonglong)uVar2;
  uVar5 = (ulonglong)_DAT_150af8b10;
  puVar6 = &stack0xffffffffffffffe0;
  if (((unaff_EBP & 2) != 0) &&
     (puVar6 = &stack0xffffffffffffffe0, *(uint *)(uVar5 + 0x2048) != uVar2)) {
    uStack_28 = uVar11;
    uVar1 = FUN_14076dd02();
    puVar6 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
    if (uVar1 != 0) {
      if ((*(byte *)(uVar5 + 0x27b4) & 4) != 0) {
        if (uVar2 == 0) {
          uVar5 = 0x1033cfb8;
        }
        else {
          uVar5 = (ulonglong)*(uint *)(uVar11 + 4);
        }
        *(ulonglong *)(puVar6 + -8) = (ulonglong)*(uint *)((ulonglong)uVar1 + 4);
        *(ulonglong *)(puVar6 + -0x10) = uVar5;
        *(undefined8 *)(puVar6 + -0x18) = 0x103553c5;
        *(undefined8 *)(puVar6 + -0x20) = 0x14075b53c;
        FUN_1407518b6();
        puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -0x18) + 0xc);
      }
      if (((uVar2 != 0) && (uVar2 == *(uint *)(uVar11 + 0x3a8))) &&
         ((*(byte *)(uVar11 + 0xd) & 0x20) == 0)) {
        *(ulonglong *)(puVar6 + -8) = (ulonglong)uVar1;
        *(ulonglong *)(puVar6 + -0x10) = uVar11;
        *(undefined8 *)(puVar6 + -0x18) = 0x14075b558;
        FUN_14076eeac();
        puVar6 = (undefined1 *)(ulonglong)((int)(puVar6 + -0x10) + 8);
      }
      *(undefined8 *)(puVar6 + -8) = 0x14075b560;
      uVar4 = FUN_14075beda();
      *(undefined8 *)(puVar6 + -8) = 0;
      *(undefined8 *)(puVar6 + -0x10) = uVar4;
      *(undefined8 *)(puVar6 + -0x18) = 0x14075b568;
      FUN_14075bf62();
      return;
    }
  }
  if (uVar2 != 0 && (unaff_EBP & 1) != 0) {
    *(undefined8 *)(puVar6 + -8) = 0x14075b418;
    uVar2 = FUN_14076ef42();
    uVar11 = (ulonglong)uVar2;
  }
  iVar10 = (int)uVar11;
  if (*(int *)(uVar5 + 0x2048) != iVar10) {
    *(ulonglong *)(puVar6 + -8) = uVar11;
    *(undefined8 *)(puVar6 + -0x10) = 0x14075b428;
    FUN_14076a25c();
    uVar7 = (ulonglong)((int)(puVar6 + -8) + 4);
    if (iVar10 == 0) {
      uVar3 = 0;
      *(undefined4 *)(uVar5 + 0x2044) = 0;
      *(undefined4 *)(uVar5 + 0x2050) = 0;
    }
    else {
      if (*(char *)(uVar5 + 0x2041) == '\x01') {
        *(undefined1 *)(uVar5 + 0x2042) = 1;
      }
      *(undefined4 *)(uVar5 + 0x2044) = *(undefined4 *)(uVar11 + 0x3c4);
      *(undefined4 *)(uVar5 + 0x2050) = 0;
      uVar3 = (ulonglong)*(uint *)(uVar11 + 0x3fc);
    }
    *(ulonglong *)(uVar7 - 8) = uVar3;
    *(undefined8 *)(uVar7 - 0x10) = 0x14075b471;
    FUN_140769fa9();
    uVar8 = (ulonglong)((int)(uVar7 - 8) + 4);
    *(undefined1 *)(uVar5 + 0x2043) = 0;
    *(undefined8 *)(uVar5 + 0x2094) = 0;
    *(undefined4 *)(uVar5 + 0x2090) = 0;
    *(undefined8 *)(uVar8 - 8) = 0;
    *(ulonglong *)(uVar8 - 0x10) = uVar11;
    *(undefined8 *)(uVar8 - 0x18) = 0x14075b492;
    FUN_14075bf62();
    puVar6 = (undefined1 *)(ulonglong)((int)(uVar8 - 0x10) + 8);
  }
  if (iVar10 == 0) {
    uVar3 = (ulonglong)*(uint *)(uVar5 + 0x154c);
    uVar12 = 0;
    uVar9 = 0;
  }
  else {
    uVar12 = (ulonglong)*(uint *)(uVar11 + 0x3a8);
    uVar9 = (ulonglong)*(uint *)(uVar11 + 0x3b0);
    uVar2 = *(uint *)(uVar5 + 0x154c);
    uVar3 = (ulonglong)uVar2;
    if (*(uint *)(uVar11 + 0x430) != 0 && uVar2 != 0) {
      bVar13 = *(uint *)((ulonglong)*(uint *)(uVar11 + 0x430) + 0x78) == uVar2;
      goto LAB_14075b4d6;
    }
  }
  bVar13 = false;
LAB_14075b4d6:
  if (((*(int *)(uVar5 + 0x1528) != 0) && ((int)uVar3 != 0)) &&
     ((*(int *)(uVar3 + 0x3a8) != (int)uVar12 && (!bVar13 && (*(byte *)(uVar5 + 0x1536) & 1) == 0)))
     ) {
    *(undefined8 *)(puVar6 + -8) = 0x14075b4fb;
    FUN_14075a7a8();
  }
  if (iVar10 != 0) {
    *(undefined4 *)(uVar11 + 0x2b8) = *(undefined4 *)(uVar5 + 4);
    *(ulonglong *)(puVar6 + -8) = uVar12;
    *(undefined8 *)(puVar6 + -0x10) = 0x14075b50e;
    FUN_14076ca1c();
    if (((*(uint *)(uVar12 + 0xc) | *(uint *)(uVar11 + 0xc) | *(uint *)(uVar9 + 0xc)) >> 0xd & 1) ==
        0) {
      *(ulonglong *)((ulonglong)((int)(puVar6 + -8) + 4) - 8) = uVar9;
      *(undefined8 *)((ulonglong)((int)(puVar6 + -8) + 4) - 0x10) = 0x14075b526;
      FUN_14076c9aa();
    }
  }
  return;
}

