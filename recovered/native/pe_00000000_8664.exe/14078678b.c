/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078678b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14078678b(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined8 unaff_RBX;
  uint uVar14;
  int iVar15;
  ulonglong uVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  ulonglong uVar16;
  ulonglong uVar22;
  
  uVar14 = (int)&stack0xffffffffffffffe0 - 0x24;
  uVar16 = (ulonglong)uVar14;
  uVar10 = *(uint *)(uVar16 + 0x38);
  puVar12 = (undefined8 *)(ulonglong)*(uint *)(uVar16 + 0x3c);
  *(uint *)(uVar16 + 0x20) = _DAT_150b0f4a0 ^ uVar14;
  uVar14 = _DAT_150b23ef8;
  uVar13 = (ulonglong)_DAT_150b23ef8;
  *(undefined4 *)(uVar16 + 4) = *(undefined4 *)(uVar13 + 0x14cc);
  uVar11 = *(undefined4 *)puVar12;
  uVar6 = *(undefined4 *)((longlong)puVar12 + 4);
  uVar4 = *puVar12;
  *(uint *)(uVar16 + 8) = uVar14;
  fVar1 = *(float *)(uVar13 + 0x1228);
  puVar25 = (undefined4 *)(uVar16 + 0x10 & 0xffffffff);
  puVar25[1] = uVar6;
  *puVar25 = uVar11;
  *(ulonglong *)(puVar25 + 2) =
       CONCAT44(fVar1 + (float)((ulonglong)uVar4 >> 0x20),fVar1 + (float)uVar4);
  *(undefined8 *)(uVar16 - 8) = 0;
  *(undefined8 *)(uVar16 - 0x10) = 0;
  *(ulonglong *)(uVar16 - 0x18) = (ulonglong)uVar10;
  *(undefined4 **)(uVar16 - 0x20) = puVar25;
  *(undefined8 *)(uVar16 - 0x28) = 0x1407867e9;
  cVar8 = FUN_1407648a8();
  uVar17 = (ulonglong)((int)(uVar16 - 0x20) + 0x10);
  *(undefined8 *)(uVar17 - 8) = 0;
  *(ulonglong *)(uVar17 - 0x10) = uVar17 + 0xe & 0xffffffff;
  *(ulonglong *)(uVar17 - 0x18) = uVar17 + 0xf & 0xffffffff;
  *(ulonglong *)(uVar17 - 0x20) = (ulonglong)uVar10;
  *(undefined4 **)(uVar17 - 0x28) = puVar25;
  *(undefined8 *)(uVar17 - 0x30) = 0x140786800;
  uVar9 = FUN_14078564e();
  puVar18 = (undefined1 *)(ulonglong)((int)(uVar17 - 0x28) + 0x14);
  uVar13 = CONCAT71(CONCAT61((int6)((ulonglong)unaff_RBX >> 0x10),cVar8),uVar9);
  if (cVar8 != '\0') {
    puVar18[2] = uVar9;
    bVar5 = puVar18[0xe];
    puVar18[3] = puVar18[0xf];
    uVar13 = 0x16;
    if (puVar18[0xf] != '\0') {
      uVar13 = (ulonglong)(bVar5 + 0x17);
    }
    *(undefined8 *)(puVar18 + -8) = 0x3f800000;
    *(ulonglong *)(puVar18 + -0x10) = uVar13;
    *(undefined8 *)(puVar18 + -0x18) = 0x140786839;
    uVar10 = FUN_140754a09();
    uVar19 = (ulonglong)((int)(puVar18 + -0x10) + 8);
    *(undefined8 *)(uVar19 - 8) = 0x3f800000;
    *(undefined8 *)(uVar19 - 0x10) = 0;
    *(undefined8 *)(uVar19 - 0x18) = 0x140786846;
    uVar11 = FUN_140754a09();
    puVar20 = (undefined1 *)(ulonglong)((int)(uVar19 - 0x10) + 8);
    puVar21 = puVar20;
    if (bVar5 != 0 || puVar20[3] != '\0') {
      uVar6 = *(undefined4 *)((ulonglong)*(uint *)(puVar20 + 4) + 0x2e8);
      *(undefined8 *)(puVar20 + -8) = 0;
      *(undefined8 *)(puVar20 + -0x10) = 0;
      *(ulonglong *)(puVar20 + -0x18) = (ulonglong)uVar10;
      *(ulonglong *)(puVar20 + -0x20) = (longlong)puVar20 + 0x18U & 0xffffffff;
      puVar21 = puVar20 + -0x28;
      *(undefined4 **)(puVar20 + -0x28) = puVar25;
      *(undefined8 *)(puVar20 + -0x30) = 0x14078686b;
      FUN_1407e372a(uVar6);
    }
    *(undefined8 *)(puVar21 + -8) = 2;
    *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(puVar21 + 0x34);
    *(undefined4 **)(puVar21 + -0x18) = puVar25;
    *(undefined8 *)(puVar21 + -0x20) = 0x140786877;
    FUN_14075612e();
    iVar15 = (int)(puVar21 + -0x18);
    uVar22 = (ulonglong)(iVar15 + 0xc);
    uVar10 = *(uint *)(uVar22 + 0x40);
    if (uVar10 == 0) {
      uVar6 = *(undefined4 *)(uVar22 + 0x10);
      uVar2 = *(undefined4 *)(uVar22 + 0x14);
      uVar3 = *(undefined4 *)((ulonglong)*(uint *)(uVar22 + 4) + 0x2e8);
      puVar24 = (undefined4 *)(ulonglong)(iVar15 - 0xc);
      puVar24[4] = (*(byte *)((ulonglong)*(uint *)(uVar22 + 4) + 0xfc) ^ 1) * 2 + 1;
      puVar24[3] = uVar11;
      puVar24[2] = uVar2;
      puVar24[1] = uVar6;
      *puVar24 = uVar3;
      puVar24[5] = 0x3f800000;
      *(undefined8 *)(puVar24 + -2) = 0x140786918;
      FUN_1407eb9fc();
      puVar18 = (undefined1 *)(ulonglong)(iVar15 + 0xc);
    }
    else {
      uVar6 = *(undefined4 *)((ulonglong)*(uint *)(uVar22 + 8) + 0x1228);
      uVar2 = *(undefined4 *)(uVar22 + 0x10);
      uVar3 = *(undefined4 *)(uVar22 + 0x14);
      uVar7 = *(undefined4 *)((ulonglong)*(uint *)(uVar22 + 4) + 0x2e8);
      puVar23 = (undefined4 *)(ulonglong)(iVar15 - 8);
      puVar23[4] = uVar11;
      puVar23[3] = uVar6;
      puVar23[2] = uVar3;
      puVar23[1] = uVar2;
      *puVar23 = uVar7;
      *(undefined8 *)(puVar23 + -2) = 0x1407868c5;
      FUN_1407ebf4c();
      puVar18 = (undefined1 *)(ulonglong)(iVar15 + 0xc);
    }
    uVar13 = (ulonglong)(byte)puVar18[2];
    *(undefined8 *)(puVar18 + -8) = 0x140786924;
    cVar8 = FUN_140763db1();
    if (cVar8 != '\0') {
      *(undefined8 *)(puVar18 + -8) = 0xffffffffbf800000;
      *(undefined8 *)(puVar18 + -0x10) = 0;
      *(undefined8 *)(puVar18 + -0x18) = 0x140786934;
      cVar8 = FUN_14075b65f();
      puVar18 = (undefined1 *)(ulonglong)((int)(puVar18 + -0x10) + 8);
      if (cVar8 != '\0') {
        *(undefined8 *)(puVar18 + -8) = 1;
        *(ulonglong *)(puVar18 + -0x10) = (ulonglong)uVar10;
        *(undefined8 *)(puVar18 + -0x18) = *(undefined8 *)(puVar18 + -4);
        *(undefined8 *)(puVar18 + -0x20) = 0x140786947;
        FUN_14075b58b();
        puVar18 = (undefined1 *)(ulonglong)((int)(puVar18 + -0x18) + 0xc);
      }
    }
  }
  if (_DAT_150b0f656 == (*(uint *)(puVar18 + 0x20) ^ (uint)puVar18)) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar18 + -8) = FUN_14078696f;
  FUN_1408802b0(*(uint *)(puVar18 + 0x20) ^ (uint)puVar18);
}

