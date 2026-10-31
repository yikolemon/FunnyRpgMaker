/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407dfc44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407dfc44(ulonglong param_1)

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
  undefined4 uVar13;
  int iVar14;
  undefined1 *puVar15;
  int *piVar16;
  ulonglong uVar17;
  ulonglong uVar11;
  
  puVar15 = (undefined1 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x40);
  piVar16 = (int *)(param_1 & 0xffffffff);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(puVar15 + 0x18) = uVar7;
  uVar13 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  uVar5 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(puVar15 + 0x20) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(puVar15 + 0x24) = uVar13;
  *(undefined4 *)(puVar15 + 0x28) = uVar4;
  *(undefined4 *)(puVar15 + 0x2c) = uVar5;
  uVar13 = *(undefined4 *)(param_1 + 0x68);
  iVar10 = *piVar16;
  iVar12 = piVar16[3];
  if (iVar10 == piVar16[1]) {
    *(undefined4 *)(puVar15 + 0xc) = uVar13;
    *(int *)(puVar15 + 8) = iVar12;
    if (iVar10 == 0) {
      iVar12 = 8;
    }
    else {
      iVar12 = iVar10 / 2 + iVar10;
    }
    iVar14 = iVar10 + 1;
    if (iVar10 + 1 < iVar12) {
      iVar14 = iVar12;
    }
    *(ulonglong *)(puVar15 + -8) = (ulonglong)(uint)(iVar14 << 6);
    *(undefined8 *)(puVar15 + -0x10) = 0x1407dfcb2;
    uVar9 = FUN_1407520ca();
    puVar15 = (undefined1 *)(ulonglong)((int)(puVar15 + -8) + 4);
    uVar17 = (ulonglong)uVar9;
    uVar3 = piVar16[2];
    if (uVar3 != 0) {
      *(ulonglong *)(puVar15 + -8) = (ulonglong)(uint)(*piVar16 << 6);
      *(ulonglong *)(puVar15 + -0x10) = (ulonglong)uVar3;
      *(ulonglong *)(puVar15 + -0x18) = uVar17;
      *(undefined8 *)(puVar15 + -0x20) = 0x1407dfccb;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(puVar15 + -0x18) + 0xc) - 8) = *(undefined8 *)(piVar16 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(puVar15 + -0x18) + 0xc) - 0x10) = &UNK_1407dfcd6;
      FUN_14075219b();
    }
    piVar16[2] = uVar9;
    piVar16[1] = iVar14;
    iVar10 = *piVar16;
    uVar13 = *(undefined4 *)(puVar15 + 0xc);
    iVar12 = *(int *)(puVar15 + 8);
  }
  else {
    uVar17 = (ulonglong)(uint)piVar16[2];
  }
  uVar11 = (ulonglong)(uint)(iVar10 << 6);
  uVar7 = *(undefined8 *)(puVar15 + 0x10);
  uVar8 = *(undefined8 *)(puVar15 + 0x18);
  uVar4 = *(undefined4 *)(puVar15 + 0x24);
  uVar5 = *(undefined4 *)(puVar15 + 0x28);
  uVar6 = *(undefined4 *)(puVar15 + 0x2c);
  puVar1 = (undefined4 *)(uVar17 + 0x10 + uVar11);
  *puVar1 = *(undefined4 *)(puVar15 + 0x20);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(uVar17 + uVar11) = uVar7;
  ((undefined8 *)(uVar17 + uVar11))[1] = uVar8;
  *(undefined4 *)(uVar17 + 0x20 + uVar11) = uVar13;
  *(int *)(uVar17 + 0x24 + uVar11) = iVar12;
  puVar2 = (undefined8 *)(uVar17 + 0x28 + uVar11);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(uVar17 + 0x38 + uVar11) = 0;
  *piVar16 = *piVar16 + 1;
  if (_DAT_150b68a26 == (*(uint *)(puVar15 + 0x38) ^ (uint)&stack0xfffffffffffffff8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar15 + -8) = &UNK_1407dfd3d;
  FUN_1408802b0(*(uint *)(puVar15 + 0x38) ^ (uint)&stack0xfffffffffffffff8);
}

