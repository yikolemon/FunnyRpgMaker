/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e7cbf */

/* WARNING: Removing unreachable block (ram,0x0001407e7e01) */
/* WARNING: Removing unreachable block (ram,0x0001407e7e0a) */
/* WARNING: Removing unreachable block (ram,0x0001407e7e41) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407e7cbf(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  
  uVar10 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x38);
  *(undefined4 *)(uVar10 + 0x10) = *(undefined4 *)(uVar10 + 0x58);
  uVar1 = *(uint *)(uVar10 + 0x54);
  uVar6 = *(uint *)(uVar10 + 0x50);
  uVar2 = *(uint *)(uVar10 + 0x4c);
  uVar9 = (ulonglong)*(uint *)((ulonglong)uVar2 + 0x290);
  *(uint *)(uVar10 + 0xc) = uVar2;
  uVar2 = *(uint *)((ulonglong)uVar2 + 8);
  *(ulonglong *)(uVar10 - 8) = (ulonglong)uVar6;
  *(undefined8 *)(uVar10 - 0x10) = *(undefined8 *)(uVar9 + 0x98);
  *(undefined8 *)(uVar10 - 0x18) = 0x1407e7cfe;
  uVar5 = FUN_140753b3a();
  uVar11 = (ulonglong)((int)(uVar10 - 0x10) + 8);
  *(undefined4 *)(uVar9 + 0x98) = uVar5;
  *(ulonglong *)(uVar11 - 8) = (ulonglong)uVar1;
  *(undefined8 *)(uVar11 - 0x10) = *(undefined8 *)(uVar9 + 0x9c);
  *(undefined8 *)(uVar11 - 0x18) = 0x1407e7d13;
  uVar5 = FUN_140753b3a();
  puVar12 = (uint *)(ulonglong)((int)(uVar11 - 0x10) + 8);
  *(undefined4 *)(uVar9 + 0x9c) = uVar5;
  *puVar12 = uVar6;
  puVar12[1] = uVar1;
  puVar12[6] = uVar2;
  puVar14 = (undefined8 *)((ulonglong)(puVar12 + 7) & 0xffffffff);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *(uint *)((longlong)puVar14 + 4) = uVar6 + uVar2;
  *(uint *)(puVar14 + 1) = uVar2 + uVar1;
  puVar12[-2] = 0x407e7d4f;
  puVar12[-1] = 1;
  FUN_1407ea56e(uVar9,puVar14);
  if (*(int *)((longlong)puVar14 + 0x14) == 0) {
    if ((*(byte *)((ulonglong)_DAT_1e74c0851039d74c + 0x27b5) & 1) != 0) {
      *(undefined8 *)(puVar12 + -2) = *(undefined8 *)(puVar12 + 1);
      *(undefined8 *)(puVar12 + -4) = *(undefined8 *)(puVar12 + -1);
      puVar12[-6] = 0x103551ad;
      puVar12[-5] = 0;
      puVar12[-8] = 0x407e7e76;
      puVar12[-7] = 1;
      FUN_1407518b6();
      puVar12 = (uint *)(ulonglong)((int)(puVar12 + -6) + 0xc);
    }
    if (_DAT_150b70b85 == (*(uint *)((longlong)puVar12 + 0x34) ^ (uint)puVar12)) {
      return 0;
    }
  }
  else {
    puVar12[2] = (uint)(ushort)puVar12[0xb];
    uVar3 = *puVar12;
    *puVar12 = uVar3 & 0xffff;
    puVar12[5] = (uint)(ushort)puVar12[10];
    uVar4 = puVar12[6];
    *(ulonglong *)(puVar12 + -2) = (ulonglong)((uVar3 & 0xffff) + (uint)(ushort)puVar12[10] + uVar4)
    ;
    *(undefined8 *)(puVar12 + -4) = *(undefined8 *)(uVar9 + 0xa0);
    puVar12[-6] = 0x407e7d8c;
    puVar12[-5] = 1;
    uVar5 = FUN_140753b3a();
    uVar13 = (ulonglong)((int)(puVar12 + -4) + 8);
    *(undefined4 *)(uVar9 + 0xa0) = uVar5;
    uVar3 = *(uint *)(uVar13 + 4);
    *(uint *)(uVar13 + 4) = uVar3 & 0xffff;
    *(ulonglong *)(uVar13 - 8) = (ulonglong)(*(int *)(uVar13 + 8) + (uVar3 & 0xffff) + uVar4);
    *(undefined8 *)(uVar13 - 0x10) = *(undefined8 *)(uVar9 + 0xa4);
    *(undefined8 *)(uVar13 - 0x18) = 0x1407e7dba;
    uVar5 = FUN_140753b3a();
    puVar12 = (uint *)(ulonglong)((int)(uVar13 - 0x10) + 8);
    *(undefined4 *)(uVar9 + 0xa4) = uVar5;
    *(int *)(uVar9 + 0x84) = *(int *)(uVar9 + 0x84) + 1;
    *(int *)(uVar9 + 0x88) = *(int *)(uVar9 + 0x88) + (uVar6 + uVar2) * (uVar2 + uVar1);
    uVar1 = *(uint *)(uVar9 + 0x5c);
    if (uVar1 == *(uint *)(uVar9 + 0x60)) {
      iVar17 = *(int *)((longlong)puVar12 + 0x10);
      if (uVar1 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = (int)uVar1 / 2 + uVar1;
      }
      iVar16 = uVar1 + 1;
      if ((int)(uVar1 + 1) < iVar8) {
        iVar16 = iVar8;
      }
      *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)(uint)(iVar16 * 8);
      *(undefined8 *)((longlong)puVar12 + -0x10) = 0x1407e7eaf;
      uVar6 = FUN_1407520ca();
      puVar12 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar12 + -8) + 4);
      uVar15 = (ulonglong)uVar6;
      uVar1 = *(uint *)(uVar9 + 100);
      if (uVar1 != 0) {
        *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)(uint)(*(int *)(uVar9 + 0x5c) << 3);
        *(ulonglong *)((longlong)puVar12 + -0x10) = (ulonglong)uVar1;
        *(ulonglong *)((longlong)puVar12 + -0x18) = uVar15;
        *(undefined8 *)((longlong)puVar12 + -0x20) = 0x1407e7ec9;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar9 + 100);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc) - 0x10) =
             &UNK_1407e7ed4;
        FUN_14075219b();
      }
      *(uint *)(uVar9 + 100) = uVar6;
      *(int *)(uVar9 + 0x60) = iVar16;
      uVar1 = *(uint *)(uVar9 + 0x5c);
    }
    else {
      uVar15 = (ulonglong)*(uint *)(uVar9 + 100);
      iVar17 = *(int *)((longlong)puVar12 + 0x10);
    }
    iVar8 = puVar12[2];
    iVar16 = puVar12[5];
    *(uint *)(uVar15 + 4 + (ulonglong)uVar1 * 8) = puVar12[1] * 0x10000 + *puVar12;
    *(int *)(uVar15 + (ulonglong)uVar1 * 8) = iVar8 * 0x10000 + iVar16;
    *(int *)(uVar9 + 0x5c) = *(int *)(uVar9 + 0x5c) + 1;
    if (iVar17 == 0) {
      if (_DAT_150b70c38 == (puVar12[0xd] ^ (uint)puVar12)) {
        uVar7 = FUN_1407ea642(puVar12[3]);
        return uVar7;
      }
    }
    else if (_DAT_150b70c16 == (puVar12[0xd] ^ (uint)puVar12)) {
      uVar7 = FUN_1407ea60c(puVar12[3],iVar17);
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar12 + -8) = &UNK_1407e7f57;
  FUN_1408802b0(*(uint *)((longlong)puVar12 + 0x34) ^ (uint)puVar12);
}

