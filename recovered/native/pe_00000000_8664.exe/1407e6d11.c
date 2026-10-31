/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e6d11 */

void FUN_1407e6d11(void)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  undefined2 uVar6;
  short sVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  
  puVar13 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x18);
  uVar9 = puVar13[0xf];
  uVar3 = puVar13[0xd];
  uVar12 = (ulonglong)puVar13[0xb];
  puVar13[1] = puVar13[0xc] & 0xffff;
  *puVar13 = (uint)(ushort)puVar13[0xe];
  uVar4 = (uint)(ushort)puVar13[0xe] + (puVar13[0xc] & 0xffff);
  uVar24 = 0;
  uVar10 = 0;
  if (*(ushort *)(uVar12 + 0x38) != 0) {
    uVar10 = (ulonglong)((uint)*(ushort *)(uVar12 + 0x34) + (uint)*(ushort *)(uVar12 + 0x38));
  }
  puVar13[5] = uVar4;
  *(ulonglong *)(puVar13 + -2) = (ulonglong)uVar4;
  *(ulonglong *)(puVar13 + -4) = uVar10;
  puVar13[-6] = 0x407e6d5a;
  puVar13[-5] = 1;
  uVar8 = FUN_140753b3a();
  uVar14 = (ulonglong)((int)(puVar13 + -4) + 8);
  *(undefined4 *)(uVar14 + 0x10) = uVar8;
  *(uint *)(uVar14 + 8) = uVar9 & 0xffff;
  uVar10 = (ulonglong)((uVar3 & 0xffff) + (uVar9 & 0xffff));
  if (*(ushort *)(uVar12 + 0x3a) != 0) {
    uVar24 = (ulonglong)((uint)*(ushort *)(uVar12 + 0x36) + (uint)*(ushort *)(uVar12 + 0x3a));
  }
  *(ulonglong *)(uVar14 - 8) = uVar10;
  *(ulonglong *)(uVar14 - 0x10) = uVar24;
  *(undefined8 *)(uVar14 - 0x18) = 0x1407e6d85;
  sVar5 = FUN_140753b3a();
  uVar15 = (ulonglong)((int)(uVar14 - 0x10) + 8);
  uVar1 = *(ushort *)(uVar12 + 0x34);
  uVar4 = *(uint *)(uVar15 + 4);
  *(ulonglong *)(uVar15 - 8) = (ulonglong)uVar4;
  *(ulonglong *)(uVar15 - 0x10) = (ulonglong)uVar1;
  *(undefined8 *)(uVar15 - 0x18) = 0x1407e6d99;
  uVar6 = FUN_1407e6ede();
  uVar16 = (ulonglong)((int)(uVar15 - 0x10) + 8);
  *(undefined2 *)(uVar12 + 0x34) = uVar6;
  uVar1 = *(ushort *)(uVar12 + 0x36);
  *(uint *)(uVar16 + 0xc) = *(uint *)(uVar16 + 0x34) & 0xffff;
  *(ulonglong *)(uVar16 - 8) = (ulonglong)(*(uint *)(uVar16 + 0x34) & 0xffff);
  *(ulonglong *)(uVar16 - 0x10) = (ulonglong)uVar1;
  *(undefined8 *)(uVar16 - 0x18) = 0x1407e6db6;
  sVar7 = FUN_1407e6ede();
  uVar17 = (ulonglong)((int)(uVar16 - 0x10) + 8);
  *(short *)(uVar12 + 0x36) = sVar7;
  *(short *)(uVar12 + 0x38) = (short)*(undefined4 *)(uVar17 + 0x10) - *(short *)(uVar12 + 0x34);
  *(short *)(uVar12 + 0x3a) = sVar5 - sVar7;
  uVar1 = *(ushort *)(uVar12 + 0x2c);
  *(ulonglong *)(uVar17 - 8) = (ulonglong)uVar4;
  *(ulonglong *)(uVar17 - 0x10) = (ulonglong)uVar1;
  *(undefined8 *)(uVar17 - 0x18) = 0x1407e6dda;
  uVar6 = FUN_1407e6ede();
  uVar18 = (ulonglong)((int)(uVar17 - 0x10) + 8);
  *(undefined2 *)(uVar12 + 0x2c) = uVar6;
  uVar1 = *(ushort *)(uVar12 + 0x2e);
  *(undefined8 *)(uVar18 - 8) = *(undefined8 *)(uVar18 + 0xc);
  *(ulonglong *)(uVar18 - 0x10) = (ulonglong)uVar1;
  *(undefined8 *)(uVar18 - 0x18) = 0x1407e6def;
  uVar6 = FUN_1407e6ede();
  uVar19 = (ulonglong)((int)(uVar18 - 0x10) + 8);
  *(undefined2 *)(uVar12 + 0x2e) = uVar6;
  uVar1 = *(ushort *)(uVar12 + 0x2c);
  uVar2 = *(ushort *)(uVar12 + 0x30);
  *(undefined8 *)(uVar19 - 8) = *(undefined8 *)(uVar19 + 0x14);
  *(ulonglong *)(uVar19 - 0x10) = (ulonglong)((uint)uVar2 + (uint)uVar1);
  *(undefined8 *)(uVar19 - 0x18) = 0x1407e6e0a;
  sVar5 = FUN_140753b3a();
  uVar20 = (ulonglong)((int)(uVar19 - 0x10) + 8);
  *(short *)(uVar12 + 0x30) = sVar5 - *(short *)(uVar12 + 0x2c);
  uVar1 = *(ushort *)(uVar12 + 0x2e);
  uVar2 = *(ushort *)(uVar12 + 0x32);
  *(ulonglong *)(uVar20 - 8) = uVar10;
  *(ulonglong *)(uVar20 - 0x10) = (ulonglong)((uint)uVar2 + (uint)uVar1);
  *(undefined8 *)(uVar20 - 0x18) = 0x1407e6e26;
  sVar5 = FUN_140753b3a();
  puVar21 = (uint *)(ulonglong)((int)(uVar20 - 0x10) + 8);
  *(short *)(uVar12 + 0x32) = sVar5 - *(short *)(uVar12 + 0x2e);
  if ((*(int *)(uVar12 + 4) == 3) || (*(int *)(uVar12 + 4) == 0)) {
    *(undefined4 *)(uVar12 + 4) = 3;
    uVar4 = *(uint *)(uVar12 + 0x3c);
    if (uVar4 == *(uint *)(uVar12 + 0x40)) {
      iVar22 = *(int *)((longlong)puVar21 + 0x34);
      if (uVar4 == 0) {
        iVar11 = 8;
      }
      else {
        iVar11 = (int)uVar4 / 2 + uVar4;
      }
      iVar23 = uVar4 + 1;
      if ((int)(uVar4 + 1) < iVar11) {
        iVar23 = iVar11;
      }
      *(ulonglong *)((longlong)puVar21 + -8) = (ulonglong)(uint)(iVar23 * 8);
      *(undefined8 *)((longlong)puVar21 + -0x10) = 0x1407e6e88;
      uVar9 = FUN_1407520ca();
      puVar21 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar21 + -8) + 4);
      uVar10 = (ulonglong)uVar9;
      uVar4 = *(uint *)(uVar12 + 0x44);
      if (uVar4 != 0) {
        *(ulonglong *)((longlong)puVar21 + -8) = (ulonglong)(uint)(*(int *)(uVar12 + 0x3c) << 3);
        *(ulonglong *)((longlong)puVar21 + -0x10) = (ulonglong)uVar4;
        *(ulonglong *)((longlong)puVar21 + -0x18) = uVar10;
        *(undefined8 *)((longlong)puVar21 + -0x20) = 0x1407e6ea2;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar21 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar12 + 0x44);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar21 + -0x18) + 0xc) - 0x10) =
             &UNK_1407e6ead;
        FUN_14075219b();
      }
      *(uint *)(uVar12 + 0x44) = uVar9;
      *(int *)(uVar12 + 0x40) = iVar23;
      uVar4 = *(uint *)(uVar12 + 0x3c);
    }
    else {
      uVar10 = (ulonglong)*(uint *)(uVar12 + 0x44);
      iVar22 = *(int *)((longlong)puVar21 + 0x34);
    }
    uVar9 = puVar21[1];
    *(uint *)(uVar10 + 4 + (ulonglong)uVar4 * 8) = puVar21[2] << 0x10 | *puVar21;
    *(uint *)(uVar10 + (ulonglong)uVar4 * 8) = iVar22 * 0x10000 + uVar9;
    *(int *)(uVar12 + 0x3c) = *(int *)(uVar12 + 0x3c) + 1;
  }
  return;
}

