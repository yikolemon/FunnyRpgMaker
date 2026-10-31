/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407df542 */

void FUN_1407df542(ulonglong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piStack_20;
  ulonglong uVar5;
  
  ppiVar8 = (int **)&stack0xffffffffffffffe8;
  piVar11 = (int *)(param_1 & 0xffffffff);
  if (1 < *(int *)(param_1 + 0x74)) {
    ppiVar8 = &piStack_20;
    piStack_20 = piVar11;
    FUN_1407df838((int)param_1 + 0x70);
  }
  if (piVar11[1] < 0) {
    *(undefined8 *)((longlong)ppiVar8 + -8) = 0;
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df563;
    uVar3 = FUN_1407520ca();
    ppiVar8 = (int **)(ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar2 = piVar11[2];
    if (uVar2 != 0) {
      *(ulonglong *)((longlong)ppiVar8 + -8) = (ulonglong)(uint)(*piVar11 << 6);
      *(ulonglong *)((longlong)ppiVar8 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)ppiVar8 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)ppiVar8 + -0x20) = 0x1407df57c;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar11 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 0x10) =
           &UNK_1407df587;
      FUN_14075219b();
    }
    piVar11[2] = uVar3;
    piVar11[1] = 0;
  }
  *piVar11 = 0;
  if (piVar11[4] < 0) {
    *(undefined8 *)((longlong)ppiVar8 + -8) = 0;
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df5a7;
    uVar3 = FUN_1407520ca();
    ppiVar8 = (int **)(ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar2 = piVar11[5];
    if (uVar2 != 0) {
      *(ulonglong *)((longlong)ppiVar8 + -8) = (ulonglong)(uint)(piVar11[3] * 2);
      *(ulonglong *)((longlong)ppiVar8 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)ppiVar8 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)ppiVar8 + -0x20) = 0x1407df5c0;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar11 + 5);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 0x10) =
           &UNK_1407df5cb;
      FUN_14075219b();
    }
    piVar11[5] = uVar3;
    piVar11[4] = 0;
  }
  piVar11[3] = 0;
  if (piVar11[7] < 0) {
    *(undefined8 *)((longlong)ppiVar8 + -8) = 0;
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df5ec;
    uVar3 = FUN_1407520ca();
    ppiVar8 = (int **)(ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar2 = piVar11[8];
    if (uVar2 != 0) {
      *(ulonglong *)((longlong)ppiVar8 + -8) = (ulonglong)(uint)(piVar11[6] * 0x14);
      *(ulonglong *)((longlong)ppiVar8 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)ppiVar8 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)ppiVar8 + -0x20) = 0x1407df609;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar11 + 8);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 0x10) =
           &UNK_1407df614;
      FUN_14075219b();
    }
    piVar11[8] = uVar3;
    piVar11[7] = 0;
  }
  piVar11[6] = 0;
  piVar11[9] = *(int *)((ulonglong)(uint)piVar11[0xb] + 0x28);
  piVar11[0x12] = 0;
  piVar11[0x13] = 0;
  piVar11[0x14] = 0;
  piVar11[0x15] = 0;
  piVar11[0x16] = 0;
  piVar11[0x17] = 0;
  piVar11[0x18] = 0;
  piVar11[0x19] = 0;
  piVar11[0x1a] = 0;
  piVar11[0x1b] = 0;
  piVar11[10] = 0;
  piVar11[0xc] = 0;
  piVar11[0xd] = 0;
  if (piVar11[0x22] < 0) {
    *(undefined8 *)((longlong)ppiVar8 + -8) = 0;
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df65a;
    uVar3 = FUN_1407520ca();
    ppiVar8 = (int **)(ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar2 = piVar11[0x23];
    if (uVar2 != 0) {
      *(ulonglong *)((longlong)ppiVar8 + -8) = (ulonglong)(uint)(piVar11[0x21] << 4);
      *(ulonglong *)((longlong)ppiVar8 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)ppiVar8 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)ppiVar8 + -0x20) = 0x1407df67a;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar11 + 0x23);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 0x10) =
           &UNK_1407df688;
      FUN_14075219b();
    }
    piVar11[0x23] = uVar3;
    piVar11[0x22] = 0;
  }
  piVar11[0x21] = 0;
  if (piVar11[0x25] < 0) {
    *(undefined8 *)((longlong)ppiVar8 + -8) = 0;
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df6b5;
    uVar3 = FUN_1407520ca();
    ppiVar8 = (int **)(ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar2 = piVar11[0x26];
    if (uVar2 != 0) {
      *(ulonglong *)((longlong)ppiVar8 + -8) = (ulonglong)(uint)(piVar11[0x24] << 4);
      *(ulonglong *)((longlong)ppiVar8 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)ppiVar8 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)ppiVar8 + -0x20) = 0x1407df6d5;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar11 + 0x26);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 0x10) =
           &UNK_1407df6e3;
      FUN_14075219b();
    }
    piVar11[0x26] = uVar3;
    piVar11[0x25] = 0;
  }
  piVar11[0x24] = 0;
  if (piVar11[0x28] < 0) {
    *(undefined8 *)((longlong)ppiVar8 + -8) = 0;
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df710;
    uVar3 = FUN_1407520ca();
    ppiVar8 = (int **)(ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar2 = piVar11[0x29];
    if (uVar2 != 0) {
      *(undefined8 *)((longlong)ppiVar8 + -8) = *(undefined8 *)(piVar11 + 0x27);
      *(ulonglong *)((longlong)ppiVar8 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)ppiVar8 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)ppiVar8 + -0x20) = 0x1407df72c;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar11 + 0x29);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 0x10) =
           &UNK_1407df73a;
      FUN_14075219b();
    }
    piVar11[0x29] = uVar3;
    piVar11[0x28] = 0;
  }
  piVar11[0x27] = 0;
  if (piVar11[0xf] < 0) {
    *(undefined8 *)((longlong)ppiVar8 + -8) = 0;
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df764;
    uVar3 = FUN_1407520ca();
    ppiVar8 = (int **)(ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar2 = piVar11[0x10];
    if (uVar2 != 0) {
      *(ulonglong *)((longlong)ppiVar8 + -8) = (ulonglong)(uint)(piVar11[0xe] << 3);
      *(ulonglong *)((longlong)ppiVar8 + -0x10) = (ulonglong)uVar2;
      *(ulonglong *)((longlong)ppiVar8 + -0x18) = (ulonglong)uVar3;
      *(undefined8 *)((longlong)ppiVar8 + -0x20) = 0x1407df77e;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar11 + 0x10);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -0x18) + 0xc) - 0x10) =
           &UNK_1407df789;
      FUN_14075219b();
    }
    piVar11[0x10] = uVar3;
    piVar11[0xf] = 0;
  }
  piVar11[0xe] = 0;
  piVar11[0x1c] = 0;
  piVar11[0x1d] = 1;
  iVar4 = *piVar11;
  if (iVar4 == piVar11[1]) {
    if (iVar4 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar4 / 2 + iVar4;
    }
    iVar7 = iVar4 + 1;
    if (iVar4 + 1 < iVar6) {
      iVar7 = iVar6;
    }
    *(ulonglong *)((longlong)ppiVar8 + -8) = (ulonglong)(uint)(iVar7 << 6);
    *(undefined8 *)((longlong)ppiVar8 + -0x10) = 0x1407df7da;
    uVar3 = FUN_1407520ca();
    uVar9 = (ulonglong)((int)(undefined1 *)((longlong)ppiVar8 + -8) + 4);
    uVar12 = (ulonglong)uVar3;
    uVar2 = piVar11[2];
    if (uVar2 != 0) {
      *(ulonglong *)(uVar9 - 8) = (ulonglong)(uint)(*piVar11 << 6);
      *(ulonglong *)(uVar9 - 0x10) = (ulonglong)uVar2;
      *(ulonglong *)(uVar9 - 0x18) = uVar12;
      *(undefined8 *)(uVar9 - 0x20) = 0x1407df7f3;
      FUN_1408b31a0();
      uVar10 = (ulonglong)((int)(uVar9 - 0x18) + 0xc);
      *(undefined8 *)(uVar10 - 8) = *(undefined8 *)(piVar11 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(uVar10 - 0x10) = &UNK_1407df7fe;
      FUN_14075219b();
    }
    piVar11[2] = uVar3;
    piVar11[1] = iVar7;
    iVar4 = *piVar11;
  }
  else {
    uVar12 = (ulonglong)(uint)piVar11[2];
  }
  uVar5 = (ulonglong)(uint)(iVar4 << 6);
  puVar1 = (undefined8 *)(uVar12 + 0x30 + uVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(uVar12 + 0x20 + uVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(uVar12 + 0x10 + uVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(uVar12 + uVar5) = 0;
  ((undefined8 *)(uVar12 + uVar5))[1] = 0;
  *piVar11 = *piVar11 + 1;
  piVar11[0x2a] = *(int *)((ulonglong)(uint)piVar11[0xb] + 0x24);
  return;
}

