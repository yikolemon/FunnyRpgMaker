/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e81fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1407e81fa(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  uint uVar19;
  int *piVar20;
  uint *puVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  float10 in_ST0;
  float fVar26;
  float fVar27;
  
  piVar20 = (int *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar19 = *(uint *)((longlong)piVar20 + 0x28);
  uVar24 = (ulonglong)*(uint *)((longlong)piVar20 + 0x20);
  iVar4 = *(int *)(uVar24 + 0x24);
  if (iVar4 == *(int *)(uVar24 + 0x28)) {
    if (iVar4 == 0) {
      iVar13 = 8;
    }
    else {
      iVar13 = iVar4 / 2 + iVar4;
    }
    iVar22 = iVar4 + 1;
    if (iVar4 + 1 < iVar13) {
      iVar22 = iVar13;
    }
    *(ulonglong *)((longlong)piVar20 + -8) = (ulonglong)(uint)(iVar22 * 0x2c);
    *(undefined8 *)((longlong)piVar20 + -0x10) = 0x1407e823f;
    uVar14 = FUN_1407520ca();
    piVar20 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar20 + -8) + 4);
    uVar18 = (ulonglong)uVar14;
    uVar19 = *(uint *)(uVar24 + 0x2c);
    if (uVar19 != 0) {
      *(ulonglong *)((longlong)piVar20 + -8) = (ulonglong)(uint)(*(int *)(uVar24 + 0x24) * 0x2c);
      *(ulonglong *)((longlong)piVar20 + -0x10) = (ulonglong)uVar19;
      *(ulonglong *)((longlong)piVar20 + -0x18) = uVar18;
      *(undefined8 *)((longlong)piVar20 + -0x20) = 0x1407e8257;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)piVar20 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar24 + 0x2c);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)piVar20 + -0x18) + 0xc) - 0x10) =
           &UNK_1407e8262;
      FUN_14075219b();
    }
    *(uint *)(uVar24 + 0x2c) = uVar14;
    *(int *)(uVar24 + 0x28) = iVar22;
    uVar19 = *(uint *)((longlong)piVar20 + 0x28);
    iVar13 = *(int *)(uVar24 + 0x24);
  }
  else {
    uVar18 = (ulonglong)*(uint *)(uVar24 + 0x2c);
    iVar13 = iVar4;
  }
  puVar17 = (undefined4 *)(ulonglong)uVar19;
  uVar14 = *(uint *)((longlong)piVar20 + 0x24);
  uVar23 = (ulonglong)*(uint *)((longlong)piVar20 + 0x1c);
  uVar15 = (ulonglong)(uint)(iVar13 * 0x2c);
  uVar12 = *(undefined8 *)(puVar17 + 9);
  puVar1 = (undefined8 *)(uVar18 + 0x1c + uVar15);
  *puVar1 = *(undefined8 *)(puVar17 + 7);
  puVar1[1] = uVar12;
  uVar5 = *puVar17;
  uVar6 = puVar17[1];
  uVar7 = puVar17[2];
  uVar8 = puVar17[3];
  uVar9 = puVar17[5];
  uVar10 = puVar17[6];
  uVar11 = puVar17[7];
  puVar2 = (undefined4 *)(uVar18 + 0x10 + uVar15);
  *puVar2 = puVar17[4];
  puVar2[1] = uVar9;
  puVar2[2] = uVar10;
  puVar2[3] = uVar11;
  puVar2 = (undefined4 *)(uVar18 + uVar15);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(int *)(uVar24 + 0x24) = *(int *)(uVar24 + 0x24) + 1;
  puVar25 = (uint *)(ulonglong)(*(uint *)(uVar24 + 0x2c) + iVar4 * 0x2c);
  uVar19 = *(uint *)((ulonglong)*(uint *)(uVar24 + 0x2c) + 0x28 + (ulonglong)(uint)(iVar4 * 0x2c));
  if (uVar19 != 0xffffffff) {
    *(ulonglong *)((longlong)piVar20 + -8) = (ulonglong)uVar19;
    *(ulonglong *)((longlong)piVar20 + -0x10) = uVar23;
    *(undefined8 *)((longlong)piVar20 + -0x18) = 0x1407e82b6;
    puVar16 = (ushort *)FUN_1407e7fe2();
    piVar20 = (int *)(ulonglong)((int)(undefined1 *)((longlong)piVar20 + -0x10) + 8);
    puVar25[6] = (uint)((float)*puVar16 * *(float *)(uVar23 + 0x44));
    puVar25[7] = (uint)((float)puVar16[1] * *(float *)(uVar23 + 0x48));
    puVar25[8] = (uint)((float)((uint)puVar16[2] + (uint)*puVar16) * *(float *)(uVar23 + 0x44));
    uVar14 = *(uint *)((longlong)piVar20 + 0x24);
    puVar25[9] = (uint)((float)((uint)puVar16[3] + (uint)puVar16[1]) * *(float *)(uVar23 + 0x48));
    *(uint *)(uVar24 + 0x3c) =
         *(uint *)(uVar24 + 0x3c) & 0xfc000000 |
         (uint)puVar16[3] * (uint)puVar16[2] + *(uint *)(uVar24 + 0x3c) & 0x3ffffff;
  }
  uVar18 = (ulonglong)uVar14;
  if (uVar14 != 0) {
    fVar26 = *(float *)((ulonglong)
                        *(uint *)(ulonglong)*(uint *)((ulonglong)*(uint *)(uVar24 + 0x48) + 0x20) +
                       0x38);
    if ((fVar26 != 0.0) || (fVar27 = _DAT_150a7379d, NAN(fVar26))) {
      fVar27 = *(float *)(uVar24 + 0x10) / fVar26;
    }
    fVar26 = *(float *)(uVar18 + 0x4c);
    uVar19 = puVar25[1];
    puVar21 = (uint *)(ulonglong)((int)piVar20 - 0xc);
    puVar21[2] = (uint)(*(float *)(uVar18 + 0x50) * fVar27);
    puVar21[1] = (uint)(fVar27 * fVar26);
    *puVar21 = uVar19;
    puVar21[-2] = 0x407e839b;
    puVar21[-1] = 1;
    FUN_14076ab94();
    piVar20[1] = (int)(float)in_ST0;
    fVar26 = (float)piVar20[1];
    fVar27 = (float)puVar25[1];
    if ((fVar26 != fVar27) || (NAN(fVar26) || NAN(fVar27))) {
      fVar27 = (fVar26 - fVar27) * _DAT_150a9f4a5;
      if (*(char *)(uVar18 + 0x32) != '\0') {
        fVar27 = (float)(int)fVar27;
      }
      puVar25[2] = (uint)((float)puVar25[2] + fVar27);
      puVar25[4] = (uint)(fVar27 + (float)puVar25[4]);
    }
    uVar23 = (ulonglong)(uint)piVar20[7];
    if (*(char *)(uVar18 + 0x32) != '\0') {
      fVar26 = (float)(int)(fVar26 + _DAT_150a9f4dc);
    }
    puVar25[1] = (uint)(fVar26 + *(float *)(uVar18 + 0x54));
  }
  *piVar20 = iVar4;
  uVar19 = *puVar25;
  if ((uVar19 & 1) != 0) {
    *(undefined1 *)((ulonglong)*(uint *)(uVar23 + 0x30) + 0x4e) = 1;
    *(undefined1 *)(uVar23 + 0x43) = 1;
    uVar19 = *puVar25;
  }
  uVar14 = uVar19 >> 6;
  piVar20[-2] = 0x407e8433;
  piVar20[-1] = 1;
  FUN_1407ea94d(uVar24,uVar14 + 1);
  *(uint *)((ulonglong)*(uint *)(uVar24 + 8) + (ulonglong)uVar14 * 4) = puVar25[1];
  *(short *)((ulonglong)*(uint *)(uVar24 + 0x20) + (ulonglong)uVar14 * 2) = (short)*piVar20;
  pbVar3 = (byte *)((ulonglong)*(uint *)(uVar24 + 0x48) + 0x28 + (ulonglong)(uVar19 >> 0x16));
  *pbVar3 = *pbVar3 | (byte)(0 << ((byte)(uVar19 >> 0x13) & 7));
  return puVar25;
}

