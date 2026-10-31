/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e9598 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407e9598(void)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ushort *puVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  longlong in_FS_OFFSET;
  char *pcVar9;
  ulonglong uVar18;
  
  uVar24 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar17 = (int)&stack0xffffffffffffffe0 - 0x54;
  uVar18 = (ulonglong)uVar17;
  uVar8 = *(uint *)(uVar24 + 8);
  uVar7 = (int)&stack0xfffffffffffffff8 - 0x18;
  pcVar9 = (char *)(ulonglong)uVar7;
  *(uint *)(pcVar9 + -4) = uVar17;
  pcVar9[8] = -1;
  pcVar9[9] = -1;
  pcVar9[10] = -1;
  pcVar9[0xb] = -1;
  pcVar9[4] = '\x10';
  pcVar9[5] = '`';
  pcVar9[6] = '\x19';
  pcVar9[7] = '\x10';
  *(undefined4 *)pcVar9 = *(undefined4 *)(in_FS_OFFSET + 0x1407e95c0);
  *(uint *)(in_FS_OFFSET + 0x290828b00000000) = uVar7;
  *pcVar9 = *pcVar9 + (char)uVar7;
  *(uint *)(uVar24 - 0x28) = uVar7;
  pcVar9[0xa8] = '\x01';
  uVar7 = *(uint *)((ulonglong)uVar8 + 0x30);
  *(undefined8 *)(uVar18 - 8) = *(undefined8 *)(uVar24 + 0x10);
  *(undefined8 *)(uVar18 - 0x10) = *(undefined8 *)(uVar24 + 0xc);
  *(ulonglong *)(uVar18 - 0x18) = (ulonglong)uVar8;
  *(undefined8 *)(uVar18 - 0x20) = 0x1407e95e7;
  lVar10 = FUN_1407e9431();
  puVar19 = (undefined1 *)(ulonglong)((int)(uVar18 - 0x18) + 0xc);
  *(uint *)(uVar24 - 0x44) = uVar7;
  uVar1 = *(undefined1 *)((ulonglong)uVar7 + 0x4e);
  *(int *)(uVar24 - 0x40) = (int)lVar10;
  *(undefined1 *)(lVar10 + 0x4e) = uVar1;
  if ((*(byte *)((ulonglong)_DAT_2e74c0851039d74c + 0x27b5) & 1) != 0) {
    puVar11 = (undefined8 *)(ulonglong)*(uint *)(uVar24 - 0x40);
    *(undefined8 *)(puVar19 + -8) = puVar11[4];
    *(undefined8 *)(puVar19 + -0x10) = *(undefined8 *)((longlong)puVar11 + 0x1c);
    *(undefined8 *)(puVar19 + -0x18) = *puVar11;
    puVar11 = (undefined8 *)(ulonglong)*(uint *)(uVar24 - 0x44);
    *(undefined8 *)(puVar19 + -0x20) = puVar11[4];
    *(undefined8 *)(puVar19 + -0x28) = *(undefined8 *)((longlong)puVar11 + 0x1c);
    *(undefined8 *)(puVar19 + -0x30) = *puVar11;
    *(undefined8 *)(puVar19 + -0x38) = 0x1034cc9b;
    *(undefined8 *)(puVar19 + -0x40) = 0x1407e962a;
    FUN_1407518b6();
    puVar19 = (undefined1 *)(ulonglong)((int)(puVar19 + -0x38) + 0x1c);
  }
  *(undefined8 *)(puVar19 + -8) = *(undefined8 *)(uVar24 + 8);
  *(undefined8 *)(puVar19 + -0x10) = 0x1407e9636;
  FUN_1407e9ab7();
  puVar20 = (undefined1 *)(ulonglong)((int)(puVar19 + -8) + 4);
  *(undefined4 *)(uVar24 - 0x3c) = 0;
  *(undefined4 *)(uVar24 - 0x30) = 0;
  *(undefined4 *)(uVar24 - 0x10) = 0;
  uVar8 = *(uint *)((ulonglong)*(uint *)(uVar24 - 0x28) + 0x68);
  *(uint *)(uVar24 - 0x34) = uVar8;
  if (0 < (int)uVar8) {
    uVar7 = 8;
    if (8 < uVar8) {
      uVar7 = uVar8;
    }
    *(undefined4 *)(uVar24 - 0x3c) = 0;
    *(ulonglong *)(puVar20 + -8) = (ulonglong)(uVar7 << 2);
    *(undefined8 *)(puVar20 + -0x10) = 0x1407e9672;
    uVar8 = FUN_1407520ca();
    puVar20 = (undefined1 *)(ulonglong)((int)(puVar20 + -8) + 4);
    if (uVar8 != 0) {
      uVar7 = *(uint *)((ulonglong)*(uint *)(uVar24 - 0x28) + 0x70);
      if (uVar7 != 0) {
        *(ulonglong *)(puVar20 + -8) = (ulonglong)(uint)(*(int *)(uVar24 - 0x34) * 4);
        *(ulonglong *)(puVar20 + -0x10) = (ulonglong)uVar7;
        *(ulonglong *)(puVar20 + -0x18) = (ulonglong)uVar8;
        *(undefined8 *)(puVar20 + -0x20) = 0x1407e9699;
        FUN_1408b31a0();
        puVar20 = (undefined1 *)(ulonglong)((int)(puVar20 + -0x18) + 0xc);
      }
      *(uint *)(uVar24 - 0x30) = uVar8;
    }
  }
  *(undefined4 *)(uVar24 - 0x20) = 0;
  *(undefined4 *)(uVar24 - 0x10) = 1;
  uVar14 = (ulonglong)*(uint *)(uVar24 - 0x28);
  *(undefined8 *)(uVar24 - 0x60) = *(undefined8 *)(uVar14 + 0x5c);
  *(undefined8 *)(uVar24 - 0x58) = 0;
  *(undefined4 *)(uVar14 + 0x5c) = 0;
  *(undefined4 *)(uVar14 + 0x60) = 0;
  *(undefined4 *)(uVar24 - 0x24) = *(undefined4 *)(uVar14 + 100);
  *(undefined4 *)(uVar14 + 100) = 0;
  uVar8 = *(uint *)(uVar14 + 0x70);
  *(uint *)(uVar24 - 0x38) = uVar8 + *(int *)(uVar14 + 0x68) * 4;
  do {
    if (uVar8 == *(uint *)(uVar24 - 0x38)) {
      uVar14 = 0;
      uVar8 = *(uint *)(uVar24 - 0x28);
      *(undefined4 *)((ulonglong)uVar8 + 0x8c) = 0;
      *(undefined4 *)((ulonglong)uVar8 + 0x90) = 0;
      while( true ) {
        uVar8 = (uint)uVar14;
        if (*(int *)((ulonglong)*(uint *)(uVar24 - 0x28) + 0xac) <= (int)uVar8) break;
        uVar14 = (ulonglong)
                 *(uint *)((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar24 - 0x28) + 0xbc) +
                          (uVar14 >> 5) * 4);
        *(uint *)(uVar24 - 0x48) = uVar8;
        uVar16 = (ulonglong)((uVar8 & 0x1f) * 0x50);
        uVar8 = *(uint *)(uVar14 + 0x2c + uVar16);
        *(uint *)(uVar24 - 0x38) = *(int *)(uVar14 + 0x24 + uVar16) * 0x2c + uVar8;
        for (; uVar8 != *(uint *)(uVar24 - 0x38); uVar8 = uVar8 + 0x2c) {
          uVar7 = *(uint *)((ulonglong)uVar8 + 0x28);
          if (uVar7 != 0xffffffff) {
            *(uint *)(uVar24 - 0x2c) = uVar8;
            *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x24);
            *(ulonglong *)(puVar20 + -8) = (ulonglong)uVar7;
            *(ulonglong *)(puVar20 + -0x10) = (ulonglong)*(uint *)(uVar24 + 8);
            *(undefined8 *)(puVar20 + -0x18) = 0x1407e980c;
            puVar13 = (ushort *)FUN_1407e7fe2();
            puVar20 = (undefined1 *)(ulonglong)((int)(puVar20 + -0x10) + 8);
            uVar16 = (ulonglong)*(uint *)(uVar24 + 8);
            uVar8 = *(uint *)(uVar24 - 0x2c);
            uVar14 = (ulonglong)uVar8;
            *(float *)(uVar14 + 0x18) = (float)*puVar13 * *(float *)(uVar16 + 0x44);
            *(float *)(uVar14 + 0x1c) = (float)puVar13[1] * *(float *)(uVar16 + 0x48);
            *(float *)(uVar14 + 0x20) =
                 (float)((uint)puVar13[2] + (uint)*puVar13) * *(float *)(uVar16 + 0x44);
            *(float *)(uVar14 + 0x24) =
                 (float)((uint)puVar13[3] + (uint)puVar13[1]) * *(float *)(uVar16 + 0x48);
          }
        }
        uVar14 = (ulonglong)*(uint *)(uVar24 - 0x48);
      }
      *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x24);
      *(undefined4 *)(uVar24 - 0x10) = 1;
      uVar25 = *(undefined4 *)(uVar24 + 8);
      *(undefined8 *)(puVar20 + -8) = 0x1407e989b;
      FUN_1407e9c7e(uVar25);
      *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x24);
      uVar25 = *(undefined4 *)(uVar24 + 8);
      *(undefined8 *)(puVar20 + -8) = 0x1407e98aa;
      FUN_1407e9ecc(uVar25);
      *(undefined1 *)((ulonglong)*(uint *)(uVar24 - 0x28) + 0xa8) = 0;
      *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x24);
      *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(uVar24 + 8);
      *(undefined8 *)(puVar20 + -0x10) = 0x1407e98c3;
      FUN_1407e93ef();
      puVar23 = (undefined1 *)(ulonglong)((int)(puVar20 + -8) + 4);
      uVar8 = *(uint *)(uVar24 - 0x24);
code_r0x0001407e98cb:
      *(uint *)(uVar24 - 0x20) = uVar8;
      *(undefined4 *)(uVar24 - 0x10) = 0xffffffff;
      if (*(uint *)(uVar24 - 0x30) != 0) {
        *(ulonglong *)(puVar23 + -8) = (ulonglong)*(uint *)(uVar24 - 0x30);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar23 + -0x10) = &UNK_1407e98e3;
        FUN_14075219b();
      }
      *(uint *)(uVar24 - 0x3c) = uVar8;
      if (uVar8 != 0) {
        *(ulonglong *)(puVar23 + -8) = (ulonglong)uVar8;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar23 + -0x10) = &UNK_1407e98f5;
        FUN_14075219b();
      }
      *(undefined4 *)(in_FS_OFFSET + 0x5e54c48300000000) = *(undefined4 *)(uVar24 - 0x18);
      return;
    }
    *(uint *)(uVar24 - 0x2c) = uVar8;
    uVar7 = *(uint *)(uVar24 + 8);
    if ((*(uint *)(ulonglong)uVar8 >> 0x1e & 1) != 0) {
      uVar17 = (int)(*(uint *)(ulonglong)uVar8 << 0xc) >> 9;
      uVar8 = *(uint *)(uVar24 - 0x24);
      uVar2 = *(ushort *)((ulonglong)uVar8 + 4 + (ulonglong)uVar17);
      *(uint *)(uVar24 - 0x48) = uVar17;
      uVar3 = *(ushort *)((ulonglong)uVar8 + 6 + (ulonglong)uVar17);
      if (uVar2 != 0 || uVar3 != 0) {
        *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x24);
        *(undefined4 *)(uVar24 - 0x10) = 1;
        *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(uVar24 - 0x2c);
        *(ulonglong *)(puVar20 + -0x10) = (ulonglong)uVar3;
        *(ulonglong *)(puVar20 + -0x18) = (ulonglong)uVar2;
        *(ulonglong *)(puVar20 + -0x20) = (ulonglong)uVar7;
        *(undefined8 *)(puVar20 + -0x28) = 0x1407e972f;
        uVar12 = FUN_1407e7cbf();
        puVar21 = (undefined1 *)(ulonglong)((int)(puVar20 + -0x20) + 0x10);
        if ((int)uVar12 == -1) {
          if ((*(byte *)((ulonglong)_DAT_2474c0851039d74c + 0x27b5) & 1) != 0) {
            uVar8 = *(uint *)(ulonglong)*(uint *)(uVar24 - 0x40);
            *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x24);
            *(ulonglong *)(puVar21 + -8) = (ulonglong)uVar8;
            *(undefined8 *)(puVar21 + -0x10) = 0x10355062;
            *(undefined8 *)(puVar21 + -0x18) = 0x1407e9940;
            FUN_1407518b6();
            puVar21 = (undefined1 *)(ulonglong)((int)(puVar21 + -0x10) + 8);
          }
          *(undefined1 *)((ulonglong)*(uint *)(uVar24 - 0x40) + 0x4f) = 1;
          uVar14 = (ulonglong)*(uint *)(uVar24 - 0x28);
          uVar25 = *(undefined4 *)(uVar24 - 0x5c);
          *(undefined4 *)(uVar14 + 0x5c) = *(undefined4 *)(uVar24 - 0x60);
          *(undefined4 *)(uVar14 + 0x60) = uVar25;
          uVar25 = *(undefined4 *)(uVar14 + 100);
          uVar8 = *(uint *)(uVar14 + 0x70);
          *(undefined4 *)(uVar14 + 100) = *(undefined4 *)(uVar24 - 0x24);
          *(undefined4 *)(uVar24 - 0x2c) = uVar25;
          if (uVar8 != 0) {
            *(undefined4 *)(uVar14 + 0x6c) = 0;
            *(undefined4 *)(uVar14 + 0x68) = 0;
            *(undefined4 *)(uVar24 - 0x20) = uVar25;
            *(ulonglong *)(puVar21 + -8) = (ulonglong)uVar8;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar21 + -0x10) = &UNK_1407e997b;
            FUN_14075219b();
          }
          iVar15 = *(int *)(uVar14 + 0x6c);
          if (iVar15 < *(int *)(uVar24 - 0x34)) {
            if (iVar15 == 0) {
              iVar15 = 8;
            }
            else {
              iVar15 = iVar15 / 2 + iVar15;
            }
            if (iVar15 <= *(int *)(uVar24 - 0x34)) {
              iVar15 = *(int *)(uVar24 - 0x34);
            }
            *(int *)(uVar24 - 0x38) = iVar15;
            *(undefined4 *)(uVar24 - 0x20) = uVar25;
            *(ulonglong *)(puVar21 + -8) = (ulonglong)(uint)(iVar15 * 4);
            *(undefined8 *)(puVar21 + -0x10) = 0x1407e99d2;
            uVar7 = FUN_1407520ca();
            uVar25 = *(undefined4 *)(uVar24 - 0x2c);
            puVar21 = (undefined1 *)(ulonglong)((int)(puVar21 + -8) + 4);
            uVar8 = *(uint *)((ulonglong)*(uint *)(uVar24 - 0x28) + 0x70);
            if (uVar8 != 0) {
              uVar17 = *(uint *)(uVar24 - 0x28);
              *(ulonglong *)(puVar21 + -8) =
                   (ulonglong)(uint)(*(int *)((ulonglong)uVar17 + 0x68) << 2);
              *(ulonglong *)(puVar21 + -0x10) = (ulonglong)uVar8;
              *(ulonglong *)(puVar21 + -0x18) = (ulonglong)uVar7;
              *(uint *)(uVar24 - 0x24) = uVar7;
              *(undefined8 *)(puVar21 + -0x20) = 0x1407e99f9;
              FUN_1408b31a0();
              uVar8 = *(uint *)((ulonglong)uVar17 + 0x70);
              *(undefined4 *)(uVar24 - 0x20) = uVar25;
              *(ulonglong *)((ulonglong)((int)(puVar21 + -0x18) + 0xc) - 8) = (ulonglong)uVar8;
                    /* WARNING: Subroutine does not return */
              *(undefined **)((ulonglong)((int)(puVar21 + -0x18) + 0xc) - 0x10) = &UNK_1407e9a08;
              FUN_14075219b();
            }
            uVar14 = (ulonglong)*(uint *)(uVar24 - 0x28);
            *(uint *)(uVar14 + 0x70) = uVar7;
            *(undefined4 *)(uVar14 + 0x6c) = *(undefined4 *)(uVar24 - 0x38);
            *(undefined4 *)(uVar14 + 0x68) = *(undefined4 *)(uVar24 - 0x34);
            if ((*(int *)(uVar24 - 0x30) != 0) && (uVar7 != 0)) {
              *(ulonglong *)(puVar21 + -8) = (ulonglong)(uint)(*(int *)(uVar24 - 0x34) << 2);
              *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(uVar24 - 0x30);
              *(ulonglong *)(puVar21 + -0x18) = (ulonglong)uVar7;
              *(undefined8 *)(puVar21 + -0x20) = 0x1407e9a3f;
              FUN_1408b31a0();
              puVar21 = (undefined1 *)(ulonglong)((int)(puVar21 + -0x18) + 0xc);
            }
          }
          else {
            *(int *)(uVar14 + 0x68) = *(int *)(uVar24 - 0x34);
          }
          *(undefined4 *)(uVar24 - 0x20) = uVar25;
          uVar25 = *(undefined4 *)(uVar24 + 8);
          uVar6 = *(undefined4 *)(uVar24 - 0x44);
          *(undefined8 *)(puVar21 + -8) = 0x1407e9a51;
          FUN_1407e9525(uVar25,uVar6);
          *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x2c);
          *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(uVar24 + 0x10);
          *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(uVar24 + 0xc);
          *(undefined8 *)(puVar21 + -0x18) = *(undefined8 *)(uVar24 + 8);
          *(undefined8 *)(puVar21 + -0x20) = 0x1407e9a66;
          FUN_1407e9b78();
          uVar8 = *(uint *)(uVar24 - 0x2c);
          puVar23 = (undefined1 *)(ulonglong)((int)(puVar21 + -0x18) + 0xc);
          goto code_r0x0001407e98cb;
        }
        *(undefined4 *)(uVar24 - 0x20) = *(undefined4 *)(uVar24 - 0x24);
        *(undefined8 *)(puVar21 + -8) = uVar12;
        *(undefined8 *)(puVar21 + -0x10) = *(undefined8 *)(uVar24 + 8);
        *(undefined8 *)(puVar21 + -0x18) = 0x1407e974b;
        puVar13 = (ushort *)FUN_1407e7fe2();
        uVar22 = (ulonglong)((int)(puVar21 + -0x10) + 8);
        uVar8 = *(uint *)(uVar24 - 0x48);
        *(uint *)(uVar24 - 0x4c) = (uint)puVar13[3];
        uVar2 = puVar13[2];
        uVar3 = puVar13[1];
        uVar4 = *puVar13;
        uVar7 = *(uint *)(uVar24 - 0x24);
        *(uint *)(uVar24 - 0x50) = (uint)*(ushort *)((ulonglong)uVar7 + 2 + (ulonglong)uVar8);
        uVar5 = *(ushort *)((ulonglong)uVar7 + (ulonglong)uVar8);
        *(uint *)(uVar24 - 0x20) = uVar7;
        *(undefined8 *)(uVar22 - 8) = *(undefined8 *)(uVar24 - 0x4c);
        *(ulonglong *)(uVar22 - 0x10) = (ulonglong)uVar2;
        *(ulonglong *)(uVar22 - 0x18) = (ulonglong)uVar3;
        *(ulonglong *)(uVar22 - 0x20) = (ulonglong)uVar4;
        *(undefined8 *)(uVar22 - 0x28) = *(undefined8 *)(uVar24 - 0x40);
        *(undefined8 *)(uVar22 - 0x30) = *(undefined8 *)(uVar24 - 0x50);
        *(ulonglong *)(uVar22 - 0x38) = (ulonglong)uVar5;
        *(undefined8 *)(uVar22 - 0x40) = *(undefined8 *)(uVar24 - 0x44);
        *(undefined8 *)(uVar22 - 0x48) = 0x1407e978c;
        FUN_1407e6c90();
        puVar20 = (undefined1 *)(ulonglong)((int)(uVar22 - 0x40) + 0x20);
      }
    }
    uVar8 = *(int *)(uVar24 - 0x2c) + 4;
  } while( true );
}

