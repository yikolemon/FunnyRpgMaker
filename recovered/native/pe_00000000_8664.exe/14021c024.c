/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021c024 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140772db0) overlaps instruction at (ram,0x000140772dae)
    */
/* WARNING: Removing unreachable block (ram,0x000140772e14) */
/* WARNING: Removing unreachable block (ram,0x000140772de4) */
/* WARNING: Removing unreachable block (ram,0x000140772e47) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14021c024(byte *param_1,uint *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  float *pfVar21;
  uint uVar22;
  ulonglong uVar23;
  float *pfVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  uint *puVar36;
  ulonglong uVar37;
  longlong unaff_RBP;
  uint *unaff_RDI;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  ulonglong auStack_70 [2];
  undefined8 *puStack_60;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined1 auStack_2c [28];
  ulonglong local_10;
  
  puVar26 = (undefined4 *)auStack_58;
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  bVar6 = *param_1;
  if (0xd < (ulonglong)bVar6) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  pcVar16 = (char *)((longlong)&switchD_14021c056::caseD_4 +
                    (longlong)(int)(&switchD_14021c056::caseD_4)[bVar6]);
  cVar13 = (char)pcVar16;
  switch(bVar6) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
  case 3:
  case 6:
  case 0xd:
    return pcVar16;
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    out(0xc3,cVar13);
    piVar1 = (int *)((longlong)&switchD_14021c056::caseD_4 +
                    (longlong)(int)(&switchD_14021c056::caseD_4)[bVar6] + 1);
    *piVar1 = *piVar1 + (int)pcVar16;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *param_1 = *param_1 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
    *pcVar16 = *pcVar16 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    if (((pcVar16 == (char *)0x0) && ((int)param_1 == *(int *)(unaff_RBP + -0x14))) ||
       ((*param_2 & 4) != 0)) {
      if ((*(char *)((longlong)param_2 + 0x2e) == '\0') && (*(int *)(unaff_RBP + 8) != 0)) {
        *(undefined2 *)(ulonglong)*(uint *)(unaff_RBP + -0x20) = 0;
      }
      pcVar16 = (char *)0x1;
    }
    else {
      pcVar16 = (char *)0x0;
    }
    return pcVar16;
  case 10:
    pcVar16 = (char *)((ulonglong)pcVar16 & 0xffffffffffffff04);
    break;
  case 0xb:
    break;
  }
  uVar14 = (int)pcVar16 + 0xbe8d0000;
  *(char *)(ulonglong)uVar14 = *(char *)(ulonglong)uVar14 + (char)uVar14;
  uStack_54 = 0;
  uVar14 = (uint)param_2;
  if ((param_2[0x2a] & 7) == 1) {
    puStack_60 = (undefined8 *)((ulonglong)auStack_2c & 0xffffffff);
    *puStack_60 = 0;
    auStack_70[0] = (ulonglong)(uVar14 + 0x34);
    auStack_70[1] = 0;
    FUN_140769c26();
    puVar26 = (undefined4 *)(ulonglong)((int)auStack_70 + 0xc);
  }
  if ((int)(*unaff_RDI << 0x1a) >> 0x1d == 1) {
    *(undefined8 *)((longlong)puVar26 + -8) = 0;
    *(ulonglong *)((longlong)puVar26 + -0x10) = (ulonglong)(uVar14 + 0x3c);
    *(undefined8 *)((longlong)puVar26 + -0x18) = 0x140772dfd;
    FUN_14075fbc6();
    puVar26 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar26 + -0x10) + 8);
  }
  uVar7 = *unaff_RDI;
  *puVar26 = (int)unaff_RDI;
  if (((uVar7 & 0x1c0) == 0x80) && (param_2[0x29] != 0)) {
    *(ulonglong *)(puVar26 + -2) = (ulonglong)param_2[0x29];
    *(undefined8 *)(puVar26 + -4) = 0x140772e63;
    FUN_140769d4d();
    puVar26 = (undefined4 *)(ulonglong)((int)(puVar26 + -2) + 4);
  }
  *(ulonglong *)((longlong)puVar26 + -8) = (ulonglong)(uVar14 + 0x54);
  *(undefined8 *)((longlong)puVar26 + -0x10) = 0x140772e6f;
  FUN_140769d93();
  uVar27 = (ulonglong)((int)(undefined1 *)((longlong)puVar26 + -8) + 4);
  *(undefined8 *)(uVar27 - 8) = 0x140772e7f;
  FUN_14078172e((ulonglong)param_2 & 0xffffffff,uVar27 + 0x2c & 0xffffffff);
  *(undefined8 *)(uVar27 - 8) = 0;
  *(undefined8 *)(uVar27 - 0x10) = 0x140772e87;
  FUN_140769d32();
  uVar28 = (ulonglong)((int)(uVar27 - 8) + 4);
  *(undefined8 *)(uVar28 + 0x1c & 0xffffffff) = 0;
  *(undefined8 **)(uVar28 - 8) = (undefined8 *)(uVar28 + 0x1c & 0xffffffff);
  *(undefined8 *)(uVar28 - 0x10) = 2;
  *(undefined8 *)(uVar28 - 0x18) = 0x140772e9d;
  FUN_14075528c();
  uVar29 = (ulonglong)((int)(uVar28 - 0x10) + 8);
  *(undefined8 *)(uVar29 - 8) = 0x821139;
  *(undefined8 *)(uVar29 - 0x10) = 0;
  *(ulonglong *)(uVar29 - 0x18) = uVar27 + 0x2c & 0xffffffff;
  *(undefined8 *)(uVar29 - 0x20) = 0x140772eac;
  FUN_14075fbfb();
  uVar30 = (ulonglong)((int)(uVar29 - 0x18) + 0xc);
  *(undefined8 *)(uVar30 - 8) = 1;
  *(undefined8 *)(uVar30 - 0x10) = 0x140772eb6;
  FUN_140755394();
  pfVar21 = (float *)(ulonglong)((int)(uVar30 - 8) + 4);
  uVar7 = *(uint *)(unaff_RBP + 0x14cc);
  uVar38 = (ulonglong)uVar7;
  *(undefined8 *)((longlong)pfVar21 + -8) = 0x140772ec8;
  FUN_140774566((ulonglong)param_2 & 0xffffffff,uVar38);
  uVar22 = *(uint *)(uVar38 + 0x54);
  *(uint *)(uVar38 + 0x148) = uVar22;
  *(uint *)(uVar38 + 0x144) = *(uint *)(uVar38 + 0x50);
  param_2[0xd] = *(uint *)(uVar38 + 0x50);
  param_2[0xe] = uVar22;
  *(undefined8 *)(param_2 + 0xf) = *(undefined8 *)(uVar38 + 0x58);
  if (*(char *)((ulonglong)param_2[0x1e] + 0x100) == '\x01') {
    *(ulonglong *)((longlong)pfVar21 + -8) = (ulonglong)param_2[0x1e];
    *(undefined8 *)((longlong)pfVar21 + -0x10) = 0x140772efc;
    FUN_14076c9aa();
    pfVar21 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar21 + -8) + 4);
  }
  *(uint *)(ulonglong)(uint)*pfVar21 = *(uint *)(ulonglong)(uint)*pfVar21 & 0xfffffe00;
  if (((*(byte *)((longlong)param_2 + 0xad) & 1) != 0) && (param_2[0x1e] != 0)) {
    pfVar21[-2] = 3.8622515;
    pfVar21[-1] = 1.4013e-45;
    FUN_1407821f4((ulonglong)param_2 & 0xffffffff);
  }
  param_2[0x29] = 0;
  uVar22 = param_2[6];
  pfVar21[1] = 1.4013e-45;
  if (uVar22 == 0) {
    uVar22 = *(uint *)(unaff_RBP + 0x2048);
    while( true ) {
      if ((uVar22 == 0) || (*(uint *)((ulonglong)uVar22 + 0x3a8) == 0)) goto LAB_140772f84;
      uVar22 = *(uint *)((ulonglong)*(uint *)((ulonglong)uVar22 + 0x3a8) + 0x430);
      uVar9 = uVar22;
      if (uVar22 == 0) goto LAB_140772f84;
      do {
        uVar8 = uVar9;
        uVar9 = *(uint *)((ulonglong)uVar8 + 0x18);
      } while (uVar9 != 0);
      if (uVar8 == uVar14) break;
      uVar22 = *(uint *)((ulonglong)uVar8 + 0x78);
    }
    param_2[0x26] = *(uint *)(ulonglong)uVar22;
LAB_140772f84:
    if (uVar7 == 0) {
      bVar12 = false;
      goto LAB_140773284;
    }
    uVar22 = param_2[0x20];
    *pfVar21 = (float)uVar22;
    if ((uVar22 != 0 & SUB41(pfVar21[2],0) >> 3) == 1) {
      bVar12 = false;
      if ((*(int *)((ulonglong)uVar22 + 0x1c) != 0) ||
         (bVar12 = false, *(int *)((ulonglong)uVar22 + 0x24) != 0)) goto LAB_140773091;
      pfVar21[-2] = 3.862291;
      pfVar21[-1] = 1.4013e-45;
      uVar17 = FUN_14077018b();
      if (((int)uVar17 != 0) && (*(int *)(uVar17 + 0x10) != -1)) {
        *(ulonglong *)(pfVar21 + -2) = (ulonglong)((int)uVar17 + 0x14);
        pfVar21[-4] = 3.5449046e-29;
        pfVar21[-3] = 0.0;
        pfVar21[-6] = 3.8622978;
        pfVar21[-5] = 1.4013e-45;
        iVar15 = FUN_1408c84e0();
        pfVar21 = (float *)(ulonglong)((int)(pfVar21 + -4) + 8);
        if (iVar15 == 0) {
          uVar10 = *(undefined4 *)(ulonglong)*(uint *)(uVar17 & 0xffffffff);
          *(undefined8 *)((longlong)pfVar21 + -8) = 0x140772ff5;
          cVar13 = FUN_140774c44(uVar7,uVar10);
          bVar12 = true;
          if (cVar13 != '\0') goto LAB_140773091;
        }
      }
      uVar23 = (ulonglong)(uint)*pfVar21;
      uVar17 = uVar23;
      do {
        uVar20 = uVar17;
        uVar17 = (ulonglong)*(uint *)(uVar20 + 0x18);
      } while (*(uint *)(uVar20 + 0x18) != 0);
      fVar42 = *(float *)(uVar20 + 0x34);
      fVar2 = *(float *)(uVar20 + 0x38);
      fVar3 = *(float *)(uVar20 + 0x40);
      fVar4 = *(float *)(uVar20 + 0x3c);
      fVar40 = *(float *)(uVar23 + 0x34);
      uVar18 = *(undefined8 *)(uVar23 + 0x34);
      fVar39 = *(float *)(uVar23 + 0x38);
      pfVar21[0xc] = *(float *)(uVar23 + 0x38);
      pfVar21[0xb] = fVar40;
      fVar41 = (float)*(undefined8 *)(uVar23 + 0x3c) + (float)uVar18;
      fVar43 = (float)((ulonglong)*(undefined8 *)(uVar23 + 0x3c) >> 0x20) +
               (float)((ulonglong)uVar18 >> 0x20);
      *(ulonglong *)(pfVar21 + 0xd) = CONCAT44(fVar43,fVar41);
      if (fVar42 < fVar40) {
        fVar40 = fVar40 + *(float *)(unaff_RBP + 0x14c4);
        pfVar21[0xb] = fVar40;
      }
      if (fVar41 < fVar4 + fVar42) {
        fVar41 = fVar41 - *(float *)(unaff_RBP + 0x14c4);
        pfVar21[0xd] = fVar41;
      }
      if (fVar2 < fVar39) {
        fVar39 = fVar39 + *(float *)(unaff_RBP + 0x14c4);
        pfVar21[0xc] = fVar39;
      }
      fVar42 = fVar43;
      if (fVar43 < fVar3 + fVar2) {
        fVar42 = fVar43 - *(float *)(unaff_RBP + 0x14c4);
        pfVar21[0xe] = fVar42;
      }
      if ((fVar40 <= fVar41) && (fVar39 <= fVar42)) {
        pfVar21[3] = fVar41;
        pfVar21[4] = fVar42;
        pfVar21[5] = fVar43;
        pfVar21[6] = fVar43;
        puVar25 = (undefined8 *)((ulonglong)(pfVar21 + 7) & 0xffffffff);
        *puVar25 = CONCAT44(fVar42 - fVar39,fVar41 - fVar40);
        *(undefined8 **)(pfVar21 + -2) = puVar25;
        *(ulonglong *)(pfVar21 + -4) = (ulonglong)(pfVar21 + 0xb) & 0xffffffff;
        *(ulonglong *)(pfVar21 + -6) = uVar38;
        pfVar21[-8] = 3.862529;
        pfVar21[-7] = 1.4013e-45;
        FUN_140769ba7();
        fVar42 = *pfVar21;
        pfVar24 = pfVar21 + 1;
        pfVar21 = (float *)(ulonglong)((int)(pfVar21 + -6) + 0xc);
        uVar22 = *(uint *)(uVar38 + 0x3a0);
        if (uVar22 != 0) {
          *(ulonglong *)((longlong)pfVar21 + 0x1c) =
               CONCAT44(*pfVar24 -
                        (float)((ulonglong)*(undefined8 *)((longlong)pfVar21 + 0x2c) >> 0x20),
                        fVar42 - (float)*(undefined8 *)((longlong)pfVar21 + 0x2c));
          *(undefined8 **)((longlong)pfVar21 + -8) = puVar25;
          *(ulonglong *)((longlong)pfVar21 + -0x10) =
               (ulonglong)((longlong)pfVar21 + 0x28) & 0xffffffff;
          *(ulonglong *)((longlong)pfVar21 + -0x18) = (ulonglong)uVar22;
          *(undefined8 *)((longlong)pfVar21 + -0x20) = 0x1407733d9;
          FUN_140769ba7();
          pfVar21 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar21 + -0x18) + 0xc);
        }
      }
      bVar12 = true;
      if (param_2[6] == 0) goto LAB_140773091;
    }
    else {
      bVar12 = false;
LAB_140773091:
      uVar10 = *(undefined4 *)(uVar38 + 0x58);
      uVar5 = *(undefined4 *)(uVar38 + 0x50);
      *(undefined4 *)(ulonglong)((int)pfVar21 - 4) = *(undefined4 *)(uVar38 + 0x5c);
      *(undefined8 *)((undefined4 *)(ulonglong)((int)pfVar21 - 4) + -2) = 0x1407730b6;
      FUN_140781c1e(uVar5,0,uVar10);
      iVar15 = (int)unaff_RBP;
      *(ulonglong *)((longlong)pfVar21 + -8) = (ulonglong)(iVar15 + 0xe50);
      *(undefined8 *)((longlong)pfVar21 + -0x10) = 0x1c;
      *(undefined8 *)((longlong)pfVar21 + -0x18) = 0x1407730c7;
      FUN_140754c50();
      uVar31 = (ulonglong)((int)(undefined1 *)((longlong)pfVar21 + -0x10) + 8);
      *(ulonglong *)(uVar31 - 8) = (ulonglong)(iVar15 + 0x1010);
      *(undefined8 *)(uVar31 - 0x10) = 0x1e;
      *(undefined8 *)(uVar31 - 0x18) = 0x1407730d8;
      FUN_140754c50();
      uVar32 = (ulonglong)((int)(uVar31 - 0x10) + 8);
      *(ulonglong *)(uVar32 - 8) = (ulonglong)(iVar15 + 0x1000);
      *(undefined8 *)(uVar32 - 0x10) = 0x1d;
      *(undefined8 *)(uVar32 - 0x18) = 0x1407730e9;
      FUN_140754c50();
      uVar33 = (ulonglong)((int)(uVar32 - 0x10) + 8);
      *(undefined8 *)(uVar33 - 8) = 0x1407730f3;
      FUN_140782257((ulonglong)param_2 & 0xffffffff);
      *(undefined8 *)(uVar33 - 8) = 3;
      *(undefined8 *)(uVar33 - 0x10) = 0x1407730fa;
      FUN_140754d5e();
      pfVar21 = (float *)(ulonglong)((int)(uVar33 - 8) + 4);
    }
    uVar22 = (uint)*pfVar21;
LAB_140773100:
    puVar36 = (uint *)pfVar21;
    if (((param_2[7] == 0) && (param_2[9] == 0)) && ((param_2[0x2b] & 1) != 0)) {
      *pfVar21 = (float)uVar22;
      uVar22 = *(uint *)(uVar38 + 0x2e8);
      pfVar21[-2] = 0.0;
      pfVar21[-1] = 0.0;
      puVar36 = (uint *)(pfVar21 + -4);
      *(ulonglong *)(pfVar21 + -4) = (ulonglong)uVar22;
      pfVar21[-6] = 3.8623765;
      pfVar21[-5] = 1.4013e-45;
      FUN_1407e5d3c(uVar22 + 0x70);
      if (((uint)pfVar21[-2] & 8) == 0) {
        pfVar21[-6] = 1.0;
        pfVar21[-5] = 0.0;
        pfVar21[-8] = 6.02558e-44;
        pfVar21[-7] = 0.0;
        pfVar21[-10] = 3.862381;
        pfVar21[-9] = 1.4013e-45;
        uVar18 = FUN_140754a09();
        puVar34 = (undefined1 *)(ulonglong)((int)(pfVar21 + -8) + 8);
        param_2[0x14] = (uint)uVar18;
        puVar36 = (uint *)puVar34;
        if ((uint)uVar18 != 0) {
          uVar10 = *(undefined4 *)(uVar38 + 0x2e8);
          *(ulonglong *)((ulonglong)(puVar34 + 0x2c) & 0xffffffff) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 0xf) >> 0x20) +
                        (float)((ulonglong)*(undefined8 *)(param_2 + 0xd) >> 0x20),
                        (float)*(undefined8 *)(param_2 + 0xf) +
                        (float)*(undefined8 *)(param_2 + 0xd));
          *(undefined8 *)(puVar34 + -8) = 0;
          *(undefined8 *)(puVar34 + -0x10) = 0;
          *(undefined8 *)(puVar34 + -0x18) = uVar18;
          *(ulonglong *)(puVar34 + -0x20) = (ulonglong)(puVar34 + 0x20) & 0xffffffff;
          puVar36 = (uint *)(puVar34 + -0x28);
          *(ulonglong *)(puVar34 + -0x28) = (ulonglong)(uVar14 + 0x34);
          *(undefined8 *)(puVar34 + -0x30) = 0x140773177;
          FUN_1407e372a(uVar10);
        }
      }
      else {
        param_2[0x14] = 0;
      }
      *(byte *)(param_2 + 0x2b) = (byte)param_2[0x2b] | 4;
      uVar22 = *puVar36;
    }
    if ((((byte)((puVar36[2] & 8) >> 3) & param_2[6] == 0) == 1) && ((param_2[0x2b] & 1) != 0)) {
      *puVar36 = uVar22;
      uVar22 = *(uint *)(uVar38 + 0x2e8);
      puVar36[-2] = 0;
      puVar36[-1] = 0;
      *(ulonglong *)(puVar36 + -4) = (ulonglong)uVar22;
      puVar36[-6] = 0x407731c7;
      puVar36[-5] = 1;
      FUN_1407e5d3c(uVar22 + 0x70);
      if (bVar12) {
        puVar36[-6] = 0x3f800000;
        puVar36[-5] = 0;
        puVar36[-8] = 2;
        puVar36[-7] = 0;
        puVar36[-10] = 0x407731d7;
        puVar36[-9] = 1;
        uVar19 = FUN_140754a09();
        puVar35 = (uint *)(ulonglong)((int)(puVar36 + -8) + 8);
        uVar17 = (ulonglong)*puVar35;
        fVar42 = *(float *)(uVar17 + 0x34);
        fVar2 = *(float *)(uVar17 + 0x38);
        uVar18 = *(undefined8 *)(uVar17 + 0x3c);
        pfVar21 = (float *)((ulonglong)(puVar35 + 0xb) & 0xffffffff);
        *pfVar21 = fVar42;
        pfVar21[1] = fVar2;
        pfVar21[2] = (float)uVar18 + fVar42;
        pfVar21[3] = (float)((ulonglong)uVar18 >> 0x20) + fVar2;
        fVar42 = (float)param_2[0xd];
        fVar2 = (float)param_2[0xe];
        uVar18 = *(undefined8 *)(param_2 + 0xf);
        pfVar24 = (float *)((ulonglong)(puVar35 + 7) & 0xffffffff);
        *pfVar24 = fVar42;
        pfVar24[1] = fVar2;
        pfVar24[2] = (float)uVar18 + fVar42;
        pfVar24[3] = (float)((ulonglong)uVar18 >> 0x20) + fVar2;
        puVar35[-2] = 0;
        puVar35[-1] = 0;
        *(undefined8 *)(puVar35 + -4) = uVar19;
        *(float **)(puVar35 + -6) = pfVar21;
        *(float **)(puVar35 + -8) = pfVar24;
        *(undefined8 *)(puVar35 + -10) = *(undefined8 *)(uVar38 + 0x2e8);
        puVar35[-0xc] = 0x4077321b;
        puVar35[-0xb] = 1;
        FUN_1407ec996();
        puVar36 = (uint *)(ulonglong)((int)(puVar35 + -10) + 0x14);
      }
      else {
        uVar10 = *(undefined4 *)(uVar38 + 0x2e8);
        puVar36[-6] = 0x3f800000;
        puVar36[-5] = 0;
        puVar36[-8] = 2;
        puVar36[-7] = 0;
        puVar36[-10] = 0x40773232;
        puVar36[-9] = 1;
        uVar18 = FUN_140754a09();
        uVar37 = (ulonglong)((int)(puVar36 + -8) + 8);
        *(ulonglong *)(uVar37 + 0x2c & 0xffffffff) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(param_2 + 0xf) >> 0x20) +
                      (float)((ulonglong)*(undefined8 *)(param_2 + 0xd) >> 0x20),
                      (float)*(undefined8 *)(param_2 + 0xf) + (float)*(undefined8 *)(param_2 + 0xd))
        ;
        *(undefined8 *)(uVar37 - 8) = 0;
        *(undefined8 *)(uVar37 - 0x10) = 0;
        *(undefined8 *)(uVar37 - 0x18) = uVar18;
        *(ulonglong *)(uVar37 - 0x20) = uVar37 + 0x20 & 0xffffffff;
        puVar36 = (uint *)(uVar37 - 0x28);
        *(ulonglong *)(uVar37 - 0x28) = (ulonglong)(uVar14 + 0x34);
        *(undefined8 *)(uVar37 - 0x30) = 0x14077325e;
        FUN_1407e372a(uVar10);
      }
    }
    uVar14 = *(uint *)(uVar38 + 0x2e8);
    *(undefined8 *)((longlong)puVar36 + -8) = 1;
    pfVar21 = (float *)((longlong)puVar36 + -0x10);
    *(ulonglong *)((longlong)puVar36 + -0x10) = (ulonglong)uVar14;
    *(undefined8 *)((longlong)puVar36 + -0x18) = 0x14077326f;
    FUN_1407e5d3c(uVar14 + 0x70);
    if ((int)param_2[9] < 1) {
      bVar12 = true;
      pfVar21 = (float *)((longlong)puVar36 + -0x10);
      goto LAB_140773284;
    }
    *(undefined8 *)((longlong)puVar36 + -0x18) = 0x14077327e;
    FUN_14078285c((ulonglong)param_2 & 0xffffffff,uVar7);
    bVar12 = true;
  }
  else {
    bVar12 = false;
    if (uVar7 != 0) {
      uVar22 = param_2[0x20];
      goto LAB_140773100;
    }
LAB_140773284:
    param_2[0x28] = 0;
    *(byte *)(param_2 + 0x2b) = (byte)param_2[0x2b] & 0xbd;
  }
  if ((param_2[0xc] == 0) || (uVar14 = *(uint *)((ulonglong)param_2[0xc] + 0x18), uVar14 == 0)) {
    if ((int)param_2[9] < 1) goto LAB_1407732ba;
    uVar14 = *(uint *)((ulonglong)*(uint *)(ulonglong)param_2[0xb] + 0xb8);
  }
  param_2[0x27] = uVar14;
LAB_1407732ba:
  if (bVar12) {
    cVar13 = (char)*(undefined4 *)((longlong)pfVar21 + 4);
    if ((((param_2[0x2b] & 1) != 0) && (param_2[6] == 0)) &&
       ((*(uint *)(unaff_RBP + 0x14dc) == 0 ||
        (*(uint *)((ulonglong)*(uint *)(unaff_RBP + 0x14dc) + 0x3b0) != uVar7)))) {
      *(ulonglong *)((longlong)pfVar21 + -8) = uVar38;
      *(undefined8 *)((longlong)pfVar21 + -0x10) = 0x1407732e9;
      FUN_140768d1b();
      pfVar21 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar21 + -8) + 4);
    }
    param_2[0x24] = *(uint *)(unaff_RBP + 4);
    if (param_2[7] != 0) {
      *(undefined8 *)((longlong)pfVar21 + -8) = 0x140773301;
      FUN_140772a6c();
    }
    if (param_2[8] != 0) {
      *(undefined8 *)((longlong)pfVar21 + -8) = 0x14077330d;
      FUN_140772a6c();
    }
    if (param_2[6] == 0) {
      *(undefined8 *)((longlong)pfVar21 + -8) = 0x14077331a;
      FUN_14077e794(uVar7);
    }
  }
  else {
    param_2[0x24] = *(uint *)(unaff_RBP + 4);
    cVar13 = (char)*(undefined4 *)((longlong)pfVar21 + 4);
  }
  if (cVar13 != '\0') {
    *(undefined8 *)((longlong)pfVar21 + -8) = 0x140773332;
    FUN_140762c14();
  }
  uVar14 = *(uint *)((longlong)pfVar21 + 0x40) ^ (uint)pfVar21;
  if (_DAT_150afc03e != uVar14) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)pfVar21 + -8) = FUN_1407733f8;
    FUN_1408802b0(*(uint *)((longlong)pfVar21 + 0x40) ^ (uint)pfVar21);
  }
  return (char *)(ulonglong)uVar14;
}

