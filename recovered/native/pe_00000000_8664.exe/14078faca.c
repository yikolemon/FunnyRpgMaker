/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14078faca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14078faca(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  
  puVar12 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x5c);
  puVar12[2] = puVar12[0x23];
  *puVar12 = puVar12[0x22];
  uVar4 = _DAT_150b2d24a;
  uVar3 = puVar12[0x21];
  uVar9 = (ulonglong)_DAT_150b2d24a;
  *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(puVar12 + 0x1f);
  *(undefined8 *)(puVar12 + -4) = 0x14078fb07;
  uVar6 = FUN_14078bd99();
  uVar13 = (ulonglong)((int)(puVar12 + -2) + 4);
  *(undefined8 *)(uVar13 - 8) = 0x20;
  *(ulonglong *)(uVar13 - 0x10) = uVar13 + 0x38 & 0xffffffff;
  *(ulonglong *)(uVar13 - 0x18) = (ulonglong)uVar3;
  *(undefined8 *)(uVar13 - 0x20) = 0x14078fb19;
  pcVar8 = (char *)FUN_1407959c5();
  uVar14 = (ulonglong)((int)(uVar13 - 0x18) + 0xc);
  uVar10 = (ulonglong)pcVar8 & 0xffffffff;
  if (*pcVar8 == '\0') {
    uVar10 = (ulonglong)((uint *)(ulonglong)uVar6)[2];
  }
  uVar20 = uVar14 + 0x18 & 0xffffffff;
  *(ulonglong *)(uVar14 - 8) = uVar10;
  *(undefined8 *)(uVar14 - 0x10) = *(undefined8 *)(uVar14 + 0x7c);
  *(undefined8 *)(uVar14 - 0x18) = *(undefined8 *)(uVar14 + 0x74);
  *(undefined8 *)(uVar14 - 0x20) = 0x20;
  *(ulonglong *)(uVar14 - 0x28) = uVar20;
  *(undefined8 *)(uVar14 - 0x30) = 0x14078fb41;
  FUN_14078bda7();
  uVar15 = (ulonglong)((int)(uVar14 - 0x28) + 0x14);
  *(ulonglong *)(uVar15 - 8) = uVar20;
  *(undefined8 *)(uVar15 - 0x10) = 0x14078fb4a;
  FUN_1407522fb();
  iVar7 = (int)(uVar15 - 8);
  *(uint *)((ulonglong)(iVar7 + 4) + 0xc) = uVar4;
  *(byte *)(uVar9 + 0x1e86) = *(byte *)(uVar9 + 0x1e86) | 1;
  puVar16 = (undefined4 *)(ulonglong)(iVar7 - 0x1c);
  *(undefined8 *)(puVar16 + 4) = _DAT_150a490a3;
  *(undefined8 *)(puVar16 + 6) = 0;
  puVar16[3] = (int)(uVar14 + 0x18);
  puVar16[2] = puVar16[0x26];
  puVar16[1] = puVar16[0x25];
  *puVar16 = puVar16[0x24];
  *(undefined8 *)(puVar16 + -2) = 0x14078fb91;
  cVar5 = FUN_140795b61();
  puVar17 = (undefined1 *)(ulonglong)(iVar7 + 4);
  if (cVar5 == '\0') {
    uVar11 = 0;
    goto LAB_14078fc67;
  }
  uVar3 = *(uint *)(ulonglong)uVar6;
  *(uint *)(puVar17 + 4) = uVar3;
  *(ulonglong *)(puVar17 + -8) = (ulonglong)uVar3;
  uVar22 = (ulonglong)*(uint *)(puVar17 + 0x7c);
  *(ulonglong *)(puVar17 + -0x10) = uVar22;
  *(ulonglong *)(puVar17 + -0x18) = (longlong)puVar17 + 0x10U & 0xffffffff;
  *(undefined8 *)(puVar17 + -0x20) = 0x14078fbb5;
  FUN_1408b31a0();
  uVar18 = (ulonglong)((int)(puVar17 + -0x18) + 0xc);
  *(undefined8 *)(uVar18 - 8) = 0;
  *(ulonglong *)(uVar18 - 0x10) = uVar10;
  *(ulonglong *)(uVar18 - 0x18) = uVar22;
  *(undefined8 *)(uVar18 - 0x20) = *(undefined8 *)(uVar18 + 0x70);
  *(ulonglong *)(uVar18 - 0x28) = uVar20;
  *(undefined8 *)(uVar18 - 0x30) = 0x14078fbc9;
  FUN_14078c4ea();
  puVar19 = (uint *)(ulonglong)((int)(uVar18 - 0x28) + 0x14);
  uVar3 = *puVar19;
  uVar9 = (ulonglong)uVar3;
  uVar4 = puVar19[2];
  uVar10 = (ulonglong)uVar4;
  uVar20 = (ulonglong)puVar19[0x1d];
  if (uVar3 != 0 || uVar4 != 0) {
    if (uVar3 == 0 || uVar4 == 0) {
LAB_14078fc26:
      uVar21 = (ulonglong)*(uint *)((longlong)puVar19 + 0x7c);
    }
    else {
      *(ulonglong *)(puVar19 + -2) = uVar10;
      *(ulonglong *)(puVar19 + -4) = uVar9;
      uVar21 = (ulonglong)puVar19[0x1d];
      *(ulonglong *)(puVar19 + -6) = uVar21;
      puVar19[-8] = 0x4078fbfa;
      puVar19[-7] = 1;
      iVar7 = FUN_14078c6b7();
      uVar9 = (ulonglong)puVar19[-3];
      puVar19 = (uint *)(ulonglong)((int)(puVar19 + -6) + 0xc);
      if (0 < iVar7) {
        puVar1 = (undefined1 *)((longlong)puVar19 + 0x8c);
        puVar2 = (undefined1 *)((longlong)puVar19 + 0x88);
        *(uint **)((longlong)puVar19 + -8) = (uint *)((ulonglong)puVar1 & 0xffffffff);
        *(uint **)((longlong)puVar19 + -0x10) = (uint *)((ulonglong)puVar2 & 0xffffffff);
        *(undefined8 *)((longlong)puVar19 + -0x18) = 0x14078fc1a;
        FUN_1407991a9();
        puVar19 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar19 + -0x10) + 8);
        uVar10 = (ulonglong)*(uint *)((ulonglong)puVar1 & 0xffffffff);
        uVar20 = (ulonglong)*(uint *)((longlong)puVar19 + 0x74);
        uVar9 = (ulonglong)*(uint *)((ulonglong)puVar2 & 0xffffffff);
        goto LAB_14078fc26;
      }
    }
    *(ulonglong *)((longlong)puVar19 + -8) = uVar10;
    *(ulonglong *)((longlong)puVar19 + -0x10) = uVar9;
    *(ulonglong *)((longlong)puVar19 + -0x18) = uVar22;
    *(ulonglong *)((longlong)puVar19 + -0x20) = uVar21;
    *(undefined8 *)((longlong)puVar19 + -0x28) = 0x14078fc33;
    FUN_14078c7df();
    puVar19 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar19 + -0x20) + 0x10);
  }
  *(byte *)((ulonglong)*(uint *)((longlong)puVar19 + 0xc) + 0x1e86) =
       *(byte *)((ulonglong)*(uint *)((longlong)puVar19 + 0xc) + 0x1e86) & 0xfe;
  *(undefined8 *)((longlong)puVar19 + -8) = *(undefined8 *)((longlong)puVar19 + 4);
  *(ulonglong *)((longlong)puVar19 + -0x10) = uVar22;
  *(ulonglong *)((longlong)puVar19 + -0x18) = (ulonglong)((longlong)puVar19 + 8) & 0xffffffff;
  *(undefined8 *)((longlong)puVar19 + -0x20) = 0x14078fc50;
  iVar7 = FUN_1408b14b0();
  puVar17 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)puVar19 + -0x18) + 0xc);
  uVar11 = CONCAT71((int7)(uVar10 >> 8),iVar7 != 0);
  if (iVar7 != 0) {
    *(ulonglong *)(puVar17 + -8) = uVar20;
    *(undefined8 *)(puVar17 + -0x10) = 0x14078fc60;
    FUN_14075a7e3();
    puVar17 = (undefined1 *)(ulonglong)((int)(puVar17 + -8) + 4);
  }
LAB_14078fc67:
  if (_DAT_150b18973 == (*(uint *)(puVar17 + 0x58) ^ (uint)puVar17)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar17 + -8) = &UNK_14078fc8c;
  FUN_1408802b0(*(uint *)(puVar17 + 0x58) ^ (uint)puVar17);
}

