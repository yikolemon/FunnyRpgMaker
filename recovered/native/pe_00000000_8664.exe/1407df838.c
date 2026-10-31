/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407df838 */

void FUN_1407df838(ulonglong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint *puVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  longlong unaff_R12;
  ulonglong *unaff_R13;
  ulonglong unaff_R15;
  
  if (*(int *)(param_1 + 4) < 2) {
    return;
  }
  puVar14 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x14);
  uVar8 = param_1 & 0xffffffff;
  piVar17 = (int *)(ulonglong)(uint)puVar14[10];
  *(undefined8 *)(puVar14 + -2) = 0;
  puVar15 = puVar14 + -4;
  *(int **)(puVar14 + -4) = piVar17;
  *(undefined8 *)(puVar14 + -6) = 0x1407df857;
  FUN_1407e5d3c();
  *(undefined8 *)(puVar14 + -6) = 0x1407df85e;
  FUN_1407dfd3e();
  iVar4 = *(int *)(uVar8 + 4);
  *puVar14 = (int)param_1;
  if (iVar4 < 1) {
    uVar10 = 0;
    uVar6 = 0;
    goto LAB_1407df9a6;
  }
  uVar10 = 0;
  if (*piVar17 < 1) {
LAB_1407df88d:
    puVar14[-4] = 0;
    iVar13 = 0;
  }
  else {
    uVar6 = *piVar17 * 0x40 + piVar17[2];
    puVar14[-4] = uVar6 - 0x40;
    if (uVar6 - 0x40 == 0) goto LAB_1407df88d;
    iVar13 = *(int *)((ulonglong)uVar6 - 0x18) + *(int *)((ulonglong)uVar6 - 0x1c);
  }
  puVar15 = puVar14 + -4;
  uVar6 = 0;
  if (iVar4 != 1) {
    uVar10 = 0;
    puVar15 = puVar14 + -4;
    do {
      puVar15[2] = param_4;
      puVar16 = (uint *)(ulonglong)*(uint *)(uVar8 + 0x10);
      uVar6 = *puVar16;
      uVar8 = (ulonglong)uVar6;
      if ((int)uVar6 < 1) {
LAB_1407df988:
        uVar6 = puVar16[3];
      }
      else {
        if ((*(int *)(((ulonglong)puVar16[2] - 0x18) + (ulonglong)(uVar6 * 0x40)) == 0) &&
           (*(int *)((ulonglong)(puVar16[2] + uVar6 * 0x40) - 0x14) == 0)) {
          *unaff_R13 = unaff_R15;
        }
        uVar19 = *puVar15;
        puVar15[1] = uVar10;
        if ((uVar6 == 0) || (uVar19 == 0)) {
LAB_1407df94b:
          if ((int)uVar8 < 1) goto LAB_1407df988;
        }
        else {
          uVar10 = puVar16[2];
          puVar15[-2] = 0x24;
          puVar15[-1] = 0;
          puVar15[2] = uVar10;
          *(ulonglong *)(puVar15 + -4) = (ulonglong)uVar10;
          *(ulonglong *)(puVar15 + -6) = (ulonglong)uVar19;
          puVar15[-3] = uVar19;
          puVar15[-8] = 0x407df901;
          puVar15[-7] = 1;
          iVar4 = FUN_1408b14b0();
          puVar15 = (uint *)(ulonglong)((int)(puVar15 + -6) + 0xc);
          if (iVar4 == 0) {
            uVar10 = puVar15[3];
            if ((*(int *)((ulonglong)*puVar15 + 0x2c) == 0) &&
               (*(int *)((ulonglong)uVar10 + 0x2c) == 0)) {
              piVar17 = (int *)((ulonglong)*puVar15 + 0x28);
              *piVar17 = *piVar17 + *(int *)((ulonglong)uVar10 + 0x28);
              iVar13 = iVar13 + *(int *)((ulonglong)uVar10 + 0x28);
              uVar10 = puVar16[2];
              *(ulonglong *)(puVar15 + -2) = (ulonglong)(*puVar16 * 0x40 - 0x40);
              *(ulonglong *)(puVar15 + -4) = (ulonglong)(uVar10 + 0x40);
              *(ulonglong *)(puVar15 + -6) = (ulonglong)uVar10;
              puVar15[-8] = 0x407df93d;
              puVar15[-7] = 1;
              FUN_1408b31a0();
              uVar10 = puVar15[-2];
              puVar15 = (uint *)(ulonglong)((int)(puVar15 + -6) + 0xc);
              uVar8 = (ulonglong)*puVar16;
              *unaff_R13 = unaff_R15;
              goto LAB_1407df94b;
            }
          }
        }
        uVar10 = puVar16[2];
        uVar7 = (ulonglong)uVar10;
        puVar15[3] = puVar16[3];
        *puVar15 = (int)uVar8 * 0x40 + uVar10 + -0x40;
        uVar12 = 0;
        do {
          *(int *)(uVar7 + 0x24 + uVar12) = iVar13;
          uVar7 = (ulonglong)puVar16[2];
          iVar13 = iVar13 + *(int *)(uVar7 + 0x28 + uVar12);
          uVar12 = (ulonglong)((int)uVar12 + 0x40);
        } while (0 < (int)*puVar16);
        uVar10 = puVar15[1];
        uVar6 = puVar15[3];
      }
      uVar10 = uVar10 + uVar6;
      param_4 = *(int *)((longlong)puVar15 + 8) + (int)uVar8;
      unaff_R15 = (ulonglong)*(uint *)((longlong)puVar15 + unaff_R12 + 0x10);
      uVar6 = param_4;
    } while (0 < *(int *)(uVar8 + 4));
  }
LAB_1407df9a6:
  piVar17 = (int *)(ulonglong)*(uint *)((longlong)puVar15 + 0x28);
  iVar13 = *piVar17 + uVar6;
  iVar4 = piVar17[1];
  *(uint *)((longlong)puVar15 + 8) = uVar6;
  if (iVar4 < iVar13) {
    *(uint *)((longlong)puVar15 + 4) = uVar10;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar4 <= iVar13) {
      iVar4 = iVar13;
    }
    *(ulonglong *)((longlong)puVar15 + -8) = (ulonglong)(uint)(iVar4 << 6);
    *(undefined8 *)((longlong)puVar15 + -0x10) = 0x1407df9e6;
    uVar6 = FUN_1407520ca();
    puVar15 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -8) + 4);
    uVar10 = piVar17[2];
    if (uVar10 != 0) {
      *(ulonglong *)((longlong)puVar15 + -8) = (ulonglong)(uint)(*piVar17 << 6);
      *(ulonglong *)((longlong)puVar15 + -0x10) = (ulonglong)uVar10;
      *(ulonglong *)((longlong)puVar15 + -0x18) = (ulonglong)uVar6;
      *(undefined8 *)((longlong)puVar15 + -0x20) = 0x1407dfa00;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar17 + 2);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x18) + 0xc) - 0x10) =
           &UNK_1407dfa0b;
      FUN_14075219b();
    }
    piVar17[2] = uVar6;
    piVar17[1] = iVar4;
    uVar10 = *(uint *)((longlong)puVar15 + 4);
    uVar6 = *(uint *)((longlong)puVar15 + 8);
  }
  *piVar17 = iVar13;
  iVar4 = piVar17[3];
  iVar18 = piVar17[4];
  iVar11 = uVar10 + iVar4;
  if (iVar18 < iVar11) {
    if (iVar18 == 0) {
      iVar18 = 8;
    }
    else {
      iVar18 = iVar18 / 2 + iVar18;
    }
    *(int *)((longlong)puVar15 + 4) = iVar11;
    if (iVar18 <= iVar11) {
      iVar18 = iVar11;
    }
    *(ulonglong *)((longlong)puVar15 + -8) = (ulonglong)(uint)(iVar18 * 2);
    *(undefined8 *)((longlong)puVar15 + -0x10) = 0x1407dfa5c;
    uVar10 = FUN_1407520ca();
    puVar15 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -8) + 4);
    uVar6 = piVar17[5];
    if (uVar6 != 0) {
      *(ulonglong *)((longlong)puVar15 + -8) = (ulonglong)(uint)(piVar17[3] * 2);
      *(ulonglong *)((longlong)puVar15 + -0x10) = (ulonglong)uVar6;
      *(ulonglong *)((longlong)puVar15 + -0x18) = (ulonglong)uVar10;
      *(undefined8 *)((longlong)puVar15 + -0x20) = 0x1407dfa75;
      FUN_1408b31a0();
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x18) + 0xc) - 8) =
           *(undefined8 *)(piVar17 + 5);
                    /* WARNING: Subroutine does not return */
      *(undefined **)((ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x18) + 0xc) - 0x10) =
           &UNK_1407dfa80;
      FUN_14075219b();
    }
    piVar17[5] = uVar10;
    piVar17[4] = iVar18;
    iVar13 = *piVar17;
    iVar11 = *(int *)((longlong)puVar15 + 4);
    uVar6 = *(uint *)((longlong)puVar15 + 8);
  }
  else {
    uVar10 = piVar17[5];
  }
  piVar17[3] = iVar11;
  iVar4 = uVar10 + iVar4 * 2;
  uVar8 = (ulonglong)puVar15[4];
  if (1 < *(int *)(uVar8 + 4)) {
    *puVar15 = iVar4;
    puVar15[2] = iVar13 * 0x40 + piVar17[2] + uVar6 * -0x40;
    do {
      uVar10 = *(uint *)(uVar8 + 0x10);
      uVar8 = (ulonglong)uVar10;
      iVar4 = *(int *)((uVar8 - 0x14) + (longlong)piVar17);
      if (iVar4 != 0) {
        uVar19 = iVar4 * 0x40;
        *(ulonglong *)(puVar15 + -2) = (ulonglong)uVar19;
        *(undefined8 *)(puVar15 + -4) = *(undefined8 *)((uVar8 - 0xc) + (longlong)piVar17);
        uVar6 = *puVar15;
        *(ulonglong *)(puVar15 + -6) = (ulonglong)uVar6;
        puVar15[-2] = uVar10;
        puVar15[-8] = 0x407dfae3;
        puVar15[-7] = 1;
        FUN_1408b31a0();
        uVar8 = (ulonglong)puVar15[-2];
        puVar15 = (uint *)(ulonglong)((int)(puVar15 + -6) + 0xc);
        *(uint *)((longlong)puVar15 + 8) = uVar6 + uVar19;
      }
      iVar4 = *(int *)((uVar8 - 8) + (longlong)piVar17);
      if (iVar4 != 0) {
        *(ulonglong *)((longlong)puVar15 + -8) = (ulonglong)(uint)(iVar4 * 2);
        *(undefined8 *)((longlong)puVar15 + -0x10) = *(undefined8 *)(uVar8 + (longlong)piVar17);
        uVar10 = *(uint *)((longlong)puVar15 + -8);
        *(ulonglong *)((longlong)puVar15 + -0x18) = (ulonglong)uVar10;
        *(undefined8 *)((longlong)puVar15 + -0x20) = 0x1407dfb09;
        FUN_1408b31a0();
        puVar15 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x18) + 0xc);
        *puVar15 = uVar10 + iVar4 * 2;
      }
      uVar8 = (ulonglong)puVar15[4];
    } while (0 < *(int *)(uVar8 + 4));
    piVar17 = (int *)(ulonglong)puVar15[10];
    iVar13 = *piVar17;
    iVar4 = *puVar15;
  }
  piVar17[0xd] = iVar4;
  if ((iVar13 == 0) ||
     (uVar10 = piVar17[2],
     *(int *)(((ulonglong)uVar10 - 0x14) + (ulonglong)(uint)(iVar13 << 6)) != 0)) {
    *(undefined8 *)((longlong)puVar15 + -8) = 0x1407dfb4a;
    FUN_1407dfc44(piVar17);
    iVar13 = *piVar17;
    uVar10 = piVar17[2];
  }
  puVar5 = (undefined8 *)(ulonglong)((uVar10 + iVar13 * 0x40) - 0x40);
  puVar9 = (undefined8 *)(ulonglong)((int)piVar17 + 0x48);
  if (*(int *)(puVar5 + 5) == 0) {
    *(undefined4 *)(puVar5 + 4) = *(undefined4 *)(puVar9 + 4);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    uVar3 = puVar9[3];
    puVar5[2] = puVar9[2];
    puVar5[3] = uVar3;
    *puVar5 = uVar1;
    puVar5[1] = uVar2;
  }
  else {
    *(undefined8 *)((longlong)puVar15 + -8) = 0x24;
    *(undefined8 **)((longlong)puVar15 + -0x10) = puVar9;
    *(undefined8 **)((longlong)puVar15 + -0x18) = puVar5;
    *(undefined8 *)((longlong)puVar15 + -0x20) = 0x1407dfb6a;
    iVar4 = FUN_1408b14b0();
    if (iVar4 != 0) {
      *(undefined8 *)((ulonglong)((int)(undefined1 *)((longlong)puVar15 + -0x18) + 0xc) - 8) =
           0x1407dfb78;
      FUN_1407dfc44(piVar17);
    }
  }
  *(undefined4 *)(uVar8 + 4) = 1;
  return;
}

