/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140784a9c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140784a9c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float *pfVar13;
  int *piVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float10 in_ST0;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  pfVar13 = (float *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x74);
  uVar12 = (ulonglong)_DAT_150b22200;
  *(undefined1 *)((ulonglong)*(uint *)(uVar12 + 0x14cc) + 0xfb) = 1;
  uVar9 = *(uint *)(uVar12 + 0x14cc);
  uVar30 = (ulonglong)uVar9;
  if (*(char *)(uVar30 + 0xfe) == '\0') {
    uVar28 = *(uint *)((longlong)pfVar13 + 0x8c);
    uVar4 = *(uint *)((longlong)pfVar13 + 0x88);
    uVar5 = uVar4;
    if (uVar4 == uVar28) {
      uVar5 = 0x10356101;
    }
    uVar11 = (ulonglong)uVar5;
    if (uVar4 == uVar28) {
      uVar28 = 0x10356101;
    }
    if (uVar28 == 0) {
      *(ulonglong *)((longlong)pfVar13 + -8) = uVar11;
      *(undefined8 *)((longlong)pfVar13 + -0x10) = 0x140784af9;
      iVar7 = FUN_1408c85c0();
      pfVar13 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar13 + -8) + 4);
      uVar28 = iVar7 + uVar5;
    }
    uVar29 = (ulonglong)uVar28;
    *(undefined1 (*) [16])(pfVar13 + 0x10) = ZEXT416(*(uint *)(uVar30 + 0x144));
    fVar32 = *(float *)(uVar30 + 0x220);
    *(undefined1 (*) [16])(pfVar13 + 8) =
         ZEXT416((uint)(*(float *)(uVar30 + 0x148) + *(float *)(uVar30 + 0x17c)));
    if (((int)(uVar28 - uVar5) < 0x7d1) || (0.0 <= fVar32)) {
      fVar31 = 0.0;
      if (0.0 <= fVar32) {
        piVar14 = (int *)(ulonglong)((int)pfVar13 - 8);
        piVar14[1] = (int)fVar32;
        *piVar14 = uVar9 + 0x144;
        piVar14[-2] = 0x40784b98;
        piVar14[-1] = 1;
        FUN_14075b0c1();
        pfVar13[5] = (float)in_ST0;
        fVar31 = pfVar13[5];
      }
      puVar15 = (undefined4 *)(ulonglong)((int)pfVar13 - 0x14);
      puVar15[6] = fVar31;
      puVar15[4] = fVar31;
      puVar15[3] = 0;
      puVar15[2] = uVar28;
      puVar15[1] = uVar5;
      *puVar15 = (int)(puVar15 + 0x1f);
      *(undefined8 *)(puVar15 + -2) = 0x140784bce;
      FUN_1407559fe();
      pfVar10 = (float *)((ulonglong)(pfVar13 + 0x16) & 0xffffffff);
      fVar32 = pfVar13[0x10];
      *pfVar10 = fVar32;
      fVar31 = pfVar13[8];
      pfVar10[1] = fVar31;
      uVar3 = *(undefined8 *)((ulonglong)(pfVar13 + 0x1a) & 0xffffffff);
      *(ulonglong *)(pfVar10 + 2) =
           CONCAT44(fVar31 + (float)((ulonglong)uVar3 >> 0x20),fVar32 + (float)uVar3);
      pfVar13[-2] = 0.0;
      pfVar13[-1] = 0.0;
      *(undefined8 **)(pfVar13 + -4) = (undefined8 *)((ulonglong)(pfVar13 + 0x1a) & 0xffffffff);
      pfVar13[-6] = 3.8796391;
      pfVar13[-5] = 1.4013e-45;
      FUN_1407646e0();
      uVar16 = (ulonglong)((int)(pfVar13 + -4) + 8);
      *(undefined8 *)(uVar16 - 8) = 0;
      *(undefined8 *)(uVar16 - 0x10) = 0;
      *(undefined8 *)(uVar16 - 0x18) = 0;
      *(float **)(uVar16 - 0x20) = pfVar10;
      *(undefined8 *)(uVar16 - 0x28) = 0x140784c0e;
      cVar6 = FUN_1407648a8();
      iVar7 = (int)(uVar16 - 0x20);
      pfVar13 = (float *)(ulonglong)(iVar7 + 0x10);
      if (cVar6 != '\0') {
        uVar2 = *(undefined4 *)((longlong)pfVar13 + 0x58);
        uVar1 = *(undefined4 *)((longlong)pfVar13 + 0x5c);
        puVar17 = (undefined4 *)(ulonglong)(iVar7 - 4);
        puVar17[4] = puVar17[6];
        puVar17[3] = uVar28;
        puVar17[2] = uVar5;
        puVar17[1] = uVar1;
        *puVar17 = uVar2;
        *(undefined8 *)(puVar17 + -2) = 0x140784c4c;
        FUN_140755727();
        pfVar13 = (float *)(ulonglong)(iVar7 + 0x10);
      }
    }
    else {
      pfVar13[0xc] = 0.0;
      pfVar13[0xd] = 0.0;
      pfVar13[0xe] = 0.0;
      pfVar13[0xf] = 0.0;
      pfVar13[-2] = 3.8795953;
      pfVar13[-1] = 1.4013e-45;
      FUN_140769df0();
      pfVar13[7] = (float)in_ST0;
      fVar32 = pfVar13[7];
      pfVar13[0x1a] = 0.0;
      pfVar13[0x1b] = 0.0;
      cVar6 = *(char *)(uVar12 + 0x2748);
      *pfVar13 = fVar32;
      if (cVar6 == '\0') {
        fVar31 = pfVar13[8];
        fVar34 = pfVar13[9];
        fVar35 = pfVar13[10];
        fVar36 = pfVar13[0xb];
        fVar8 = (float)(int)((*(float *)(uVar30 + 0x290) - fVar31) / fVar32);
        pfVar13[1] = fVar8;
        fVar33 = fVar31;
        if (0 < (int)fVar8) {
          pfVar13[0xc] = 0.0;
          pfVar13[0xd] = 0.0;
          pfVar13[0xe] = 0.0;
          pfVar13[0xf] = 0.0;
          if (uVar5 < uVar28) {
            pfVar13[0xc] = 0.0;
            pfVar13[0xd] = 0.0;
            pfVar13[0xe] = 0.0;
            pfVar13[0xf] = 0.0;
            *(ulonglong *)(pfVar13 + -2) = (ulonglong)(uVar28 - uVar5);
            pfVar13[-4] = 1.4013e-44;
            pfVar13[-3] = 0.0;
            *(ulonglong *)(pfVar13 + -6) = uVar11;
            pfVar13[-8] = 3.879676;
            pfVar13[-7] = 1.4013e-45;
            uVar9 = FUN_1408b1400();
            uVar18 = (ulonglong)((int)(pfVar13 + -6) + 0xc);
            uVar12 = (ulonglong)uVar9;
            if (uVar9 == 0) {
              uVar12 = uVar29;
            }
            if ((*(uint *)(uVar18 + 0x90) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            *(undefined8 *)(uVar18 - 8) = 0xffffffffbf800000;
            *(undefined8 *)(uVar18 - 0x10) = 0;
            *(ulonglong *)(uVar18 - 0x18) = uVar12;
            *(ulonglong *)(uVar18 - 0x20) = uVar11;
            *(ulonglong *)(uVar18 - 0x28) = uVar18 + 0x48 & 0xffffffff;
            *(undefined8 *)(uVar18 - 0x30) = 0x140784cc5;
            FUN_1407559fe();
            uVar19 = (ulonglong)((int)(uVar18 - 0x28) + 0x14);
            uVar2 = *(undefined4 *)(uVar19 + 0x68);
            puVar20 = (undefined4 *)(ulonglong)((int)(uVar18 - 0x28) + 0xc);
            puVar20[1] = *(undefined4 *)(uVar19 + 0x58);
            *puVar20 = uVar2;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar20 + -2) = &UNK_140784ce7;
            FUN_140755a9a();
          }
          fVar34 = 0.0;
          fVar35 = 0.0;
          fVar36 = 0.0;
          fVar33 = fVar32 * 0.0 + fVar31;
        }
      }
      else {
        fVar31 = pfVar13[8];
        fVar34 = pfVar13[9];
        fVar35 = pfVar13[10];
        fVar36 = pfVar13[0xb];
        fVar33 = fVar31;
      }
      if (uVar5 < uVar28) {
        fVar31 = _DAT_150a3d6fa + pfVar13[0x10];
        pfVar10 = (float *)((ulonglong)(pfVar13 + 0x16) & 0xffffffff);
        *pfVar10 = pfVar13[0x10];
        pfVar10[1] = fVar33;
        pfVar10[2] = fVar31;
        pfVar10[3] = fVar32 + fVar33;
        pfVar13[1] = fVar33;
        pfVar13[2] = fVar34;
        pfVar13[3] = fVar35;
        pfVar13[4] = fVar36;
        pfVar13[-2] = 0.0;
        pfVar13[-1] = 0.0;
        *(ulonglong *)(pfVar13 + -4) = (ulonglong)(pfVar13 + 0x15) & 0xffffffff;
        pfVar13[-6] = 3.8797286;
        pfVar13[-5] = 1.4013e-45;
        cVar6 = FUN_14075b003();
        pfVar13 = (float *)(ulonglong)((int)(pfVar13 + -4) + 8);
        if (cVar6 == '\0') {
          *(ulonglong *)(pfVar13 + -2) = (ulonglong)(uVar28 - uVar5);
          pfVar13[-4] = 1.4013e-44;
          pfVar13[-3] = 0.0;
          *(ulonglong *)(pfVar13 + -6) = uVar11;
          pfVar13[-8] = 3.8797343;
          pfVar13[-7] = 1.4013e-45;
          uVar9 = FUN_1408b1400();
          uVar21 = (ulonglong)((int)(pfVar13 + -6) + 0xc);
          uVar12 = (ulonglong)uVar9;
          if (uVar9 == 0) {
            uVar12 = uVar29;
          }
          *(undefined8 *)(uVar21 - 8) = 0xffffffffbf800000;
          *(undefined8 *)(uVar21 - 0x10) = 0;
          *(ulonglong *)(uVar21 - 0x18) = uVar12;
          *(ulonglong *)(uVar21 - 0x20) = uVar11;
          *(ulonglong *)(uVar21 - 0x28) = uVar21 + 0x40 & 0xffffffff;
          *(undefined8 *)(uVar21 - 0x30) = 0x140784dad;
          FUN_1407559fe();
          uVar22 = (ulonglong)((int)(uVar21 - 0x28) + 0x14);
          uVar2 = *(undefined4 *)(uVar22 + 0x68);
          puVar23 = (undefined4 *)(ulonglong)((int)(uVar21 - 0x28) + 0xc);
          puVar23[1] = *(undefined4 *)(uVar22 + 0x50);
          *puVar23 = uVar2;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar23 + -2) = &UNK_140784dcf;
          FUN_140755a9a();
        }
        if (uVar5 < uVar28) {
          pfVar13[1] = pfVar13[1];
          pfVar13[2] = pfVar13[2];
          pfVar13[3] = pfVar13[3];
          pfVar13[4] = pfVar13[4];
          *(ulonglong *)(pfVar13 + -2) = (ulonglong)(uVar28 - uVar5);
          pfVar13[-4] = 1.4013e-44;
          pfVar13[-3] = 0.0;
          *(ulonglong *)(pfVar13 + -6) = uVar11;
          pfVar13[-8] = 3.8797858;
          pfVar13[-7] = 1.4013e-45;
          uVar9 = FUN_1408b1400();
          uVar24 = (ulonglong)((int)(pfVar13 + -6) + 0xc);
          uVar12 = (ulonglong)uVar9;
          if (uVar9 == 0) {
            uVar12 = uVar29;
          }
          if ((*(uint *)(uVar24 + 0x90) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(undefined8 *)(uVar24 - 8) = 0xffffffffbf800000;
          *(undefined8 *)(uVar24 - 0x10) = 0;
          *(ulonglong *)(uVar24 - 0x18) = uVar12;
          *(ulonglong *)(uVar24 - 0x20) = uVar11;
          *(ulonglong *)(uVar24 - 0x28) = uVar24 + 0x40 & 0xffffffff;
          *(undefined8 *)(uVar24 - 0x30) = 0x140784e91;
          FUN_1407559fe();
          uVar25 = (ulonglong)((int)(uVar24 - 0x28) + 0x14);
          uVar2 = *(undefined4 *)(uVar25 + 0x68);
          puVar26 = (undefined4 *)(ulonglong)((int)(uVar24 - 0x28) + 0xc);
          puVar26[1] = *(undefined4 *)(uVar25 + 0x50);
          *puVar26 = uVar2;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar26 + -2) = &UNK_140784eb3;
          FUN_140755a9a();
        }
        fVar33 = pfVar13[1] + *pfVar13 * 0.0;
        fVar32 = pfVar13[0x1a];
        fVar31 = pfVar13[8];
      }
      else {
        fVar32 = pfVar13[0xc];
      }
      *(float *)(((ulonglong)((longlong)pfVar13 + 0x68) & 0xffffffff) + 4) = fVar33 - fVar31;
      pfVar10 = (float *)((ulonglong)((longlong)pfVar13 + 0x58) & 0xffffffff);
      fVar34 = *(float *)((longlong)pfVar13 + 0x40);
      *pfVar10 = fVar34;
      pfVar10[1] = fVar31;
      *(ulonglong *)(pfVar10 + 2) = CONCAT44((fVar33 - fVar31) + fVar31,fVar32 + fVar34);
      *(undefined8 *)((longlong)pfVar13 + -8) = 0;
      *(ulonglong *)((longlong)pfVar13 + -0x10) = (ulonglong)((longlong)pfVar13 + 0x68) & 0xffffffff
      ;
      *(undefined8 *)((longlong)pfVar13 + -0x18) = 0x140784f17;
      FUN_1407646e0();
      uVar27 = (ulonglong)((int)(undefined1 *)((longlong)pfVar13 + -0x10) + 8);
      *(undefined8 *)(uVar27 - 8) = 0;
      *(undefined8 *)(uVar27 - 0x10) = 0;
      *(undefined8 *)(uVar27 - 0x18) = 0;
      *(float **)(uVar27 - 0x20) = pfVar10;
      *(undefined8 *)(uVar27 - 0x28) = 0x140784f23;
      FUN_1407648a8();
      pfVar13 = (float *)(ulonglong)((int)(uVar27 - 0x20) + 0x10);
    }
  }
  if (_DAT_150b0dc32 != (*(uint *)((longlong)pfVar13 + 0x70) ^ (uint)pfVar13)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)pfVar13 + -8) = FUN_140784f49;
    FUN_1408802b0(*(uint *)((longlong)pfVar13 + 0x70) ^ (uint)pfVar13);
  }
  return;
}

