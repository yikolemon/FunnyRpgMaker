/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407dff9a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407dff9a(int *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  ulonglong uVar16;
  ulonglong uVar11;
  
  param_1[10] = 0;
  if (*(int *)(((ulonglong)(uint)param_1[2] - 0x18) + (ulonglong)(uint)(*param_1 * 0x40)) == 0) {
    *(int *)((ulonglong)(uint)(param_1[2] + *param_1 * 0x40) - 0x20) = param_1[0x1a];
    return;
  }
  puVar14 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x40);
  piVar15 = (int *)((ulonglong)param_1 & 0xffffffff);
  uVar7 = *(undefined8 *)(param_1 + 0x14);
  *(undefined8 *)(puVar14 + 0x10) = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(puVar14 + 0x18) = uVar7;
  iVar10 = param_1[0x17];
  iVar12 = param_1[0x18];
  iVar13 = param_1[0x19];
  *(int *)(puVar14 + 0x20) = param_1[0x16];
  *(int *)(puVar14 + 0x24) = iVar10;
  *(int *)(puVar14 + 0x28) = iVar12;
  *(int *)(puVar14 + 0x2c) = iVar13;
  iVar12 = param_1[0x1a];
  iVar10 = *piVar15;
  iVar13 = piVar15[3];
  if (iVar10 == piVar15[1]) {
    *(int *)(puVar14 + 0xc) = iVar12;
    *(int *)(puVar14 + 8) = iVar13;
    if (iVar10 == 0) {
      iVar12 = 8;
    }
    else {
      iVar12 = iVar10 / 2 + iVar10;
    }
    iVar13 = iVar10 + 1;
    if (iVar10 + 1 < iVar12) {
      iVar13 = iVar12;
    }
    *(ulonglong *)(puVar14 + -8) = (ulonglong)(uint)(iVar13 << 6);
    *(undefined8 *)(puVar14 + -0x10) = 0x1407dfcb2;
    uVar9 = FUN_1407520ca();
    puVar14 = (undefined1 *)(ulonglong)((int)(puVar14 + -8) + 4);
    uVar16 = (ulonglong)uVar9;
    uVar3 = piVar15[2];
    if (uVar3 != 0) {
      *(ulonglong *)(puVar14 + -8) = (ulonglong)(uint)(*piVar15 << 6);
      *(ulonglong *)(puVar14 + -0x10) = (ulonglong)uVar3;
      *(ulonglong *)(puVar14 + -0x18) = uVar16;
      *(undefined8 *)(puVar14 + -0x20) = 0x1407dfccb;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar14 + -0x18) + 0xc) - 8) = *(undefined8 *)(piVar15 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar14 + -0x18) + 0xc) - 0x10) = &UNK_1407dfcd6;
      FUN_14075219b();
    }
    piVar15[2] = uVar9;
    piVar15[1] = iVar13;
    iVar10 = *piVar15;
    iVar12 = *(int *)(puVar14 + 0xc);
    iVar13 = *(int *)(puVar14 + 8);
  }
  else {
    uVar16 = (ulonglong)(uint)piVar15[2];
  }
  uVar11 = (ulonglong)(uint)(iVar10 << 6);
  uVar7 = *(undefined8 *)(puVar14 + 0x10);
  uVar8 = *(undefined8 *)(puVar14 + 0x18);
  uVar4 = *(undefined4 *)(puVar14 + 0x24);
  uVar5 = *(undefined4 *)(puVar14 + 0x28);
  uVar6 = *(undefined4 *)(puVar14 + 0x2c);
  puVar1 = (undefined4 *)(uVar16 + 0x10 + uVar11);
  *puVar1 = *(undefined4 *)(puVar14 + 0x20);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(uVar16 + uVar11) = uVar7;
  ((undefined8 *)(uVar16 + uVar11))[1] = uVar8;
  *(int *)(uVar16 + 0x20 + uVar11) = iVar12;
  *(int *)(uVar16 + 0x24 + uVar11) = iVar13;
  puVar2 = (undefined8 *)(uVar16 + 0x28 + uVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(uVar16 + 0x38 + uVar11) = 0;
  *piVar15 = *piVar15 + 1;
  if (_DAT_150b68a26 == (*(uint *)(puVar14 + 0x38) ^ (uint)&stack0xfffffffffffffff8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + -8) = &UNK_1407dfd3d;
  FUN_1408802b0(*(uint *)(puVar14 + 0x38) ^ (uint)&stack0xfffffffffffffff8);
}

