/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140787dea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140787dea(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined2 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulonglong unaff_RBX;
  ulonglong uVar14;
  int iVar15;
  float *pfVar16;
  ulonglong uVar17;
  undefined4 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  float *pfVar30;
  ulonglong unaff_RSI;
  undefined1 (*pauVar31) [16];
  ulonglong uVar32;
  float10 fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulonglong uVar18;
  
  pfVar16 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0xb4);
  pcVar12 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffffb0);
  cVar7 = (char)pcVar12;
  *pcVar12 = *pcVar12 + cVar7;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c0d);
  bVar2 = *pbVar1;
  bVar8 = (byte)param_1;
  *pbVar1 = *pbVar1 + bVar8;
  *(char *)(unaff_RBX + 0x14cc81) = *(char *)(unaff_RBX + 0x14cc81) + bVar8 + CARRY1(bVar2,bVar8);
  *pcVar12 = *pcVar12 + cVar7;
  *(int *)(unaff_RBX + 0x14ccb1) = *(int *)(unaff_RBX + 0x14ccb1) + (int)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8) + cVar7;
  fVar33 = (float10)*(int *)(pcVar12 + 0xfebe);
  *pcVar12 = *pcVar12 + cVar7;
  if (*pcVar12 != '\0') goto LAB_1407883e0;
  *(int *)((longlong)pfVar16 + 0x20) = (int)param_1;
  uVar32 = (ulonglong)*(uint *)((longlong)pfVar16 + 200);
  *(ulonglong *)((longlong)pfVar16 + -8) = unaff_RBX;
  *(ulonglong *)((longlong)pfVar16 + -0x10) = uVar32;
  *(undefined8 *)((longlong)pfVar16 + -0x18) = 0x140787e3e;
  uVar10 = FUN_14075a0a4(unaff_RSI & 0xffffffff);
  *(undefined4 *)((longlong)pfVar16 + -4) = uVar10;
  *(ulonglong *)((longlong)pfVar16 + -0x18) = unaff_RBX;
  *(ulonglong *)((longlong)pfVar16 + -0x20) = uVar32;
  *(undefined8 *)((longlong)pfVar16 + -0x28) = 0x140787e49;
  uVar13 = FUN_14075544d();
  uVar17 = (ulonglong)((int)(undefined1 *)((longlong)pfVar16 + -0x20) + 8);
  pfVar30 = (float *)(uVar17 + 0xa0 & 0xffffffff);
  *(undefined8 *)(uVar17 - 8) = 0xffffffffbf800000;
  *(ulonglong *)(uVar17 - 0x10) = unaff_RBX;
  *(int *)(uVar17 + 0x14) = (int)uVar13;
  *(undefined8 *)(uVar17 - 0x18) = uVar13;
  *(ulonglong *)(uVar17 - 0x20) = uVar32;
  uVar32 = (ulonglong)*(uint *)(uVar17 + 0x10);
  *(float **)(uVar17 - 0x28) = pfVar30;
  *(undefined8 *)(uVar17 - 0x30) = 0x140787e69;
  FUN_1407559fe();
  iVar15 = (int)(uVar17 - 0x28);
  uVar18 = (ulonglong)(iVar15 + 0x14);
  *(undefined8 *)(uVar18 - 8) = 0x140787e71;
  FUN_14076d4c9();
  *(float *)(uVar18 + 0x40) = (float)fVar33;
  *(int *)(uVar18 + 8) = (int)unaff_RSI;
  uVar13 = *(undefined8 *)(unaff_RSI + 0x144);
  fVar37 = (float)((ulonglong)uVar13 >> 0x20);
  fVar34 = *(float *)(uVar32 + 0xd10);
  fVar36 = pfVar30[1];
  fVar35 = 0.0;
  if (0.0 < *pfVar30) {
    fVar35 = *pfVar30 + *(float *)(uVar32 + 0xd24);
  }
  uVar29 = *(uint *)(uVar18 + 0xcc);
  *(undefined1 (*) [16])(uVar18 + 0x44) = ZEXT416((uint)*(float *)(uVar18 + 0x40));
  fVar35 = fVar35 + *(float *)(uVar18 + 0x40) + (float)uVar13;
  fVar36 = fVar34 + fVar34 + fVar36 + fVar37;
  pauVar31 = (undefined1 (*) [16])(uVar18 + 0x90 & 0xffffffff);
  auVar5._8_4_ = fVar35;
  auVar5._0_8_ = uVar13;
  auVar5._12_4_ = fVar36;
  *pauVar31 = auVar5;
  *(undefined8 *)(uVar18 + 0x24) = uVar13;
  *(undefined8 *)(uVar18 + 0x2c) = 0;
  *(ulonglong *)(uVar18 + 0xa8 & 0xffffffff) = CONCAT44(fVar36 - fVar37,fVar35 - (float)uVar13);
  puVar19 = (undefined4 *)(ulonglong)(iVar15 + 0xc);
  puVar19[1] = fVar34;
  *puVar19 = (int)(uVar18 + 0xa8);
  *(undefined8 *)(puVar19 + -2) = 0x140787efc;
  FUN_1407646e0();
  uVar20 = (ulonglong)(iVar15 + 0x14);
  *(undefined8 *)(uVar20 - 8) = 0;
  *(undefined8 *)(uVar20 - 0x10) = 0;
  *(undefined8 *)(uVar20 - 0x18) = *(undefined8 *)(uVar20 + 4);
  *(undefined1 (**) [16])(uVar20 - 0x20) = pauVar31;
  *(undefined8 *)(uVar20 - 0x28) = 0x140787f0d;
  uVar10 = FUN_1407648a8();
  pfVar16 = (float *)(ulonglong)((int)(uVar20 - 0x20) + 0x10);
  uVar3 = *(uint *)(uVar32 + 0x1e84);
  cVar7 = (char)uVar10;
  if (cVar7 == '\0') {
    if ((((((uVar3 >> 0x16 & 1) == 0) || (*(char *)(uVar32 + 0x23c0) != '\x01')) ||
         (*(float *)(uVar32 + 0x23d0) < *(float *)((longlong)pfVar16 + 0x94) ||
          *(float *)(uVar32 + 0x23d0) == *(float *)((longlong)pfVar16 + 0x94))) ||
        ((*(float *)((longlong)pfVar16 + 0x9c) < *(float *)(uVar32 + 0x23c8) ||
          *(float *)((longlong)pfVar16 + 0x9c) == *(float *)(uVar32 + 0x23c8) ||
         (*(float *)(uVar32 + 0x23cc) < *(float *)((longlong)pfVar16 + 0x90) ||
          *(float *)(uVar32 + 0x23cc) == *(float *)((longlong)pfVar16 + 0x90))))) ||
       (*(float *)((longlong)pfVar16 + 0x98) < *(float *)(uVar32 + 0x23c4) ||
        *(float *)((longlong)pfVar16 + 0x98) == *(float *)(uVar32 + 0x23c4))) {
      unaff_RBX = 0;
      goto LAB_1407883e0;
    }
    *(byte *)((longlong)pfVar16 + 0x8f) = *(byte *)(ulonglong)uVar29;
LAB_140787fd6:
    *(undefined8 *)((longlong)pfVar16 + -8) = 0;
    *(ulonglong *)((longlong)pfVar16 + -0x10) = (ulonglong)((longlong)pfVar16 + 0x8fU) & 0xffffffff;
    *(char *)((longlong)pfVar16 + -8) = (char)uVar10;
    uVar3 = *(uint *)((longlong)pfVar16 + 4);
    uVar14 = (ulonglong)uVar3;
    *(ulonglong *)((longlong)pfVar16 + -0x18) = uVar14;
    *(undefined8 *)((longlong)pfVar16 + -0x20) = 0x140787ff1;
    FUN_14078840e();
    uVar21 = (ulonglong)((int)(undefined8 *)((longlong)pfVar16 + -0x18) + 0xc);
    *(undefined8 *)(uVar21 - 8) = 0;
    pauVar31 = (undefined1 (*) [16])(uVar21 + 0x8c & 0xffffffff);
    *(ulonglong *)(uVar21 - 0x10) = uVar21 + 0x8d & 0xffffffff;
    *(ulonglong *)(uVar21 - 0x18) = uVar21 + 0x8e & 0xffffffff;
    *(ulonglong *)(uVar21 - 0x20) = uVar14;
    *(undefined1 (**) [16])(uVar21 - 0x28) = pauVar31;
    *(undefined8 *)(uVar21 - 0x30) = 0x140788015;
    uVar9 = FUN_14078564e();
    uVar22 = (ulonglong)((int)(uVar21 - 0x28) + 0x14);
    *(undefined1 *)(uVar22 + 0x8c & 0xffffffff) = uVar9;
    *(undefined1 **)(uVar22 - 8) = (undefined1 *)(uVar22 + 0x8c & 0xffffffff);
    *(ulonglong *)(uVar22 - 0x10) = uVar22 + 0x8b & 0xffffffff;
    *(ulonglong *)(uVar22 - 0x18) = uVar14;
    uVar9 = *(undefined1 *)(uVar22 - 0xc);
    *(undefined8 *)(uVar22 - 0x20) = 0x140788034;
    FUN_140788520();
    pfVar16 = (float *)(ulonglong)((int)(uVar22 - 0x18) + 0xc);
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),
                     CONCAT11(*(undefined1 *)((ulonglong)((longlong)pfVar16 + 0x8f) & 0xffffffff),
                              uVar9));
  }
  else {
    bVar2 = *(byte *)(ulonglong)uVar29;
    uVar6 = (undefined2)((uint)uVar10 >> 0x10);
    uVar10 = CONCAT22(uVar6,CONCAT11(bVar2,cVar7));
    *(byte *)((longlong)pfVar16 + 0x8f) = bVar2;
    if ((uVar3 >> 0x16 & 1) != 0) goto LAB_140787fd6;
    *(undefined8 *)((longlong)pfVar16 + -8) = 0;
    *(ulonglong *)((longlong)pfVar16 + -0x10) = (ulonglong)((longlong)pfVar16 + 0x8dU) & 0xffffffff;
    *(ulonglong *)((longlong)pfVar16 + -0x18) = (ulonglong)((longlong)pfVar16 + 0x8eU) & 0xffffffff;
    *(undefined8 *)((longlong)pfVar16 + -0x20) = *(undefined8 *)pfVar16;
    *(undefined1 (**) [16])((longlong)pfVar16 + -0x28) = pauVar31;
    *(undefined8 *)((longlong)pfVar16 + -0x30) = 0x140787f4c;
    bVar8 = FUN_14078564e();
    pfVar16 = (float *)(ulonglong)((int)(undefined8 *)((longlong)pfVar16 + -0x28) + 0x14);
    *(byte *)((longlong)pfVar16 + 0x8c) = bVar8;
    uVar3 = CONCAT22(uVar6,CONCAT11(bVar2 ^ bVar8,cVar7));
  }
  pcVar12 = (char *)(ulonglong)uVar29;
  cVar7 = (char)(uVar3 >> 8);
  if (*pcVar12 != cVar7) {
    *pcVar12 = cVar7;
    *(undefined1 *)((longlong)pfVar16 + 0x8c) = 1;
    *(undefined8 *)((longlong)pfVar16 + -8) = *(undefined8 *)((longlong)pfVar16 + 0xc);
    *(undefined8 *)((longlong)pfVar16 + -0x10) = 0x140788059;
    FUN_14075a7e3();
    pfVar16 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar16 + -8) + 4);
  }
  fVar34 = pfVar16[10];
  fVar36 = pfVar16[0x11] + pfVar16[9];
  *pfVar16 = (float)*(undefined4 *)(uVar32 + 0x1e84);
  if ((byte)uVar3 != 0) {
    pfVar16[0x15] = fVar34;
    pfVar16[0x16] = fVar34;
    pfVar16[0x17] = fVar34;
    pfVar16[0x18] = fVar34;
    pfVar16[0x19] = fVar34 + pfVar16[0x11];
    pfVar16[0x1a] = fVar34;
    pfVar16[0x1b] = fVar34;
    pfVar16[0x1c] = fVar34;
    pfVar16[-2] = 0.0;
    pfVar16[-1] = 0.0;
    *(undefined8 *)(pfVar16 + -4) = *(undefined8 *)(pfVar16 + 2);
    *(undefined1 (**) [16])(pfVar16 + -6) = pauVar31;
    *pfVar16 = fVar36;
    pfVar16[1] = pfVar16[0x12];
    pfVar16[2] = pfVar16[0x13];
    pfVar16[3] = pfVar16[0x14];
    pfVar16[-8] = 3.8828516;
    pfVar16[-7] = 1.4013e-45;
    FUN_14075612e();
    puVar23 = (uint *)(ulonglong)((int)(pfVar16 + -6) + 0xc);
    uVar29 = 7;
    if ((uVar3 & 0x100) != 0) {
      uVar29 = 0x13;
    }
    uVar4 = *puVar23;
    if ((uVar4 & 0x1000) != 0) {
      uVar29 = 0x13;
    }
    if (*(byte *)((longlong)puVar23 + 0x8e) != 0) {
      uVar29 = 9 - ((*(byte *)((longlong)puVar23 + 0x8d) & *(byte *)((longlong)puVar23 + 0x8e)) == 0
                   );
    }
    puVar23[-2] = 0x3f800000;
    puVar23[-1] = 0;
    *(ulonglong *)(puVar23 + -4) = (ulonglong)uVar29;
    puVar23[-6] = 0x407880ef;
    puVar23[-5] = 1;
    uVar10 = FUN_140754a09();
    uVar24 = (ulonglong)((int)(puVar23 + -4) + 8);
    *(undefined8 *)(uVar24 - 8) = 0x3f800000;
    *(undefined8 *)(uVar24 - 0x10) = 0x12;
    *(undefined8 *)(uVar24 - 0x18) = 0x140788101;
    uVar11 = FUN_140754a09();
    iVar15 = (int)(uVar24 - 0x10);
    *(undefined4 *)((ulonglong)(iVar15 + 8) + 4) = uVar11;
    puVar25 = (undefined4 *)(ulonglong)(iVar15 - 0x14);
    puVar25[6] = *(undefined4 *)(uVar32 + 0xd14);
    puVar25[4] = uVar10;
    puVar25[3] = puVar25[0x20];
    puVar25[2] = puVar25[10];
    puVar25[1] = puVar25[0x1c];
    *puVar25 = puVar25[0x10];
    puVar25[5] = 1;
    *(undefined8 *)(puVar25 + -2) = 0x140788158;
    FUN_140755db9();
    pfVar16 = (float *)(ulonglong)(iVar15 + 8);
    if ((uVar4 & 0x1000) != 0) {
      fVar34 = *(float *)((longlong)pfVar16 + 0x44) / _DAT_150a41664;
      *(float *)((longlong)pfVar16 + 0x74) = (float)(int)fVar34;
      *(float *)((longlong)pfVar16 + 0x78) = (float)(int)*(float *)((longlong)pfVar16 + 0x48);
      *(float *)((longlong)pfVar16 + 0x7c) = (float)(int)*(float *)((longlong)pfVar16 + 0x4c);
      *(float *)((longlong)pfVar16 + 0x80) = (float)(int)*(float *)((longlong)pfVar16 + 0x50);
      puVar26 = (undefined4 *)(uVar24 - 0x10 & 0xffffffff);
      *puVar26 = 0x3f800000;
      puVar26[1] = (float)(int)fVar34;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar26 + -2) = &UNK_140788196;
      FUN_140755a9a();
    }
    pcVar12 = (char *)(ulonglong)*(uint *)((longlong)pfVar16 + 0xcc);
    uVar10 = *(undefined4 *)((longlong)pfVar16 + 0x24);
    fVar34 = *(float *)((longlong)pfVar16 + 0x28);
    fVar35 = *(float *)((longlong)pfVar16 + 0x44);
    fVar36 = *(float *)((longlong)pfVar16 + 0xc);
    if (*pcVar12 == '\x01') {
      fVar34 = (float)(int)(fVar35 / _DAT_150a40cfa);
      puVar27 = (undefined4 *)(uVar24 - 0x10 & 0xffffffff);
      puVar27[1] = fVar34;
      *puVar27 = 0x3f800000;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar27 + -2) = &UNK_1407882be;
      FUN_140755a9a(fVar34,fVar35,uVar10);
    }
  }
  *(ulonglong *)(pfVar16 + 0x2a) =
       CONCAT44(*(float *)(uVar32 + 0xd10) + fVar34,*(float *)(uVar32 + 0xd24) + fVar36);
  if (*(char *)(uVar32 + 0x2748) == '\x01') {
    uVar13 = 0x1033b867;
    if ((((uint)*pfVar16 >> 0xc & 1) == 0) && (uVar13 = 0x1033b90c, *pcVar12 != '\0')) {
      uVar13 = 0x1033b895;
    }
    pfVar16[-2] = 0.0;
    pfVar16[-1] = 0.0;
    *(undefined8 *)(pfVar16 + -4) = uVar13;
    *(ulonglong *)(pfVar16 + -6) = (ulonglong)(pfVar16 + 0x28) & 0xffffffff;
    pfVar16[-8] = 3.8830247;
    pfVar16[-7] = 1.4013e-45;
    FUN_140755578();
    pfVar16 = (float *)(ulonglong)((int)(pfVar16 + -6) + 0xc);
  }
  if (((byte)uVar3 & 0.0 < *(float *)((longlong)pfVar16 + 0xa0)) == 1) {
    uVar10 = *(undefined4 *)((longlong)pfVar16 + 0xa8);
    uVar11 = *(undefined4 *)((longlong)pfVar16 + 0xac);
    puVar28 = (undefined4 *)(ulonglong)((int)pfVar16 - 0x14);
    puVar28[3] = puVar28[0xc];
    puVar28[2] = puVar28[0x37];
    puVar28[1] = uVar11;
    *puVar28 = uVar10;
    puVar28[4] = 0;
    *(undefined8 *)(puVar28 + -2) = 0x1407883d6;
    FUN_14075547e();
  }
  unaff_RBX = (ulonglong)CONCAT31((int3)(uVar3 >> 8),*(undefined1 *)((longlong)pfVar16 + 0x8c));
LAB_1407883e0:
  if (_DAT_150b110ef == (*(uint *)((longlong)pfVar16 + 0xb0) ^ (uint)pfVar16)) {
    return unaff_RBX & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)pfVar16 + -8) = FUN_14078840e;
  FUN_1408802b0(*(uint *)((longlong)pfVar16 + 0xb0) ^ (uint)pfVar16);
}

