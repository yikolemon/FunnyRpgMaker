/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140795c6a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140795c6a(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint3 uVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  float *pfVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined7 uVar21;
  ulonglong uVar19;
  undefined4 *puVar20;
  uint7 uVar22;
  ulonglong uVar23;
  int iVar24;
  float fVar25;
  ulonglong uVar27;
  uint *puVar28;
  uint *puVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  undefined1 *puVar38;
  uint *puVar39;
  undefined1 *puVar40;
  undefined4 *puVar41;
  ulonglong uVar42;
  undefined1 *puVar43;
  ulonglong uVar44;
  undefined4 *puVar45;
  ulonglong uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  undefined1 *puVar50;
  undefined1 *puVar51;
  undefined1 *puVar52;
  undefined1 *puVar53;
  ulonglong uVar54;
  undefined1 *puVar55;
  undefined1 *puVar56;
  ulonglong uVar57;
  undefined1 *puVar58;
  ulonglong uVar59;
  undefined1 *puVar60;
  undefined1 *puVar61;
  undefined1 *puVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  float *pfVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  ulonglong uVar71;
  ulonglong uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  float *pfVar76;
  int *piVar77;
  ulonglong uVar78;
  ulonglong uVar79;
  float *pfVar80;
  undefined4 *puVar81;
  undefined4 *puVar82;
  float *pfVar83;
  undefined4 *puVar84;
  ulonglong uVar85;
  ulonglong uVar86;
  float *pfVar87;
  double *pdVar88;
  ulonglong uVar89;
  float *pfVar90;
  ulonglong uVar91;
  float *pfVar92;
  ulonglong uVar93;
  ulonglong uVar94;
  ulonglong uVar95;
  ulonglong uVar96;
  undefined1 *puVar97;
  undefined1 *puVar98;
  ulonglong uVar99;
  ulonglong uVar100;
  ulonglong uVar101;
  ulonglong uVar102;
  ulonglong uVar103;
  ulonglong uVar104;
  float *pfVar105;
  uint uVar106;
  ulonglong uVar107;
  longlong in_R11;
  longlong unaff_R14;
  int unaff_R15D;
  longlong in_FS_OFFSET;
  bool bVar108;
  float10 in_ST0;
  float10 fVar109;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  uint uVar110;
  uint uVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar117 [16];
  ulonglong uVar26;
  
  uVar104 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  iVar24 = (int)&stack0xffffffffffffffe0;
  fVar25 = (float)(iVar24 - 0x1f0);
  uVar26 = (ulonglong)(uint)fVar25;
  pfVar105 = (float *)(ulonglong)(uint)fVar25;
  pfVar105[0x76] = SUB84(&stack0xfffffffffffffff8,0);
  pfVar16 = (float *)(ulonglong)(iVar24 - 0x10U);
  pfVar16[-1] = fVar25;
  pfVar16[2] = -NAN;
  pfVar16[1] = 2.946047e-29;
  fVar25 = *(float *)(in_FS_OFFSET + 0x140795c9f);
  *pfVar16 = fVar25;
  *(uint *)(in_FS_OFFSET + -0x28b3f27500000000) = iVar24 - 0x10U;
  *(undefined1 *)((ulonglong)*(uint *)((ulonglong)(uint)fVar25 + 0x14cc) + 0xfb) = 1;
  pfVar105[1] = fVar25;
  fVar25 = *(float *)((ulonglong)(uint)fVar25 + 0x14cc);
  pfVar105[0x20] = fVar25;
  if (*(char *)((ulonglong)(uint)fVar25 + 0xfe) != '\0') {
    fVar25 = 0.0;
    goto code_r0x00014079892a;
  }
  if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) != 0) {
    *(undefined8 *)(uVar26 - 8) = 0x140795ce5;
    FUN_14076d519();
  }
  fVar25 = pfVar105[0x20];
  *(undefined8 *)(uVar26 - 8) = 0;
  uVar107 = (ulonglong)*(uint *)(uVar104 + 8);
  *(ulonglong *)(uVar26 - 0x10) = uVar107;
  *(undefined8 *)(uVar26 - 0x18) = 0x140795cf7;
  fVar25 = (float)FUN_14075a0a4(fVar25);
  pfVar105[2] = fVar25;
  *(undefined8 *)(uVar26 - 0x18) = 0;
  *(ulonglong *)(uVar26 - 0x20) = uVar107;
  *(undefined8 *)(uVar26 - 0x28) = 0x140795d01;
  uVar17 = FUN_14075544d();
  uVar27 = (ulonglong)((int)(uVar26 - 0x20) + 8);
  *(undefined8 *)(uVar27 - 8) = 0xffffffffbf800000;
  *(undefined8 *)(uVar27 - 0x10) = 0;
  pfVar105[99] = (float)uVar17;
  *(undefined8 *)(uVar27 - 0x18) = uVar17;
  *(ulonglong *)(uVar27 - 0x20) = uVar107;
  *(ulonglong *)(uVar27 - 0x28) = (ulonglong)(iVar24 - 0x48);
  *(undefined8 *)(uVar27 - 0x30) = 0x140795d1e;
  FUN_1407559fe();
  iVar13 = (int)(uVar27 - 0x28);
  if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) {
    fVar25 = pfVar105[0x6b];
    uVar107 = (ulonglong)(uint)pfVar105[1];
  }
  else {
    uVar107 = (ulonglong)(uint)pfVar105[1];
    fVar25 = *(float *)(uVar107 + 0x1228) * _DAT_150a4ec54;
  }
  *pfVar105 = *(float *)(uVar107 + 0xd10) + *(float *)(uVar107 + 0xd10) + fVar25;
  *(undefined8 *)((ulonglong)(iVar13 + 0x14) - 8) = 0x140795d65;
  FUN_14076d403();
  uVar106 = *(uint *)(ulonglong)*(uint *)(uVar104 + 0x18);
  uVar12 = ((uint *)(ulonglong)*(uint *)(uVar104 + 0x18))[1];
  puVar28 = (uint *)(uVar27 - 0x28 & 0xffffffff);
  puVar28[4] = (uint)*pfVar105;
  puVar28[3] = (uint)(float)in_ST0;
  puVar28[2] = uVar12;
  puVar28[1] = uVar106;
  *puVar28 = iVar24 - 0x20U;
  puVar28[-2] = 0x40795d9c;
  puVar28[-1] = 1;
  FUN_1407642f7();
  *(undefined8 *)(pfVar105 + 0x24) = *(undefined8 *)(ulonglong)(iVar24 - 0x20U);
  pfVar105[0x26] = 0.0;
  pfVar105[0x27] = 0.0;
  fVar25 = 0.0;
  if (0.0 < pfVar105[0x6a]) {
    fVar25 = pfVar105[0x6a] + *(float *)(uVar107 + 0xd24);
  }
  uVar12 = *(uint *)(uVar104 + 0x1c);
  uVar19 = (ulonglong)(uint)pfVar105[0x20];
  fVar112 = *(float *)(uVar19 + 0x144);
  fVar113 = *(float *)(uVar19 + 0x148);
  uVar17 = *(undefined8 *)(uVar19 + 0x144);
  pfVar105[0x49] = fVar112;
  pfVar105[0x4a] = fVar113;
  fVar116 = SUB164(*(undefined1 (*) [16])(pfVar105 + 0x24),0);
  fVar115 = SUB164(*(undefined1 (*) [16])(pfVar105 + 0x24),4);
  fVar114 = (float)uVar17;
  fVar14 = (float)((ulonglong)uVar17 >> 0x20);
  *(ulonglong *)(pfVar105 + 0x4b) = CONCAT44(fVar115 + fVar14,fVar116 + fVar114);
  fVar25 = fVar116 + fVar25 + fVar114;
  fVar115 = fVar115 + fVar14;
  *pfVar105 = fVar113;
  pfVar105[0x6d] = fVar113;
  pfVar105[0x6c] = fVar112;
  *(ulonglong *)(pfVar105 + 0x6e) = CONCAT44(fVar115,fVar25);
  uVar106 = *(uint *)(uVar107 + 0xd10);
  fVar25 = fVar25 - fVar114;
  fVar115 = fVar115 - fVar14;
  if ((uVar12 >> 0x1a & 1) == 0) {
    *(ulonglong *)(ulonglong)(iVar24 - 0x144U) = CONCAT44(fVar115,fVar25);
    puVar39 = (uint *)(ulonglong)(iVar13 + 0xc);
    puVar39[1] = uVar106;
    *puVar39 = iVar24 - 0x144U;
    puVar39[-2] = 0x4079607a;
    puVar39[-1] = 1;
    FUN_1407646e0();
    puVar38 = (undefined1 *)(ulonglong)(iVar13 + 0x14);
    pfVar105[0x1d] = 0.0;
    if ((uVar12 >> 0x1b & 1) == 0) {
      pfVar105[0x1d] = 0.0;
      *(undefined8 *)(puVar38 + -8) = 0x100000;
      *(ulonglong *)(puVar38 + -0x10) = (ulonglong)(iVar24 - 0xcc);
      uVar107 = (ulonglong)(uint)pfVar105[2];
      *(ulonglong *)(puVar38 + -0x18) = uVar107;
      *(ulonglong *)(puVar38 + -0x20) = (ulonglong)(iVar24 - 0x40);
      *(undefined8 *)(puVar38 + -0x28) = 0x1407960ad;
      cVar8 = FUN_1407648a8();
      puVar38 = (undefined1 *)(ulonglong)((int)(puVar38 + -0x20) + 0x10);
      pfVar105[0x43] = 0.0;
      pfVar105[0x5c] = pfVar105[0x24];
      pfVar105[0x5d] = pfVar105[0x25];
      pfVar105[0x5e] = pfVar105[0x26];
      pfVar105[0x5f] = pfVar105[0x27];
      pfVar105[0xb] = pfVar105[0x20];
      if (cVar8 == '\0') goto code_r0x000140798926;
    }
    else {
      pfVar105[0x43] = 0.0;
      pfVar105[0x5c] = pfVar105[0x24];
      pfVar105[0x5d] = pfVar105[0x25];
      pfVar105[0x5e] = pfVar105[0x26];
      pfVar105[0x5f] = pfVar105[0x27];
      pfVar105[0xb] = pfVar105[0x20];
      uVar107 = (ulonglong)(uint)pfVar105[2];
    }
LAB_1407960ff:
    uVar106 = *(uint *)((ulonglong)(uint)pfVar105[1] + 0x1e84);
    uVar19 = (ulonglong)(iVar24 - 0xcc);
    *pfVar105 = 0.0;
    *(ulonglong *)(puVar38 + -8) = (ulonglong)(uVar106 | 0x8000);
    *(ulonglong *)(puVar38 + -0x10) = uVar107;
    *(ulonglong *)(puVar38 + -0x18) = uVar19;
    *(undefined8 *)(puVar38 + -0x20) = 0x140796121;
    cVar8 = FUN_14075abc2();
    puVar40 = (undefined1 *)(ulonglong)((int)(puVar38 + -0x18) + 0xc);
    pfVar105[0x18] = 0.0;
    if (cVar8 != '\0') {
      *(undefined8 *)(puVar40 + -8) = 1;
      *(undefined8 *)(puVar40 + -0x10) = 0x140796138;
      FUN_14076bfe5();
      puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
      pfVar105[0x18] =
           (float)(CONCAT31((int3)((uint)pfVar105[1] >> 8),
                            *(undefined1 *)((ulonglong)(uint)pfVar105[1] + 0x2041)) ^ 1);
    }
    fVar25 = pfVar105[2];
    if (fVar25 != 0.0) {
      pcVar18 = (char *)(ulonglong)_DAT_2470888d1039d74c;
      *pcVar18 = *pcVar18 + (char)_DAT_2470888d1039d74c;
      fVar112 = 0.0;
      if (*(float *)(pcVar18 + 0x247c) == fVar25) {
        fVar112 = (float)uVar19;
      }
      *pfVar105 = fVar112;
    }
    pfVar105[6] = *(float *)((ulonglong)(uint)pfVar105[1] + 0x1e84);
    uVar106 = *(uint *)(uVar104 + 0x1c);
    *(bool *)(pfVar105 + 0x54) = (uVar106 >> 10 & 1) == 0;
    *(bool *)(pfVar105 + 5) = (uVar106 >> 0x10 & 1) == 0;
    pfVar105[0x1e] = 0.0;
    if ((uVar106 >> 0x18 & 1) != 0) {
      *(float **)(puVar40 + -8) = (float *)(ulonglong)(iVar24 - 0x144);
      *(undefined8 *)(puVar40 + -0x10) = 0x1407961a6;
      FUN_1407642b4();
      fVar25 = 0.0;
      if (*(char *)((ulonglong)(uint)pfVar105[0xb] + 0xf5) == '\0') {
        fVar25 = (float)(*(uint *)((ulonglong)(uint)pfVar105[1] + 0xd44) ^ _DAT_150a257ef);
      }
      puVar41 = (undefined4 *)(ulonglong)((int)(puVar40 + -8) - 4);
      puVar41[1] = *(float *)(ulonglong)(iVar24 - 0x144) + fVar25;
      *puVar41 = 0x3f800000;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar41 + -2) = &UNK_1407961e8;
      FUN_140755a9a();
    }
    if (*(char *)(pfVar105 + 0x18) == '\0') {
      pfVar105[0xd] = 0.0;
      uVar107 = (ulonglong)(uint)pfVar105[1];
    }
    else {
      uVar107 = (ulonglong)(uint)pfVar105[1];
      pfVar105[0xd] = (float)CONCAT71((int7)(uVar19 >> 8),*(undefined1 *)(uVar107 + 0xb18));
    }
    fVar25 = *(float *)(uVar107 + 0x1528);
    if (fVar25 == pfVar105[2]) {
      pfVar105[0x38] = 0.0;
    }
    else {
      pfVar105[0x38] =
           (float)CONCAT71((int7)(uVar107 >> 8),*(float *)(uVar107 + 0x2058) == pfVar105[2]);
    }
    pfVar105[6] = (float)((uint)pfVar105[6] >> 2);
    bVar7 = 1;
    if (*(char *)(pfVar105 + 0xd) == '\0') {
      bVar7 = (byte)((uint)*(undefined4 *)(uVar104 + 0x1c) >> 0x1b) & fVar25 == 0.0 |
              *(byte *)(pfVar105 + 0x38) |
              *(float *)((ulonglong)(uint)pfVar105[1] + 0x2548) == pfVar105[2];
    }
    pfVar105[6] = (float)((uint)pfVar105[6] & 0x200);
    if (((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) || (*pfVar105 == 0.0)) {
      pfVar105[9] = 0.0;
      if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) != 0) {
        pfVar105[0x10] = 0.0;
        goto code_r0x000140796358;
      }
      pfVar105[0x44] = _DAT_150a4eca2;
      pfVar105[0x10] = 0.0;
    }
    else {
      *(undefined8 *)(puVar40 + -8) = 1;
      *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(pfVar105 + 0xb);
      *(undefined8 *)(puVar40 + -0x18) = 0x140796296;
      uVar17 = FUN_14078696f();
      puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
      fVar112 = pfVar105[1];
      fVar25 = *(float *)((ulonglong)(uint)fVar112 + 0x1528);
      if (fVar25 == 0.0) {
        pfVar105[0x10] =
             (float)CONCAT31((int3)((uint)fVar112 >> 8),
                             *(float *)((ulonglong)(uint)fVar112 + 0x1550) == (float)uVar17);
      }
      else {
        pfVar105[0x10] = 0.0;
      }
      pfVar105[9] = (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),fVar25 == (float)uVar17);
code_r0x000140796358:
      pfVar105[0x44] = *(float *)((ulonglong)(uint)pfVar105[0xb] + 200);
    }
    pfVar105[6] = (float)((uint)pfVar105[6] | *(uint *)(uVar104 + 0x1c));
    fVar112 = *(float *)(uVar104 + 0x10);
    pfVar105[7] = fVar112;
    uVar107 = (ulonglong)(uint)*pfVar105;
    if (*pfVar105 == 0.0) {
      uVar107 = 0;
      pfVar105[8] = 0.0;
      if (((bVar7 | *(byte *)(pfVar105 + 0x10)) & 1) == 0) goto LAB_140796439;
LAB_1407963de:
      pfVar105[0x3c] = (float)uVar107;
      uVar21 = (undefined7)(uVar107 >> 8);
      pfVar105[10] = (float)CONCAT71(uVar21,1);
      if (((fVar25 != pfVar105[2]) || (*(char *)(pfVar105 + 0x3c) != '\0')) ||
         (*(char *)(pfVar105 + 8) != '\0')) goto code_r0x00014079646c;
      uVar19 = (ulonglong)(uint)pfVar105[1];
      pfVar105[3] = (float)CONCAT71(uVar21,*(undefined1 *)(uVar19 + 0x79));
      pfVar105[4] = 0.0;
code_r0x00014079685f:
      fVar25 = pfVar105[2];
      if (*(float *)(uVar19 + 0x1528) == fVar25) {
LAB_1407968a7:
        pfVar105[0x10] = 0.0;
      }
      else {
        uVar107 = (ulonglong)(uint)pfVar105[0x20];
        *(ulonglong *)(puVar40 + -8) = uVar107;
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(puVar40 + -0x18) = 0x140796878;
        FUN_14075a58a();
        uVar46 = (ulonglong)((int)(puVar40 + -0x10) + 8);
        *(ulonglong *)(uVar46 - 8) = uVar107;
        *(ulonglong *)(uVar46 - 0x10) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(uVar46 - 0x18) = 0x140796882;
        FUN_14076f087();
        uVar47 = (ulonglong)((int)(uVar46 - 0x10) + 8);
        *(undefined8 *)(uVar47 - 8) = 0;
        *(ulonglong *)(uVar47 - 0x10) = uVar107;
        *(undefined8 *)(uVar47 - 0x18) = 0x14079688d;
        FUN_14075b3b2();
        puVar40 = (undefined1 *)(ulonglong)((int)(uVar47 - 0x10) + 8);
        if (*(char *)(pfVar105 + 0x38) == '\0') goto LAB_1407968a7;
        *(undefined8 *)(puVar40 + -8) = 0x14079689e;
        FUN_14076ef8b();
        pfVar105[0x10] = 0.0;
      }
      uVar19 = (ulonglong)(uint)pfVar105[1];
    }
    else {
      bVar9 = *(byte *)(pfVar105 + 0x10);
      if (*(char *)(uVar107 + 0x59) == '\x01') {
        *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
        *(undefined8 *)(puVar40 + -0x10) = 0x140796395;
        uVar17 = FUN_1408c85c0();
        uVar42 = (ulonglong)((int)(puVar40 + -8) + 4);
        *(undefined1 *)(uVar107 + 0x59) = 0;
        uVar11 = *(undefined4 *)(uVar107 + 0x20);
        pfVar105[0x10] = (float)uVar17;
        *(undefined8 *)(uVar42 - 8) = uVar17;
        *(undefined8 *)(uVar42 - 0x10) = *(undefined8 *)(uVar104 + 0x10);
        *(undefined8 *)(uVar42 - 0x18) = *(undefined8 *)(uVar107 + 0x10);
        *(undefined8 *)(uVar42 - 0x20) = 0x1407963b0;
        FUN_14079aaad(uVar107,uVar11);
        puVar43 = (undefined1 *)(ulonglong)((int)(uVar42 - 0x18) + 0xc);
        fVar25 = (float)(*(int *)(uVar104 + 0x14) + 1);
        iVar13 = *(int *)(uVar107 + 0x1c);
        if (*(int *)(uVar104 + 0x14) < iVar13) {
          uVar19 = (ulonglong)*(uint *)(uVar107 + 0x20);
        }
        else {
          if (iVar13 == 0) {
            fVar112 = 1.12104e-44;
          }
          else {
            fVar112 = (float)(iVar13 / 2 + iVar13);
          }
          pfVar105[0x3c] = fVar25;
          if ((int)fVar112 <= (int)fVar25) {
            fVar112 = fVar25;
          }
          pfVar105[8] = fVar112;
          *(ulonglong *)(puVar43 + -8) = (ulonglong)(uint)fVar112;
          *(undefined8 *)(puVar43 + -0x10) = 0x140796501;
          fVar25 = (float)FUN_1407520ca();
          puVar43 = (undefined1 *)(ulonglong)((int)(puVar43 + -8) + 4);
          uVar19 = (ulonglong)(uint)fVar25;
          uVar107 = (ulonglong)(uint)*pfVar105;
          uVar106 = *(uint *)(uVar107 + 0x20);
          if (uVar106 != 0) {
            *(undefined8 *)(puVar43 + -8) = *(undefined8 *)(uVar107 + 0x18);
            *(ulonglong *)(puVar43 + -0x10) = (ulonglong)uVar106;
            *(ulonglong *)(puVar43 + -0x18) = uVar19;
            pfVar105[3] = fVar25;
            *(undefined8 *)(puVar43 + -0x20) = 0x14079651d;
            FUN_1408b31a0();
            *(undefined8 *)((ulonglong)((int)(puVar43 + -0x18) + 0xc) - 8) =
                 *(undefined8 *)(uVar107 + 0x20);
                    /* WARNING: Subroutine does not return */
            *(undefined **)((ulonglong)((int)(puVar43 + -0x18) + 0xc) - 0x10) = &UNK_140796528;
            FUN_14075219b();
          }
          *(float *)(uVar107 + 0x20) = fVar25;
          *(float *)(uVar107 + 0x1c) = pfVar105[8];
          fVar25 = pfVar105[0x3c];
        }
        *(float *)(uVar107 + 0x18) = fVar25;
        fVar25 = pfVar105[0x10];
        *(float *)(uVar107 + 0x10) = fVar25;
        *(ulonglong *)(puVar43 + -8) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(puVar43 + -0x10) = *(undefined8 *)(uVar104 + 0x10);
        *(ulonglong *)(puVar43 + -0x18) = uVar19;
        *(undefined8 *)(puVar43 + -0x20) = 0x140796554;
        FUN_1408b31a0();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar43 + -0x18) + 0xc);
        *(undefined4 *)((ulonglong)*(uint *)(uVar107 + 4) + 4) = *(undefined4 *)(uVar107 + 0x5c);
        uVar11 = *(undefined4 *)(uVar107 + 0x60);
        *(undefined4 *)((ulonglong)*(uint *)(uVar107 + 4) + 8) = uVar11;
        uVar106 = *(uint *)(uVar107 + 4);
        *(undefined4 *)(ulonglong)uVar106 = uVar11;
        uVar19 = (ulonglong)(uint)pfVar105[1];
        uVar5 = (uint3)(uVar106 >> 8);
        pfVar105[3] = (float)CONCAT31(uVar5,*(undefined1 *)(uVar19 + 0x79));
        pfVar105[4] = 0.0;
        bVar7 = (bVar7 | bVar9) & 1;
        pfVar105[0x10] = (float)CONCAT71((uint7)uVar5,1);
joined_r0x00014079683b:
        if (bVar7 != 0) goto code_r0x00014079685f;
      }
      else {
        uVar106 = *(uint *)(uVar104 + 0x1c);
        pfVar105[8] = (float)((*(uint *)(uVar107 + 8) ^ (uint)pfVar105[6]) >> 9 & 1);
        uVar107 = (ulonglong)
                  CONCAT31((int3)((uint)fVar112 >> 8),
                           (bool)*(char *)((ulonglong)*(uint *)(uVar107 + 4) + 0x17) !=
                           ((uVar106 >> 0x1a & 1) == 0));
        if (((bVar7 | bVar9) & 1) != 0) goto LAB_1407963de;
LAB_140796439:
        pfVar105[10] = 0.0;
        pfVar105[0x3c] = (float)uVar107;
        if (((char)uVar107 != '\0') || (*(char *)(pfVar105 + 8) != '\0')) {
code_r0x00014079646c:
          uVar107 = (ulonglong)(uint)pfVar105[1];
          *pfVar105 = (float)((int)pfVar105[1] + 0x2470);
          *(undefined8 *)(puVar40 + -8) = 0x14079647c;
          FUN_14079a3b4();
          *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(uVar107 + 0x247c);
          *(undefined8 *)(puVar40 + -0x10) = 0x140796487;
          FUN_14079a987();
          uVar44 = (ulonglong)((int)(puVar40 + -8) + 4);
          *(undefined8 *)(uVar44 - 8) = *(undefined8 *)(uVar104 + 0x10);
          *(undefined8 *)(uVar44 - 0x10) = 0x140796492;
          fVar25 = (float)FUN_1408c85c0();
          puVar40 = (undefined1 *)(ulonglong)((int)(uVar44 - 8) + 4);
          pfVar105[3] = fVar25;
          if (*(char *)(pfVar105 + 0x10) == '\0') {
            fVar25 = (float)((int)pfVar105[3] + 1);
            iVar13 = *(int *)(uVar107 + 0x2498);
            if ((int)pfVar105[3] < iVar13) {
              uVar19 = (ulonglong)*(uint *)(uVar107 + 0x249c);
            }
            else {
              if (iVar13 == 0) {
                fVar112 = 1.12104e-44;
              }
              else {
                fVar112 = (float)(iVar13 / 2 + iVar13);
              }
              pfVar105[0x10] = fVar25;
              if ((int)fVar112 <= (int)fVar25) {
                fVar112 = fVar25;
              }
              *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
              *(undefined8 *)(puVar40 + -0x10) = 0x1407965a4;
              uVar19 = FUN_1407520ca();
              puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
              uVar107 = (ulonglong)(uint)pfVar105[1];
              uVar106 = *(uint *)(uVar107 + 0x249c);
              if (uVar106 != 0) {
                *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(uVar107 + 0x2494);
                *(ulonglong *)(puVar40 + -0x10) = (ulonglong)uVar106;
                *(ulonglong *)(puVar40 + -0x18) = uVar19;
                pfVar105[4] = (float)uVar19;
                *(undefined8 *)(puVar40 + -0x20) = 0x1407965c5;
                FUN_1408b31a0();
                *(undefined8 *)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 8) =
                     *(undefined8 *)(uVar107 + 0x249c);
                    /* WARNING: Subroutine does not return */
                *(undefined **)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 0x10) = &UNK_1407965d3;
                FUN_14075219b();
              }
              *(float *)(uVar107 + 0x249c) = (float)uVar19;
              *(float *)(uVar107 + 0x2498) = fVar112;
              fVar25 = pfVar105[0x10];
            }
            *(float *)(uVar107 + 0x2494) = fVar25;
            *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar25;
            *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(uVar104 + 0x10);
            *(ulonglong *)(puVar40 + -0x18) = uVar19;
            *(undefined8 *)(puVar40 + -0x20) = 0x1407965fb;
            FUN_1408b31a0();
            puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
          }
          bVar7 = (SUB41(pfVar105[0x3c],0) ^ 1) & *(float *)(uVar107 + 0x247c) == pfVar105[2];
          pfVar105[0x3c] = (float)CONCAT31((int3)((uint)pfVar105[0x3c] >> 8),bVar7);
          if (((~bVar7 | *(byte *)(pfVar105 + 8)) & 1) == 0) {
            if ((*(float *)(uVar107 + 0x2480) == pfVar105[3]) &&
               (uVar106 = *(uint *)((ulonglong)(uint)pfVar105[1] + 0x2490), uVar106 != 0)) {
              *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)pfVar105[3];
              *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(uVar104 + 0x10);
              *(ulonglong *)(puVar40 + -0x18) = (ulonglong)uVar106;
              *(undefined8 *)(puVar40 + -0x20) = 0x14079664c;
              uVar17 = FUN_1408c8650();
              puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
              if ((int)uVar17 != 0) goto LAB_140796657;
              pfVar105[0x3c] = (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
            }
            else {
LAB_140796657:
              pfVar105[0x3c] = 0.0;
            }
            uVar107 = (ulonglong)(uint)pfVar105[1];
          }
          fVar25 = pfVar105[6];
          *(float *)(uVar107 + 0x247c) = pfVar105[2];
          *(float *)(uVar107 + 0x2480) = pfVar105[3];
          *(undefined1 *)(uVar107 + 0x24c7) = 0;
          if (((uint)fVar25 >> 9 & 1) == 0) {
            fVar25 = (float)(*(int *)(uVar104 + 0x14) + 1);
            iVar13 = *(int *)(uVar107 + 0x248c);
            if (*(int *)(uVar104 + 0x14) < iVar13) {
              uVar19 = (ulonglong)*(uint *)(uVar107 + 0x2490);
              fVar112 = pfVar105[3];
            }
            else {
              if (iVar13 == 0) {
                fVar112 = 1.12104e-44;
              }
              else {
                fVar112 = (float)(iVar13 / 2 + iVar13);
              }
              pfVar105[0x10] = fVar25;
              if ((int)fVar112 <= (int)fVar25) {
                fVar112 = fVar25;
              }
              *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
              *(undefined8 *)(puVar40 + -0x10) = 0x1407966cb;
              uVar19 = FUN_1407520ca();
              puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
              uVar107 = (ulonglong)(uint)pfVar105[1];
              uVar106 = *(uint *)(uVar107 + 0x2490);
              if (uVar106 != 0) {
                *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(uVar107 + 0x2488);
                *(ulonglong *)(puVar40 + -0x10) = (ulonglong)uVar106;
                *(ulonglong *)(puVar40 + -0x18) = uVar19;
                pfVar105[8] = (float)uVar19;
                *(undefined8 *)(puVar40 + -0x20) = 0x1407966ec;
                FUN_1408b31a0();
                *(undefined8 *)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 8) =
                     *(undefined8 *)(uVar107 + 0x2490);
                    /* WARNING: Subroutine does not return */
                *(undefined **)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 0x10) = &UNK_1407966fa;
                FUN_14075219b();
              }
              *(float *)(uVar107 + 0x2490) = (float)uVar19;
              *(float *)(uVar107 + 0x248c) = fVar112;
              fVar112 = *(float *)(uVar107 + 0x2480);
              fVar25 = pfVar105[0x10];
            }
            *(float *)(uVar107 + 0x2488) = fVar25;
            *(undefined8 *)(puVar40 + -8) = param_4;
            *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(uVar104 + 0x10);
            *(ulonglong *)(puVar40 + -0x18) = uVar19;
            *(undefined8 *)(puVar40 + -0x20) = 0x140796729;
            FUN_1408b31a0(fVar112);
            puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
          }
          *(undefined4 *)(uVar107 + 0x24b0) = 0;
          *(undefined4 *)(uVar107 + 0x24b4) = 0;
          if ((*(uint *)(uVar104 + 0x1c) >> 0x11 & 1) != 0) {
            *(undefined8 *)(puVar40 + -8) = 0xffffffffbf800000;
            *(undefined8 *)(puVar40 + -0x10) = 0;
            *(undefined8 *)(puVar40 + -0x18) = 0;
            *(undefined8 *)(puVar40 + -0x20) = *(undefined8 *)(uVar104 + 0x10);
            *(float **)(puVar40 + -0x28) = (float *)(ulonglong)(iVar24 - 0x144);
            *(undefined8 *)(puVar40 + -0x30) = 0x140796757;
            FUN_1407559fe();
            puVar45 = (undefined4 *)(ulonglong)((int)(puVar40 + -0x28) + 0xc);
            puVar45[1] = *(float *)((ulonglong)(uint)pfVar105[1] + 0xd0c) +
                         *(float *)((ulonglong)(uint)pfVar105[1] + 0xd0c) +
                         (*(float *)(ulonglong)(iVar24 - 0x144) - pfVar105[0x74]);
            *puVar45 = 0;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar45 + -2) = &UNK_14079678a;
            FUN_140755a9a();
          }
          if (*(char *)(pfVar105 + 0x3c) == '\0') {
            uVar106 = *(uint *)(uVar104 + 0x1c);
            uVar11 = *(undefined4 *)((ulonglong)(uint)pfVar105[1] + 0x2474);
            *(undefined8 *)(puVar40 + -8) = 0x1407967cc;
            thunk_FUN_1407aa347(uVar11,(uVar106 >> 0x1a & 1) == 0);
          }
          uVar106 = *(uint *)(uVar104 + 0x1c);
          uVar107 = (ulonglong)uVar106;
          if ((uVar106 >> 0x1a & 1) == 0) {
            uVar107 = 0;
            pfVar105[4] = (float)(uVar106 >> 0xc & 1);
            if ((*(char *)(pfVar105 + 0x38) != '\0') &&
               ((*(char *)(pfVar105 + 0x3c) == '\0' ||
                (uVar107 = (ulonglong)(uint)pfVar105[1], (*(byte *)(uVar107 + 0x2064) & 4) == 0))))
            {
              uVar107 = CONCAT71((int7)(uVar107 >> 8),1);
              pfVar105[4] = (float)uVar107;
            }
            if (*(char *)(pfVar105 + 0xd) != '\0') {
              uVar107 = (ulonglong)(uint)pfVar105[1];
              pfVar105[4] = (float)CONCAT31((int3)((uint)pfVar105[4] >> 8),
                                            SUB41(pfVar105[4],0) | *(byte *)(uVar107 + 0x104));
            }
          }
          else {
            pfVar105[4] = 0.0;
          }
          if ((*(uint *)(uVar104 + 0x1c) >> 0xb & 1) == 0) {
            uVar19 = (ulonglong)(uint)pfVar105[1];
            uVar21 = (undefined7)(uVar107 >> 8);
            pfVar105[3] = (float)CONCAT71(uVar21,*(undefined1 *)(uVar19 + 0x79));
            pfVar105[0x10] = (float)CONCAT71(uVar21,1);
            bVar7 = *(byte *)(pfVar105 + 10);
          }
          else {
            uVar19 = (ulonglong)(uint)pfVar105[1];
            uVar106 = *(uint *)(uVar19 + 0x2474);
            *(undefined1 *)((ulonglong)uVar106 + 0xc) = 1;
            uVar5 = (uint3)(uVar106 >> 8);
            pfVar105[3] = (float)CONCAT31(uVar5,*(undefined1 *)(uVar19 + 0x79));
            pfVar105[0x10] = (float)CONCAT71((uint7)uVar5,1);
            bVar7 = *(byte *)(pfVar105 + 10);
          }
          goto joined_r0x00014079683b;
        }
        uVar19 = (ulonglong)(uint)pfVar105[1];
        uVar21 = (undefined7)(uVar107 >> 8);
        pfVar105[3] = (float)CONCAT71(uVar21,*(undefined1 *)(uVar19 + 0x79));
        pfVar105[0x10] = (float)CONCAT71(uVar21,1);
        pfVar105[4] = 0.0;
      }
    }
    if (*(float *)(uVar19 + 0x1528) == pfVar105[2]) {
      uVar107 = 0xffffffe8;
      fVar25 = pfVar105[2];
      do {
        *(undefined8 *)(puVar40 + -8) = 0;
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(puVar40 + -0x18) = *(undefined8 *)(uVar107 + 0x102b93b0);
        *(undefined8 *)(puVar40 + -0x20) = 0x1407968d8;
        FUN_14076c284();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
        uVar106 = (int)uVar107 + 4;
        uVar107 = (ulonglong)uVar106;
      } while (uVar106 != 0);
      if (*(char *)(pfVar105 + 0xd) != '\0') {
        *(undefined8 *)(puVar40 + -8) = 0;
        *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(pfVar105 + 2);
        *(undefined8 *)(puVar40 + -0x18) = 0x290;
        *(undefined8 *)(puVar40 + -0x20) = 0x1407968f6;
        FUN_14076c284();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
      }
      uVar106 = *(uint *)((ulonglong)(uint)pfVar105[1] + 0x1e30);
      *(uint *)((ulonglong)(uint)pfVar105[1] + 0x1e30) = uVar106 | 3;
      if ((*(uint *)(uVar104 + 0x1c) & 0x4080000) != 0) {
        *(uint *)((ulonglong)(uint)pfVar105[1] + 0x1e30) = uVar106 | 0xf;
        *(undefined8 *)(puVar40 + -8) = 0;
        fVar25 = pfVar105[2];
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(puVar40 + -0x18) = 0x203;
        *(undefined8 *)(puVar40 + -0x20) = 0x140796934;
        FUN_14076c284();
        uVar48 = (ulonglong)((int)(puVar40 + -0x18) + 0xc);
        *(undefined8 *)(uVar48 - 8) = 0;
        *(ulonglong *)(uVar48 - 0x10) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(uVar48 - 0x18) = 0x204;
        *(undefined8 *)(uVar48 - 0x20) = 0x140796943;
        FUN_14076c284();
        puVar40 = (undefined1 *)(ulonglong)((int)(uVar48 - 0x18) + 0xc);
        if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) != 0) {
          *(undefined8 *)(puVar40 + -8) = 0;
          fVar25 = pfVar105[2];
          *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar25;
          *(undefined8 *)(puVar40 + -0x18) = 0x205;
          *(undefined8 *)(puVar40 + -0x20) = 0x14079695d;
          FUN_14076c284();
          uVar49 = (ulonglong)((int)(puVar40 + -0x18) + 0xc);
          *(undefined8 *)(uVar49 - 8) = 0;
          *(ulonglong *)(uVar49 - 0x10) = (ulonglong)(uint)fVar25;
          *(undefined8 *)(uVar49 - 0x18) = 0x206;
          *(undefined8 *)(uVar49 - 0x20) = 0x14079696c;
          FUN_14076c284();
          puVar40 = (undefined1 *)(ulonglong)((int)(uVar49 - 0x18) + 0xc);
        }
      }
      if (*(char *)(pfVar105 + 3) != '\0') {
        *(undefined8 *)(puVar40 + -8) = 0;
        *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(pfVar105 + 2);
        *(undefined8 *)(puVar40 + -0x18) = 0x4000;
        *(undefined8 *)(puVar40 + -0x20) = 0x140796985;
        FUN_14076c284();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
      }
      if (((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) != 0) && (*pfVar105 != 0.0)) {
        *(undefined4 *)((ulonglong)(uint)*pfVar105 + 0x44) =
             *(undefined4 *)((ulonglong)(uint)pfVar105[0xb] + 200);
      }
      fVar25 = *pfVar105;
      if ((((uint)pfVar105[6] >> 9 & 1) == 0) || (fVar25 == 0.0)) {
        if (fVar25 == 0.0) {
          if (*(float *)((ulonglong)(uint)pfVar105[1] + 0x1528) != pfVar105[2]) goto LAB_1407969ca;
          *(undefined8 *)(puVar40 + -8) = 0x140796c57;
          FUN_14075a7a8();
          pfVar105[8] = 0.0;
          goto code_r0x0001407969fe;
        }
      }
      else {
        *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(uVar104 + 0x10);
        *(undefined8 *)(puVar40 + -0x10) = 0x1407969bd;
        uVar11 = FUN_1408c85c0();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
        *(undefined4 *)((ulonglong)(uint)fVar25 + 0x10) = uVar11;
      }
      *(undefined8 *)(puVar40 + -8) = 0x1407969e2;
      FUN_14079a4d0((ulonglong)(uint)fVar25);
LAB_1407969e2:
      uVar11 = *(undefined4 *)(uVar104 + 0x10);
      if (((uint)pfVar105[6] >> 9 & 1) == 0) {
        uVar11 = *(undefined4 *)((ulonglong)(uint)*pfVar105 + 0x20);
      }
      *(undefined4 *)((ulonglong)(uint)*pfVar105 + 0x14) = uVar11;
      pfVar105[8] = (float)CONCAT71((uint7)(uint3)((uint)uVar11 >> 8),1);
    }
    else {
      if (*pfVar105 != 0.0) goto LAB_1407969e2;
LAB_1407969ca:
      pfVar105[8] = 0.0;
    }
code_r0x0001407969fe:
    fVar25 = *(float *)((ulonglong)(uint)pfVar105[1] + 0x1528);
    if (fVar25 == pfVar105[2]) {
      pfVar105[0x10] =
           (float)CONCAT31((int3)((uint)pfVar105[0x10] >> 8),
                           SUB41(pfVar105[0x10],0) & *(byte *)((ulonglong)(uint)pfVar105[1] + 0xb18)
                          );
    }
    else {
      pfVar105[0x10] = 0.0;
    }
    fVar112 = pfVar105[9];
    bVar7 = SUB41(fVar112,0) & SUB41(pfVar105[8],0) | fVar25 == pfVar105[2];
    if (SUB41(pfVar105[8],0) == 0) {
      pfVar105[10] = 0.0;
    }
    else {
      fVar25 = *pfVar105;
      *(undefined8 *)(puVar40 + -8) = 0x140796a3e;
      uVar17 = FUN_14079a518(fVar25);
      pfVar105[10] = (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),
                                     ((byte)uVar17 | *(byte *)(pfVar105 + 4)) & bVar7);
    }
    bVar108 = ((uint)pfVar105[6] >> 9 & 1) == 0;
    *(bool *)(pfVar105 + 0x17) = bVar108;
    pfVar105[9] = (float)CONCAT31((int3)((uint)fVar112 >> 8),bVar7);
    bVar7 = SUB41(pfVar105[8],0) & bVar108 & bVar7;
    iVar13 = *(int *)(uVar104 + 0xc);
    *(byte *)(pfVar105 + 0x1f) = bVar7;
    if (iVar13 == 0) {
      fVar25 = 0.0;
    }
    else {
      uVar106 = *(uint *)(uVar104 + 0x10);
      if (bVar7 != 0) {
        uVar106 = *(uint *)((ulonglong)(uint)*pfVar105 + 0x20);
      }
      fVar25 = (float)CONCAT31((int3)(uVar106 >> 8),*(char *)(ulonglong)uVar106 == '\0');
    }
    pfVar105[0xe] = (float)((uint)pfVar105[6] >> 9 & 1);
    bVar108 = (*(uint *)(uVar104 + 0x1c) >> 10 & 1) == 0;
    pfVar105[0xd] = fVar25;
    *(byte *)(pfVar105 + 0x4f) = bVar108 | SUB41(fVar25,0);
    if (!bVar108 && ((uint)fVar25 & 1) == 0) {
      *(undefined8 *)(puVar40 + -8) = 0x140796ab3;
      FUN_14079a7f4();
    }
    fVar25 = pfVar105[0x25];
    pfVar105[0x3c] = fVar25;
    pfVar105[0x3d] = fVar25;
    pfVar105[0x3e] = fVar25;
    pfVar105[0x3f] = fVar25;
    if (((*(char *)(pfVar105 + 8) != '\0') &&
        (uVar107 = (ulonglong)(uint)*pfVar105, *(float *)(uVar107 + 0xc) == pfVar105[2])) &&
       (uVar106 = *(uint *)(uVar104 + 0x1c), *(float *)(uVar107 + 8) = pfVar105[6],
       (uVar106 >> 0x18 & 1) != 0)) {
      if ((*(float *)(uVar107 + 0x4c) != pfVar105[0x1e]) ||
         (NAN(*(float *)(uVar107 + 0x4c)) || NAN(pfVar105[0x1e]))) {
        fVar25 = *pfVar105;
        *(undefined1 *)((ulonglong)(uint)fVar25 + 0x55) = 1;
        *(float *)((ulonglong)(uint)fVar25 + 0x4c) = pfVar105[0x1e];
        pfVar105[9] = (float)CONCAT71((uint7)(uint3)((uint)fVar25 >> 8),1);
      }
    }
    uVar107 = (ulonglong)(uint)pfVar105[1];
    if (*(float *)(uVar107 + 0x1528) == pfVar105[2]) {
      uVar19 = (ulonglong)(uint)*pfVar105;
      *(undefined1 *)(uVar19 + 0x58) = 0;
      *(undefined4 *)(uVar19 + 0x3c) = *(undefined4 *)(uVar104 + 0x14);
      *(float *)(uVar19 + 0x4c) = pfVar105[0x1e];
      *(byte *)(uVar107 + 0x1535) = *(byte *)(uVar107 + 0xec) ^ 1;
      if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) {
        fVar25 = *(float *)(uVar107 + 0x1228) * _DAT_150a4dc51;
      }
      else {
        fVar25 = *(float *)(uVar107 + 0xe8) - *(float *)((ulonglong)(uint)pfVar105[0xb] + 0x148);
      }
      puVar50 = puVar40;
      if (*(char *)(pfVar105 + 4) == '\0') {
        uVar19 = (ulonglong)(uint)pfVar105[1];
        fVar112 = ((*(float *)(uVar19 + 0xe4) - pfVar105[0x49]) - *(float *)(uVar19 + 0xd0c)) +
                  *(float *)((ulonglong)(uint)*pfVar105 + 0x40);
        if (((*(char *)(pfVar105 + 0x18) == '\0') || (*(ushort *)(uVar19 + 0xb22) < 2)) ||
           (*(char *)(uVar19 + 0x105) != '\0')) {
          if ((*(char *)(uVar19 + 0xb18) == '\x01') &&
             (*(char *)((ulonglong)(uint)*pfVar105 + 0x56) == '\0')) {
            uVar19 = (ulonglong)(uint)*pfVar105;
            if (*(char *)(pfVar105 + 0x18) != '\0') {
              if (*(char *)((ulonglong)(uint)pfVar105[1] + 0x105) == '\x01') {
                *(undefined8 *)(puVar40 + -8) = 0x140796c8a;
                FUN_14079ac8e(uVar19);
              }
              else {
                *(undefined8 *)(puVar40 + -8) = 0x140796d4c;
                FUN_14079ab90(fVar112,fVar25);
              }
              *(undefined8 *)(puVar40 + -8) = 0x140796d53;
              FUN_14079a3b4(uVar19);
            }
          }
          else {
            fVar25 = *pfVar105;
            uVar19 = (ulonglong)(uint)fVar25;
            if (((*(byte *)(uVar107 + 0xec) != 0) && (*(char *)(uVar19 + 0x56) == '\0')) &&
               ((((*(float *)((ulonglong)(uint)pfVar105[1] + 0xd8) != 0.0 ||
                  (NAN(*(float *)((ulonglong)(uint)pfVar105[1] + 0xd8)))) ||
                 (*(float *)((ulonglong)(uint)pfVar105[1] + 0xdc) != 0.0)) ||
                (NAN(*(float *)((ulonglong)(uint)pfVar105[1] + 0xdc)))))) {
              *(undefined8 *)(puVar40 + -8) = 0x140796c2f;
              FUN_14079ac8e(uVar19);
              *(undefined8 *)(puVar40 + -8) = 0x140796c36;
              FUN_14079a3b4(fVar25);
              *(undefined1 *)(uVar19 + 0x54) = 1;
            }
          }
        }
        else {
          fVar25 = *pfVar105;
          uVar107 = (ulonglong)(uint)fVar25;
          uVar11 = *(undefined4 *)(uVar107 + 4);
          *(undefined8 *)(puVar40 + -8) = 0x140796c9c;
          FUN_14079ab90(fVar112,uVar11);
          fVar112 = *(float *)(uVar107 + 4);
          pfVar105[0x18] = fVar112;
          if ((*(byte *)(uVar19 + 0xb22) & 1) == 0) {
            if (*(int *)(ulonglong)(uint)fVar112 == 0) {
              bVar108 = true;
            }
            else {
              uVar17 = *(undefined8 *)pfVar105;
              *(undefined8 *)(puVar40 + -8) = 0x140796cbd;
              cVar8 = FUN_14079ac10(uVar17);
              bVar108 = cVar8 == '\n';
            }
            if ((bVar108) &&
               (*(int *)((ulonglong)(uint)pfVar105[0x18] + 4) ==
                *(int *)((ulonglong)(uint)pfVar105[0x18] + 8))) {
LAB_140796d81:
              puVar50 = puVar40;
              *(undefined8 *)(puVar50 + -8) = 0x140796d86;
              FUN_14079ac17();
              puVar20 = (undefined4 *)(ulonglong)*(uint *)((ulonglong)(uint)*pfVar105 + 4);
            }
            else {
              fVar25 = *pfVar105;
              puVar50 = puVar40 + -8;
              *(undefined8 *)(puVar40 + -8) = 0x20000c;
              *(undefined8 *)(puVar40 + -0x10) = 0x140796d76;
              FUN_140799ccc((ulonglong)(uint)fVar25);
              puVar20 = (undefined4 *)(ulonglong)*(uint *)((ulonglong)(uint)fVar25 + 4);
              puVar40 = puVar40 + -8;
              if (puVar20[1] == puVar20[2]) goto LAB_140796d81;
            }
            uVar11 = *puVar20;
            fVar25 = *pfVar105;
            uVar19 = (ulonglong)(uint)fVar25;
            *(undefined8 *)(puVar50 + -8) = 0x140796d97;
            uVar11 = FUN_14079ac2b(uVar19,uVar11);
            *(undefined4 *)(ulonglong)*(uint *)(uVar19 + 4) = uVar11;
            ((undefined4 *)(ulonglong)*(uint *)(uVar19 + 4))[2] =
                 *(undefined4 *)(ulonglong)*(uint *)(uVar19 + 4);
            *(undefined8 *)(puVar50 + -8) = 0x140796dae;
            FUN_14079ac5c(fVar25);
          }
          else {
            *(undefined8 *)(puVar40 + -8) = 0x140796cdb;
            cVar8 = FUN_14079ac10(fVar25);
            *(undefined4 *)(uVar107 + 0x4c) = 0;
            *(undefined8 *)(puVar40 + -8) = 0x200004;
            *(undefined8 *)(puVar40 + -0x10) = 0x140796cf0;
            FUN_140799ccc(uVar107);
            *(undefined8 *)(puVar40 + -0x10) = 0x600005;
            *(undefined8 *)(puVar40 + -0x18) = 0x140796cfc;
            FUN_140799ccc(fVar25);
            *(undefined8 *)(puVar40 + -0x18) = 0x600001;
            *(undefined8 *)(puVar40 + -0x20) = 0x140796d08;
            FUN_140799ccc(fVar25);
            uVar106 = *(uint *)(uVar104 + 0x1c);
            *(float *)(uVar107 + 0x4c) = pfVar105[0x1e];
            puVar50 = puVar40 + -0x18;
            if (((uVar106 >> 0x1a & 1) != 0) && (puVar50 = puVar40 + -0x18, cVar8 != '\n')) {
              fVar25 = *pfVar105;
              iVar13 = *(int *)((ulonglong)(uint)fVar25 + 4);
              *(ulonglong *)(puVar40 + -0x20) = (ulonglong)(iVar13 + 8);
              *(ulonglong *)(puVar40 + -0x28) = (ulonglong)(iVar13 + 4);
              *(undefined8 *)(puVar40 + -0x30) = 0x140796d31;
              FUN_1407991a9();
              puVar50 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x28) + 8);
              puVar20 = (undefined4 *)(ulonglong)*(uint *)((ulonglong)(uint)fVar25 + 4);
              *puVar20 = puVar20[2];
            }
            uVar19 = (ulonglong)(uint)*pfVar105;
            *(undefined1 *)(uVar19 + 0x54) = 0;
          }
          *(undefined8 *)(puVar50 + -8) = 0x140796db5;
          FUN_14079a3b4(uVar19);
        }
      }
      else {
        uVar19 = (ulonglong)(uint)*pfVar105;
        *(undefined8 *)(puVar40 + -8) = 0x140796b81;
        FUN_14079a536(uVar19);
        *(undefined1 *)(uVar19 + 0x56) = 1;
      }
      if ((*(char *)(uVar19 + 0x56) == '\x01') &&
         (*(char *)((ulonglong)(uint)pfVar105[1] + 0xec) == '\0')) {
        *(undefined1 *)((ulonglong)(uint)*pfVar105 + 0x56) = 0;
      }
      puVar40 = puVar50;
      if (((uint)pfVar105[6] & 0x220) == 0x20) {
        *(undefined8 *)(puVar50 + -8) = *(undefined8 *)(pfVar105 + 2);
        *(undefined8 *)(puVar50 + -0x10) = 1;
        *(undefined8 *)(puVar50 + -0x18) = 0x200;
        *(undefined8 *)(puVar50 + -0x20) = 0x140796ded;
        cVar8 = FUN_14075e480();
        puVar51 = (undefined1 *)(ulonglong)((int)(puVar50 + -0x18) + 0xc);
        puVar40 = puVar51;
        if (cVar8 != '\0') {
          *(undefined4 *)(ulonglong)(iVar24 - 0x144) = 9;
          fVar25 = pfVar105[1];
          *(undefined8 *)(puVar51 + -8) = 0;
          *(undefined8 *)(puVar51 + -0x10) = *(undefined8 *)(uVar104 + 0x24);
          *(undefined8 *)(puVar51 + -0x18) = *(undefined8 *)(uVar104 + 0x20);
          *(undefined4 **)(puVar51 + -0x20) = (undefined4 *)(ulonglong)(iVar24 - 0x144);
          *(undefined8 *)(puVar51 + -0x28) = 0x140796e13;
          cVar8 = FUN_14079ad14(fVar25);
          puVar52 = (undefined1 *)(ulonglong)((int)(puVar51 + -0x20) + 0x10);
          puVar40 = puVar52;
          if (cVar8 != '\0') {
            fVar25 = *pfVar105;
            puVar40 = puVar52 + -8;
            *(undefined8 *)(puVar52 + -8) = *(undefined8 *)(pfVar105 + 0x2b);
            *(undefined8 *)(puVar52 + -0x10) = 0x140796e28;
            FUN_14079a3bc(fVar25);
          }
        }
      }
      bVar7 = *(byte *)((ulonglong)(uint)pfVar105[1] + 0x104);
      if (bVar7 == 1) {
        bVar9 = *(byte *)((ulonglong)(uint)pfVar105[1] + 0x106);
        if ((*(byte *)(pfVar105 + 3) & bVar9) == 0) {
          bVar7 = bVar9 ^ 1 | *(byte *)(pfVar105 + 0xe);
        }
        else {
LAB_140796e52:
          bVar7 = bVar7 | *(byte *)(pfVar105 + 0xe);
        }
      }
      else {
        if (*(char *)(pfVar105 + 3) != '\0') goto LAB_140796e52;
        pfVar105[3] = 0.0;
        bVar7 = SUB41(pfVar105[0xe],0);
      }
      if (0 < *(int *)((ulonglong)(uint)pfVar105[1] + 0xbe0)) {
        uVar107 = (ulonglong)(uint)pfVar105[1];
        if (((bVar7 | *(byte *)(pfVar105 + 0x38)) & 1) == 0) {
          do {
            uVar2 = *(ushort *)(ulonglong)*(uint *)(uVar107 + 0xbe8);
            pfVar105[0x2b] = (float)(uint)uVar2;
            if ((float)(uint)uVar2 != 1.26117e-44) {
              pfVar105[0x7a] = -NAN;
              *(undefined8 *)(puVar40 + -8) = 0;
              *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(uVar104 + 0x24);
              *(undefined8 *)(puVar40 + -0x18) = *(undefined8 *)(uVar104 + 0x20);
              *(ulonglong *)(puVar40 + -0x20) = (ulonglong)(iVar24 - 0x144);
              *(undefined8 *)(puVar40 + -0x28) = 0x140796eba;
              cVar8 = FUN_14079ad14(uVar107);
              puVar53 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x20) + 0x10);
              puVar40 = puVar53;
              if (cVar8 != '\0') {
                fVar25 = *pfVar105;
                puVar40 = puVar53 + -8;
                *(undefined8 *)(puVar53 + -8) = *(undefined8 *)(pfVar105 + 0x2b);
                *(undefined8 *)(puVar53 + -0x10) = 0x140796ecf;
                FUN_14079a3bc(fVar25);
              }
            }
          } while (unaff_R15D < *(int *)(in_R11 + 0xbe0));
        }
        if (*(int *)(uVar107 + 0xbe4) < 0) {
          pfVar105[0x7a] = -NAN;
          *(undefined8 *)(puVar40 + -8) = 0;
          *(undefined8 *)(puVar40 + -0x10) = 0x140796ef4;
          uVar12 = FUN_1407520ca();
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
          uVar106 = *(uint *)(uVar107 + 0xbe8);
          if (uVar106 != 0) {
            *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)(*(int *)(uVar107 + 0xbe0) * 2);
            *(ulonglong *)(puVar40 + -0x10) = (ulonglong)uVar106;
            *(ulonglong *)(puVar40 + -0x18) = (ulonglong)uVar12;
            *(undefined8 *)(puVar40 + -0x20) = 0x140796f14;
            FUN_1408b31a0();
            *(undefined8 *)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 8) =
                 *(undefined8 *)(uVar107 + 0xbe8);
                    /* WARNING: Subroutine does not return */
            *(undefined **)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 0x10) = &UNK_140796f22;
            FUN_14075219b();
          }
          *(uint *)(uVar107 + 0xbe8) = uVar12;
          *(undefined4 *)(uVar107 + 0xbe4) = 0;
        }
        *(undefined4 *)(uVar107 + 0xbe0) = 0;
      }
    }
    uVar107 = (ulonglong)(uint)pfVar105[1];
    if (*(float *)(uVar107 + 0x1528) == pfVar105[2]) {
      if (*(char *)(uVar107 + 0x1534) == '\0' && *(char *)(pfVar105 + 0x10) == '\0') {
        fVar113 = pfVar105[0x3c];
        fVar25 = *(float *)(uVar107 + 0xd10);
        fVar112 = *(float *)(uVar107 + 0x1228);
        *(undefined8 *)(puVar40 + -8) = 1;
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)(int)((fVar113 - fVar25) / fVar112);
        *(undefined8 *)(puVar40 + -0x18) = 0x14079703a;
        fVar25 = (float)FUN_140753b3a();
        uVar54 = (ulonglong)((int)(puVar40 + -0x10) + 8);
        uVar106 = *(uint *)((ulonglong)(uint)*pfVar105 + 4);
        pfVar105[0x5b] = fVar25;
        *(float *)((ulonglong)uVar106 + 0x10) = fVar25;
        *(undefined1 *)(pfVar105 + 0x38) =
             *(undefined1 *)(uVar107 + 0x104 + ((ulonglong)(uint)pfVar105[3] & 0xff) * 2);
        if (((SUB41(pfVar105[3],0) == '\0') || (*(char *)(uVar107 + 0x104) != '\x01')) ||
           (*(char *)(uVar107 + 0x107) != '\0')) {
          pfVar105[4] = 0.0;
        }
        else {
          pfVar105[4] = (float)(*(byte *)(uVar107 + 0x106) ^ 1);
          pfVar105[0x7a] = -NAN;
        }
        pfVar105[0x18] = (float)(uint)*(byte *)((ulonglong)(uint)pfVar105[1] + 0x105);
        pfVar105[0x7a] = -NAN;
        fVar25 = pfVar105[2];
        *(ulonglong *)(uVar54 - 8) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(uVar54 - 0x10) = 1;
        *(undefined8 *)(uVar54 - 0x18) = 0x1239;
        *(undefined8 *)(uVar54 - 0x20) = 0x1407970ab;
        cVar8 = FUN_14075e480();
        puVar40 = (undefined1 *)(ulonglong)((int)(uVar54 - 0x18) + 0xc);
        if (cVar8 == '\0') {
          uVar106 = *(uint *)(uVar104 + 0x1c);
          *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar25;
          *(undefined8 *)(puVar40 + -0x10) = 1;
          *(undefined8 *)(puVar40 + -0x18) = 0x220a;
          *(undefined8 *)(puVar40 + -0x20) = 0x140797159;
          bVar7 = FUN_14075e480();
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
          bVar7 = bVar7 ^ 1 | (byte)(uVar106 >> 10) & 1 | *(byte *)(pfVar105 + 0xe);
          *(byte *)(pfVar105 + 0x14) = bVar7 ^ 1;
          if (bVar7 == 0) goto joined_r0x000140797176;
        }
        else {
          uVar106 = *(uint *)(uVar104 + 0x1c);
          bVar108 = ((uint)pfVar105[6] & 0x200) == 0;
          bVar6 = (uVar106 & 0x400) == 0;
          *(bool *)(pfVar105 + 0x14) = bVar108 && bVar6;
          if (bVar108 && bVar6) {
joined_r0x000140797176:
            if ((uVar106 & 0x4000000) != 0) {
              fVar25 = *pfVar105;
              *(undefined8 *)(puVar40 + -8) = 0x140797180;
              uVar10 = FUN_14079a518(fVar25);
              *(undefined1 *)(pfVar105 + 0x14) = uVar10;
            }
          }
        }
        fVar25 = pfVar105[2];
        *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(puVar40 + -0x10) = 0;
        *(undefined8 *)(puVar40 + -0x18) = 0x1224;
        *(undefined8 *)(puVar40 + -0x20) = 0x140797194;
        cVar8 = FUN_14075e480();
        puVar55 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
        if (cVar8 == '\0') {
          uVar106 = *(uint *)(uVar104 + 0x1c);
          *(bool *)(pfVar105 + 0x54) = (uVar106 >> 10 & 1) == 0;
          *(ulonglong *)(puVar55 + -8) = (ulonglong)(uint)fVar25;
          *(undefined8 *)(puVar55 + -0x10) = 0;
          *(undefined8 *)(puVar55 + -0x18) = 0x1209;
          *(undefined8 *)(puVar55 + -0x20) = 0x1407971c8;
          bVar9 = FUN_14075e480();
          puVar55 = (undefined1 *)(ulonglong)((int)(puVar55 + -0x18) + 0xc);
          bVar7 = *(byte *)(pfVar105 + 0x54);
          *(byte *)(pfVar105 + 0x54) = bVar9 & bVar7;
          if (((uVar106 >> 0x1a & 1) != 0) && ((bVar9 & bVar7) != 0)) goto code_r0x0001407971e3;
        }
        else if ((*(uint *)(uVar104 + 0x1c) & 0x4000400) == 0x4000000) {
code_r0x0001407971e3:
          fVar25 = *pfVar105;
          *(undefined8 *)(puVar55 + -8) = 0x1407971ea;
          uVar10 = FUN_14079a518(fVar25);
          *(undefined1 *)(pfVar105 + 0x54) = uVar10;
        }
        *(undefined8 *)(puVar55 + -8) = *(undefined8 *)(pfVar105 + 2);
        *(undefined8 *)(puVar55 + -0x10) = 1;
        *(undefined8 *)(puVar55 + -0x18) = 0x1237;
        *(undefined8 *)(puVar55 + -0x20) = 0x140797200;
        uVar17 = FUN_14075e480();
        puVar56 = (undefined1 *)(ulonglong)((int)(puVar55 + -0x18) + 0xc);
        if ((char)uVar17 == '\0') {
          *(undefined8 *)(puVar56 + -8) = *(undefined8 *)(pfVar105 + 2);
          *(undefined8 *)(puVar56 + -0x10) = 1;
          *(undefined8 *)(puVar56 + -0x18) = 0x2209;
          *(undefined8 *)(puVar56 + -0x20) = 0x140797217;
          uVar17 = FUN_14075e480();
          puVar56 = (undefined1 *)(ulonglong)((int)(puVar56 + -0x18) + 0xc);
          if ((char)uVar17 != '\0') goto LAB_140797222;
          pfVar105[0x5a] = 0.0;
        }
        else {
LAB_140797222:
          pfVar105[0x5a] =
               (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),*(undefined1 *)(pfVar105 + 0x17));
        }
        *(bool *)((longlong)pfVar105 + 0x8f) = (*(uint *)(uVar104 + 0x1c) >> 0x10 & 1) == 0;
        uVar107 = (ulonglong)*(uint *)(unaff_R14 + 8);
        *(ulonglong *)(puVar56 + -8) = uVar107;
        *(undefined8 *)(puVar56 + -0x10) = 0;
        *(undefined8 *)(puVar56 + -0x18) = 0x123b;
        *(undefined8 *)(puVar56 + -0x20) = 0x14079731a;
        uVar10 = FUN_14075e480();
        uVar57 = (ulonglong)((int)(puVar56 + -0x18) + 0xc);
        *(undefined1 *)((longlong)pfVar105 + 0x8e) = uVar10;
        *(ulonglong *)(uVar57 - 8) = uVar107;
        *(undefined8 *)(uVar57 - 0x10) = 0;
        *(undefined8 *)(uVar57 - 0x18) = 0x123a;
        *(undefined8 *)(uVar57 - 0x20) = 0x14079732f;
        uVar17 = FUN_14075e480();
        puVar58 = (undefined1 *)(ulonglong)((int)(uVar57 - 0x18) + 0xc);
        if ((char)uVar17 == '\0') {
          *(ulonglong *)(puVar58 + -8) = uVar107;
          *(undefined8 *)(puVar58 + -0x10) = 1;
          *(undefined8 *)(puVar58 + -0x18) = 0x323b;
          *(undefined8 *)(puVar58 + -0x20) = 0x140797357;
          uVar17 = FUN_14075e480();
          puVar58 = (undefined1 *)(ulonglong)((int)(puVar58 + -0x18) + 0xc);
          pfVar105[0x4e] = 0.0;
          if ((((uint)pfVar105[6] >> 9 & 1) == 0) && ((char)uVar17 != '\0')) goto LAB_14079736f;
        }
        else if (((uint)pfVar105[6] >> 9 & 1) == 0) {
LAB_14079736f:
          pfVar105[0x4e] =
               (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),*(undefined1 *)(pfVar105 + 5));
        }
        else {
          pfVar105[0x4e] = 0.0;
        }
        *(undefined8 *)(puVar58 + -8) = *(undefined8 *)(pfVar105 + 2);
        *(undefined8 *)(puVar58 + -0x10) = 0;
        *(undefined8 *)(puVar58 + -0x18) = 0x1222;
        *(undefined8 *)(puVar58 + -0x20) = 0x140797388;
        uVar10 = FUN_14075e480();
        uVar59 = (ulonglong)((int)(puVar58 + -0x18) + 0xc);
        *(undefined1 *)((longlong)pfVar105 + 0x8d) = uVar10;
        if ((*(byte *)((ulonglong)(uint)pfVar105[1] + 0x30) & 2) == 0) {
          bVar7 = 0;
        }
        else {
          bVar7 = *(byte *)((ulonglong)(uint)pfVar105[1] + 0x34) & 1;
        }
        *(undefined1 *)((longlong)pfVar105 + 0x33) = 1;
        uVar107 = (ulonglong)(uint)pfVar105[2];
        *(ulonglong *)(uVar59 - 8) = uVar107;
        *(undefined8 *)(uVar59 - 0x10) = 1;
        *(undefined8 *)(uVar59 - 0x18) = 0x20d;
        *(undefined8 *)(uVar59 - 0x20) = 0x1407973ba;
        cVar8 = FUN_14075e480();
        puVar60 = (undefined1 *)(ulonglong)((int)(uVar59 - 0x18) + 0xc);
        *(undefined1 *)((longlong)pfVar105 + 0x32) = 1;
        if (cVar8 == '\0') {
          *(ulonglong *)(puVar60 + -8) = uVar107;
          *(undefined8 *)(puVar60 + -0x10) = 1;
          *(undefined8 *)(puVar60 + -0x18) = 0x273;
          *(undefined8 *)(puVar60 + -0x20) = 0x1407973d4;
          uVar10 = FUN_14075e480();
          puVar60 = (undefined1 *)(ulonglong)((int)(puVar60 + -0x18) + 0xc);
          *(undefined1 *)((longlong)pfVar105 + 0x32) = uVar10;
        }
        *(ulonglong *)(puVar60 + -8) = uVar107;
        *(undefined8 *)(puVar60 + -0x10) = 1;
        *(undefined8 *)(puVar60 + -0x18) = 0x120d;
        *(undefined8 *)(puVar60 + -0x20) = 0x1407973e8;
        cVar8 = FUN_14075e480();
        puVar61 = (undefined1 *)(ulonglong)((int)(puVar60 + -0x18) + 0xc);
        if (cVar8 == '\0') {
          *(ulonglong *)(puVar61 + -8) = uVar107;
          *(undefined8 *)(puVar61 + -0x10) = 1;
          *(undefined8 *)(puVar61 + -0x18) = 0x1273;
          *(undefined8 *)(puVar61 + -0x20) = 0x1407973fd;
          uVar10 = FUN_14075e480();
          puVar61 = (undefined1 *)(ulonglong)((int)(puVar61 + -0x18) + 0xc);
          *(undefined1 *)((longlong)pfVar105 + 0x33) = uVar10;
        }
        *(undefined1 *)(pfVar105 + 5) = 1;
        *(ulonglong *)(puVar61 + -8) = uVar107;
        *(undefined8 *)(puVar61 + -0x10) = 1;
        *(undefined8 *)(puVar61 + -0x18) = 0x220d;
        *(undefined8 *)(puVar61 + -0x20) = 0x140797415;
        cVar8 = FUN_14075e480();
        puVar62 = (undefined1 *)(ulonglong)((int)(puVar61 + -0x18) + 0xc);
        if (cVar8 == '\0') {
          *(undefined8 *)(puVar62 + -8) = *(undefined8 *)(pfVar105 + 2);
          *(undefined8 *)(puVar62 + -0x10) = 1;
          *(undefined8 *)(puVar62 + -0x18) = 0x2273;
          *(undefined8 *)(puVar62 + -0x20) = 0x14079742c;
          uVar10 = FUN_14075e480();
          puVar62 = (undefined1 *)(ulonglong)((int)(puVar62 + -0x18) + 0xc);
          *(undefined1 *)(pfVar105 + 5) = uVar10;
        }
        if (bVar7 == 0) {
          uVar107 = 0x20e;
          pfVar105[0x4d] = 0.0;
code_r0x000140797491:
          *(undefined8 *)(puVar62 + -8) = *(undefined8 *)(pfVar105 + 2);
          *(undefined8 *)(puVar62 + -0x10) = 1;
          *(ulonglong *)(puVar62 + -0x18) = uVar107;
          *(undefined8 *)(puVar62 + -0x20) = 0x14079749c;
          uVar10 = FUN_14075e480();
          puVar62 = (undefined1 *)(ulonglong)((int)(puVar62 + -0x18) + 0xc);
          *(undefined1 *)((longlong)pfVar105 + 0x3f) = uVar10;
        }
        else {
          fVar25 = pfVar105[1];
          bVar7 = *(byte *)((ulonglong)(uint)fVar25 + 0x65);
          *(undefined8 *)(puVar62 + -8) = 0;
          *(ulonglong *)(puVar62 + -0x10) = (ulonglong)((bVar7 ^ 1) * 2 + 0x27b);
          *(undefined8 *)(puVar62 + -0x18) = 0x140797450;
          fVar112 = (float)FUN_14076bc1b();
          uVar63 = (ulonglong)((int)(puVar62 + -0x10) + 8);
          pfVar105[0x4d] = fVar112;
          *(undefined1 *)((longlong)pfVar105 + 0x3f) = 1;
          *(undefined8 *)(uVar63 - 8) = *(undefined8 *)(pfVar105 + 2);
          *(undefined8 *)(uVar63 - 0x10) = 1;
          *(undefined8 *)(uVar63 - 0x18) = 0x20e;
          *(undefined8 *)(uVar63 - 0x20) = 0x14079746c;
          cVar8 = FUN_14075e480();
          puVar62 = (undefined1 *)(ulonglong)((int)(uVar63 - 0x18) + 0xc);
          if (cVar8 == '\0') {
            uVar107 = (ulonglong)((uint)*(byte *)((ulonglong)(uint)fVar25 + 0x65) * 2 + 0x27b);
            goto code_r0x000140797491;
          }
        }
        uVar106 = (int)pfVar105[0x18] << 0x16;
        *(undefined8 *)(puVar62 + -8) = 1;
        *(undefined8 *)(puVar62 + -0x10) = 0x201;
        *(undefined8 *)(puVar62 + -0x18) = 0x1407974b5;
        cVar8 = FUN_14076bc1b();
        uVar64 = (ulonglong)((int)(puVar62 + -0x10) + 8);
        if (cVar8 == '\0') {
          *(undefined8 *)(uVar64 - 8) = 1;
          *(undefined8 *)(uVar64 - 0x10) = 0x202;
          *(undefined8 *)(uVar64 - 0x18) = 0x140797504;
          cVar8 = FUN_14076bc1b();
          uVar65 = (ulonglong)((int)(uVar64 - 0x10) + 8);
          if (cVar8 == '\0') {
            *(undefined8 *)(uVar65 - 8) = 1;
            *(undefined8 *)(uVar65 - 0x10) = 0x203;
            *(undefined8 *)(uVar65 - 0x18) = 0x140797553;
            cVar8 = FUN_14076bc1b();
            uVar66 = (ulonglong)((int)(uVar65 - 0x10) + 8);
            if (((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
              *(undefined8 *)(uVar66 - 8) = 1;
              *(undefined8 *)(uVar66 - 0x10) = 0x204;
              *(undefined8 *)(uVar66 - 0x18) = 0x14079894c;
              cVar8 = FUN_14076bc1b();
              uVar91 = (ulonglong)((int)(uVar66 - 0x10) + 8);
              if (((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
                *(undefined8 *)(uVar91 - 8) = 1;
                *(undefined8 *)(uVar91 - 0x10) = 0x205;
                *(undefined8 *)(uVar91 - 0x18) = 0x1407989db;
                cVar8 = FUN_14076bc1b();
                uVar93 = (ulonglong)((int)(uVar91 - 0x10) + 8);
                if (((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
                  *(undefined8 *)(uVar93 - 8) = 1;
                  *(undefined8 *)(uVar93 - 0x10) = 0x206;
                  *(undefined8 *)(uVar93 - 0x18) = 0x140798a62;
                  cVar8 = FUN_14076bc1b();
                  uVar94 = (ulonglong)((int)(uVar93 - 0x10) + 8);
                  if (((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) || (cVar8 == '\0')) {
                    *(undefined8 *)(uVar94 - 8) = 1;
                    *(undefined8 *)(uVar94 - 0x10) = 0x207;
                    *(undefined8 *)(uVar94 - 0x18) = 0x140798b94;
                    cVar8 = FUN_14076bc1b();
                    uVar95 = (ulonglong)((int)(uVar94 - 0x10) + 8);
                    if (cVar8 == '\0') {
                      *(undefined8 *)(uVar95 - 8) = 1;
                      *(undefined8 *)(uVar95 - 0x10) = 0x208;
                      *(undefined8 *)(uVar95 - 0x18) = 0x140798bd4;
                      cVar8 = FUN_14076bc1b();
                      uVar96 = (ulonglong)((int)(uVar95 - 0x10) + 8);
                      if (cVar8 == '\0') {
                        *(undefined8 *)(uVar96 - 8) = 1;
                        *(undefined8 *)(uVar96 - 0x10) = 0x20a;
                        *(undefined8 *)(uVar96 - 0x18) = 0x140798c14;
                        cVar8 = FUN_14076bc1b();
                        puVar97 = (undefined1 *)(ulonglong)((int)(uVar96 - 0x10) + 8);
                        if ((cVar8 == '\x01' && *(char *)(pfVar105 + 0xe) == '\0') &&
                            *(char *)(pfVar105 + 0x14) == '\0') {
                          fVar25 = *pfVar105;
                          *(undefined8 *)(puVar97 + -8) = 0x140798c74;
                          cVar8 = FUN_14079a518(fVar25);
                          puVar50 = puVar97;
                          if ((cVar8 == '\0') && (*(char *)(pfVar105 + 0x38) != '\0')) {
                            fVar25 = *pfVar105;
                            puVar50 = puVar97 + -8;
                            *(undefined8 *)(puVar97 + -8) = 0x60000d;
                            *(undefined8 *)(puVar97 + -0x10) = 0x140798c8f;
                            FUN_140799ccc(fVar25);
                          }
                          uVar107 = (ulonglong)(uint)*pfVar105;
                          puVar40 = puVar50 + -8;
                          *(ulonglong *)(puVar50 + -8) = (ulonglong)(uVar106 | 0x200008);
                          *(undefined8 *)(puVar50 + -0x10) = 0x140798c9f;
                          FUN_140799ccc(uVar107);
                          bVar7 = 1;
                          pfVar105[5] = 0.0;
                        }
                        else {
                          *(undefined8 *)(puVar97 + -8) = 1;
                          *(undefined8 *)(puVar97 + -0x10) = 0x20b;
                          *(undefined8 *)(puVar97 + -0x18) = 0x140798c2e;
                          cVar8 = FUN_14076bc1b();
                          puVar40 = (undefined1 *)(ulonglong)((int)(puVar97 + -0x10) + 8);
                          if ((((uint)pfVar105[6] >> 9 & 1) == 0) && (cVar8 != '\0')) {
                            fVar25 = *pfVar105;
                            *(undefined8 *)(puVar40 + -8) = 0x140798c44;
                            cVar8 = FUN_14079a518(fVar25);
                            if ((cVar8 == '\0') &&
                               ((uVar17 = 0x60000c, *(char *)(pfVar105 + 0x38) != '\0' ||
                                ((((*(char *)(pfVar105 + 3) != '\0' &&
                                   (*(char *)((ulonglong)(uint)pfVar105[1] + 0x104) == '\x01')) &&
                                  (*(char *)((ulonglong)(uint)pfVar105[1] + 0x106) == '\0')) &&
                                 (uVar17 = 0x600004,
                                 *(char *)((ulonglong)(uint)pfVar105[1] + 0x107) == '\0')))))) {
                              fVar25 = *pfVar105;
                              *(undefined8 *)(puVar40 + -8) = uVar17;
                              *(undefined8 *)(puVar40 + -0x10) = 0x140798c67;
                              FUN_140799ccc(fVar25);
                              puVar40 = puVar40 + -8;
                            }
                            uVar107 = (ulonglong)(uint)*pfVar105;
                            *(ulonglong *)(puVar40 + -8) = (ulonglong)(uVar106 | 0x200009);
                            *(undefined8 *)(puVar40 + -0x10) = 0x140798e17;
                            FUN_140799ccc(uVar107);
                            bVar7 = 1;
                            pfVar105[5] = 0.0;
                            puVar40 = puVar40 + -8;
                          }
                          else {
                            if ((byte)(*(byte *)(pfVar105 + 5) | *(byte *)(pfVar105 + 0x4d) |
                                      *(byte *)((longlong)pfVar105 + 0x32) |
                                      *(byte *)((longlong)pfVar105 + 0x33)) == 1) {
                              bVar7 = SUB41(pfVar105[0x4d],0) |
                                      (*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0;
                              pfVar16 = pfVar105 + 5;
                              *(byte *)pfVar16 = *(byte *)pfVar16 | bVar7;
                              if (*(byte *)pfVar16 == 0) {
                                bVar7 = *(byte *)((longlong)pfVar105 + 0x33);
                                if ((*(uint *)(uVar104 + 0x1c) >> 8 & 1) == 0) {
                                  bVar7 = *(byte *)((longlong)pfVar105 + 0x32);
                                }
                                uVar12 = (uint)bVar7;
                                fVar25 = 1.4013e-45;
                                if (bVar7 != 0) {
                                  fVar25 = (float)(uint)*(byte *)(pfVar105 + 0x10);
                                }
                                if ((((uint)pfVar105[6] >> 9 & 1) == 0) && (bVar7 != 0)) {
LAB_140798e2e:
                                  *(undefined4 *)(ulonglong)(iVar24 - 0x144) = 10;
                                  uVar107 = (ulonglong)(uint)pfVar105[1];
                                  *(undefined8 *)(puVar40 + -8) = 0;
                                  *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(uVar104 + 0x24)
                                  ;
                                  *(undefined8 *)(puVar40 + -0x18) = *(undefined8 *)(uVar104 + 0x20)
                                  ;
                                  *(undefined4 **)(puVar40 + -0x20) =
                                       (undefined4 *)(ulonglong)(iVar24 - 0x144);
                                  *(undefined8 *)(puVar40 + -0x28) = 0x140798e4d;
                                  cVar8 = FUN_14079ad14(uVar107);
                                  puVar98 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x20) + 0x10)
                                  ;
                                  puVar40 = puVar98;
                                  if (cVar8 != '\0') {
                                    uVar107 = (ulonglong)(uint)*pfVar105;
                                    puVar40 = puVar98 + -8;
                                    *(undefined8 *)(puVar98 + -8) = *(undefined8 *)(pfVar105 + 0x2b)
                                    ;
                                    *(undefined8 *)(puVar98 + -0x10) = 0x140798e62;
                                    FUN_14079a3bc(uVar107);
                                  }
                                  uVar22 = (uint7)(uVar107 >> 8);
                                  goto LAB_140798e64;
                                }
                              }
                              else if (bVar7 == 0) {
                                uVar22 = (uint7)(uint3)((uint)pfVar105[0x4d] >> 8);
                                if (((uint)pfVar105[6] >> 9 & 1) == 0) goto LAB_140798e2e;
LAB_140798e64:
                                uVar12 = (uint)CONCAT71(uVar22,1);
                                fVar25 = pfVar105[0x10];
                              }
                              else {
                                uVar12 = 0;
                                fVar25 = (float)CONCAT71((uint7)(uint3)(uVar106 >> 8),1);
                                if (((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) &&
                                   (*(char *)((ulonglong)(uint)pfVar105[1] + 0x7c) != '\0')) {
                                  fVar112 = *pfVar105;
                                  *(undefined8 *)(puVar40 + -8) = 0x140798d07;
                                  FUN_14079a536(fVar112);
                                  *(float *)((ulonglong)(uint)pfVar105[1] + 0x2548) = pfVar105[2];
                                  uVar12 = 0;
                                }
                              }
                              pfVar105[5] = (float)(uVar12 ^ 1);
                              bVar7 = 1;
                              pfVar105[0x10] = fVar25;
                              goto LAB_1407989ac;
                            }
                            if (*(char *)((longlong)pfVar105 + 0x3f) == '\0') {
                              bVar7 = *(byte *)((longlong)pfVar105 + 0x8f) &
                                      *(byte *)((longlong)pfVar105 + 0x8e) &
                                      *(byte *)(pfVar105 + 0x17);
                              if ((byte)(SUB41(pfVar105[0x4e],0) | bVar7) == 1) {
                                fVar25 = *pfVar105;
                                uVar107 = (ulonglong)(uint)fVar25;
                                *(ulonglong *)(puVar40 + -8) = (ulonglong)(bVar7 ^ 0x20000b);
                                *(undefined8 *)(puVar40 + -0x10) = 0x140798dbd;
                                FUN_140799ccc(uVar107);
                                *(undefined8 *)(puVar40 + -0x10) = 0x140798dc4;
                                FUN_14079a526(fVar25);
                                bVar7 = 1;
                                pfVar105[5] = 0.0;
                                puVar40 = puVar40 + -8;
                              }
                              else if (*(char *)((longlong)pfVar105 + 0x8d) == '\0') {
                                if ((*(byte *)(pfVar105 + 0x54) | *(byte *)(pfVar105 + 0x14)) == 1)
                                {
                                  if (*(int *)((ulonglong)(uint)pfVar105[1] + 0xc04) != 0) {
                                    fVar25 = *pfVar105;
                                    *(undefined8 *)(puVar40 + -8) = 0x140798f10;
                                    cVar8 = FUN_14079a518(fVar25);
                                    pfVar105[0x18] = 0.0;
                                    if (cVar8 != '\0') {
                                      uVar106 = *(uint *)((ulonglong)(uint)*pfVar105 + 4);
                                      *(undefined8 *)(puVar40 + -8) =
                                           *(undefined8 *)((ulonglong)uVar106 + 8);
                                      *(undefined8 *)(puVar40 + -0x10) =
                                           *(undefined8 *)((ulonglong)uVar106 + 4);
                                      *(undefined8 *)(puVar40 + -0x18) = 0x140798f2c;
                                      fVar25 = (float)FUN_140752553();
                                      puVar40 = (undefined1 *)
                                                (ulonglong)((int)(puVar40 + -0x10) + 8);
                                      pfVar105[0x18] = fVar25;
                                    }
                                    fVar25 = *pfVar105;
                                    *(undefined8 *)(puVar40 + -8) = 0x140798f3a;
                                    cVar8 = FUN_14079a518(fVar25);
                                    if (cVar8 == '\0') {
                                      iVar13 = *(int *)((ulonglong)(uint)*pfVar105 + 0x10);
                                    }
                                    else {
                                      uVar106 = *(uint *)((ulonglong)(uint)*pfVar105 + 4);
                                      *(undefined8 *)(puVar40 + -8) =
                                           *(undefined8 *)((ulonglong)uVar106 + 8);
                                      *(undefined8 *)(puVar40 + -0x10) =
                                           *(undefined8 *)((ulonglong)uVar106 + 4);
                                      *(undefined8 *)(puVar40 + -0x18) = 0x140798f53;
                                      iVar13 = FUN_140753b3a();
                                      puVar40 = (undefined1 *)
                                                (ulonglong)((int)(puVar40 + -0x10) + 8);
                                    }
                                    fVar25 = pfVar105[1];
                                    fVar112 = pfVar105[0x18];
                                    uVar106 = iVar13 - (int)fVar112;
                                    *(ulonglong *)(puVar40 + -8) = (ulonglong)(uVar106 + 1);
                                    *(undefined8 *)(puVar40 + -0x10) = 0x14079909a;
                                    FUN_140781150((int)fVar25 + 0x29a0);
                                    iVar13 = *(int *)((ulonglong)(uint)*pfVar105 + 0x14);
                                    *(ulonglong *)(puVar40 + -0x10) = (ulonglong)uVar106;
                                    *(ulonglong *)(puVar40 + -0x18) =
                                         (ulonglong)(uint)((int)fVar112 + iVar13);
                                    uVar107 = (ulonglong)(uint)pfVar105[1];
                                    *(undefined8 *)(puVar40 + -0x20) =
                                         *(undefined8 *)(uVar107 + 0x29a8);
                                    *(undefined8 *)(puVar40 + -0x28) = 0x1407990af;
                                    FUN_1408b31a0();
                                    uVar103 = (ulonglong)((int)(puVar40 + -0x20) + 0xc);
                                    *(undefined1 *)
                                     ((ulonglong)*(uint *)(uVar107 + 0x29a8) + (ulonglong)uVar106) =
                                         0;
                                    *(undefined8 *)(uVar103 - 8) = *(undefined8 *)(uVar107 + 0x29a8)
                                    ;
                                    *(undefined8 *)(uVar103 - 0x10) = 0x1407990c7;
                                    FUN_14075b1c2();
                                    puVar40 = (undefined1 *)(ulonglong)((int)(uVar103 - 8) + 4);
                                  }
                                  if (*(char *)(pfVar105 + 0x14) == '\0') {
LAB_1407990fe:
                                    pfVar105[5] = 0.0;
                                    goto LAB_140799176;
                                  }
                                  fVar25 = *pfVar105;
                                  *(undefined8 *)(puVar40 + -8) = 0x1407990d8;
                                  cVar8 = FUN_14079a518(fVar25);
                                  if (cVar8 == '\0') {
                                    fVar25 = *pfVar105;
                                    *(undefined8 *)(puVar40 + -8) = 0x1407990e4;
                                    FUN_14079a536(fVar25);
                                  }
                                  uVar107 = (ulonglong)(uint)*pfVar105;
                                  *(undefined1 *)(uVar107 + 0x54) = 1;
                                  *(undefined8 *)(puVar40 + -8) = 0x1407990f5;
                                  FUN_14079afab(uVar107);
                                  pfVar105[5] = 0.0;
                                }
                                else {
                                  if (*(char *)(pfVar105 + 0x5a) == '\0') goto LAB_1407990fe;
                                  *(undefined8 *)(puVar40 + -8) = 0x140798f6f;
                                  fVar25 = (float)FUN_14075b1a8();
                                  pfVar105[5] = 0.0;
                                  pfVar105[0x18] = fVar25;
                                  if (fVar25 != 0.0) {
                                    *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(pfVar105 + 0x18)
                                    ;
                                    *(undefined8 *)(puVar40 + -0x10) = 0x140798f8a;
                                    fVar25 = (float)FUN_1408c85c0();
                                    uVar99 = (ulonglong)((int)(puVar40 + -8) + 4);
                                    pfVar105[3] = fVar25;
                                    pfVar105[0x2c] = 0.0;
                                    pfVar105[0x2b] = 0.0;
                                    pfVar105[0x2d] = 0.0;
                                    pfVar105[0x7a] = 0.0;
                                    puVar40 = (undefined1 *)(uVar99 - 8);
                                    *(ulonglong *)(uVar99 - 8) = (ulonglong)(uint)pfVar105[3];
                                    *(undefined8 *)(uVar99 - 0x10) = 0x140798fbb;
                                    FUN_140781150(iVar24 + -0x144);
                                    pfVar105[4] = (float)((int)pfVar105[0x18] + (int)pfVar105[3]);
                                    while (*(char *)(ulonglong)(uint)pfVar105[0x18] != '\0') {
                                      *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(pfVar105 + 4);
                                      *(undefined8 *)(puVar40 + -0x10) =
                                           *(undefined8 *)(pfVar105 + 0x18);
                                      *(ulonglong *)(puVar40 + -0x18) = (ulonglong)(iVar24 - 0x16c);
                                      *(undefined8 *)(puVar40 + -0x20) = 0x140798fe4;
                                      fVar25 = (float)FUN_140750fa5();
                                      uVar100 = (ulonglong)((int)(puVar40 + -0x18) + 0xc);
                                      pfVar105[3] = fVar25;
                                      fVar25 = pfVar105[1];
                                      *(undefined8 *)(uVar100 - 8) = 1;
                                      *(undefined8 *)(uVar100 - 0x10) =
                                           *(undefined8 *)(uVar104 + 0x24);
                                      *(undefined8 *)(uVar100 - 0x18) =
                                           *(undefined8 *)(uVar104 + 0x20);
                                      *(ulonglong *)(uVar100 - 0x20) = (ulonglong)(iVar24 - 0x16c);
                                      *(undefined8 *)(uVar100 - 0x28) = 0x140799004;
                                      cVar8 = FUN_14079ad14(fVar25);
                                      puVar40 = (undefined1 *)
                                                (ulonglong)((int)(uVar100 - 0x20) + 0x10);
                                      if (cVar8 != '\0') {
                                        *(undefined8 *)(puVar40 + -8) =
                                             *(undefined8 *)(pfVar105 + 0x21);
                                        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(iVar24 - 0xb0)
                                        ;
                                        *(undefined8 *)(puVar40 + -0x18) = 0x14079901e;
                                        FUN_140752921();
                                        uVar101 = (ulonglong)((int)(puVar40 + -0x10) + 8);
                                        *(ulonglong *)(uVar101 - 8) = (ulonglong)(iVar24 - 0xb0);
                                        *(undefined8 *)(uVar101 - 0x10) = 0x14079902d;
                                        fVar25 = (float)FUN_1408c85c0();
                                        uVar102 = (ulonglong)((int)(uVar101 - 8) + 4);
                                        pfVar105[0x38] = fVar25;
                                        *(ulonglong *)(uVar102 - 8) =
                                             (ulonglong)(uint)((int)pfVar105[0x2b] + (int)fVar25);
                                        *(undefined8 *)(uVar102 - 0x10) = 0x14079904a;
                                        FUN_14079a790(iVar24 + -0x144);
                                        fVar25 = pfVar105[0x2d];
                                        fVar112 = pfVar105[0x2b];
                                        fVar113 = pfVar105[0x38];
                                        *(ulonglong *)(uVar102 - 0x10) = (ulonglong)(uint)fVar113;
                                        *(ulonglong *)(uVar102 - 0x18) = (ulonglong)(iVar24 - 0xb0);
                                        *(ulonglong *)(uVar102 - 0x20) =
                                             (ulonglong)
                                             (uint)(((int)fVar25 + (int)fVar112) - (int)fVar113);
                                        *(undefined8 *)(uVar102 - 0x28) = 0x14079906d;
                                        FUN_1408b31a0();
                                        puVar40 = (undefined1 *)
                                                  (ulonglong)((int)(uVar102 - 0x20) + 0xc);
                                      }
                                      pfVar105[0x18] =
                                           (float)((int)pfVar105[0x18] + (int)pfVar105[3]);
                                    }
                                    if (0 < (int)pfVar105[0x2b]) {
                                      *(undefined1 *)(pfVar105 + 0x50) = 0;
                                      *(ulonglong *)(puVar40 + -8) = (ulonglong)(iVar24 - 0xb0);
                                      *(undefined8 *)(puVar40 + -0x10) = 0x14079912b;
                                      FUN_14079afc2(iVar24 + -0x144);
                                      *(ulonglong *)(puVar40 + -0x10) =
                                           (ulonglong)(uint)pfVar105[0x2b];
                                      *(undefined8 *)(puVar40 + -0x18) =
                                           *(undefined8 *)(pfVar105 + 0x2d);
                                      *(undefined8 *)(puVar40 + -0x20) = 0x140799144;
                                      thunk_FUN_1407aa60b();
                                      puVar40 = (undefined1 *)
                                                (ulonglong)((int)(puVar40 + -0x18) + 8);
                                      *(undefined1 *)((ulonglong)(uint)*pfVar105 + 0x54) = 1;
                                    }
                                    pfVar105[0x7a] = -NAN;
                                    if (pfVar105[0x2d] != 0.0) {
                                      *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)pfVar105[0x2d]
                                      ;
                    /* WARNING: Subroutine does not return */
                                      *(undefined **)(puVar40 + -0x10) = &UNK_14079916b;
                                      FUN_14075219b();
                                    }
                                    pfVar105[5] = 0.0;
                                  }
LAB_140799176:
                                  uVar107 = (ulonglong)(uint)*pfVar105;
                                }
                                bVar7 = 1;
                              }
                              else {
                                uVar107 = (ulonglong)(uint)*pfVar105;
                                *(undefined8 *)(puVar40 + -8) = 0x140798ed8;
                                FUN_14079a536(uVar107);
                                *(undefined1 *)(uVar107 + 0x54) = 1;
                                bVar7 = 1;
                                pfVar105[5] = 0.0;
                              }
                            }
                            else {
                              pfVar105[5] = 0.0;
                              if (-1 < (char)*(undefined4 *)(uVar104 + 0x1c)) {
                                pfVar105[0x10] =
                                     (float)CONCAT71((uint7)(uint3)((uint)*(undefined4 *)
                                                                           (uVar104 + 0x1c) >> 8),1)
                                ;
                                bVar7 = SUB41(pfVar105[0xe],0);
                                pfVar105[10] = 0.0;
                                pfVar105[9] = 0.0;
                                goto LAB_1407989ac;
                              }
                              uVar107 = (ulonglong)(uint)*pfVar105;
                              bVar108 = *(char *)(ulonglong)*(uint *)(uVar107 + 0x20) == '\0';
                              fVar25 = (float)((uint)pfVar105[0x10] & 0xff);
                              if (bVar108) {
                                fVar25 = 1.4013e-45;
                              }
                              pfVar105[0x10] = fVar25;
                              fVar25 = (float)((uint)pfVar105[9] & 0xff);
                              pfVar105[5] = 0.0;
                              if (bVar108) {
                                fVar25 = 0.0;
                              }
                              pfVar105[9] = fVar25;
                              bVar7 = SUB41(pfVar105[0xe],0) | bVar108;
                              pfVar105[10] = (float)(uint)(!bVar108 & *(byte *)(pfVar105 + 10));
                            }
                          }
                        }
                      }
                      else {
                        uVar107 = (ulonglong)(uint)*pfVar105;
                        *(ulonglong *)(uVar96 - 8) =
                             (ulonglong)
                             ((uint)*(byte *)((ulonglong)(uint)pfVar105[1] + 0x104) * 2 | uVar106 |
                             0x200005);
                        *(undefined8 *)(uVar96 - 0x10) = 0x140798bf9;
                        FUN_140799ccc(uVar107);
                        bVar7 = 1;
                        pfVar105[5] = 0.0;
                        puVar40 = (undefined1 *)(uVar96 - 8);
                      }
                    }
                    else {
                      uVar107 = (ulonglong)(uint)*pfVar105;
                      *(ulonglong *)(uVar95 - 8) =
                           (ulonglong)
                           ((uint)*(byte *)((ulonglong)(uint)pfVar105[1] + 0x104) * 2 | uVar106 |
                           0x200004);
                      *(undefined8 *)(uVar95 - 0x10) = 0x140798bb9;
                      FUN_140799ccc(uVar107);
                      bVar7 = 1;
                      pfVar105[5] = 0.0;
                      puVar40 = (undefined1 *)(uVar95 - 8);
                    }
                  }
                  else {
                    uVar107 = (ulonglong)(uint)*pfVar105;
                    *(ulonglong *)(uVar94 - 8) = (ulonglong)(uVar106 | 0x20000f);
                    *(undefined8 *)(uVar94 - 0x10) = 0x140798a88;
                    FUN_140799ccc(uVar107);
                    pfVar105[0x44] =
                         pfVar105[0x44] +
                         (float)(int)pfVar105[0x5b] *
                         *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228);
                    bVar7 = 1;
                    pfVar105[5] = 0.0;
                    puVar40 = (undefined1 *)(uVar94 - 8);
                  }
                }
                else {
                  uVar107 = (ulonglong)(uint)*pfVar105;
                  *(ulonglong *)(uVar93 - 8) = (ulonglong)(uVar106 | 0x20000e);
                  *(undefined8 *)(uVar93 - 0x10) = 0x1407989f9;
                  FUN_140799ccc(uVar107);
                  pfVar105[0x44] =
                       pfVar105[0x44] -
                       (float)(int)pfVar105[0x5b] *
                       *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228);
                  bVar7 = 1;
                  pfVar105[5] = 0.0;
                  puVar40 = (undefined1 *)(uVar93 - 8);
                }
              }
              else {
                fVar25 = pfVar105[1];
                if (*(char *)((ulonglong)(uint)fVar25 + 0x104) == '\x01') {
                  *(undefined8 *)(uVar91 - 8) = 0x140798970;
                  FUN_14076d7cf();
                  fVar113 = pfVar105[0xb];
                  fVar112 = *(float *)((ulonglong)(uint)fVar113 + 200);
                  fVar25 = *(float *)((ulonglong)(uint)fVar25 + 0x1228);
                  pfVar92 = (float *)(uVar66 - 0x10 & 0xffffffff);
                  pfVar92[1] = (float)in_ST1;
                  *pfVar92 = fVar112 + fVar25;
                  pfVar92[-2] = 3.899022;
                  pfVar92[-1] = 1.4013e-45;
                  in_ST1 = in_ST3;
                  in_ST3 = in_ST5;
                  FUN_14074225a();
                  pfVar92[1] = (float)in_ST2;
                  *pfVar92 = fVar113;
                  pfVar92[-2] = 3.899025;
                  pfVar92[-1] = 1.4013e-45;
                  FUN_14076d802();
                  puVar40 = (undefined1 *)(ulonglong)((int)(uVar66 - 0x10) + 8);
                  bVar7 = 1;
                  pfVar105[5] = 0.0;
                  in_ST2 = in_ST4;
LAB_1407989ac:
                  uVar107 = (ulonglong)(uint)*pfVar105;
                }
                else {
                  uVar107 = (ulonglong)(uint)*pfVar105;
                  *(ulonglong *)(uVar91 - 8) =
                       (ulonglong)((uint)*(byte *)(pfVar105 + 4) << 2 | uVar106 | 0x200003);
                  *(undefined8 *)(uVar91 - 0x10) = 0x140798ad3;
                  FUN_140799ccc(uVar107);
                  bVar7 = 1;
                  pfVar105[5] = 0.0;
                  puVar40 = (undefined1 *)(uVar91 - 8);
                }
              }
            }
            else {
              if (*(char *)((ulonglong)(uint)pfVar105[1] + 0x104) == '\x01') {
                pfVar67 = (float *)(uVar65 - 0x10 & 0xffffffff);
                *pfVar67 = *(float *)((ulonglong)(uint)pfVar105[0xb] + 200) -
                           *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228);
                pfVar67[1] = 0.0;
                    /* WARNING: Subroutine does not return */
                *(undefined **)(pfVar67 + -2) = &UNK_1407975a3;
                FUN_140755a9a();
              }
              uVar107 = (ulonglong)(uint)*pfVar105;
              *(ulonglong *)(uVar66 - 8) =
                   (ulonglong)((uint)*(byte *)(pfVar105 + 4) << 2 | uVar106 | 0x200002);
              *(undefined8 *)(uVar66 - 0x10) = 0x140798a47;
              FUN_140799ccc(uVar107);
              bVar7 = 1;
              pfVar105[5] = 0.0;
              puVar40 = (undefined1 *)(uVar66 - 8);
            }
          }
          else {
            uVar12 = 0x200001;
            if (*(char *)(pfVar105 + 0x38) != '\0') {
              uVar12 = 0x20000d;
            }
            uVar110 = 0x200005;
            if (*(char *)(pfVar105 + 4) == '\0') {
              uVar110 = uVar12;
            }
            uVar107 = (ulonglong)(uint)*pfVar105;
            *(ulonglong *)(uVar65 - 8) = (ulonglong)(uVar110 | uVar106);
            *(undefined8 *)(uVar65 - 0x10) = 0x140797538;
            FUN_140799ccc(uVar107);
            bVar7 = 1;
            pfVar105[5] = 0.0;
            puVar40 = (undefined1 *)(uVar65 - 8);
          }
        }
        else {
          uVar12 = 0x200000;
          if (*(char *)(pfVar105 + 0x38) != '\0') {
            uVar12 = 0x20000c;
          }
          uVar110 = 0x200004;
          if (*(char *)(pfVar105 + 4) == '\0') {
            uVar110 = uVar12;
          }
          uVar107 = (ulonglong)(uint)*pfVar105;
          *(ulonglong *)(uVar64 - 8) = (ulonglong)(uVar110 | uVar106);
          *(undefined8 *)(uVar64 - 0x10) = 0x1407974e9;
          FUN_140799ccc(uVar107);
          bVar7 = 1;
          pfVar105[5] = 0.0;
          puVar40 = (undefined1 *)(uVar64 - 8);
        }
        fVar25 = pfVar105[10];
        *(undefined8 *)(puVar40 + -8) = 0x140798ae9;
        uVar17 = FUN_14079a518(uVar107);
        pfVar105[10] = (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),
                                       (byte)uVar17 & *(byte *)(pfVar105 + 9) | SUB41(fVar25,0));
        if (*(float *)((ulonglong)(uint)pfVar105[1] + 0x1528) != pfVar105[2]) goto LAB_140796fcf;
        pfVar105[3] = 0.0;
        if (bVar7 != 0) goto LAB_140796f6e;
        if ((char)*(undefined4 *)(uVar104 + 0x1c) < '\0') {
          *(undefined1 *)(ulonglong)(iVar24 - 0x144) = 0;
          *(undefined8 *)(puVar40 + -8) = 0;
          *(undefined1 **)(puVar40 + -0x10) = (undefined1 *)(ulonglong)(iVar24 - 0x144);
          *(undefined8 *)(puVar40 + -0x18) = 0x140798b70;
          uVar17 = FUN_14079b03a();
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
          pfVar105[4] = (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
          pfVar105[0x38] = 3.5770685e-29;
        }
        else {
          uVar107 = (ulonglong)(uint)*pfVar105;
          fVar25 = *(float *)(uVar107 + 0x2c);
          *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar25;
          *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(uVar107 + 0x20);
          *(undefined8 *)(puVar40 + -0x18) = 0x140798b28;
          iVar13 = FUN_1408c84e0();
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
          if (iVar13 == 0) goto LAB_140796f67;
          fVar112 = *(float *)(uVar107 + 0x24);
          pfVar105[3] = fVar112;
          *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
          pfVar105[0x38] = fVar25;
          *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar25;
          *(undefined8 *)(puVar40 + -0x18) = 0x140798b4d;
          uVar17 = FUN_14079b03a(uVar107);
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
          pfVar105[4] = (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
        }
      }
      else {
        pfVar105[5] = 0.0;
LAB_140796f67:
        pfVar105[3] = 0.0;
LAB_140796f6e:
        pfVar105[0x38] = 0.0;
        pfVar105[4] = 0.0;
      }
      if ((*(uint *)(uVar104 + 0x1c) & 0x9c0000) != 0) {
        if ((*(uint *)(uVar104 + 0x1c) >> 0x12 & 1) == 0) {
LAB_140796fe9:
          if ((*(uint *)(uVar104 + 0x1c) >> 0x13 & 1) == 0) {
LAB_140796ff4:
            if (((*(uint *)(uVar104 + 0x1c) >> 0x17 & 1) == 0) ||
               (*(char *)((ulonglong)(uint)*pfVar105 + 0x58) == '\0')) {
              if ((*(uint *)(uVar104 + 0x1c) >> 0x14 & 1) == 0) goto LAB_140797727;
              fVar25 = 1.469368e-39;
            }
            else {
              fVar25 = 1.1754944e-38;
            }
            pfVar105[0x54] = 0.0;
          }
          else {
            pfVar105[0x7a] = -NAN;
            fVar25 = 7.34684e-40;
            pfVar105[0x54] = 7.21669e-43;
            *(undefined8 *)(puVar40 + -8) = 1;
            *(undefined8 *)(puVar40 + -0x10) = 0x203;
            *(undefined8 *)(puVar40 + -0x18) = 0x14079710d;
            cVar8 = FUN_14076bc1b();
            puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
            if (cVar8 == '\0') {
              pfVar105[0x54] = 7.2307e-43;
              *(undefined8 *)(puVar40 + -8) = 1;
              *(undefined8 *)(puVar40 + -0x10) = 0x204;
              *(undefined8 *)(puVar40 + -0x18) = 0x14079712f;
              cVar8 = FUN_14076bc1b();
              puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
              if (cVar8 == '\0') goto LAB_140796ff4;
            }
          }
        }
        else {
          pfVar105[0x7a] = -NAN;
          *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(pfVar105 + 2);
          *(undefined8 *)(puVar40 + -0x10) = 0;
          *(undefined8 *)(puVar40 + -0x18) = 0x200;
          *(undefined8 *)(puVar40 + -0x20) = 0x140796fad;
          cVar8 = FUN_14075e480();
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
          if (cVar8 == '\0') goto LAB_140796fe9;
          fVar25 = 3.67342e-40;
          pfVar105[0x54] = 7.17465e-43;
        }
        pfVar16 = (float *)(ulonglong)(iVar24 - 0x144);
        *(undefined8 *)(puVar40 + -8) = 0x140797257;
        FUN_14079a556(pfVar16);
        fVar112 = pfVar105[1];
        *pfVar16 = fVar112;
        pfVar16[4] = pfVar105[2];
        pfVar16[2] = pfVar105[6];
        pfVar16[1] = fVar25;
        if (*(int *)((ulonglong)(uint)fVar112 + 0x1528) ==
            *(int *)((ulonglong)(uint)*pfVar105 + 0xc)) {
          uVar10 = *(undefined1 *)((ulonglong)(uint)fVar112 + 0x1534);
        }
        else {
          uVar10 = 0;
        }
        *(undefined1 *)((longlong)pfVar105 + 0xc6) = uVar10;
        pfVar105[0x2e] = *(float *)(uVar104 + 0x24);
        pfVar105[0x18] = *(float *)(uVar104 + 0x10);
        if (((uint)pfVar105[6] >> 9 & 1) == 0) {
          pfVar105[0x18] = *(float *)((ulonglong)(uint)*pfVar105 + 0x20);
        }
        uVar107 = (ulonglong)(uint)*pfVar105;
        iVar13 = *(int *)(uVar107 + 0x34);
        fVar25 = (float)(*(int *)(uVar107 + 0x10) + 1);
        if (*(int *)(uVar107 + 0x10) < iVar13) {
          param_3 = (ulonglong)*(uint *)(uVar107 + 0x38);
          pfVar105[0x7a] = -NAN;
          fVar112 = fVar25;
        }
        else {
          if (iVar13 == 0) {
            fVar112 = 1.12104e-44;
          }
          else {
            fVar112 = (float)(iVar13 / 2 + iVar13);
            pfVar105[0x7a] = -NAN;
          }
          pfVar105[0x17] = fVar25;
          if ((int)fVar112 <= (int)fVar25) {
            fVar112 = fVar25;
          }
          pfVar105[0x7a] = -NAN;
          *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
          *(undefined8 *)(puVar40 + -0x10) = 0x1407975dd;
          uVar17 = FUN_1407520ca();
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
          uVar107 = (ulonglong)(uint)*pfVar105;
          uVar106 = *(uint *)(uVar107 + 0x38);
          if (uVar106 != 0) {
            *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(uVar107 + 0x30);
            *(ulonglong *)(puVar40 + -0x10) = (ulonglong)uVar106;
            *(undefined8 *)(puVar40 + -0x18) = uVar17;
            pfVar105[0x14] = (float)uVar17;
            *(undefined8 *)(puVar40 + -0x20) = 0x1407975f7;
            FUN_1408b31a0();
            *(undefined8 *)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 8) =
                 *(undefined8 *)(uVar107 + 0x38);
                    /* WARNING: Subroutine does not return */
            *(undefined **)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 0x10) = &UNK_140797602;
            FUN_14075219b();
          }
          *(float *)(uVar107 + 0x38) = (float)uVar17;
          *(float *)(uVar107 + 0x34) = fVar112;
          fVar112 = *(float *)(uVar107 + 0x10);
          param_3 = param_3 & 0xffffffff;
          fVar25 = pfVar105[0x17];
        }
        *(float *)(uVar107 + 0x30) = fVar25;
        *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
        fVar25 = pfVar105[0x18];
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar25;
        *(ulonglong *)(puVar40 + -0x18) = param_3;
        *(undefined8 *)(puVar40 + -0x20) = 0x140797626;
        FUN_1408b31a0();
        uVar68 = (ulonglong)((int)(puVar40 + -0x18) + 0xc);
        pfVar105[0x30] = pfVar105[0x54];
        pfVar105[0x32] = fVar25;
        pfVar105[0x33] = *(float *)(uVar107 + 0x10);
        pfVar105[0x34] = *(float *)(uVar107 + 0x3c);
        *(undefined1 *)((longlong)pfVar105 + 199) = 0;
        pfVar105[0x35] = *(float *)(ulonglong)*(uint *)(uVar107 + 4);
        pfVar105[0x36] = *(float *)((ulonglong)*(uint *)(uVar107 + 4) + 4);
        pfVar105[0x37] = *(float *)((ulonglong)*(uint *)(uVar107 + 4) + 8);
        *(ulonglong *)(uVar68 - 8) = (ulonglong)(iVar24 - 0x144);
        pcVar4 = *(code **)(uVar104 + 0x20);
        *(undefined8 *)(uVar68 - 0x10) = 0x140797681;
        (*pcVar4)();
        uVar69 = (ulonglong)((int)(uVar68 - 8) + 4);
        fVar25 = pfVar105[0x35];
        if ((*(char *)((longlong)pfVar105 + 199) != '\0') ||
           (fVar25 != *(float *)(ulonglong)*(uint *)(uVar107 + 4))) {
          *(undefined1 *)(uVar107 + 0x54) = 1;
        }
        *(undefined8 *)(uVar69 - 8) = *(undefined8 *)(pfVar105 + 0x33);
        *(undefined8 *)(uVar69 - 0x10) = 0;
        *(ulonglong *)(uVar69 - 0x18) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(uVar69 - 0x20) = 0x1407976af;
        uVar11 = FUN_14077dc6a();
        uVar70 = (ulonglong)((int)(uVar69 - 0x18) + 0xc);
        *(undefined4 *)(ulonglong)*(uint *)(uVar107 + 4) = uVar11;
        *(undefined8 *)(uVar70 - 8) = *(undefined8 *)(pfVar105 + 0x33);
        *(undefined8 *)(uVar70 - 0x10) = 0;
        *(undefined8 *)(uVar70 - 0x18) = *(undefined8 *)(pfVar105 + 0x36);
        *(undefined8 *)(uVar70 - 0x20) = 0x1407976c9;
        uVar11 = FUN_14077dc6a();
        uVar71 = (ulonglong)((int)(uVar70 - 0x18) + 0xc);
        *(undefined4 *)((ulonglong)*(uint *)(uVar107 + 4) + 4) = uVar11;
        *(undefined8 *)(uVar71 - 8) = *(undefined8 *)(pfVar105 + 0x33);
        *(undefined8 *)(uVar71 - 0x10) = 0;
        *(undefined8 *)(uVar71 - 0x18) = *(undefined8 *)(pfVar105 + 0x37);
        *(undefined8 *)(uVar71 - 0x20) = 0x1407976e4;
        uVar11 = FUN_14077dc6a();
        puVar40 = (undefined1 *)(ulonglong)((int)(uVar71 - 0x18) + 0xc);
        *(undefined4 *)((ulonglong)*(uint *)(uVar107 + 4) + 8) = uVar11;
        if (*(char *)((longlong)pfVar105 + 199) == '\x01') {
          uVar107 = (ulonglong)(uint)*pfVar105;
          uVar106 = *(uint *)(uVar107 + 0x30);
          *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(pfVar105 + 0x33);
          *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(pfVar105 + 0x32);
          *(ulonglong *)(puVar40 + -0x18) = (ulonglong)uVar106;
          *(undefined8 *)(puVar40 + -0x20) = 0x140797714;
          FUN_14079aaad(uVar107);
          puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x18) + 0xc);
          *(float *)(uVar107 + 0x10) = pfVar105[0x33];
          *(undefined8 *)(puVar40 + -8) = 0x140797727;
          FUN_14079a3b4(uVar107);
        }
      }
LAB_140797727:
      if (((uint)pfVar105[6] >> 9 & 1) == 0) {
        fVar25 = *pfVar105;
        fVar112 = *(float *)((ulonglong)(uint)fVar25 + 0x14);
        *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(uVar104 + 0x10);
        pfVar105[0x18] = fVar112;
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar112;
        *(undefined8 *)(puVar40 + -0x18) = 0x140797740;
        iVar13 = FUN_1408c84e0();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
        if (iVar13 != 0) {
          fVar25 = *(float *)((ulonglong)(uint)fVar25 + 0x10);
          pfVar105[3] = fVar25;
          pfVar105[4] = (float)CONCAT71((uint7)(uint3)((uint)fVar25 >> 8),1);
          goto code_r0x00014079775f;
        }
      }
      pfVar105[0x18] = pfVar105[0x38];
    }
    else {
      pfVar105[5] = 0.0;
LAB_140796fcf:
      pfVar105[3] = 0.0;
      pfVar105[0x18] = 0.0;
      pfVar105[4] = 0.0;
    }
code_r0x00014079775f:
    if (*(float *)((ulonglong)(uint)pfVar105[1] + 0x24e4) == pfVar105[2]) {
      if (*(float *)((ulonglong)(uint)pfVar105[1] + 0x1528) == pfVar105[2]) {
LAB_140797791:
        uVar107 = (ulonglong)(uint)pfVar105[1];
      }
      else {
        pfVar105[0x7a] = -NAN;
        *(undefined8 *)(puVar40 + -8) = 0x140797786;
        cVar8 = FUN_140763e31();
        if (cVar8 != '\x01' || *(char *)(pfVar105 + 0xe) != '\0') goto LAB_140797791;
        uVar107 = (ulonglong)(uint)pfVar105[1];
        fVar25 = *(float *)(uVar107 + 0x24f0);
        *(undefined8 *)(puVar40 + -8) = *(undefined8 *)(uVar104 + 0x10);
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(puVar40 + -0x18) = 0x140797e99;
        iVar13 = FUN_1408c84e0();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x10) + 8);
        if (iVar13 != 0) {
          uVar106 = *(uint *)(uVar107 + 0x24e8);
          *(ulonglong *)(pfVar105 + 3) = (ulonglong)uVar106;
          pfVar105[4] = (float)CONCAT71((uint7)(uint3)(uVar106 >> 8),1);
          pfVar105[0x18] = fVar25;
        }
      }
      *(undefined4 *)(uVar107 + 0x24e4) = 0;
    }
    if (pfVar105[0x18] != 0.0) {
      if ((*(uint *)(uVar104 + 0x1c) >> 0x16 & 1) == 0) {
        fVar25 = *(float *)(uVar104 + 0x10);
        fVar112 = *(float *)(uVar104 + 0x14);
        uVar107 = (ulonglong)(uint)pfVar105[3];
      }
      else {
        pfVar16 = (float *)(ulonglong)(iVar24 - 0x144);
        *(undefined8 *)(puVar40 + -8) = 0x1407977cb;
        FUN_14079a556(pfVar16);
        fVar25 = pfVar105[1];
        *pfVar16 = fVar25;
        pfVar16[4] = pfVar105[2];
        pfVar16[2] = pfVar105[6];
        pfVar16[1] = 5.877472e-39;
        if ((*(char *)(pfVar105 + 8) == '\0') ||
           (*(int *)((ulonglong)(uint)fVar25 + 0x1528) != *(int *)((ulonglong)(uint)*pfVar105 + 0xc)
           )) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined1 *)((ulonglong)(uint)fVar25 + 0x1534);
          pfVar105[0x7a] = -NAN;
        }
        *(undefined1 *)((longlong)pfVar105 + 0xc6) = uVar10;
        pfVar105[0x32] = *(float *)(uVar104 + 0x10);
        pfVar105[0x33] = pfVar105[3];
        *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)pfVar105[3];
        *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(uVar104 + 0x14);
        *(undefined8 *)(puVar40 + -0x18) = 0x14079782f;
        fVar25 = (float)FUN_140753b3a();
        uVar72 = (ulonglong)((int)(puVar40 + -0x10) + 8);
        pfVar105[0x34] = fVar25;
        pfVar105[0x2e] = *(float *)(uVar104 + 0x24);
        pfVar105[0x7a] = -NAN;
        *(float **)(uVar72 - 8) = pfVar16;
        pcVar4 = *(code **)(uVar104 + 0x20);
        *(undefined8 *)(uVar72 - 0x10) = 0x14079784f;
        (*pcVar4)();
        uVar73 = (ulonglong)((int)(uVar72 - 8) + 4);
        fVar25 = pfVar105[0x32];
        fVar112 = pfVar105[0x34];
        *(ulonglong *)(uVar73 - 8) = (ulonglong)((int)fVar112 - 1);
        *(undefined8 *)(uVar73 - 0x10) = *(undefined8 *)(pfVar105 + 0x33);
        *(undefined8 *)(uVar73 - 0x18) = 0x14079786d;
        uVar107 = FUN_140752553();
        puVar40 = (undefined1 *)(ulonglong)((int)(uVar73 - 0x10) + 8);
      }
      *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
      *(ulonglong *)(puVar40 + -0x10) = uVar107;
      *(undefined8 *)(puVar40 + -0x18) = 0x140797878;
      uVar17 = FUN_140752553();
      uVar74 = (ulonglong)((int)(puVar40 + -0x10) + 8);
      pfVar105[0x7a] = -NAN;
      *(undefined8 *)(uVar74 - 8) = uVar17;
      *(undefined8 *)(uVar74 - 0x10) = *(undefined8 *)(pfVar105 + 0x18);
      pfVar105[7] = fVar25;
      *(ulonglong *)(uVar74 - 0x18) = (ulonglong)(uint)fVar25;
      *(undefined8 *)(uVar74 - 0x20) = 0x140797892;
      FUN_14075206f();
      puVar40 = (undefined1 *)(ulonglong)((int)(uVar74 - 0x18) + 0xc);
    }
    if ((*(float *)((ulonglong)(uint)pfVar105[1] + 0x1528) == pfVar105[2]) &&
       (*(char *)(pfVar105 + 0x10) != '\0')) {
      pfVar105[0x7a] = -NAN;
      *(undefined8 *)(puVar40 + -8) = 0x1407978bb;
      FUN_14075a7a8();
    }
    if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) {
      pfVar105[0x7a] = -NAN;
      *(undefined8 *)(puVar40 + -8) = 0;
      *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(pfVar105 + 2);
      *(ulonglong *)(puVar40 + -0x18) = (ulonglong)(iVar24 - 0xcc);
      *(undefined8 *)(puVar40 + -0x20) = 0x140797949;
      FUN_14075612e();
      uVar75 = (ulonglong)((int)(puVar40 + -0x18) + 0xc);
      fVar25 = pfVar105[1];
      pfVar105[0x10] = *(float *)((ulonglong)(uint)fVar25 + 0xd14);
      *(undefined8 *)(uVar75 - 8) = 0x3f800000;
      *(undefined8 *)(uVar75 - 0x10) = 7;
      *(undefined8 *)(uVar75 - 0x18) = 0x140797968;
      fVar14 = (float)FUN_140754a09();
      fVar112 = pfVar105[0x49];
      fVar113 = pfVar105[0x4a];
      fVar115 = pfVar105[0x4b];
      fVar114 = pfVar105[0x4c];
      pfVar76 = (float *)(ulonglong)((int)(uVar75 - 0x10) - 0x14);
      pfVar76[6] = pfVar105[0x10];
      pfVar76[4] = fVar14;
      *pfVar76 = fVar112;
      pfVar76[1] = fVar113;
      pfVar76[2] = fVar115;
      pfVar76[3] = fVar114;
      pfVar76[5] = 1.4013e-45;
      pfVar76[-2] = 3.8980458;
      pfVar76[-1] = 1.4013e-45;
      FUN_140755db9();
      puVar40 = (undefined1 *)(ulonglong)((int)(uVar75 - 0x10) + 8);
      fVar112 = pfVar105[0x49];
      fVar113 = pfVar105[0x4a];
      uVar17 = *(undefined8 *)((ulonglong)(uint)fVar25 + 0xd0c);
      *(ulonglong *)(pfVar105 + 0x21) =
           CONCAT44((float)((ulonglong)uVar17 >> 0x20) + fVar113,(float)uVar17 + fVar112);
      pfVar105[0x2b] = fVar112;
      pfVar105[0x2c] = fVar113;
      pfVar105[0x2d] = pfVar105[0x5c] + fVar112;
      pfVar105[0x2e] = pfVar105[0x25] + fVar113;
    }
    else {
      *(undefined8 *)(pfVar105 + 0x21) = *(undefined8 *)((ulonglong)(uint)pfVar105[0xb] + 0x144);
      fVar25 = (float)*(undefined8 *)(pfVar105 + 0x49);
      fVar112 = (float)((ulonglong)*(undefined8 *)(pfVar105 + 0x49) >> 0x20);
      auVar1 = *(undefined1 (*) [16])((ulonglong)(uint)pfVar105[0xb] + 0x28c);
      uVar106 = -(uint)(auVar1._0_4_ <= fVar25);
      uVar12 = -(uint)(auVar1._4_4_ <= fVar112);
      uVar110 = -(uint)(pfVar105[0x5c] + fVar25 < auVar1._8_4_);
      uVar111 = -(uint)(pfVar105[0x3c] + pfVar105[0x4a] < auVar1._12_4_);
      auVar117._0_4_ = ~uVar106 & (uint)auVar1._0_4_;
      auVar117._4_4_ = ~uVar12 & (uint)auVar1._4_4_;
      auVar117._8_4_ = ~uVar110 & (uint)auVar1._8_4_;
      auVar117._12_4_ = ~uVar111 & (uint)auVar1._12_4_;
      auVar1._4_4_ = (uint)fVar112 & uVar12;
      auVar1._0_4_ = (uint)fVar25 & uVar106;
      auVar1._8_4_ = (uint)(pfVar105[0x5c] + fVar25) & uVar110;
      auVar1._12_4_ = (uint)(pfVar105[0x3c] + pfVar105[0x4a]) & uVar111;
      *(undefined1 (*) [16])(pfVar105 + 0x2b) = auVar117 | auVar1;
    }
    if (*(char *)(pfVar105 + 0x1f) == '\0') {
      iVar13 = *(int *)(uVar104 + 0xc);
      pfVar105[0x16] = 0.0;
      if (iVar13 == 0) goto LAB_140797a0e;
code_r0x0001407979ee:
      cVar8 = SUB41(pfVar105[0xd],0);
      bVar108 = *(char *)(ulonglong)(uint)pfVar105[7] == '\0';
      if ((bool)cVar8 != (*(char *)(ulonglong)(uint)pfVar105[7] == '\0')) {
LAB_140797a16:
        cVar8 = bVar108;
        if (((uint)pfVar105[0x4f] & 1) == 0) {
          *(undefined8 *)(puVar40 + -8) = 0x140797a24;
          FUN_14079a8d8();
        }
        if ((*(uint *)(uVar104 + 0x1c) >> 10 & 1) != 0 && (bool)cVar8 == false) {
          pfVar105[0x7a] = -NAN;
          *(undefined8 *)(puVar40 + -8) = 0x140797a62;
          FUN_14079a7f4();
          goto LAB_140797a62;
        }
      }
      if (cVar8 == '\0') goto LAB_140797a62;
      fVar112 = *(float *)(uVar104 + 0xc);
      *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar112;
      *(undefined8 *)(puVar40 + -0x10) = 0x140797a40;
      uVar17 = FUN_1408c85c0();
      puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
      fVar25 = (float)((int)uVar17 + (int)fVar112);
      pfVar105[0x1f] = (float)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
      pfVar105[7] = fVar112;
code_r0x000140797a90:
      uVar106 = *(uint *)(uVar104 + 0x1c);
      pfVar105[0x24] = fVar25;
      pfVar105[0x16] = fVar25;
      pfVar105[0x2a] = 0.0;
      pfVar105[0x15] = 1.4013e-45;
      uVar107 = (ulonglong)(uint)pfVar105[1];
      if ((uVar106 >> 0x1a & 1) != 0) goto code_r0x000140797ab6;
    }
    else {
      iVar13 = *(int *)(uVar104 + 0xc);
      pfVar105[7] = *(float *)((ulonglong)(uint)*pfVar105 + 0x20);
      pfVar105[0x16] = 0.0;
      if (iVar13 != 0) goto code_r0x0001407979ee;
LAB_140797a0e:
      if (*(char *)(pfVar105 + 0xd) != '\0') {
        bVar108 = false;
        goto LAB_140797a16;
      }
LAB_140797a62:
      if ((((SUB41(pfVar105[9],0) | *(byte *)(pfVar105 + 10)) & 1) != 0) ||
         (*(float *)((ulonglong)(uint)pfVar105[1] + 0x1528) == pfVar105[2])) {
        fVar25 = (float)(*(int *)((ulonglong)(uint)*pfVar105 + 0x10) + (int)pfVar105[7]);
        pfVar105[0x1f] = 0.0;
        goto code_r0x000140797a90;
      }
      if ((*(uint *)(uVar104 + 0x1c) & 0x5000000) != 0x4000000) {
        fVar25 = pfVar105[7];
        *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)fVar25;
        *(undefined8 *)(puVar40 + -0x10) = 0x140797ec7;
        iVar13 = FUN_1408c85c0();
        puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
        fVar25 = (float)(iVar13 + (int)fVar25);
        pfVar105[0x1f] = 0.0;
        goto code_r0x000140797a90;
      }
      pfVar105[0x16] = 0.0;
      pfVar105[0x24] = 0.0;
      pfVar105[0x2a] = 0.0;
      pfVar105[0x15] = 1.4013e-45;
      pfVar105[0x7a] = -NAN;
      pfVar105[0x1f] = 0.0;
      uVar107 = (ulonglong)(uint)pfVar105[1];
code_r0x000140797ab6:
      iVar13 = *(int *)(uVar107 + 0x1228);
      pfVar105[0x7a] = -NAN;
      piVar77 = (int *)(ulonglong)((int)puVar40 - 0x14);
      piVar77[4] = iVar24 + -0x19c;
      piVar77[3] = iVar24 + -0x148;
      piVar77[2] = iVar13;
      piVar77[1] = iVar24 + -0x16c;
      *piVar77 = iVar24 + -0x144;
      piVar77[-2] = 0x40797afa;
      piVar77[-1] = 1;
      FUN_140754984();
      puVar40 = (undefined1 *)((ulonglong)puVar40 & 0xffffffff);
    }
    fVar25 = (float)((int)uVar107 + 0x24d4);
    iVar13 = *(int *)(uVar107 + 0x24d8);
    pfVar105[0xd] = fVar25;
    if (iVar13 < 0) {
      pfVar105[0x7a] = -NAN;
      *(undefined8 *)(puVar40 + -8) = 0;
      *(undefined8 *)(puVar40 + -0x10) = 0x140797b22;
      uVar12 = FUN_1407520ca();
      puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -8) + 4);
      uVar107 = (ulonglong)(uint)pfVar105[1];
      uVar106 = *(uint *)(uVar107 + 0x24dc);
      if (uVar106 != 0) {
        *(ulonglong *)(puVar40 + -8) = (ulonglong)(uint)(*(int *)(uVar107 + 0x24d4) << 2);
        *(ulonglong *)(puVar40 + -0x10) = (ulonglong)uVar106;
        *(ulonglong *)(puVar40 + -0x18) = (ulonglong)uVar12;
        *(undefined8 *)(puVar40 + -0x20) = 0x140797b46;
        FUN_1408b31a0();
        *(undefined8 *)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 8) =
             *(undefined8 *)(uVar107 + 0x24dc);
                    /* WARNING: Subroutine does not return */
        *(undefined **)((ulonglong)((int)(puVar40 + -0x18) + 0xc) - 0x10) = &UNK_140797b54;
        FUN_14075219b();
      }
      *(uint *)(uVar107 + 0x24dc) = uVar12;
      *(undefined4 *)(uVar107 + 0x24d8) = 0;
      fVar25 = pfVar105[0xd];
    }
    uVar106 = *(uint *)(uVar104 + 0x1c);
    *(undefined4 *)(ulonglong)(uint)fVar25 = 0;
    if ((uVar106 >> 0x1a & 1) == 0) {
      uVar107 = 0;
      fVar25 = *(float *)(unaff_R14 + 0x1c);
      fVar112 = pfVar105[0x24];
    }
    else {
      if (*(char *)(pfVar105 + 8) == '\0') {
        uVar19 = (ulonglong)(uint)pfVar105[0x24];
        uVar107 = (ulonglong)(iVar24 - 0x198);
        if (pfVar105[0x24] != 0.0) {
          uVar107 = 0;
        }
        uVar23 = (ulonglong)(uint)pfVar105[0x15];
        *(undefined4 *)(unaff_R14 + 0x1e8) = 0xffffffff;
      }
      else if ((*(char *)((ulonglong)(uint)*pfVar105 + 0x54) == '\x01') &&
              (*(char *)(pfVar105 + 9) != '\0')) {
        uVar19 = (ulonglong)(uint)pfVar105[0x24];
        uVar107 = (ulonglong)(iVar24 - 0x198);
        if (pfVar105[0x24] != 0.0) {
          uVar107 = 0;
        }
        pfVar105[0x7a] = -NAN;
        uVar23 = 0x7fffffff;
      }
      else {
        uVar19 = (ulonglong)(uint)pfVar105[0x24];
        uVar107 = (ulonglong)(iVar24 - 0x198);
        if (pfVar105[0x24] != 0.0) {
          uVar107 = 0;
        }
        fVar25 = NAN;
        if (((SUB41(pfVar105[9],0) | *(byte *)(pfVar105 + 10)) & 1) == 0) {
          fVar25 = pfVar105[0x15];
        }
        if ((*(byte *)((ulonglong)(uint)*pfVar105 + 0x55) & 1) == 0) {
          fVar25 = pfVar105[0x15];
        }
        uVar23 = (ulonglong)(uint)fVar25;
        pfVar105[0x7a] = -NAN;
      }
      fVar113 = pfVar105[0xd];
      fVar112 = pfVar105[0x1e];
      *(ulonglong *)(puVar40 + -8) = uVar107;
      *(ulonglong *)(puVar40 + -0x10) = uVar23;
      *(ulonglong *)(puVar40 + -0x18) = uVar19;
      fVar25 = pfVar105[7];
      *(ulonglong *)(puVar40 + -0x20) = (ulonglong)(uint)fVar25;
      *(undefined8 *)(puVar40 + -0x28) = 0x140797c8c;
      uVar106 = FUN_14079b096(fVar112,fVar113);
      puVar40 = (undefined1 *)(ulonglong)((int)(puVar40 + -0x20) + 0x10);
      uVar107 = (ulonglong)uVar106;
      fVar112 = pfVar105[0x16];
    }
    pfVar105[0x24] = fVar112;
    pfVar105[7] = fVar25;
    uVar19 = (ulonglong)(uint)pfVar105[1];
    *(int *)(uVar19 + 0x24e0) = (int)fVar112 - (int)fVar25;
    *(ulonglong *)(puVar40 + -8) = uVar107;
    *(undefined8 *)(puVar40 + -0x10) = *(undefined8 *)(pfVar105 + 0x15);
    *(undefined8 *)(puVar40 + -0x18) = 0x140797cb2;
    fVar25 = (float)FUN_140752553();
    uVar78 = (ulonglong)((int)(puVar40 + -0x10) + 8);
    fVar112 = (float)uVar107;
    pfVar105[0x15] = fVar25;
    bVar9 = SUB41(pfVar105[9],0);
    pfVar105[0x14] = (float)(int)fVar112 * *(float *)(uVar19 + 0x1228);
    pfVar105[0x7a] = -NAN;
    bVar7 = *(byte *)(pfVar105 + 0x1f);
    if ((SUB41(pfVar105[8],0) & bVar9) == 1) {
      pfVar105[0x10] = fVar112;
      uVar107 = (ulonglong)(uint)*pfVar105;
      pfVar105[0x18] = (float)(uint)bVar7;
      *(undefined8 *)(uVar78 - 8) = *(undefined8 *)(ulonglong)*(uint *)(uVar107 + 4);
      *(undefined8 *)(uVar78 - 0x10) = *(undefined8 *)(pfVar105 + 0x24);
      *(undefined8 *)(uVar78 - 0x18) = *(undefined8 *)(pfVar105 + 7);
      *(undefined8 *)(uVar78 - 0x20) = *(undefined8 *)(pfVar105 + 0xd);
      *(ulonglong *)(uVar78 - 0x28) = uVar107;
      *(undefined8 *)(uVar78 - 0x30) = 0x140797d13;
      FUN_14079b48e(iVar24 + -0x90,uVar19);
      uVar79 = (ulonglong)((int)(uVar78 - 0x28) + 0x14);
      *(undefined8 *)(uVar79 - 8) = 0x3f800000;
      *(undefined8 *)(uVar79 - 0x10) = *(undefined8 *)(pfVar105 + 0x18);
      *(undefined8 *)(uVar79 - 0x18) = 0x140797d23;
      fVar25 = (float)FUN_140754a09();
      pfVar80 = (float *)(ulonglong)((int)(uVar79 - 0x10) + 8);
      pfVar105[0x17] = fVar25;
      *(float *)(uVar107 + 0x48) = pfVar105[0x10];
code_r0x000140797d30:
      fVar109 = in_ST1;
      if (*(char *)(uVar107 + 0x54) == '\x01') {
        if ((short)*(undefined4 *)(uVar104 + 0x1c) < 0) {
          *(undefined4 *)((ulonglong)(uint)*pfVar105 + 0x40) = 0;
        }
        else {
          fVar112 = _DAT_150a512bf * SUB164(*(undefined1 (*) [16])(pfVar105 + 0x5c),0);
          fVar25 = pfVar105[0x58];
          if (fVar25 < *(float *)((ulonglong)(uint)*pfVar105 + 0x40)) {
            puVar81 = (undefined4 *)(ulonglong)((int)pfVar80 - 8);
            puVar81[1] = fVar25 - fVar112;
            *puVar81 = 0;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar81 + -2) = &UNK_140797d8b;
            FUN_140755a9a();
          }
          fVar25 = fVar25 - (SUB164(*(undefined1 (*) [16])(pfVar105 + 0x5c),0) -
                            *(float *)((ulonglong)(uint)pfVar105[1] + 0xd0c));
          if (*(float *)((ulonglong)(uint)*pfVar105 + 0x40) <= fVar25) {
            *(float *)((ulonglong)(uint)*pfVar105 + 0x40) = (float)(int)(fVar112 + fVar25);
          }
        }
        fVar25 = pfVar105[0x44];
        if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) != 0) {
          fVar112 = pfVar105[0x59];
          fVar113 = fVar112 - *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228);
          fVar25 = pfVar105[0x44];
          if (fVar113 < fVar25) {
            puVar82 = (undefined4 *)(ulonglong)((int)pfVar80 - 8);
            puVar82[1] = fVar113;
            *puVar82 = 0;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar82 + -2) = &UNK_140797e70;
            FUN_140755a9a();
          }
          fVar113 = *(float *)((ulonglong)(uint)pfVar105[1] + 0xd10);
          fVar113 = fVar113 + fVar113;
          if (fVar25 <= fVar112 - (pfVar105[0x3c] - fVar113)) {
            fVar25 = fVar113 + (fVar112 - pfVar105[0x3c]);
          }
        }
        uVar107 = (ulonglong)(uint)*pfVar105;
        *(undefined1 *)(uVar107 + 0x54) = 0;
      }
      else {
        fVar25 = pfVar105[0x44];
        uVar107 = (ulonglong)(uint)*pfVar105;
      }
code_r0x000140797f46:
      if (*(char *)(uVar107 + 0x55) == '\x01') {
        if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) != 0) {
          fVar25 = (pfVar105[0x59] - *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228)) -
                   (_DAT_150a4f04f * pfVar105[0x3c] -
                   *(float *)((ulonglong)(uint)pfVar105[1] + 0xd10));
        }
        *(undefined1 *)((ulonglong)(uint)*pfVar105 + 0x55) = 0;
        pfVar105[9] = 0.0;
      }
      if ((fVar25 != pfVar105[0x44]) || (NAN(fVar25) || NAN(pfVar105[0x44]))) {
        fVar112 = *(float *)((ulonglong)(uint)pfVar105[1] + 0xd10);
        fVar113 = pfVar105[0x14];
        fVar115 = pfVar105[0x3c];
        pfVar83 = (float *)(ulonglong)((int)pfVar80 - 8);
        pfVar83[1] = 0.0;
        *pfVar83 = (fVar112 + fVar112 + fVar113) - fVar115;
        pfVar105[0x24] = fVar25;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(pfVar83 + -2) = &UNK_140797fd8;
        FUN_140755a9a();
      }
      pfVar105[3] = *(float *)((ulonglong)(uint)*pfVar105 + 0x40);
      in_ST1 = fVar109;
      if (*(char *)(pfVar105 + 10) != '\0') {
        uVar11 = _DAT_150a234d3;
        if (*(char *)(pfVar105 + 9) == '\0') {
          uVar11 = _DAT_150a4f271;
        }
        puVar84 = (undefined4 *)(ulonglong)((int)pfVar80 - 8);
        puVar84[1] = uVar11;
        *puVar84 = 0x36;
        *(undefined8 *)(puVar84 + -2) = 0x1407980b8;
        fVar25 = (float)FUN_140754a09();
        pfVar105[0x4f] = fVar25;
        pfVar105[0xe] = 0.0;
        if ((*(uint *)(uVar104 + 0x1c) & 0x4000000) == 0) {
          pfVar105[0xe] = _DAT_150a50b9a;
        }
        uVar11 = *(undefined4 *)((ulonglong)(uint)pfVar105[1] + 0x1224);
        *(undefined8 *)((longlong)pfVar80 + -8) = 0x20;
        *(undefined8 *)((longlong)pfVar80 + -0x10) = 0x1407980ef;
        in_ST1 = in_ST2;
        in_ST2 = in_ST3;
        FUN_1407eae88(uVar11);
        pfVar105[100] = (float)fVar109;
        *(undefined1 (*) [16])(pfVar105 + 0x18) = ZEXT416((uint)pfVar105[100]);
        fVar25 = *pfVar105;
        uVar107 = (ulonglong)*(uint *)((ulonglong)(uint)fVar25 + 4);
        *(undefined8 *)((longlong)pfVar80 + -0x10) = *(undefined8 *)(uVar107 + 8);
        *(undefined8 *)((longlong)pfVar80 + -0x18) = *(undefined8 *)(uVar107 + 4);
        *(undefined8 *)((longlong)pfVar80 + -0x20) = 0x140798111;
        fVar112 = (float)FUN_140752553();
        uVar85 = (ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x18) + 8);
        pfVar105[0x24] = fVar112;
        uVar107 = (ulonglong)*(uint *)((ulonglong)(uint)fVar25 + 4);
        *(undefined8 *)(uVar85 - 8) = *(undefined8 *)(uVar107 + 8);
        *(undefined8 *)(uVar85 - 0x10) = *(undefined8 *)(uVar107 + 4);
        *(undefined8 *)(uVar85 - 0x18) = 0x140798128;
        fVar25 = (float)FUN_140753b3a();
        pfVar80 = (float *)(ulonglong)((int)(uVar85 - 0x10) + 8);
        pfVar105[0x10] = fVar25;
        fVar25 = pfVar105[0x2a];
        if ((int)fVar25 < (int)pfVar105[0x15]) {
          pfVar105[0x38] = (float)(int)(pfVar105[0x18] * _DAT_150a4f229);
          pfVar105[0x39] = (float)(int)pfVar105[0x19];
          pfVar105[0x3a] = (float)(int)pfVar105[0x1a];
          pfVar105[0x3b] = (float)(int)pfVar105[0x1b];
          pfVar105[0x54] = 0.0;
          pfVar105[0x55] = 0.0;
          pfVar105[0x56] = 0.0;
          pfVar105[0x57] = 0.0;
          if ((*(uint *)(uVar104 + 0x1c) & 0x4000000) == 0) {
            *(undefined1 (*) [16])(pfVar105 + 0x54) = ZEXT416(_DAT_150a50bc2);
          }
          pfVar105[0x24] = (float)((int)pfVar105[0x24] + (int)pfVar105[7]);
          pfVar105[0x10] = (float)((int)pfVar105[0x10] + (int)pfVar105[7]);
          do {
            iVar13 = *(int *)(ulonglong)(uint)pfVar105[0xd];
            iVar15 = 0;
            if (iVar13 != 0) {
              iVar15 = *(int *)((ulonglong)*(uint *)((ulonglong)(uint)pfVar105[1] + 0x24dc) +
                               (ulonglong)(uint)fVar25 * 4);
            }
            fVar112 = (float)((int)fVar25 + 1);
            pfVar105[0x18] = fVar112;
            if ((int)fVar112 < iVar13) {
              iVar13 = *(int *)((ulonglong)*(uint *)((ulonglong)(uint)pfVar105[1] + 0x24dc) +
                               (ulonglong)(uint)fVar112 * 4);
            }
            else {
              iVar13 = *(int *)((ulonglong)(uint)pfVar105[1] + 0x24e0);
            }
            fVar112 = (float)(iVar15 + (int)pfVar105[7]);
            fVar113 = (float)(iVar13 + (int)pfVar105[7]);
            pcVar18 = (char *)(ulonglong)(uint)fVar113;
            pfVar105[0x3c] = fVar25;
            if ((uint)fVar113 < (uint)pfVar105[0x16]) {
              cVar8 = *pcVar18;
              pfVar105[0x44] = (float)(uint)(cVar8 != '\n');
              pcVar18 = (char *)(ulonglong)((int)fVar113 + (uint)(cVar8 != '\n'));
            }
            else {
              pfVar105[0x44] = 0.0;
            }
            pfVar105[0x5c] = fVar112;
            if ((uint)fVar112 < (uint)pfVar105[0x24]) {
              fVar112 = pfVar105[0x24];
            }
            fVar25 = SUB84(pcVar18,0);
            if ((uint)pfVar105[0x10] < (uint)fVar25) {
              pcVar18 = (char *)(ulonglong)(uint)pfVar105[0x10];
            }
            fVar113 = 0.0;
            if ((uint)fVar112 < (uint)SUB84(pcVar18,0)) {
              pfVar105[0x7a] = -NAN;
              *(undefined8 *)((longlong)pfVar80 + -8) = 0xffffffffbf800000;
              *(undefined8 *)((longlong)pfVar80 + -0x10) = 0;
              *(char **)((longlong)pfVar80 + -0x18) = pcVar18;
              *(ulonglong *)((longlong)pfVar80 + -0x20) = (ulonglong)(uint)fVar112;
              *(ulonglong *)((longlong)pfVar80 + -0x28) = (ulonglong)(iVar24 - 0xb0);
              *(undefined8 *)((longlong)pfVar80 + -0x30) = 0x140798237;
              FUN_1407559fe();
              pfVar80 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x28) + 0x14);
              fVar113 = pfVar105[0x50] + 0.0;
            }
            fVar115 = fVar113;
            if ((uint)fVar25 < (uint)pfVar105[0x10]) {
              fVar115 = fVar113 + pfVar105[0x38];
            }
            fVar114 = fVar113;
            if (((uint)pfVar105[0x44] & 1) == 0) {
              fVar114 = fVar115;
            }
            if ((uint)pfVar105[0x24] <= (uint)fVar25) {
              fVar113 = fVar114;
            }
            if ((fVar113 != 0.0) || (NAN(fVar113))) {
              pfVar105[0x50] = 0.0;
              pfVar105[0x51] = 0.0;
              pfVar105[0x52] = 0.0;
              pfVar105[0x53] = 0.0;
              pfVar105[0x44] = pfVar105[0x21] - pfVar105[3];
              pfVar105[0x45] = pfVar105[0x54];
              pfVar105[0x46] = 0.0;
              pfVar105[0x47] = pfVar105[0x55];
              pfVar105[0x7a] = -NAN;
              *(undefined8 *)((longlong)pfVar80 + -8) = 0xffffffffbf800000;
              *(undefined8 *)((longlong)pfVar80 + -0x10) = 0;
              *(ulonglong *)((longlong)pfVar80 + -0x18) = (ulonglong)(uint)fVar112;
              *(undefined8 *)((longlong)pfVar80 + -0x20) = *(undefined8 *)(pfVar105 + 0x5c);
              *(ulonglong *)((longlong)pfVar80 + -0x28) = (ulonglong)(iVar24 - 0x28);
              pfVar105[0x5c] = fVar113;
              *(undefined8 *)((longlong)pfVar80 + -0x30) = 0x1407982d6;
              FUN_1407559fe();
              uVar86 = (ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x28) + 0x14);
              fVar113 = (float)(int)pfVar105[0x3c] *
                        *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228) + pfVar105[0x22];
              fVar25 = pfVar105[0xe] + fVar113 + *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228);
              fVar112 = pfVar105[0x72] + pfVar105[0x44];
              fVar113 = fVar113 + pfVar105[0x45];
              uVar106 = -(uint)(pfVar105[0x2b] <= fVar112);
              uVar12 = -(uint)(pfVar105[0x2c] <= fVar113);
              if (pfVar105[0x2e] <= fVar25) {
                fVar25 = pfVar105[0x2e];
              }
              fVar115 = pfVar105[0x5c] + fVar112;
              if (pfVar105[0x2d] <= pfVar105[0x5c] + fVar112) {
                fVar115 = pfVar105[0x2d];
              }
              *(ulonglong *)(pfVar105 + 0x50) =
                   CONCAT44(~uVar12 & (uint)pfVar105[0x2c],~uVar106 & (uint)pfVar105[0x2b]) |
                   CONCAT44((uint)fVar113 & uVar12,(uint)fVar112 & uVar106);
              pfVar105[0x52] = fVar115;
              pfVar105[0x53] = fVar25;
              uVar11 = *(undefined4 *)((ulonglong)(uint)pfVar105[0xb] + 0x2e8);
              *(undefined8 *)(uVar86 - 8) = 0;
              *(undefined8 *)(uVar86 - 0x10) = 0;
              *(undefined8 *)(uVar86 - 0x18) = *(undefined8 *)(pfVar105 + 0x4f);
              *(ulonglong *)(uVar86 - 0x20) = (ulonglong)(iVar24 - 0xa8);
              pfVar80 = (float *)(uVar86 - 0x28);
              *(ulonglong *)(uVar86 - 0x28) = (ulonglong)(iVar24 - 0xb0);
              *(undefined8 *)(uVar86 - 0x30) = 0x14079839a;
              FUN_1407e372a(uVar11);
            }
            fVar25 = pfVar105[0x18];
          } while ((int)fVar25 < (int)pfVar105[0x15]);
        }
      }
    }
    else {
      pfVar105[0x58] = 0.0;
      pfVar105[0x59] = 0.0;
      *(undefined8 *)(uVar78 - 8) = 0x3f800000;
      *(ulonglong *)(uVar78 - 0x10) = (ulonglong)bVar7;
      *(undefined8 *)(uVar78 - 0x18) = 0x140797dc2;
      fVar25 = (float)FUN_140754a09();
      pfVar80 = (float *)(ulonglong)((int)(uVar78 - 0x10) + 8);
      pfVar105[0x17] = fVar25;
      if (((bVar9 | *(byte *)(pfVar105 + 10)) & 1) != 0) {
        uVar107 = (ulonglong)(uint)*pfVar105;
        pfVar105[0x10] = fVar112;
        *(float *)(uVar107 + 0x48) = fVar112;
        fVar25 = pfVar105[0x44];
        fVar109 = in_ST1;
        if (bVar9 != 0) goto code_r0x000140797d30;
        goto code_r0x000140797f46;
      }
      pfVar105[3] = 0.0;
      pfVar105[9] = 0.0;
    }
    fVar109 = in_ST1;
    if ((*(float *)((ulonglong)(uint)pfVar105[1] + 0x1528) != pfVar105[2]) &&
       (((SUB41(pfVar105[10],0) | *(byte *)(pfVar105 + 9)) & 1) == 0 &&
        (*(uint *)(uVar104 + 0x1c) >> 0x11 & 1) != 0)) {
      pfVar105[0x24] = pfVar105[0x4b];
      pfVar105[0x7a] = -NAN;
      *(undefined8 *)((longlong)pfVar80 + -8) = 0xffffffffbf800000;
      *(undefined8 *)((longlong)pfVar80 + -0x10) = 0;
      *(undefined8 *)((longlong)pfVar80 + -0x18) = 0;
      *(undefined8 *)((longlong)pfVar80 + -0x20) = *(undefined8 *)(pfVar105 + 7);
      *(float **)((longlong)pfVar80 + -0x28) = (float *)(ulonglong)(iVar24 - 0xb0);
      *(undefined8 *)((longlong)pfVar80 + -0x30) = 0x140798402;
      FUN_1407559fe();
      fVar25 = pfVar105[0x21];
      pfVar87 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x28) + 0xc);
      pfVar87[1] = (pfVar105[0x24] - *(float *)(ulonglong)(iVar24 - 0xb0)) -
                   *(float *)((ulonglong)(uint)pfVar105[1] + 0xd0c);
      *pfVar87 = fVar25;
      pfVar87[-2] = 3.8986955;
      pfVar87[-1] = 1.4013e-45;
      fVar109 = in_ST2;
      FUN_14074225a();
      pfVar80 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x28) + 0x14);
      pfVar105[0x21] = (float)in_ST1;
    }
    if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) == 0) {
      if ((0xffffff < (uint)pfVar105[0x17]) && ((int)pfVar105[0x16] - (int)pfVar105[7] < 0x200000))
      goto code_r0x000140798479;
    }
    else if (0xffffff < (uint)pfVar105[0x17]) {
code_r0x000140798479:
      fVar25 = pfVar105[0x2a];
      fVar112 = pfVar105[0x15];
      if ((int)fVar25 < (int)fVar112) {
        uVar107 = (ulonglong)(uint)pfVar105[1];
        if ((int)fVar112 < *(int *)(uVar107 + 0x24d4)) {
          iVar13 = *(int *)((ulonglong)*(uint *)(uVar107 + 0x24dc) + (ulonglong)(uint)fVar112 * 4);
        }
        else {
          iVar13 = *(int *)(uVar107 + 0x24e0);
        }
        uVar11 = *(undefined4 *)(uVar107 + 0x1220);
        fVar112 = pfVar105[7];
        if (*(int *)(uVar107 + 0x24d4) == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)((ulonglong)*(uint *)(uVar107 + 0x24dc) + (ulonglong)(uint)fVar25 * 4);
          pfVar105[0x7a] = -NAN;
        }
        fVar114 = pfVar105[7];
        fVar113 = *(float *)(uVar107 + 0x1228);
        fVar115 = pfVar105[0x22];
        uVar106 = iVar24 - 0xb0;
        *(float *)(ulonglong)uVar106 = (pfVar105[0x21] - pfVar105[3]) + 0.0;
        ((float *)(ulonglong)uVar106)[1] = (float)(int)fVar25 * fVar113 + fVar115;
        uVar3 = *(undefined4 *)((ulonglong)(uint)pfVar105[0xb] + 0x2e8);
        pfVar105[0x7a] = -NAN;
        pfVar80 = (float *)(ulonglong)((int)pfVar80 - 0x24);
        pfVar80[6] = (float)(iVar13 + (int)fVar112);
        pfVar80[5] = (float)(iVar15 + (int)fVar114);
        pfVar80[4] = (float)(iVar24 + -0x144);
        pfVar80[3] = pfVar105[0x17];
        pfVar80[2] = (float)uVar106;
        *pfVar80 = (float)uVar3;
        pfVar80[7] = pfVar105[0x1e];
        pfVar80[1] = fVar113;
        pfVar80[8] = 4.2039e-45;
        *(undefined8 *)(pfVar80 + -2) = 0x140798567;
        FUN_1407e46e4(uVar11);
      }
    }
    if (*(char *)(pfVar105 + 9) != '\0') {
      fVar25 = pfVar105[1];
      fVar112 = *(float *)((ulonglong)(uint)fVar25 + 0x48) +
                *(float *)((ulonglong)(uint)*pfVar105 + 0x50);
      *(float *)((ulonglong)(uint)*pfVar105 + 0x50) = fVar112;
      bVar108 = true;
      if ((*(char *)((ulonglong)(uint)fVar25 + 0x7b) == '\x01') && (0.0 < fVar112)) {
        pdVar88 = (double *)(ulonglong)((int)pfVar80 - 0x10);
        *pdVar88 = (double)fVar112;
        *(undefined4 *)((longlong)pdVar88 + 0xc) = 0x3ff33333;
        *(undefined4 *)(pdVar88 + 1) = 0x40000000;
        pdVar88[-1] = 2.65642952049378e-314;
        FUN_1408c5d90();
        pfVar80 = (float *)((ulonglong)pfVar80 & 0xffffffff);
        *(double *)(pfVar105 + 0x70) = (double)fVar109;
        bVar108 = *(double *)(pfVar105 + 0x70) <= _DAT_150a51b40;
      }
      fVar25 = (float)(int)((pfVar105[0x21] + pfVar105[0x58]) - pfVar105[3]);
      fVar112 = (float)(int)(pfVar105[0x22] + pfVar105[0x59]);
      uVar17 = CONCAT44(fVar112,fVar25);
      if ((((bVar108) &&
           (fVar113 = _DAT_150a51b9a + fVar112,
           pfVar105[0x2c] <= fVar113 && fVar113 != pfVar105[0x2c])) &&
          (fVar115 = (fVar112 - *(float *)((ulonglong)(uint)pfVar105[1] + 0x1228)) + _DAT_150a4f71f,
          fVar115 < pfVar105[0x2e])) &&
         ((pfVar105[0x2b] <= _DAT_150a23a89 + fVar25 && _DAT_150a23a89 + fVar25 != pfVar105[0x2b] &&
          (fVar25 < pfVar105[0x2d])))) {
        uVar11 = *(undefined4 *)((ulonglong)(uint)pfVar105[0xb] + 0x2e8);
        *(undefined1 (*) [16])(pfVar105 + 0x10) =
             ZEXT416((uint)(float)(int)*(float *)((ulonglong)(uint)pfVar105[1] + 0x1204));
        pfVar105[0x7a] = -NAN;
        *(undefined8 *)((longlong)pfVar80 + -8) = 0x3f800000;
        *(undefined8 *)((longlong)pfVar80 + -0x10) = 0x22;
        *(undefined8 *)(pfVar105 + 0x24) = uVar17;
        pfVar105[0x26] = 0.0;
        pfVar105[0x27] = 0.0;
        pfVar105[0x18] = fVar115;
        pfVar105[0x19] = fVar112;
        pfVar105[0x1a] = fVar112;
        pfVar105[0x1b] = fVar112;
        pfVar105[0x44] = fVar113;
        *(undefined8 *)((longlong)pfVar80 + -0x18) = 0x1407986c5;
        fVar25 = (float)FUN_140754a09();
        pfVar80 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x10) - 0xc);
        pfVar80[4] = pfVar105[0x10];
        pfVar80[3] = fVar25;
        pfVar80[2] = pfVar105[0x44];
        pfVar80[1] = pfVar105[0x18];
        *pfVar80 = pfVar105[0x24];
        pfVar80[-2] = 3.898865;
        pfVar80[-1] = 1.4013e-45;
        FUN_1407e34aa(uVar11);
        uVar17 = *(undefined8 *)(pfVar105 + 0x24);
      }
      if ((((uint)pfVar105[6] >> 9 & 1) == 0) &&
         (*(float *)((ulonglong)(uint)pfVar105[1] + 0x1528) == pfVar105[2])) {
        uVar107 = (ulonglong)(uint)pfVar105[1];
        *(undefined2 *)(uVar107 + 0x2668) = 0x101;
        *(ulonglong *)(uVar107 + 0x266c) =
             CONCAT44((float)((ulonglong)uVar17 >> 0x20) - *(float *)(uVar107 + 0x1228),
                      (float)uVar17 + _DAT_150a5118b);
        *(float *)(uVar107 + 0x2674) = *(float *)(uVar107 + 0x1228);
        *(undefined4 *)(uVar107 + 0x2678) =
             *(undefined4 *)(ulonglong)*(uint *)((ulonglong)(uint)pfVar105[0x20] + 0x3c);
      }
    }
    bVar7 = (*(uint *)(uVar104 + 0x1c) >> 10 & 1) == 0 | *(byte *)(pfVar105 + 0x1f);
    if (bVar7 == 0) {
      *(undefined8 *)((longlong)pfVar80 + -8) = 0x140798781;
      FUN_14079a8d8();
    }
    if ((*(uint *)(uVar104 + 0x1c) >> 0x1a & 1) != 0) {
      uVar107 = (ulonglong)(uint)pfVar105[1];
      fVar25 = pfVar105[0x14];
      fVar112 = *(float *)(uVar107 + 0xd10);
      puVar20 = (undefined4 *)(ulonglong)(iVar24 - 0xb0);
      *puVar20 = 0;
      puVar20[1] = fVar25 + fVar112;
      pfVar105[0x7a] = -NAN;
      *(undefined4 **)((longlong)pfVar80 + -8) = puVar20;
      *(undefined8 *)((longlong)pfVar80 + -0x10) = 0x1407987be;
      FUN_140789c5e();
      pfVar80 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -8) + 4);
      *(uint *)(uVar107 + 0x1e4c) = *(uint *)(uVar107 + 0x1e4c) | 0x100001;
      *(undefined8 *)((longlong)pfVar80 + -8) = 0x1407987d0;
      FUN_140764514();
      pfVar105[0x24] = (float)(*(uint *)(uVar107 + 0x1e88) & 0x80);
      *(undefined8 *)((longlong)pfVar80 + -8) = 0x1407987e6;
      FUN_14076c4ff();
      iVar13 = *(int *)(uVar107 + 0x1e80);
      if (iVar13 != 0) {
        *(undefined8 *)((longlong)pfVar80 + -8) = 1;
        *(undefined8 *)((longlong)pfVar80 + -0x10) = *(undefined8 *)(pfVar105 + 0xb);
        *(undefined8 *)((longlong)pfVar80 + -0x18) = 0x1407987fb;
        iVar15 = FUN_14078696f();
        pfVar80 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x10) + 8);
        if (iVar13 == iVar15) goto LAB_14079882a;
      }
      fVar25 = pfVar105[0x24];
      fVar112 = pfVar105[0x1d];
      uVar107 = (ulonglong)(uint)pfVar105[1];
      *(float *)(uVar107 + 0x1e80) = pfVar105[2];
      *(float *)(uVar107 + 0x1e84) = pfVar105[0x43];
      *(uint *)(uVar107 + 0x1e88) = (uint)fVar25 | (uint)fVar112;
    }
LAB_14079882a:
    if (SUB41(pfVar105[8],0) == '\x01' && ((uint)pfVar105[6] >> 9 & 1) != 0) {
      *(undefined4 *)((ulonglong)(uint)*pfVar105 + 0x14) = 0;
    }
    if ((bVar7 & *(byte *)((ulonglong)(uint)pfVar105[1] + 0x2748)) == 1) {
      pfVar105[0x7a] = -NAN;
      *(undefined8 *)((longlong)pfVar80 + -8) = 0x10330329;
      *(undefined8 *)((longlong)pfVar80 + -0x10) = 0x10330345;
      *(undefined8 *)((longlong)pfVar80 + -0x18) = 0x14079886f;
      FUN_140770236();
      uVar89 = (ulonglong)((int)(undefined1 *)((longlong)pfVar80 + -0x10) + 8);
      *(undefined8 *)(uVar89 - 8) = *(undefined8 *)(pfVar105 + 0x16);
      *(undefined8 *)(uVar89 - 0x10) = *(undefined8 *)(pfVar105 + 7);
      *(ulonglong *)(uVar89 - 0x18) = (ulonglong)(iVar24 - 0x16c);
      *(undefined8 *)(uVar89 - 0x20) = 0x140798884;
      FUN_140755578();
      pfVar80 = (float *)(ulonglong)((int)(uVar89 - 0x18) + 0xc);
    }
    if (0.0 < pfVar105[0x6a]) {
      fVar25 = pfVar105[0x4a];
      fVar112 = *(float *)((ulonglong)(uint)pfVar105[1] + 0xd10);
      fVar113 = pfVar105[0x4b];
      fVar115 = *(float *)((ulonglong)(uint)pfVar105[1] + 0xd24);
      pfVar105[0x7a] = -NAN;
      pfVar90 = (float *)(ulonglong)((int)pfVar80 - 0x14);
      pfVar90[3] = pfVar105[99];
      pfVar90[2] = *(float *)(uVar104 + 8);
      pfVar90[1] = fVar25 + fVar112;
      *pfVar90 = fVar113 + fVar115;
      pfVar90[4] = 0.0;
      pfVar90[-2] = 3.8989835;
      pfVar90[-1] = 1.4013e-45;
      FUN_14075547e();
      pfVar80 = (float *)((ulonglong)pfVar80 & 0xffffffff);
    }
    if (*(char *)(pfVar105 + 4) != '\0') {
      pfVar105[0x7a] = -NAN;
      *(undefined8 *)((longlong)pfVar80 + -8) = *(undefined8 *)(pfVar105 + 2);
      *(undefined8 *)((longlong)pfVar80 + -0x10) = 0x14079890e;
      FUN_14075a7e3();
    }
    bVar7 = *(byte *)(pfVar105 + 5);
    if ((*(uint *)(uVar104 + 0x1c) & 0x40) == 0) {
      bVar7 = *(byte *)(pfVar105 + 4);
    }
    pfVar105[0x1d] = (float)(uint)bVar7;
  }
  else {
    *(ulonglong *)(ulonglong)(iVar24 - 0x144U) = CONCAT44(fVar115,fVar25);
    puVar29 = (uint *)(ulonglong)(iVar13 + 0xc);
    puVar29[1] = uVar106;
    *puVar29 = iVar24 - 0x144U;
    puVar29[-2] = 0x40795e52;
    puVar29[-1] = 1;
    FUN_1407646e0();
    uVar30 = (ulonglong)(iVar13 + 0x14);
    fVar25 = pfVar105[2];
    if ((*(float *)(uVar107 + 0x24e4) == fVar25) || (*(float *)(uVar107 + 0x1528) == fVar25)) {
      *(undefined8 *)(uVar30 - 8) = 0x100000;
      *(ulonglong *)(uVar30 - 0x10) = (ulonglong)(iVar24 - 0xcc);
      *(ulonglong *)(uVar30 - 0x18) = (ulonglong)(uint)fVar25;
      *(ulonglong *)(uVar30 - 0x20) = (ulonglong)(iVar24 - 0x40);
      *(undefined8 *)(uVar30 - 0x28) = 0x140795e88;
      FUN_1407648a8();
      puVar31 = (undefined1 *)(ulonglong)((int)(uVar30 - 0x20) + 0x10);
      *(undefined1 *)(pfVar105 + 7) = 1;
LAB_140795e8f:
      fVar113 = pfVar105[1];
      uVar19 = (ulonglong)(uint)fVar113;
      pfVar105[0x43] = *(float *)(uVar19 + 0x1e84);
      pfVar105[0x1d] = *(float *)(uVar19 + 0x1e88);
      fVar115 = pfVar105[0x20];
      *(float *)((ulonglong)(uint)fVar115 + 0x148) = *pfVar105;
      *(float *)((ulonglong)(uint)fVar115 + 0x144) = fVar112;
      fVar112 = *(float *)(uVar19 + 0x2058);
      if (((*(float *)(uVar19 + 0x2058) == fVar25) &&
          (fVar112 = fVar25, (*(uint *)(uVar104 + 0x1c) & 0x20) != 0)) &&
         ((*(uint *)(uVar19 + 0x2064) & 0x28) == 8)) {
        *(undefined4 *)(uVar19 + 0x2058) = 0;
        fVar112 = 0.0;
      }
      *pfVar105 = fVar112;
      if (*(float *)(uVar19 + 0x1528) == fVar25) {
        *(undefined4 *)(uVar19 + 0x2058) = 0;
      }
      *(ulonglong *)(puVar31 + -8) = (ulonglong)((int)fVar113 + 0xe70);
      *(undefined8 *)(puVar31 + -0x10) = 3;
      *(undefined8 *)(puVar31 + -0x18) = 0x140795f17;
      FUN_140754c50();
      puVar32 = (undefined4 *)((ulonglong)(puVar31 + -0x10) & 0xffffffff);
      puVar32[1] = *(undefined4 *)(uVar19 + 0xd14);
      *puVar32 = 7;
      *(undefined8 *)(puVar32 + -2) = 0x140795f37;
      FUN_140754f73();
      puVar33 = (undefined4 *)((ulonglong)(puVar31 + -0x10) & 0xffffffff);
      puVar33[1] = *(undefined4 *)(uVar19 + 0xd18);
      *puVar33 = 8;
      *(undefined8 *)(puVar33 + -2) = 0x140795f57;
      FUN_140754f73();
      uVar34 = (ulonglong)((int)(puVar31 + -0x10) + 8);
      pfVar105[0x2b] = 0.0;
      pfVar105[0x2c] = 0.0;
      *(ulonglong *)(uVar34 - 8) = (ulonglong)(iVar24 - 0x144);
      *(undefined8 *)(uVar34 - 0x10) = 2;
      *(undefined8 *)(uVar34 - 0x18) = 0x140795f73;
      FUN_14075528c();
      uVar35 = (ulonglong)((int)(uVar34 - 0x10) + 8);
      *(ulonglong *)(pfVar105 + 0x2b) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar105 + 0x4b) >> 0x20) -
                    (float)((ulonglong)*(undefined8 *)(pfVar105 + 0x49) >> 0x20),
                    (float)*(undefined8 *)(pfVar105 + 0x4b) -
                    (float)*(undefined8 *)(pfVar105 + 0x49));
      *(undefined8 *)(uVar35 - 8) = 4;
      *(undefined8 *)(uVar35 - 0x10) = 0;
      *(ulonglong *)(uVar35 - 0x18) = (ulonglong)(iVar24 - 0x144);
      *(undefined8 *)(uVar35 - 0x20) = *(undefined8 *)(pfVar105 + 2);
      *(undefined8 *)(uVar35 - 0x28) = *(undefined8 *)(uVar104 + 8);
      *(undefined8 *)(uVar35 - 0x30) = 0x140795fa2;
      bVar7 = FUN_140763f97();
      uVar36 = (ulonglong)((int)(uVar35 - 0x28) + 0x14);
      *(float *)(uVar19 + 0x2058) = *pfVar105;
      *(undefined8 *)(uVar36 - 8) = 3;
      *(undefined8 *)(uVar36 - 0x10) = 0x140795fba;
      FUN_140755394();
      uVar37 = (ulonglong)((int)(uVar36 - 8) + 4);
      *(undefined8 *)(uVar37 - 8) = 0;
      *(undefined8 *)(uVar37 - 0x10) = 0x140795fc6;
      FUN_140754d5e();
      puVar38 = (undefined1 *)(ulonglong)((int)(uVar37 - 8) + 4);
      if (((bVar7 | *(byte *)(pfVar105 + 7)) & 1) != 0) {
        fVar25 = *(float *)(uVar19 + 0x14cc);
        uVar107 = (ulonglong)(uint)fVar25;
        *(ushort *)(uVar107 + 0x1a2) =
             *(ushort *)(uVar107 + 0x1a2) | (ushort)(0 << (*(byte *)(uVar107 + 0x19c) & 0x1f));
        *(float *)(uVar107 + 0x144) = *(float *)(uVar19 + 0xd0c) + *(float *)(uVar107 + 0x144);
        *(float *)(uVar107 + 0x148) = *(float *)(uVar19 + 0xd10) + *(float *)(uVar107 + 0x148);
        pfVar105[0xb] = fVar25;
        pfVar105[0x5c] = pfVar105[0x24] - *(float *)(uVar107 + 0xec);
        pfVar105[0x5d] = pfVar105[0x25];
        pfVar105[0x5e] = pfVar105[0x26];
        pfVar105[0x5f] = pfVar105[0x27];
        uVar107 = (ulonglong)(uint)pfVar105[2];
        *(float *)(uVar19 + 0x1e80) = pfVar105[2];
        *(float *)(uVar19 + 0x1e84) = pfVar105[0x43];
        *(float *)(uVar19 + 0x1e88) = pfVar105[0x1d];
        goto LAB_1407960ff;
      }
      *(undefined8 *)(puVar38 + -8) = 0x1407962d5;
      FUN_140764514();
      *(undefined8 *)(puVar38 + -8) = 0x1407962da;
      FUN_14076c4ff();
      pfVar105[0x1d] = 0.0;
    }
    else {
      *(bool *)(pfVar105 + 7) = fVar25 == *(float *)(uVar107 + 0x2058);
      *(undefined8 *)(uVar30 - 8) = 0x100000;
      *(ulonglong *)(uVar30 - 0x10) = (ulonglong)(iVar24 - 0xcc);
      *(ulonglong *)(uVar30 - 0x18) = (ulonglong)(uint)fVar25;
      *(ulonglong *)(uVar30 - 0x20) = (ulonglong)(iVar24 - 0x40);
      *(undefined8 *)(uVar30 - 0x28) = 0x140796325;
      cVar8 = FUN_1407648a8();
      puVar31 = (undefined1 *)(ulonglong)((int)(uVar30 - 0x20) + 0x10);
      if (cVar8 != '\0' || *(char *)(pfVar105 + 7) != '\0') goto LAB_140795e8f;
      *(undefined8 *)(puVar31 + -8) = 0x140796336;
      FUN_14076c4ff();
      pfVar105[0x1d] = 0.0;
    }
  }
code_r0x000140798926:
  fVar25 = pfVar105[0x1d];
code_r0x00014079892a:
  *(float *)(in_FS_OFFSET + 0x140798937) = pfVar105[0x78];
  return fVar25;
}

