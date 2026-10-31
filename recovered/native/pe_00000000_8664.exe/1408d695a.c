/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d695a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1408d695a(void)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 unaff_RBX;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined8 unaff_RSI;
  undefined4 *puVar16;
  uint unaff_EDI;
  uint uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  
  uVar15 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar12 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x30);
  uVar5 = *(uint *)(uVar15 + 0x10);
  uVar1 = *(uint *)(uVar15 + 8);
  uVar8 = (ulonglong)uVar1;
  iVar6 = *(int *)(uVar15 + 0xc);
  *(uint *)(uVar15 - 0x10) = uVar1;
  *(int *)(uVar15 - 8) = iVar6;
  *(uint *)(uVar15 - 0xc) = uVar5;
  *(undefined8 *)(uVar12 - 8) = unaff_RBX;
  uVar11 = (ulonglong)*(uint *)(uVar15 + 0x14);
  *(undefined8 *)(uVar12 - 0x10) = unaff_RSI;
  puVar13 = (undefined1 *)(uVar12 - 0x18);
  *(ulonglong *)(uVar12 - 0x18) = (ulonglong)unaff_EDI;
  if (uVar5 == 0) {
    return 0;
  }
  if (iVar6 == 0) {
LAB_1408d6986:
    *(undefined1 *)(uVar11 + 0x24) = 1;
    *(ulonglong *)(uVar12 - 0x20) = uVar11;
    *(undefined8 *)(uVar12 - 0x28) = 0;
    *(undefined8 *)(uVar12 - 0x30) = 0;
    *(undefined8 *)(uVar12 - 0x38) = 0;
    *(undefined4 *)(uVar11 + 0x20) = 0;
    *(undefined8 *)(uVar12 - 0x40) = 0;
    *(undefined1 *)(uVar11 + 0x1c) = 1;
    *(undefined8 *)(uVar12 - 0x48) = 0;
    *(undefined4 *)(uVar11 + 0x18) = 0x16;
    *(undefined8 *)(uVar12 - 0x50) = 0x1408d69a5;
    FUN_1408cbf04();
    return -1;
  }
  uVar17 = (uVar1 & 0x3f) * 0x38;
  *(int *)(uVar15 - 0x14) = (int)uVar1 >> 6;
  uVar1 = *(uint *)((ulonglong)(uint)((int)uVar1 >> 6) * 4 + 0x103a5230);
  *(uint *)(uVar15 - 0x18) = uVar17;
  cVar4 = *(char *)((ulonglong)uVar17 + 0x29 + (ulonglong)uVar1);
  *(char *)(uVar15 - 1) = cVar4;
  if (((cVar4 == '\x02') || (cVar4 == '\x01')) && ((~uVar5 & 1) == 0)) goto LAB_1408d6986;
  if ((*(byte *)((ulonglong)uVar17 + 0x28 +
                (ulonglong)*(uint *)((ulonglong)*(uint *)(uVar15 - 0x14) * 4 + 0x103a5230)) & 0x20)
      != 0) {
    *(ulonglong *)(uVar12 - 0x20) = uVar11;
    *(undefined8 *)(uVar12 - 0x28) = 2;
    *(undefined8 *)(uVar12 - 0x30) = 0;
    *(undefined8 *)(uVar12 - 0x38) = 0;
    *(ulonglong *)(uVar12 - 0x40) = uVar8;
    *(undefined8 *)(uVar12 - 0x48) = 0x1408d69ff;
    FUN_1408d129a();
    uVar8 = (ulonglong)*(uint *)(uVar15 - 0x10);
    puVar13 = (undefined1 *)(ulonglong)((int)(uVar12 - 0x40) + 0x14);
  }
  *(ulonglong *)(puVar13 + -8) = uVar11;
  uVar18 = 0;
  *(ulonglong *)(puVar13 + -0x10) = uVar8;
  *(undefined4 *)(uVar15 - 0x24) = 0;
  *(undefined8 *)(puVar13 + -0x18) = 0x1408d6a11;
  cVar4 = FUN_1408d6c87();
  uVar2 = *(undefined8 *)(puVar13 + -8);
  if (cVar4 == '\0') {
    uVar10 = (ulonglong)*(uint *)(uVar15 - 0x14);
    uVar9 = (ulonglong)*(uint *)(uVar15 - 0x18);
    uVar8 = (ulonglong)*(uint *)(uVar10 * 4 + 0x103a5230);
    if (*(char *)(uVar8 + 0x28 + uVar9) < '\0') {
      cVar4 = *(char *)(uVar15 - 1);
      if (cVar4 == '\0') {
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(uVar15 - 0xc);
        *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(uVar15 - 8);
        *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(uVar15 - 0x10);
        *(ulonglong *)(puVar13 + -0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x30);
        *(undefined8 *)(puVar13 + -0x28) = 0x1408d6ac5;
        uVar5 = FUN_1408d7137();
        iVar6 = (int)(puVar13 + -0x20);
      }
      else if (cVar4 == '\x01') {
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(uVar15 - 0xc);
        *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(uVar15 - 8);
        *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(uVar15 - 0x10);
        *(ulonglong *)(puVar13 + -0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x30);
        *(undefined8 *)(puVar13 + -0x28) = 0x1408d6ab1;
        uVar5 = FUN_1408d72fb();
        iVar6 = (int)(puVar13 + -0x20);
      }
      else {
        if (cVar4 != '\x02') goto LAB_1408d6b0d;
        *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(uVar15 - 0xc);
        *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(uVar15 - 8);
        *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(uVar15 - 0x10);
        *(ulonglong *)(puVar13 + -0x20) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x30);
        *(undefined8 *)(puVar13 + -0x28) = 0x1408d6a9a;
        uVar5 = FUN_1408d7212();
        iVar6 = (int)(puVar13 + -0x20);
      }
      puVar14 = (undefined1 *)(ulonglong)(iVar6 + 0x10);
    }
    else {
      uVar5 = *(uint *)(uVar8 + 0x18 + uVar9);
      puVar16 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x30);
      *puVar16 = 0;
      *(undefined8 *)(puVar13 + -8) = 0;
      puVar16[1] = 0;
      puVar16[2] = 0;
      *(ulonglong *)(puVar13 + -0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x2c);
      *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(uVar15 - 0xc);
      *(undefined8 *)(puVar13 + -0x20) = *(undefined8 *)(uVar15 - 8);
      puVar14 = puVar13 + -0x28;
      *(ulonglong *)(puVar13 + -0x28) = (ulonglong)uVar5;
      pcVar3 = _DAT_150c34c01;
      *(undefined8 *)(puVar13 + -0x30) = 0x1408d6ae5;
      iVar6 = (*pcVar3)();
      pcVar3 = _DAT_150c34a7f;
      if (iVar6 == 0) {
        *(undefined8 *)(puVar13 + -0x30) = 0x1408d6aef;
        uVar7 = (*pcVar3)();
        *(undefined4 *)(uVar15 - 0x30) = uVar7;
      }
      uVar5 = (int)&stack0xfffffffffffffff8 - 0x30;
    }
LAB_1408d6af5:
    puVar16 = (undefined4 *)(ulonglong)uVar5;
    puVar19 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x24);
    *puVar19 = *puVar16;
    puVar19[1] = puVar16[1];
    puVar19[2] = puVar16[2];
    if (*(int *)(uVar15 - 0x20) != 0) {
      return *(int *)(uVar15 - 0x20) - *(int *)(uVar15 - 0x1c);
    }
    uVar18 = (ulonglong)*(uint *)(uVar15 - 0x24);
  }
  else {
    cVar4 = *(char *)(uVar15 - 1);
    if (cVar4 == '\0') {
      *(ulonglong *)(puVar13 + -8) = uVar11;
      *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(uVar15 - 0xc);
      *(undefined8 *)(puVar13 + -0x18) = *(undefined8 *)(uVar15 - 8);
      *(undefined8 *)(puVar13 + -0x20) = *(undefined8 *)(uVar15 - 0x10);
      *(ulonglong *)(puVar13 + -0x28) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x30);
      *(undefined8 *)(puVar13 + -0x30) = 0x1408d6a59;
      uVar5 = FUN_1408d6d04(uVar2);
      puVar14 = (undefined1 *)(ulonglong)((int)(puVar13 + -0x28) + 0x14);
      goto LAB_1408d6af5;
    }
    if ((cVar4 == '\x01') || (puVar14 = puVar13, cVar4 == '\x02')) {
      *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(uVar15 - 0xc);
      *(undefined8 *)(puVar13 + -0x10) = *(undefined8 *)(uVar15 - 8);
      *(ulonglong *)(puVar13 + -0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x30);
      *(undefined8 *)(puVar13 + -0x20) = 0x1408d6a3c;
      uVar5 = FUN_1408d70cf();
      puVar14 = (undefined1 *)(ulonglong)((int)(puVar13 + -0x18) + 0xc);
      goto LAB_1408d6af5;
    }
  }
  uVar10 = (ulonglong)*(uint *)(uVar15 - 0x14);
  uVar9 = (ulonglong)*(uint *)(uVar15 - 0x18);
  puVar13 = puVar14;
LAB_1408d6b0d:
  if ((int)uVar18 != 0) {
    *(undefined8 *)(puVar13 + -8) = 5;
    uVar2 = *(undefined8 *)(puVar13 + -8);
    if ((int)uVar18 == (int)uVar2) {
      *(undefined1 *)(uVar11 + 0x1c) = 1;
      *(undefined4 *)(uVar11 + 0x18) = 9;
      *(undefined1 *)(uVar11 + 0x24) = 1;
      *(int *)(uVar11 + 0x20) = (int)uVar2;
      return -1;
    }
    *(ulonglong *)(puVar13 + -8) = uVar11;
    *(ulonglong *)(puVar13 + -0x10) = uVar18;
    *(undefined8 *)(puVar13 + -0x18) = 0x1408d6b36;
    FUN_1408c0f79();
    return -1;
  }
  if (((*(byte *)((ulonglong)*(uint *)(uVar10 * 4 + 0x103a5230) + 0x28 + uVar9) & 0x40) != 0) &&
     (*(char *)(ulonglong)*(uint *)(uVar15 - 8) == '\x1a')) {
    return 0;
  }
  *(undefined1 *)(uVar11 + 0x1c) = 1;
  *(undefined4 *)(uVar11 + 0x18) = 0x1c;
  *(undefined1 *)(uVar11 + 0x24) = 1;
  *(undefined4 *)(uVar11 + 0x20) = 0;
  return -1;
}

