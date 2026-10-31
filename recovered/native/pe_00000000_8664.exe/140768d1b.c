/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140768d1b */

/* WARNING: Instruction at (ram,0x000140768e49) overlaps instruction at (ram,0x000140768e45)
    */

void FUN_140768d1b(undefined8 param_1,ulonglong param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  char cVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  uint uVar17;
  undefined1 *puVar19;
  ulonglong uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  longlong in_FS_OFFSET;
  bool bVar23;
  float10 in_ST0;
  uint *puVar12;
  ulonglong uVar18;
  
  uVar22 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar17 = (uint)&stack0xffffffffffffffe0 - 600;
  uVar18 = (ulonglong)uVar17;
  uVar10 = (int)&stack0xfffffffffffffff8 - 0x18;
  puVar12 = (uint *)(ulonglong)uVar10;
  puVar12[-1] = uVar17;
  puVar12[2] = 0xffffffff;
  puVar12[1] = 0x1012c9b0;
  uVar17 = *(uint *)(in_FS_OFFSET + 0x140768d42);
  pcVar13 = (char *)(ulonglong)uVar17;
  *puVar12 = uVar17;
  *(uint *)(in_FS_OFFSET + 0x39d74ca100000000) = uVar10;
  pcVar13[-0x477f2bbb] =
       pcVar13[-0x477f2bbb] + (char)uVar17 + ((uint)&stack0xffffffffffffffe0 < 600);
  *(uint **)(uVar18 - 8) = puVar12;
  *pcVar13 = *pcVar13 + ((byte)uVar10 & (byte)*puVar12);
  if (*pcVar13 != '\0') goto code_r0x0001407690d0;
  uVar14 = (ulonglong)*(uint *)(uVar22 + 8);
  uVar17 = *(uint *)(uVar14 + 8);
  fVar2 = *(float *)(uVar14 + 0x50);
  fVar7 = *(float *)(uVar14 + 0x54);
  uVar3 = *(undefined8 *)(uVar14 + 0x58);
  pfVar16 = (float *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0x154);
  *pfVar16 = fVar2;
  pfVar16[1] = fVar7;
  pfVar16[2] = (float)uVar3 + fVar2;
  pfVar16[3] = (float)((ulonglong)uVar3 >> 0x20) + fVar7;
  *(ulonglong *)(uVar18 - 0x10) = (ulonglong)uVar17;
  *(float **)(uVar18 - 0x18) = pfVar16;
  *(undefined8 *)(uVar18 - 0x20) = 0x140768d86;
  cVar8 = FUN_14076fc82();
  puVar19 = (undefined1 *)(ulonglong)((int)(uVar18 - 0x18) + 8);
  if (cVar8 == '\0') goto code_r0x0001407690d0;
  uVar17 = *(uint *)(uVar22 - 0x2c);
  if (*(int *)((ulonglong)uVar17 + 0x2270) == -1) {
LAB_140768e31:
    *(undefined8 *)(puVar19 + -8) = 0x140768e36;
    FUN_1407701af();
    uVar17 = *(uint *)(uVar22 - 0x18);
    pcVar13 = (char *)(ulonglong)uVar17;
    *(uint *)(in_FS_OFFSET + 0x295e900000000) = uVar17;
    pcVar13[0x430808b] = pcVar13[0x430808b] + (char)param_2;
    *pcVar13 = *pcVar13 + (char)uVar17;
code_r0x000140768e45:
    iVar11 = *(int *)(pcVar13 + 0x430);
    bVar23 = iVar11 == 0;
code_r0x000140768e51:
    *(int *)(uVar22 - 0x20) = iVar11;
    if (iVar11 == 0) {
      *(undefined4 *)(uVar22 - 0x28) = 0;
LAB_140768e92:
      *(undefined4 *)(uVar22 - 0x20) = 0;
LAB_140768e99:
      *(undefined8 *)(puVar19 + -8) = 0x140768e9e;
      FUN_14076d4c9();
      *(float *)(uVar22 - 0x34) = (float)in_ST0;
      uVar14 = (ulonglong)*(uint *)(uVar22 + 8);
      uVar5 = *(undefined4 *)(uVar14 + 0x50);
      uVar3 = *(undefined8 *)(uVar14 + 0x50);
      fVar2 = *(float *)(uVar14 + 0x58);
      *(undefined4 *)(uVar22 - 0x40) = *(undefined4 *)(uVar14 + 0x54);
      *(undefined4 *)(uVar22 - 0x44) = uVar5;
      *(ulonglong *)(uVar22 - 0x3c) =
           CONCAT44(*(float *)(uVar22 - 0x34) + (float)((ulonglong)uVar3 >> 0x20),
                    fVar2 + (float)uVar3);
    }
    else {
code_r0x000140768e59:
      uVar17 = *(uint *)(uVar22 - 0x20);
      uVar10 = *(uint *)((ulonglong)uVar17 + 0x30);
      uVar14 = (ulonglong)uVar10;
      *(int *)(uVar22 - 0x28) = (int)CONCAT71((int7)(param_2 >> 8),1);
      if ((uVar10 == 0) || ((*(byte *)((ulonglong)uVar17 + 0x11) & 0x30) != 0)) goto LAB_140768e99;
      uVar5 = *(undefined4 *)(uVar14 + 0x34);
      uVar1 = *(undefined4 *)(uVar14 + 0x38);
      uVar6 = *(undefined4 *)(uVar14 + 0x3c);
      *(undefined4 *)(uVar22 - 0x44) = *(undefined4 *)(uVar14 + 0x30);
      *(undefined4 *)(uVar22 - 0x40) = uVar5;
      *(undefined4 *)(uVar22 - 0x3c) = uVar1;
      *(undefined4 *)(uVar22 - 0x38) = uVar6;
      *(int *)(uVar22 - 0x28) = (int)CONCAT71((uint7)(uint3)(uVar10 >> 8),1);
    }
    *(undefined1 *)(uVar22 - 0x24) = 1;
    if (*(char *)((ulonglong)*(uint *)(uVar22 - 0x2c) + 0x6e) == '\0') {
      *(undefined8 *)(puVar19 + -8) = 1;
      *(ulonglong *)(puVar19 + -0x10) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x3c);
      *(ulonglong *)(puVar19 + -0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x44);
      *(undefined8 *)(puVar19 + -0x20) = 0x140768ee6;
      uVar9 = FUN_14075ae0a();
      puVar19 = (undefined1 *)(ulonglong)((int)(puVar19 + -0x18) + 0xc);
      *(undefined1 *)(uVar22 - 0x24) = uVar9;
    }
    if (*(char *)((ulonglong)*(uint *)(uVar22 - 0x2c) + 0x2295) == '\0') {
      if ((*(char *)((ulonglong)*(uint *)(uVar22 - 0x2c) + 0x2296) == '\x01') &&
         (bVar23 != false || *(char *)(uVar22 - 0x28) != '\0')) goto LAB_140768f1e;
    }
    else if ((bVar23 | *(byte *)(uVar22 - 0x28)) == 1) {
LAB_140768f1e:
      *(undefined8 *)(puVar19 + -8) = 0x140768f29;
      FUN_140773afe((int)&stack0xfffffffffffffff8 + -0x154);
      *(undefined4 *)(uVar22 - 0x10) = 0;
      *(undefined8 *)(puVar19 + -8) = 0x140768f3b;
      FUN_140773afe((int)&stack0xfffffffffffffff8 + -0x264);
      *(undefined4 *)(uVar22 - 0x10) = 1;
      bVar4 = *(byte *)(uVar22 - 0x24);
      uVar14 = (ulonglong)bVar4;
      *(int *)(uVar22 - 0x24) = (int)&stack0xfffffffffffffff8 + -0x154;
      if ((*(char *)(uVar22 - 0x28) == '\0') ||
         (((*(int *)((ulonglong)*(uint *)(uVar22 - 0x20) + 0x18) == 0 &&
           ((*(byte *)((ulonglong)*(uint *)(uVar22 - 0x20) + 0x11) & 8) == 0)) &&
          (iVar11 = *(int *)((ulonglong)*(uint *)(uVar22 - 0x20) + 0x1c),
          *(int *)(uVar22 - 0x24) = (int)&stack0xfffffffffffffff8 + -0x154, iVar11 == 0)))) {
LAB_140768fcd:
        uVar5 = *(undefined4 *)(uVar22 + 8);
        uVar1 = *(undefined4 *)(uVar22 - 0x20);
        *(undefined8 *)(puVar19 + -8) = 0;
        *(ulonglong *)(puVar19 + -0x10) = uVar14;
        *(ulonglong *)(puVar19 + -0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x154);
        *(undefined8 *)(puVar19 + -0x20) = 0;
        *(undefined8 *)(puVar19 + -0x28) = *(undefined8 *)(uVar22 - 0x30);
        *(undefined8 *)(puVar19 + -0x30) = 0x140768fe7;
        FUN_140773bb9(uVar5,uVar1);
        puVar19 = (undefined1 *)(ulonglong)((int)(puVar19 + -0x28) + 0x14);
      }
      else {
        uVar17 = *(uint *)(uVar22 - 0x20);
        do {
          uVar15 = (ulonglong)uVar17;
          uVar17 = *(uint *)(uVar15 + 0x18);
        } while (uVar17 != 0);
        uVar5 = *(undefined4 *)(uVar22 + 8);
        *(undefined8 *)(puVar19 + -8) = 1;
        *(ulonglong *)(puVar19 + -0x10) = uVar14;
        *(ulonglong *)(puVar19 + -0x18) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x264);
        *(undefined8 *)(puVar19 + -0x20) = 0;
        *(undefined8 *)(puVar19 + -0x28) = *(undefined8 *)(uVar22 - 0x30);
        *(uint *)(uVar22 - 0x28) = (uint)bVar4;
        *(undefined8 *)(puVar19 + -0x30) = 0x140768fa4;
        FUN_140773bb9(uVar5,uVar15);
        uVar14 = (ulonglong)*(uint *)(uVar22 - 0x28);
        puVar19 = (undefined1 *)(ulonglong)((int)(puVar19 + -0x28) + 0x14);
        iVar11 = (int)&stack0xfffffffffffffff8 + -0x154;
        if (*(char *)(uVar22 - 0x1b1) != '\0') {
          iVar11 = (int)&stack0xfffffffffffffff8 + -0x264;
        }
        *(int *)(uVar22 - 0x24) = iVar11;
        if (*(int *)((ulonglong)*(uint *)(uVar22 - 0x20) + 0x1c) == 0) goto LAB_140768fcd;
      }
      if (*(int *)(uVar22 - 0x24) == (int)&stack0xfffffffffffffff8 + -0x264) {
        *(undefined1 *)(uVar22 - 0xa4) = 0;
        *(undefined4 *)(uVar22 - 0x10) = 1;
      }
      *(undefined4 *)(uVar22 - 0x10) = 1;
      uVar5 = *(undefined4 *)(uVar22 + 8);
      uVar1 = *(undefined4 *)(uVar22 - 0x20);
      *(ulonglong *)(puVar19 + -8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x154);
      *(undefined8 *)(puVar19 + -0x10) = *(undefined8 *)(uVar22 - 0x30);
      *(undefined8 *)(puVar19 + -0x18) = 0x140769021;
      FUN_140774cb9(uVar5,uVar1);
      uVar20 = (ulonglong)((int)(puVar19 + -0x10) + 8);
      uVar5 = *(undefined4 *)(uVar22 + 8);
      uVar1 = *(undefined4 *)(uVar22 - 0x20);
      *(ulonglong *)(uVar20 - 8) = (ulonglong)((int)&stack0xfffffffffffffff8 - 0x264);
      *(undefined8 *)(uVar20 - 0x10) = *(undefined8 *)(uVar22 - 0x30);
      *(undefined8 *)(uVar20 - 0x18) = 0x14076903a;
      FUN_140774cb9(uVar5,uVar1);
      iVar11 = (int)(uVar20 - 0x10);
      puVar19 = (undefined1 *)(ulonglong)(iVar11 + 8);
      if ((*(char *)((ulonglong)*(uint *)(uVar22 - 0x24) + 0xb0) == '\x01') &&
         (*(char *)((ulonglong)*(uint *)(uVar22 - 0x2c) + 0x2296) == '\x01')) {
        uVar14 = (ulonglong)*(uint *)(uVar22 - 0x24);
        uVar5 = *(undefined4 *)(uVar14 + 0xbc);
        uVar1 = *(undefined4 *)(uVar14 + 0xb4);
        uVar6 = *(undefined4 *)(uVar14 + 0xb8);
        puVar21 = (undefined4 *)(ulonglong)(iVar11 - 0x14);
        puVar21[6] = (uint)(*(uint *)(uVar22 - 0x24) == (int)&stack0xfffffffffffffff8 - 0x264U);
        puVar21[4] = uVar6;
        puVar21[3] = *(undefined4 *)(uVar22 - 0x30);
        puVar21[2] = uVar1;
        puVar21[1] = *(undefined4 *)(uVar22 + 8);
        *puVar21 = *(undefined4 *)(uVar22 - 0x2c);
        puVar21[5] = uVar5;
        *(undefined8 *)(puVar21 + -2) = 0x1407690a9;
        FUN_140773427();
        puVar19 = (undefined1 *)(ulonglong)(iVar11 + 8);
      }
      *(undefined4 *)(uVar22 - 0x10) = 0xffffffff;
      *(undefined8 *)(puVar19 + -8) = 0x1407690bf;
      FUN_140773ffe((int)&stack0xfffffffffffffff8 + -0x264);
      *(undefined8 *)(puVar19 + -8) = 0x1407690ca;
      FUN_140773ffe((int)&stack0xfffffffffffffff8 + -0x154);
    }
  }
  else {
    *(ulonglong *)(puVar19 + -8) = (ulonglong)(uVar17 + 0x2274);
    *(undefined8 *)(puVar19 + -0x10) = 0x1033bf7e;
    *(undefined8 *)(puVar19 + -0x18) = 0x140768db3;
    iVar11 = FUN_1408c84e0();
    puVar19 = (undefined1 *)(ulonglong)((int)(puVar19 + -0x10) + 8);
    if (iVar11 != 0) goto LAB_140768e31;
    uVar17 = *(uint *)(ulonglong)*(uint *)((ulonglong)uVar17 + 0x2260);
    param_2 = (ulonglong)uVar17;
    uVar5 = *(undefined4 *)(uVar22 + 8);
    *(uint *)(uVar22 - 0x30) = uVar17;
    *(undefined8 *)(puVar19 + -8) = 0x140768dce;
    cVar8 = FUN_140774c44(uVar5);
    if (cVar8 == '\0') goto LAB_140768e31;
    *(undefined8 *)(puVar19 + -8) = 0xc00;
    *(undefined8 *)(puVar19 + -0x10) = 0x1033bf7e;
    *(undefined8 *)(puVar19 + -0x18) = 0x140768de2;
    iVar11 = FUN_14076fdd3();
    puVar19 = (undefined1 *)(ulonglong)((int)(puVar19 + -0x10) + 8);
    if (iVar11 != 0) {
      pcVar13 = (char *)(ulonglong)*(uint *)(uVar22 + 8);
      if (*(int *)(pcVar13 + 0x434) == 0) goto code_r0x000140768e45;
      uVar5 = *(undefined4 *)((ulonglong)*(uint *)(uVar22 - 0x2c) + 0xe4);
      uVar1 = *(undefined4 *)((ulonglong)*(uint *)(uVar22 - 0x2c) + 0xe8);
      *(undefined8 *)(puVar19 + -8) = 0x140768e14;
      uVar14 = FUN_140772726(uVar5,uVar1);
      if ((int)uVar14 == 0) {
        *(undefined4 *)(uVar22 - 0x28) = 0;
        bVar23 = false;
        goto LAB_140768e92;
      }
      if (((*(byte *)(uVar14 + 0x11) & 4) != 0) && (*(int *)(uVar14 + 0x18) == 0)) {
        iVar11 = *(int *)(uVar14 + 0x80);
        *(int *)(uVar22 - 0x20) = iVar11;
        if ((iVar11 != 0) && (*(int *)(uVar14 + 0x1c) == 0)) goto LAB_140768e2d;
        *(undefined8 *)(puVar19 + -8) = 0x140769104;
        iVar11 = FUN_140774c98(uVar14 & 0xffffffff);
        bVar23 = false;
        goto code_r0x000140768e51;
      }
      *(int *)(uVar22 - 0x20) = (int)uVar14;
LAB_140768e2d:
      bVar23 = false;
      goto code_r0x000140768e59;
    }
  }
  *(undefined8 *)(puVar19 + -8) = 0x1407690cf;
  FUN_1407701af();
code_r0x0001407690d0:
  uVar17 = *(uint *)(uVar22 - 0x18);
  *(uint *)(in_FS_OFFSET + 0x258c48100000000) = uVar17;
  *(char *)(ulonglong)uVar17 = *(char *)(ulonglong)uVar17 + (char)uVar17;
  return;
}

