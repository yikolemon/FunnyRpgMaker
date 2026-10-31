/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140753bf2 */

void FUN_140753bf2(uint param_1)

{
  char *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong in_FS_OFFSET;
  uint *puVar6;
  undefined1 *puVar11;
  
  uVar13 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  iVar10 = (int)&stack0xffffffffffffffe0;
  puVar11 = (undefined1 *)(ulonglong)(iVar10 - 0x48U);
  uVar4 = *(undefined4 *)(uVar13 + 8);
  uVar5 = (int)&stack0xfffffffffffffff8 - 0x18;
  puVar6 = (uint *)(ulonglong)uVar5;
  puVar6[-1] = iVar10 - 0x48U;
  puVar6[2] = 0xffffffff;
  puVar6[1] = 0x1012c960;
  uVar14 = *(uint *)(in_FS_OFFSET + 0x140753c1c);
  *puVar6 = uVar14;
  *(uint *)(in_FS_OFFSET + 0x225e800000000) = uVar5;
  pcVar1 = (char *)((ulonglong)uVar14 - 0x2f82763f);
  *pcVar1 = *pcVar1 + (char)uVar14;
  *(uint *)((ulonglong)param_1 + 0x28) = uVar5;
  *(uint *)(uVar13 - 0x28) = puVar6[0x533];
  *(uint *)(uVar13 - 0x20) = uVar14;
  if ((*(byte *)((ulonglong)uVar14 + 0x27b4) & 0x20) != 0) {
    fVar3 = *(float *)(uVar13 + 0xc);
    puVar12 = (undefined4 *)(ulonglong)(iVar10 - 0x5c);
    puVar12[4] = *(undefined4 *)((ulonglong)*(uint *)(uVar13 - 0x28) + 4);
    *(double *)(puVar12 + 2) = (double)fVar3;
    puVar12[1] = uVar4;
    *puVar12 = 0x10355b0a;
    *(undefined8 *)(puVar12 + -2) = 0x140753c6f;
    FUN_1407518b6();
    puVar11 = (undefined1 *)(ulonglong)(iVar10 - 0x48);
  }
  uVar14 = *(uint *)((ulonglong)*(uint *)(uVar13 - 0x20) + 0x2308);
  if ((uVar14 != 0) && (*(char *)((ulonglong)uVar14 + 0x1ee) == '\x01')) {
    *(ulonglong *)(puVar11 + -8) = (ulonglong)uVar14;
    *(undefined8 *)(puVar11 + -0x10) = 0x140753c91;
    FUN_1407bb89e();
    puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -8) + 4);
  }
  puVar7 = (undefined4 *)(ulonglong)*(uint *)(uVar13 - 0x30);
  *(double *)(puVar7 + 6) = (double)*(float *)((ulonglong)*(uint *)(uVar13 - 0x28) + 0x148);
  puVar7[4] = *(undefined4 *)(uVar13 + 0xc);
  puVar7[3] = uVar4;
  *puVar7 = 0xffffffff;
  puVar7[1] = 0;
  uVar8 = (ulonglong)*(uint *)(uVar13 - 0x20);
  iVar10 = *(int *)(uVar8 + 0x22f8);
  iVar9 = *(int *)(uVar8 + 0x22fc);
  *(int *)(uVar13 - 0x2c) = iVar10 + 1;
  *(int *)(uVar8 + 0x22f8) = iVar10 + 1;
  *(int *)(uVar13 - 0x24) = iVar10;
  if (iVar10 < iVar9) {
    uVar8 = (ulonglong)*(uint *)(uVar13 - 0x20);
    iVar10 = *(int *)(uVar13 - 0x2c);
  }
  else {
    *(undefined8 *)(uVar13 - 0x48) = 0;
    *(undefined8 *)(uVar13 - 0x40) = 0;
    *(undefined8 *)(uVar13 - 0x54) = 0;
    *(undefined8 *)(uVar13 - 0x4c) = 0;
    *(undefined4 *)(uVar13 - 0x10) = 0;
    iVar10 = *(int *)((ulonglong)*(uint *)(uVar13 - 0x20) + 0x2300);
    if (iVar10 <= *(int *)(uVar13 - 0x24)) {
      if (iVar10 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar10 / 2 + iVar10;
      }
      if (iVar9 <= *(int *)(uVar13 - 0x24)) {
        iVar9 = *(int *)(uVar13 - 0x24);
      }
      *(int *)(uVar13 - 0x38) = iVar9;
      *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(iVar9 * 0x1c);
      *(undefined8 *)(puVar11 + -0x10) = 0x140753d48;
      uVar5 = FUN_1407520ca();
      puVar11 = (undefined1 *)(ulonglong)((int)(puVar11 + -8) + 4);
      uVar8 = (ulonglong)*(uint *)(uVar13 - 0x20);
      uVar14 = *(uint *)(uVar8 + 0x2304);
      if (uVar14 != 0) {
        *(ulonglong *)(puVar11 + -8) = (ulonglong)(uint)(*(int *)(uVar8 + 0x22fc) * 0x1c);
        *(ulonglong *)(puVar11 + -0x10) = (ulonglong)uVar14;
        *(ulonglong *)(puVar11 + -0x18) = (ulonglong)uVar5;
        *(undefined8 *)(puVar11 + -0x20) = 0x140753d72;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar8 + 0x2304);
        *(uint *)(uVar13 - 0x34) = uVar5;
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar11 + -0x18) + 0xc) - 0x10) = &UNK_140753d83;
        FUN_14075219b();
      }
      *(uint *)(uVar8 + 0x2304) = uVar5;
      *(undefined4 *)(uVar8 + 0x2300) = *(undefined4 *)(uVar13 - 0x38);
      iVar9 = *(int *)(uVar8 + 0x22fc);
    }
    uVar8 = (ulonglong)*(uint *)(uVar13 - 0x20);
    if (iVar9 <= *(int *)(uVar13 - 0x24)) {
      uVar14 = iVar10 * 3 + iVar9;
      do {
        uVar5 = *(uint *)(uVar8 + 0x2304);
        puVar2 = (undefined8 *)((ulonglong)uVar5 + 0xc + (ulonglong)uVar14);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)((ulonglong)uVar5 + (ulonglong)uVar14);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar14 = uVar14 + 0x1c;
      } while (uVar14 != 0);
    }
    *(undefined4 *)(uVar8 + 0x22fc) = *(undefined4 *)(uVar13 - 0x2c);
    *(undefined4 *)(uVar13 - 0x10) = 0xffffffff;
    iVar10 = *(int *)(uVar8 + 0x22f8);
  }
  uVar14 = (*(int *)(uVar8 + 0x2304) + iVar10 * 0x1c) - 0x1c;
  uVar8 = (ulonglong)uVar14;
  uVar15 = (ulonglong)*(uint *)(uVar13 - 0x30);
  *(ulonglong *)(puVar11 + -8) = uVar15;
  *(undefined8 *)(puVar11 + -0x10) = 0x140753e06;
  FUN_140753ede(uVar8);
  *(undefined4 *)(uVar8 + 4) = *(undefined4 *)((ulonglong)*(uint *)(uVar13 - 0x28) + 0x198);
  *(uint *)(uVar15 + 0x2c) = uVar14;
  *(double *)(uVar15 + 0x20) = (double)*(float *)(uVar8 + 4);
  *(undefined4 *)(in_FS_OFFSET + 0x5e48c48300000000) = *(undefined4 *)(uVar13 - 0x18);
  return;
}

