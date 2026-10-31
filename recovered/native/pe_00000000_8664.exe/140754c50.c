/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754c50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140754c50(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar5 = _DAT_150af23b8;
  puVar12 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  iVar9 = puVar12[10];
  uVar15 = (ulonglong)_DAT_150af23b8;
  uVar13 = iVar9 * 0x10;
  puVar8 = (undefined4 *)(uVar15 + 0xe00 + (ulonglong)uVar13);
  uVar2 = puVar8[1];
  uVar3 = puVar8[2];
  uVar4 = puVar8[3];
  *puVar12 = *puVar8;
  puVar12[1] = uVar2;
  puVar12[2] = uVar3;
  puVar12[3] = uVar4;
  iVar7 = *(int *)(uVar15 + 0x1f74);
  if (iVar7 == *(int *)(uVar15 + 0x1f78)) {
    if (iVar7 == 0) {
      iVar9 = 8;
    }
    else {
      iVar9 = iVar7 / 2 + iVar7;
    }
    iVar11 = iVar7 + 1;
    if (iVar7 + 1 < iVar9) {
      iVar11 = iVar9;
    }
    *(ulonglong *)(puVar12 + -2) = (ulonglong)(uint)(iVar11 * 0x14);
    *(undefined8 *)(puVar12 + -4) = 0x140754cc1;
    uVar6 = FUN_1407520ca();
    puVar12 = (undefined4 *)(ulonglong)((int)(puVar12 + -2) + 4);
    uVar14 = (ulonglong)uVar6;
    uVar1 = *(uint *)(uVar15 + 0x1f7c);
    if (uVar1 != 0) {
      *(ulonglong *)((longlong)puVar12 + -8) = (ulonglong)(uint)(*(int *)(uVar15 + 0x1f74) * 0x14);
      *(ulonglong *)((longlong)puVar12 + -0x10) = (ulonglong)uVar1;
      *(ulonglong *)((longlong)puVar12 + -0x18) = uVar14;
      *(undefined8 *)((longlong)puVar12 + -0x20) = 0x140754ce4;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar15 + 0x1f7c);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar12 + -0x18) + 0xc) - 0x10) =
           &UNK_140754cf2;
      FUN_14075219b();
    }
    *(uint *)(uVar15 + 0x1f7c) = uVar6;
    *(int *)(uVar15 + 0x1f78) = iVar11;
    iVar7 = *(int *)(uVar15 + 0x1f74);
    iVar9 = *(int *)((longlong)puVar12 + 0x28);
  }
  else {
    uVar14 = (ulonglong)*(uint *)(uVar15 + 0x1f7c);
  }
  *(int *)(uVar14 + (ulonglong)(uint)(iVar7 * 5) * 4) = iVar9;
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar4 = puVar12[3];
  puVar8 = (undefined4 *)(uVar14 + 4 + (ulonglong)(uint)(iVar7 * 5) * 4);
  *puVar8 = *puVar12;
  puVar8[1] = uVar2;
  puVar8[2] = uVar3;
  puVar8[3] = uVar4;
  *(int *)(uVar15 + 0x1f74) = *(int *)(uVar15 + 0x1f74) + 1;
  if (*(int *)(uVar15 + 0x1f70) != iVar9) {
    puVar8 = (undefined4 *)(ulonglong)(uint)puVar12[0xb];
    puVar10 = (undefined4 *)(ulonglong)(uVar5 + uVar13 + 0xe00);
    uVar2 = puVar8[1];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    *puVar10 = *puVar8;
    puVar10[1] = uVar2;
    puVar10[2] = uVar3;
    puVar10[3] = uVar4;
  }
  if (_DAT_150adda47 == (puVar12[4] ^ (uint)puVar12)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar12 + -2) = FUN_140754d5e;
  FUN_1408802b0(puVar12[4] ^ (uint)puVar12);
}

