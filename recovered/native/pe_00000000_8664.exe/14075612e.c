/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075612e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075612e(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  undefined4 *puVar14;
  undefined4 uVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 *puVar13;
  
  iVar12 = (int)&stack0xffffffffffffffe0;
  puVar13 = (undefined4 *)(ulonglong)(iVar12 - 0x30);
  uVar10 = (ulonglong)_DAT_150af3896;
  if ((((puVar13[0x12] == *(int *)(uVar10 + 0x2044)) &&
       ((uVar1 = puVar13[0x13], (uVar1 & 4) != 0 || (*(char *)(uVar10 + 0x2040) != '\0')))) &&
      ((puVar13[0x12] != *(int *)(uVar10 + 0x1e80) || ((*(byte *)(uVar10 + 0x1e84) & 2) == 0)))) &&
     (uVar11 = (ulonglong)*(uint *)(uVar10 + 0x14cc), *(char *)(uVar11 + 0x1a5) == '\0')) {
    uVar21 = 0;
    if ((uVar1 & 8) == 0) {
      uVar21 = *(undefined4 *)(uVar10 + 0xd14);
    }
    puVar13[6] = uVar21;
    uVar7 = ((undefined8 *)(ulonglong)(uint)puVar13[0x11])[1];
    pfVar16 = (float *)((ulonglong)(puVar13 + 9) & 0xffffffff);
    *(undefined8 *)(pfVar16 + -2) = *(undefined8 *)(ulonglong)(uint)puVar13[0x11];
    *(undefined8 *)pfVar16 = uVar7;
    fVar3 = *(float *)(uVar11 + 0x28c);
    fVar4 = *(float *)(uVar11 + 0x290);
    fVar5 = *(float *)(uVar11 + 0x294);
    fVar6 = *(float *)(uVar11 + 0x298);
    uVar17 = -(uint)(fVar3 <= pfVar16[-2]);
    uVar18 = -(uint)(fVar4 <= pfVar16[-1]);
    uVar19 = -(uint)(*pfVar16 < fVar5);
    uVar20 = -(uint)(pfVar16[1] < fVar6);
    fVar22 = (float)(~uVar17 & (uint)fVar3 | (uint)pfVar16[-2] & uVar17);
    fVar23 = (float)(~uVar18 & (uint)fVar4 | (uint)pfVar16[-1] & uVar18);
    fVar24 = (float)(~uVar19 & (uint)fVar5 | (uint)*pfVar16 & uVar19);
    fVar25 = (float)(~uVar20 & (uint)fVar6 | (uint)pfVar16[1] & uVar20);
    pfVar16[-2] = fVar22;
    pfVar16[-1] = fVar23;
    *pfVar16 = fVar24;
    pfVar16[1] = fVar25;
    uVar21 = SUB84(puVar13 + 9,0);
    if ((uVar1 & 2) == 0) {
      fVar22 = fVar22 + _DAT_150a0ec90;
      fVar23 = fVar23 + fRam0000000150a0ec94;
      fVar24 = fVar24 + fRam0000000150a0ec98;
      fVar25 = fVar25 + fRam0000000150a0ec9c;
      puVar13[7] = fVar22;
      puVar13[8] = fVar23;
      puVar13[9] = fVar24;
      puVar13[10] = fVar25;
      auVar2._4_4_ = -(uint)(fVar25 <= fVar6);
      auVar2._0_4_ = -(uint)(fVar24 <= fVar5);
      auVar2._8_4_ = -(uint)(fVar3 <= fVar22);
      auVar2._12_4_ = -(uint)(fVar4 <= fVar23);
      iVar8 = movmskps(uVar1,auVar2);
      uVar15 = *(undefined4 *)(uVar11 + 0x2e8);
      if (iVar8 != 0xf) {
        puVar13[2] = 0;
        puVar13[1] = uVar21;
        *puVar13 = (int)(puVar13 + 7);
        *(undefined8 *)(puVar13 + -2) = 0x14075622a;
        FUN_1407e0084(uVar15);
        puVar14 = (undefined4 *)(ulonglong)(iVar12 - 0x3c);
        uVar15 = *(undefined4 *)(uVar11 + 0x2e8);
        puVar14[1] = 0x3f800000;
        *puVar14 = 0x3b;
        *(undefined8 *)(puVar14 + -2) = 0x140756247;
        uVar9 = FUN_140754a09();
        puVar14[5] = 0;
        puVar14[3] = puVar14[6];
        puVar14[2] = uVar9;
        puVar14[1] = uVar21;
        *puVar14 = (int)(puVar14 + 7);
        puVar14[4] = 0x40000000;
        *(undefined8 *)(puVar14 + -2) = 0x140756275;
        FUN_1407e3632(uVar15);
        puVar13 = (undefined4 *)(ulonglong)(iVar12 - 0x54);
        uVar21 = *(undefined4 *)(uVar11 + 0x2e8);
        *(undefined8 *)((longlong)puVar13 + -8) = 0x140756283;
        FUN_1407e0254(uVar21);
        goto LAB_1407562d4;
      }
    }
    else {
      uVar15 = *(undefined4 *)(uVar11 + 0x2e8);
    }
    puVar13[1] = 0x3f800000;
    *puVar13 = 0x3b;
    *(undefined8 *)(puVar13 + -2) = 0x14075629f;
    uVar9 = FUN_140754a09();
    puVar13[3] = puVar13[6];
    puVar13[2] = uVar9;
    puVar13[1] = uVar21;
    *puVar13 = (int)(puVar13 + 7);
    puVar13[5] = 0;
    puVar13[4] = 0x40000000;
    *(undefined8 *)(puVar13 + -2) = 0x1407562d1;
    FUN_1407e3632(uVar15);
    puVar13 = (undefined4 *)(ulonglong)(iVar12 - 0x48);
  }
LAB_1407562d4:
  if (_DAT_150adefe0 == (*(uint *)((longlong)puVar13 + 0x2c) ^ (uint)puVar13)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar13 + -8) = &UNK_1407562f7;
  FUN_1408802b0(*(uint *)((longlong)puVar13 + 0x2c) ^ (uint)puVar13);
}

