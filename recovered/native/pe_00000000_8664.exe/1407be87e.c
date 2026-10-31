/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407be87e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407be87e(undefined8 param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  int iVar19;
  longlong unaff_R12;
  undefined8 unaff_R14;
  int unaff_R15D;
  
  uVar6 = _DAT_150b5bfd7;
  puVar11 = (uint *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x20);
  uVar10 = (ulonglong)_DAT_150b5bfd7;
  uVar7 = *(uint *)(uVar10 + 0x2308);
  uVar9 = (ulonglong)uVar7;
  uVar8 = (ulonglong)*(uint *)(uVar9 + 0xc);
  iVar4 = *(int *)(uVar8 + 0x14);
  *puVar11 = *(uint *)(uVar9 + 0xc);
  puVar11[1] = uVar7;
  if (iVar4 < 0) {
    puVar11[-2] = 0;
    puVar11[-1] = 0;
    puVar11[-4] = 0x407be8a9;
    puVar11[-3] = 1;
    uVar3 = FUN_1407520ca();
    uVar8 = (ulonglong)puVar11[-1];
    puVar11 = (uint *)(ulonglong)((int)(puVar11 + -2) + 4);
    uVar7 = *(uint *)(uVar8 + 0x18);
    if (uVar7 != 0) {
      *(ulonglong *)(puVar11 + -2) = (ulonglong)(uint)(*(int *)((ulonglong)*puVar11 + 0x10) << 4);
      *(ulonglong *)(puVar11 + -4) = (ulonglong)uVar7;
      *(ulonglong *)(puVar11 + -6) = (ulonglong)uVar3;
      puVar11[-8] = 0x407be8ca;
      puVar11[-7] = 1;
      FUN_1408b31a0();
      puVar12 = (uint *)(ulonglong)((int)(puVar11 + -6) + 0xc);
      *(undefined8 *)(puVar12 + -2) = *(undefined8 *)((ulonglong)*puVar12 + 0x18);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar12 + -4) = &UNK_1407be8d8;
      FUN_14075219b();
    }
    *(uint *)(uVar8 + 0x18) = uVar3;
    *(undefined4 *)(uVar8 + 0x14) = 0;
    iVar4 = 0;
    uVar9 = (ulonglong)puVar11[1];
  }
  *(undefined4 *)(uVar8 + 0x10) = 0;
  iVar19 = (int)*(short *)(uVar9 + 0x1b6);
  if (iVar4 < iVar19) {
    *(ulonglong *)((longlong)puVar11 + -8) = (ulonglong)(uint)(iVar19 << 4);
    *(undefined8 *)((longlong)puVar11 + -0x10) = 0x1407be90c;
    uVar3 = FUN_1407520ca();
    puVar11 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar11 + -8) + 4);
    uVar8 = (ulonglong)*puVar11;
    uVar7 = *(uint *)(uVar8 + 0x18);
    if (uVar7 != 0) {
      *(ulonglong *)(puVar11 + -2) = (ulonglong)(uint)(*(int *)((ulonglong)*puVar11 + 0x10) << 4);
      *(ulonglong *)(puVar11 + -4) = (ulonglong)uVar7;
      *(ulonglong *)(puVar11 + -6) = (ulonglong)uVar3;
      puVar11[-8] = 0x407be92c;
      puVar11[-7] = 1;
      FUN_1408b31a0();
      puVar13 = (uint *)(ulonglong)((int)(puVar11 + -6) + 0xc);
      *(undefined8 *)(puVar13 + -2) = *(undefined8 *)((ulonglong)*puVar13 + 0x18);
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar13 + -4) = &UNK_1407be93a;
      FUN_14075219b();
    }
    *(uint *)(uVar8 + 0x18) = uVar3;
    *(int *)(uVar8 + 0x14) = iVar19;
  }
  *(undefined8 *)((longlong)puVar11 + -8) = 0x10332f28;
  *(undefined8 *)((longlong)puVar11 + -0x10) = 0x1407be951;
  iVar4 = FUN_14076b464();
  uVar14 = (ulonglong)((int)(undefined1 *)((longlong)puVar11 + -8) + 4);
  uVar8 = (ulonglong)*(uint *)(uVar14 + 4);
  if (*(short *)(uVar8 + 0x4c) == 0) {
    uVar7 = *(uint *)(uVar14 + 4) + 0x16c;
  }
  else {
    uVar7 = (*(int *)(uVar8 + 0x18c) + *(short *)(uVar8 + 0x4c) * 0x18) - 0x18;
  }
  sVar1 = *(short *)(uVar8 + 0x1cc);
  *(int *)(uVar14 + 8) = (int)sVar1;
  if ((sVar1 == -1) &&
     (sVar1 = *(short *)(uVar8 + 0x1c2), *(int *)(uVar14 + 8) = (int)sVar1, sVar1 == -1)) {
    sVar1 = *(short *)(uVar8 + 0x1be);
    *(undefined8 *)(uVar14 + 8 + unaff_R12) = unaff_R14;
    if ((sVar1 == -1) ||
       ((*(int *)((ulonglong)uVar7 + 0x10) != 0 ||
        (*(short *)((ulonglong)*(uint *)(uVar14 + 4) + 0x1c0) != -1)))) {
      uVar8 = (ulonglong)*(uint *)(uVar14 + 4);
    }
    else {
      uVar8 = (ulonglong)*(uint *)(uVar14 + 4);
      if ((((*(int *)(uVar10 + 0x1528) == 0) || (*(int *)(uVar10 + 0x1528) == iVar4)) ||
          (*(char *)(uVar8 + 0x1fc) != '\0')) || (*(char *)(uVar10 + 0x2250) == '\x01')) {
        *(int *)(uVar14 + 8) = (int)sVar1;
      }
    }
  }
  *(int *)(uVar14 + 0xc) = iVar4;
  *(uint *)(uVar14 + 0x10) = uVar6;
  *(undefined8 *)(uVar14 - 8) = 0x3f800000;
  *(undefined8 *)(uVar14 - 0x10) = 0x30;
  *(undefined8 *)(uVar14 - 0x18) = 0x1407be9db;
  uVar5 = FUN_140754a09();
  uVar15 = (ulonglong)((int)(uVar14 - 0x10) + 8);
  *(undefined4 *)(uVar15 + 0x1c) = uVar5;
  *(undefined8 *)(uVar15 - 8) = 0x3f800000;
  *(undefined8 *)(uVar15 - 0x10) = 0;
  *(undefined8 *)(uVar15 - 0x18) = 0x1407be9ea;
  uVar5 = FUN_140754a09();
  puVar16 = (uint *)(ulonglong)((int)(uVar15 - 0x10) + 8);
  *(undefined4 *)((longlong)puVar16 + 0x18) = uVar5;
  if (0 < *(int *)(uVar8 + 0x40)) {
    do {
      if ((*(uint *)(ulonglong)*(uint *)(uVar8 + 0x28) & 1) != 0) {
        sVar1 = *(short *)(ulonglong)*(uint *)(uVar8 + 0x18);
        if ((*(byte *)((ulonglong)*(uint *)(uVar8 + 0x10) + 2 + (ulonglong)(uint)(sVar1 * 0x74)) & 4
            ) != 0) {
          uVar7 = 0;
          if (*(int *)((longlong)puVar16 + 8) == (int)sVar1) {
            *(undefined8 *)((longlong)puVar16 + -8) = 0x3f800000;
            *(undefined8 *)((longlong)puVar16 + -0x10) = 0x19;
            *(undefined8 *)((longlong)puVar16 + -0x18) = 0x1407bea43;
            uVar7 = FUN_140754a09();
            puVar16 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar16 + -0x10) + 8);
          }
          uVar8 = (ulonglong)*puVar16;
          iVar4 = *(int *)(uVar8 + 0x10);
          if (iVar4 == *(int *)(uVar8 + 0x14)) {
            puVar16[5] = uVar7;
            if (iVar4 == 0) {
              iVar19 = 8;
            }
            else {
              iVar19 = iVar4 / 2 + iVar4;
            }
            if (iVar4 < param_3) {
              iVar4 = iVar19;
            }
            *(ulonglong *)(puVar16 + -2) = (ulonglong)(uint)(iVar4 << 4);
            puVar16[-4] = 0x407bea83;
            puVar16[-3] = 1;
            uVar6 = FUN_1407520ca();
            puVar16 = (uint *)(ulonglong)((int)(puVar16 + -2) + 4);
            uVar9 = (ulonglong)uVar6;
            uVar8 = (ulonglong)*puVar16;
            uVar7 = *(uint *)(uVar8 + 0x18);
            if (uVar7 != 0) {
              *(ulonglong *)(puVar16 + -2) =
                   (ulonglong)(uint)(*(int *)((ulonglong)*puVar16 + 0x10) << 4);
              *(ulonglong *)(puVar16 + -4) = (ulonglong)uVar7;
              *(ulonglong *)(puVar16 + -6) = uVar9;
              puVar16[-8] = 0x407beaa3;
              puVar16[-7] = 1;
              FUN_1408b31a0();
              puVar17 = (uint *)(ulonglong)((int)(puVar16 + -6) + 0xc);
              *(undefined8 *)(puVar17 + -2) = *(undefined8 *)((ulonglong)*puVar17 + 0x18);
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar17 + -4) = &UNK_1407beab1;
              FUN_14075219b();
            }
            *(uint *)(uVar8 + 0x18) = uVar6;
            *(int *)(uVar8 + 0x14) = iVar4;
            iVar4 = *(int *)(uVar8 + 0x10);
            uVar7 = puVar16[5];
          }
          else {
            uVar9 = (ulonglong)*(uint *)(uVar8 + 0x18);
          }
          uVar10 = (ulonglong)(uint)(iVar4 << 4);
          *(short *)(uVar9 + uVar10) = sVar1;
          *(undefined4 *)(uVar9 + 4 + uVar10) = *(undefined4 *)((longlong)puVar16 + 0x18);
          *(undefined4 *)(uVar9 + 8 + uVar10) = *(undefined4 *)((longlong)puVar16 + 0x1c);
          *(uint *)(uVar9 + 0xc + uVar10) = uVar7;
          *(int *)(uVar8 + 0x10) = *(int *)(uVar8 + 0x10) + 1;
          uVar8 = (ulonglong)*(uint *)((longlong)puVar16 + 4);
        }
      }
    } while (unaff_R15D < param_3);
  }
  uVar2 = *(undefined4 *)((ulonglong)*puVar16 + 0x18);
  uVar5 = *(undefined4 *)((ulonglong)puVar16[4] + 0xd84);
  puVar18 = (undefined4 *)(ulonglong)((int)puVar16 - 0x14);
  puVar18[4] = *(undefined4 *)((ulonglong)*puVar16 + 0x10);
  puVar18[3] = uVar2;
  puVar18[1] = uVar5;
  *puVar18 = puVar18[8];
  puVar18[2] = 0;
  *(undefined8 *)(puVar18 + -2) = 0x1407beb2d;
  FUN_1407beb66();
  return;
}

