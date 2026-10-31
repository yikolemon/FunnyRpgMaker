/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754b35 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140754b35(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  int iVar15;
  
  uVar5 = _DAT_150af229d;
  puVar10 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x24);
  iVar8 = *(int *)((longlong)puVar10 + 0x38);
  uVar9 = (ulonglong)_DAT_150af229d;
  uVar12 = iVar8 * 0x10;
  puVar11 = (undefined4 *)(uVar9 + 0xe00 + (ulonglong)uVar12);
  uVar2 = puVar11[1];
  uVar3 = puVar11[2];
  uVar4 = puVar11[3];
  *(undefined4 *)((longlong)puVar10 + 0x10) = *puVar11;
  *(undefined4 *)((longlong)puVar10 + 0x14) = uVar2;
  *(undefined4 *)((longlong)puVar10 + 0x18) = uVar3;
  *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar4;
  iVar7 = *(int *)(uVar9 + 0x1f74);
  if (iVar7 == *(int *)(uVar9 + 0x1f78)) {
    if (iVar7 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar7 / 2 + iVar7;
    }
    iVar15 = iVar7 + 1;
    if (iVar7 + 1 < iVar8) {
      iVar15 = iVar8;
    }
    *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uint)(iVar15 * 0x14);
    *(undefined8 *)((longlong)puVar10 + -0x10) = 0x140754ba7;
    uVar6 = FUN_1407520ca();
    puVar10 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar10 + -8) + 4);
    uVar13 = (ulonglong)uVar6;
    uVar1 = *(uint *)(uVar9 + 0x1f7c);
    if (uVar1 != 0) {
      *(ulonglong *)((longlong)puVar10 + -8) = (ulonglong)(uint)(*(int *)(uVar9 + 0x1f74) * 0x14);
      *(ulonglong *)((longlong)puVar10 + -0x10) = (ulonglong)uVar1;
      *(ulonglong *)((longlong)puVar10 + -0x18) = uVar13;
      *(undefined8 *)((longlong)puVar10 + -0x20) = 0x140754bca;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(uVar9 + 0x1f7c);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar10 + -0x18) + 0xc) - 0x10) =
           &UNK_140754bd8;
      FUN_14075219b();
    }
    *(uint *)(uVar9 + 0x1f7c) = uVar6;
    *(int *)(uVar9 + 0x1f78) = iVar15;
    iVar7 = *(int *)(uVar9 + 0x1f74);
    iVar8 = *(int *)((longlong)puVar10 + 0x38);
  }
  else {
    uVar13 = (ulonglong)*(uint *)(uVar9 + 0x1f7c);
  }
  *(int *)(uVar13 + (ulonglong)(uint)(iVar7 * 5) * 4) = iVar8;
  uVar2 = puVar10[5];
  uVar3 = puVar10[6];
  uVar4 = puVar10[7];
  puVar11 = (undefined4 *)(uVar13 + 4 + (ulonglong)(uint)(iVar7 * 5) * 4);
  *puVar11 = puVar10[4];
  puVar11[1] = uVar2;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
  *(int *)(uVar9 + 0x1f74) = *(int *)(uVar9 + 0x1f74) + 1;
  puVar11 = puVar10;
  if (*(int *)(uVar9 + 0x1f70) != iVar8) {
    puVar14 = (undefined4 *)(ulonglong)(uVar5 + uVar12 + 0xe00);
    *(undefined8 *)(puVar10 + -2) = *(undefined8 *)(puVar10 + 0xf);
    *(undefined4 **)(puVar10 + -4) = puVar10;
    *(undefined8 *)(puVar10 + -6) = 0x140754c24;
    FUN_140752bbd();
    puVar11 = (undefined4 *)(ulonglong)((int)(puVar10 + -4) + 8);
    uVar2 = puVar10[1];
    uVar3 = puVar10[2];
    uVar4 = puVar10[3];
    *puVar14 = *puVar10;
    puVar14[1] = uVar2;
    puVar14[2] = uVar3;
    puVar14[3] = uVar4;
  }
  if (_DAT_150add939 == (*(uint *)((longlong)puVar11 + 0x20) ^ (uint)puVar11)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar11 + -8) = FUN_140754c50;
  FUN_1408802b0(*(uint *)((longlong)puVar11 + 0x20) ^ (uint)puVar11);
}

