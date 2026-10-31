/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140763f97 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140763f97(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 *puVar10;
  ulonglong uVar14;
  
  uVar8 = (int)&stack0xffffffffffffffe0 - 0x24;
  puVar10 = (undefined1 *)(ulonglong)uVar8;
  uVar7 = *(uint *)(puVar10 + 0x44);
  *(uint *)(puVar10 + 0x20) = _DAT_150aecca8 ^ uVar8;
  uVar3 = _DAT_150b01700;
  uVar25 = (ulonglong)_DAT_150b01700;
  uVar8 = *(uint *)(uVar25 + 0x14cc);
  uVar6 = uVar7 & 0xfffffffb;
  if ((uVar7 & 0x10) == 0) {
    uVar6 = uVar7;
  }
  uVar7 = uVar6 & 0xfffffff7;
  if ((uVar6 & 0x20) == 0) {
    uVar7 = uVar6;
  }
  *(uint *)(puVar10 + 4) = uVar8;
  uVar6 = 0x1080001;
  if ((uVar7 & 0xc) == 0) {
    uVar6 = 0x1080103;
  }
  uVar8 = uVar6 | *(uint *)((ulonglong)uVar8 + 0xc) & 4 |
          (uint)((uVar7 & 0x70) != 0) << 6 | *(uint *)(puVar10 + 0x48);
  if ((char)uVar7 < '\0') {
    *(ulonglong *)(puVar10 + -8) = (ulonglong)(uVar3 + 0xe70);
    *(undefined8 *)(puVar10 + -0x10) = 3;
    *(undefined8 *)(puVar10 + -0x18) = 0x14076400e;
    FUN_140754c50();
    puVar11 = (undefined4 *)((ulonglong)(puVar10 + -0x10) & 0xffffffff);
    puVar11[1] = *(undefined4 *)(uVar25 + 0xd14);
    *puVar11 = 7;
    *(undefined8 *)(puVar11 + -2) = 0x14076402e;
    FUN_140754f73();
    puVar12 = (undefined4 *)((ulonglong)(puVar10 + -0x10) & 0xffffffff);
    puVar12[1] = *(undefined4 *)(uVar25 + 0xd18);
    *puVar12 = 8;
    *(undefined8 *)(puVar12 + -2) = 0x14076404e;
    FUN_140754f73();
    uVar13 = (ulonglong)((int)(puVar10 + -0x10) + 8);
    *(ulonglong *)(uVar13 - 8) = (ulonglong)(uVar3 + 0xd0c);
    *(undefined8 *)(uVar13 - 0x10) = 2;
    *(undefined8 *)(uVar13 - 0x18) = 0x14076405f;
    FUN_14075528c();
    puVar10 = (undefined1 *)(ulonglong)((int)(uVar13 - 0x10) + 8);
    uVar7 = uVar7 | 3;
    uVar8 = uVar8 | 4;
  }
  *(ulonglong *)(puVar10 + -8) = (ulonglong)(puVar10 + 0x18) & 0xffffffff;
  *(undefined8 *)(puVar10 + -0x10) = 0x140764072;
  FUN_1407642b4();
  iVar9 = (int)(puVar10 + -8);
  uVar14 = (ulonglong)(iVar9 + 4);
  uVar26 = 0;
  if ((uVar7 & 0x20) == 0) {
    uVar27 = *(undefined4 *)(uVar14 + 0x1c);
  }
  else {
    uVar27 = 0;
  }
  if ((uVar7 & 0x10) == 0) {
    uVar26 = *(undefined4 *)(uVar14 + 0x18);
  }
  uVar1 = *(undefined4 *)(ulonglong)*(uint *)(uVar14 + 0x40);
  uVar2 = ((undefined4 *)(ulonglong)*(uint *)(uVar14 + 0x40))[1];
  puVar15 = (undefined4 *)(ulonglong)(iVar9 - 0x10);
  puVar15[4] = uVar27;
  puVar15[3] = uVar26;
  puVar15[2] = uVar2;
  puVar15[1] = uVar1;
  *puVar15 = (int)(puVar15 + 9);
  *(undefined8 *)(puVar15 + -2) = 0x1407640c7;
  FUN_1407642f7();
  uVar16 = (ulonglong)(iVar9 + 4);
  if (((*(byte *)(uVar25 + 0x1ed0) & 2) != 0) && ((*(byte *)(uVar25 + 0x1ed8) & 1) != 0)) {
    if (0.0 < *(float *)(uVar25 + 0x1ef4)) {
      *(float *)(uVar16 + 0x10) = *(float *)(uVar25 + 0x1ef4);
      uVar7 = uVar7 & 0xfffffffb;
    }
    if (0.0 < *(float *)(uVar25 + 0x1ef8)) {
      *(float *)(uVar16 + 0x14) = *(float *)(uVar25 + 0x1ef8);
      uVar7 = uVar7 & 0xfffffff7;
    }
  }
  uVar3 = *(uint *)(uVar16 + 0x38);
  *(undefined8 *)(uVar16 - 8) = 0;
  *(ulonglong *)(uVar16 - 0x10) = uVar16 + 0xc & 0xffffffff;
  *(undefined8 *)(uVar16 - 0x18) = 0x14076411b;
  FUN_14075fbc6();
  uVar17 = (ulonglong)((int)(uVar16 - 0x10) + 8);
  uVar6 = uVar7;
  if ((*(uint *)(uVar25 + 0x1ed0) >> 9 & 1) != 0) {
    uVar6 = *(uint *)(uVar25 + 0x1f10) | uVar7;
  }
  uVar4 = *(uint *)(uVar17 + 0x3c);
  *(uint *)(uVar25 + 0x1f10) = uVar6;
  *(uint *)(uVar25 + 0x1ed0) = *(uint *)(uVar25 + 0x1ed0) | 0x200;
  uVar6 = *(uint *)((ulonglong)*(uint *)(uVar17 + 4) + 4);
  if (uVar3 == 0) {
    *(ulonglong *)(uVar17 - 8) = (ulonglong)uVar4;
    *(ulonglong *)(uVar17 - 0x10) = (ulonglong)uVar6;
    *(undefined8 *)(uVar17 - 0x18) = 0x1033bdef;
    *(undefined8 *)(uVar17 - 0x20) = 0;
    *(ulonglong *)(uVar17 - 0x28) = uVar17 + 0xc & 0xffffffff;
    *(undefined8 *)(uVar17 - 0x30) = 0x14076417c;
    FUN_140752458();
    puVar18 = (undefined1 *)(ulonglong)((int)(uVar17 - 0x28) + 0x14);
  }
  else {
    *(ulonglong *)(uVar17 - 8) = (ulonglong)uVar4;
    *(ulonglong *)(uVar17 - 0x10) = (ulonglong)uVar3;
    *(ulonglong *)(uVar17 - 0x18) = (ulonglong)uVar6;
    *(undefined8 *)(uVar17 - 0x20) = 0x1033bdc5;
    *(undefined8 *)(uVar17 - 0x28) = 0;
    *(ulonglong *)(uVar17 - 0x30) = uVar17 + 0xc & 0xffffffff;
    *(undefined8 *)(uVar17 - 0x38) = 0x140764168;
    FUN_140752458();
    puVar18 = (undefined1 *)(ulonglong)((int)(uVar17 - 0x30) + 0x18);
  }
  *(undefined4 *)(puVar18 + 8) = *(undefined4 *)(uVar25 + 0xd00);
  if ((uVar7 & 1) == 0) {
    *(undefined4 *)(uVar25 + 0xd00) = 0;
  }
  *(ulonglong *)(puVar18 + -8) = (ulonglong)uVar8;
  *(undefined8 *)(puVar18 + -0x10) = 0;
  *(undefined8 *)(puVar18 + -0x18) = *(undefined8 *)(puVar18 + 4);
  *(undefined8 *)(puVar18 + -0x20) = 0x1407641a8;
  uVar5 = FUN_14075fbfb();
  puVar19 = (undefined1 *)(ulonglong)((int)(puVar18 + -0x18) + 0xc);
  puVar19[3] = uVar5;
  *(undefined4 *)(uVar25 + 0xd00) = *(undefined4 *)(puVar19 + 8);
  if ((char)uVar7 < '\0') {
    *(undefined8 *)(puVar19 + -8) = 3;
    *(undefined8 *)(puVar19 + -0x10) = 0x1407641c8;
    FUN_140755394();
    uVar20 = (ulonglong)((int)(puVar19 + -8) + 4);
    *(undefined8 *)(uVar20 - 8) = 1;
    *(undefined8 *)(uVar20 - 0x10) = 0x1407641d2;
    FUN_140754d5e();
    puVar19 = (undefined1 *)(ulonglong)((int)(uVar20 - 8) + 4);
  }
  uVar24 = (ulonglong)*(uint *)(uVar25 + 0x14cc);
  uVar8 = *(uint *)(puVar19 + 0x3c);
  *(uint *)(uVar24 + 0xbc) = uVar8;
  if (*(short *)(uVar24 + 0x108) == 1) {
    *(undefined8 *)((ulonglong)*(uint *)(puVar19 + 4) + 0x144) = *(undefined8 *)(uVar24 + 0x50);
  }
  *(ulonglong *)(puVar19 + -8) = (ulonglong)uVar8;
  *(undefined8 *)(puVar19 + -0x10) = 0;
  *(undefined8 *)(puVar19 + -0x18) = 0x1033a330;
  *(undefined8 *)(puVar19 + -0x20) = 0x14076420d;
  uVar8 = FUN_140752593();
  puVar21 = (undefined1 *)(ulonglong)((int)(puVar19 + -0x18) + 0xc);
  if (*(uint *)(uVar25 + 0x1528) == uVar8) {
    *(undefined8 *)(puVar21 + -8) = 0x14076421f;
    FUN_14075a7a8();
  }
  if ((((uVar7 >> 8 & 1) == 0) && (*(int *)(uVar25 + 0x2058) == *(int *)(puVar21 + 0x3c))) &&
     ((*(short *)(uVar24 + 0x1a0) != 0 || (*(char *)(uVar24 + 0x1a6) == '\x01')))) {
    *(undefined8 *)(puVar21 + -8) = 0;
    *(ulonglong *)(puVar21 + -0x10) = uVar24;
    *(undefined8 *)(puVar21 + -0x18) = 0x14076424d;
    FUN_14075b3b2();
    uVar22 = (ulonglong)((int)(puVar21 + -0x10) + 8);
    *(undefined8 *)(uVar22 - 8) = 0;
    *(ulonglong *)(uVar22 - 0x10) = uVar24;
    *(undefined8 *)(uVar22 - 0x18) = 0x140764257;
    FUN_14076440d();
    uVar23 = (ulonglong)((int)(uVar22 - 0x10) + 8);
    *(ulonglong *)(uVar23 - 8) = uVar24;
    *(ulonglong *)(uVar23 - 0x10) = (ulonglong)uVar8;
    *(undefined8 *)(uVar23 - 0x18) = 0x140764261;
    FUN_14075a58a();
    puVar21 = (undefined1 *)(ulonglong)((int)(uVar23 - 0x10) + 8);
    *(undefined4 *)(uVar25 + 0x1548) = *(undefined4 *)(uVar25 + 0x208c);
  }
  uVar7 = *(uint *)(puVar21 + 0x20) ^ (uint)puVar21;
  if (_DAT_150aecf7c == uVar7) {
    return CONCAT31((int3)(uVar7 >> 8),puVar21[3]);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar21 + -8) = &UNK_140764297;
  FUN_1408802b0(*(uint *)(puVar21 + 0x20) ^ (uint)puVar21);
}

