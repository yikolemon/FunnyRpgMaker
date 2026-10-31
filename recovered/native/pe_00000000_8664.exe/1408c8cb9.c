/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c8cb9 */

ulonglong FUN_1408c8cb9(void)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 unaff_RBX;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 unaff_RSI;
  uint unaff_EDI;
  longlong unaff_R13;
  
  uVar17 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar12 = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x28);
  *(undefined8 *)(uVar12 - 8) = unaff_RBX;
  *(undefined8 *)(uVar12 - 0x10) = unaff_RSI;
  uVar11 = *(uint *)(uVar17 + 0x14);
  puVar13 = (undefined1 *)(uVar12 - 0x18);
  *(ulonglong *)(uVar12 - 0x18) = (ulonglong)unaff_EDI;
  *(undefined8 *)(uVar12 - 0x20) = 0x1408c8ccf;
  cVar3 = FUN_1408ba705((int)&stack0xfffffffffffffff8 + 0xc);
  if (cVar3 == '\0') {
LAB_1408c8cff:
    if (*(uint *)(uVar17 + 0x10) != 0) {
      *(undefined4 *)(ulonglong)*(uint *)(uVar17 + 0x10) = *(undefined4 *)(uVar17 + 0xc);
    }
    return 0;
  }
  if ((uVar11 != 0) && (((int)uVar11 < 2 || (0x24 < (int)uVar11)))) {
    uVar7 = (ulonglong)*(uint *)(uVar17 + 8);
    *(ulonglong *)(uVar12 - 0x20) = uVar7;
    *(undefined1 *)(uVar7 + 0x1c) = 1;
    *(undefined4 *)(uVar7 + 0x18) = 0x16;
    *(undefined8 *)(uVar12 - 0x28) = 0;
    *(undefined8 *)(uVar12 - 0x30) = 0;
    *(undefined8 *)(uVar12 - 0x38) = 0;
    *(undefined8 *)(uVar12 - 0x40) = 0;
    *(undefined8 *)(uVar12 - 0x48) = 0;
    *(undefined8 *)(uVar12 - 0x50) = 0x1408c8cfc;
    FUN_1408cbf04();
    goto LAB_1408c8cff;
  }
  uVar18 = *(uint *)(uVar17 + 0xc);
  uVar6 = *(uint *)(uVar17 + 8);
  *(uint *)(uVar17 - 0x28) = uVar18;
  *(undefined8 *)(uVar17 - 0x24) = 0;
  bVar9 = *(byte *)(ulonglong)uVar18;
  cVar3 = *(char *)((ulonglong)uVar6 + 0x14);
  *(byte *)(uVar17 - 4) = bVar9;
  *(uint *)(uVar17 + 0xc) = uVar18;
  if (cVar3 == '\0') {
    *(undefined8 *)(uVar12 - 0x20) = 0x1408c8d3b;
    FUN_1408b6b20((ulonglong)uVar6);
  }
  while( true ) {
    *(ulonglong *)(puVar13 + -8) = (ulonglong)(uVar6 + 0xc);
    *(undefined8 *)(puVar13 + -0x10) = 8;
    *(ulonglong *)(puVar13 + -0x18) = (ulonglong)bVar9;
    *(undefined8 *)(puVar13 + -0x20) = 0x1408c8d58;
    iVar4 = FUN_1408bb66d();
    puVar13 = (undefined1 *)(ulonglong)((int)(puVar13 + -0x18) + 0xc);
    if (iVar4 == 0) break;
    uVar18 = *(uint *)(uVar17 + 0xc);
    bVar9 = *(byte *)(ulonglong)uVar18;
    *(byte *)(uVar17 - 4) = bVar9;
    *(uint *)(uVar17 + 0xc) = uVar18;
  }
  uVar18 = *(byte *)(uVar17 + 0x18) | 2;
  if (bVar9 != 0x2d) {
    uVar18 = (uint)*(byte *)(uVar17 + 0x18);
  }
  *(uint *)(uVar17 - 8) = uVar18;
  if ((bVar9 == 0x2d) || (bVar9 == 0x2b)) {
    uVar18 = *(uint *)(uVar17 + 0xc);
    pbVar8 = (byte *)(ulonglong)uVar18;
    bVar9 = *pbVar8;
    *(byte *)(unaff_R13 + -4) = bVar9;
    *(uint *)(uVar17 + 0xc) = uVar18;
  }
  else {
    pbVar8 = (byte *)(ulonglong)*(uint *)(uVar17 + 0xc);
  }
  *(undefined8 *)(puVar13 + -8) = 0x10;
  uVar2 = *(undefined8 *)(puVar13 + -8);
  puVar15 = (undefined8 *)puVar13;
  if ((uVar11 != 0) && (uVar18 = uVar11, uVar11 != (uint)uVar2)) goto LAB_1408c8e04;
  if ((byte)(bVar9 - 0x30) < 10) {
    iVar4 = (char)bVar9 + -0x30;
LAB_1408c8dc2:
    if (iVar4 != 0) goto LAB_1408c8dfa;
    bVar1 = *pbVar8;
    *(byte *)(unaff_R13 + -0xc) = bVar1;
    *(int *)(uVar17 + 0xc) = (int)pbVar8;
    if ((bVar1 == 0x78) || (bVar1 == 0x58)) {
      bVar9 = *pbVar8;
      *(byte *)(uVar17 - 4) = bVar9;
      *(int *)(uVar17 + 0xc) = (int)pbVar8 + 1;
      uVar18 = (uint)uVar2;
      if (uVar11 != 0) {
        uVar18 = uVar11;
      }
      goto LAB_1408c8e04;
    }
    *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(uVar17 - 0xc);
    *(undefined8 *)(puVar13 + -0x10) = 0x1408c8de2;
    FUN_1408bad32((int)&stack0xfffffffffffffff8 + 0xc);
    puVar14 = (undefined8 *)(puVar13 + -0x10);
    *(undefined8 *)(puVar13 + -0x10) = 8;
  }
  else {
    if ((byte)(bVar9 + 0x9f) < 0x1a) {
      iVar4 = (char)bVar9 + -0x57;
      goto LAB_1408c8dc2;
    }
    if ((byte)(bVar9 + 0xbf) < 0x1a) {
      iVar4 = (char)bVar9 + -0x37;
      goto LAB_1408c8dc2;
    }
LAB_1408c8dfa:
    puVar14 = (undefined8 *)(puVar13 + -8);
    *(undefined8 *)(puVar13 + -8) = 10;
  }
  puVar15 = puVar14 + 1;
  uVar18 = (uint)*puVar14;
  if (uVar11 != 0) {
    puVar15 = puVar14 + 1;
    uVar18 = uVar11;
  }
LAB_1408c8e04:
  uVar7 = (ulonglong)(uint)((int)uVar18 >> 0x1f);
  *(uint *)(uVar17 - 0x14) = uVar18;
  *(ulonglong *)((longlong)puVar15 + -8) = uVar7;
  *(ulonglong *)((longlong)puVar15 + -0x10) = (ulonglong)uVar18;
  *(undefined8 *)((longlong)puVar15 + -0x18) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)puVar15 + -0x20) = 0xffffffffffffffff;
  *(int *)(uVar17 - 0x10) = (int)uVar18 >> 0x1f;
  *(undefined8 *)((longlong)puVar15 + -0x28) = 0x1408c8e1a;
  uVar5 = FUN_140883770();
  uVar11 = *(uint *)(uVar17 - 0x24);
  uVar6 = *(uint *)(uVar17 - 0x20);
  *(undefined4 *)(uVar17 - 0x1c) = uVar5;
  *(int *)(uVar17 - 0x18) = (int)uVar7;
  *(uint *)(uVar17 - 0xc) = uVar11;
  puVar16 = (undefined1 *)puVar15;
  while( true ) {
    iVar4 = (int)uVar7;
    if ((byte)(bVar9 - 0x30) < 10) {
      uVar10 = (int)(char)bVar9 - 0x30;
    }
    else if ((byte)(bVar9 + 0x9f) < 0x1a) {
      uVar10 = (int)(char)bVar9 - 0x57;
    }
    else if ((byte)(bVar9 + 0xbf) < 0x1a) {
      uVar10 = (int)(char)bVar9 - 0x37;
    }
    else {
      uVar10 = 0xffffffff;
    }
    if (uVar18 <= uVar10) break;
    *(ulonglong *)(puVar16 + -0x28) = (ulonglong)uVar6;
    *(ulonglong *)(puVar16 + -0x30) = (ulonglong)uVar11;
    *(undefined8 *)(puVar16 + -0x38) = *(undefined8 *)(uVar17 - 0x10);
    *(undefined8 *)(puVar16 + -0x40) = *(undefined8 *)(uVar17 - 0x14);
    *(undefined8 *)(puVar16 + -0x48) = 0x1408c8e6d;
    uVar6 = FUN_1408affb0();
    *(uint *)(uVar17 - 0x20) = uVar6;
    uVar11 = uVar10 + uVar6;
    uVar6 = iVar4 + (uint)CARRY4(uVar10,uVar6);
    uVar7 = (ulonglong)uVar6;
    *(uint *)(uVar17 - 0xc) = uVar11;
    *(uint *)(uVar17 - 8) = *(uint *)(uVar17 - 8) | 8;
    uVar10 = *(uint *)(uVar17 + 0xc);
    bVar9 = *(byte *)(ulonglong)uVar10;
    *(byte *)(uVar17 - 4) = bVar9;
    *(uint *)(uVar17 + 0xc) = uVar10;
    puVar16 = puVar16 + -0x20;
  }
  *(undefined8 *)(puVar16 + -0x28) = *(undefined8 *)(uVar17 - 4);
  *(undefined8 *)(puVar16 + -0x30) = 0x1408c8ed0;
  FUN_1408bad32((int)&stack0xfffffffffffffff8 + 0xc);
  uVar11 = *(uint *)(uVar17 - 8);
  if ((uVar11 & 8) == 0) {
    if (*(uint *)(uVar17 + 0x10) == 0) {
      return 0;
    }
    *(undefined4 *)(ulonglong)*(uint *)(uVar17 + 0x10) = *(undefined4 *)(uVar17 - 0x28);
    return 0;
  }
  uVar18 = *(uint *)(uVar17 - 0xc);
  uVar7 = (ulonglong)uVar18;
  *(ulonglong *)(puVar16 + -0x30) = (ulonglong)uVar6;
  *(ulonglong *)(puVar16 + -0x38) = uVar7;
  *(ulonglong *)(puVar16 + -0x40) = (ulonglong)uVar11;
  *(undefined8 *)(puVar16 + -0x48) = 0x1408c8ef4;
  cVar3 = FUN_1408bf9fc();
  if (cVar3 == '\0') {
    if ((*(byte *)(uVar17 - 8) & 2) != 0) {
      uVar7 = (ulonglong)-uVar18;
    }
  }
  else {
    uVar11 = *(uint *)(uVar17 + 8);
    *(undefined1 *)((ulonglong)uVar11 + 0x1c) = 1;
    *(undefined4 *)((ulonglong)uVar11 + 0x18) = 0x22;
    if ((*(uint *)(uVar17 - 8) & 1) != 0) {
      if ((*(uint *)(uVar17 - 8) & 2) == 0) {
        if (*(uint *)(uVar17 + 0x10) != 0) {
          *(undefined4 *)(ulonglong)*(uint *)(uVar17 + 0x10) = *(undefined4 *)(uVar17 + 0xc);
        }
        return 0xffffffff;
      }
      if (*(uint *)(uVar17 + 0x10) != 0) {
        *(undefined4 *)(ulonglong)*(uint *)(uVar17 + 0x10) = *(undefined4 *)(uVar17 + 0xc);
      }
      return 0;
    }
    uVar7 = 0xffffffff;
  }
  if (*(uint *)(uVar17 + 0x10) != 0) {
    *(undefined4 *)(ulonglong)*(uint *)(uVar17 + 0x10) = *(undefined4 *)(uVar17 + 0xc);
    return uVar7;
  }
  return uVar7;
}

