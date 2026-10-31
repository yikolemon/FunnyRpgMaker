/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017bc7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18017bc7a(undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
                  uint param_5,int param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  char cVar24;
  undefined1 auVar25 [14];
  undefined1 auVar26 [12];
  unkbyte10 Var27;
  undefined1 auVar28 [14];
  undefined1 auVar29 [12];
  unkbyte9 Var30;
  undefined1 auVar31 [14];
  undefined1 auVar32 [12];
  undefined1 auVar33 [14];
  undefined1 auVar34 [12];
  undefined6 uVar35;
  undefined4 uVar36;
  undefined2 uVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  short sVar44;
  short sVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 *puVar51;
  int iVar52;
  ulonglong uVar53;
  int iVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  int iVar57;
  int iVar58;
  undefined2 uVar59;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  ushort uVar85;
  ushort uVar93;
  ushort uVar94;
  ushort uVar95;
  ushort uVar96;
  ushort uVar97;
  ushort uVar98;
  undefined1 auVar86 [16];
  ushort uVar99;
  undefined1 auVar100 [16];
  undefined1 auVar107 [16];
  undefined4 uVar60;
  undefined6 uVar61;
  undefined8 uVar62;
  undefined1 auVar63 [12];
  undefined1 auVar64 [14];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar67 [15];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  
  auVar50 = _DAT_1802e1410;
  auVar49 = _DAT_1802e1400;
  auVar48 = _DAT_1802e13f0;
  auVar47 = _DAT_1802e13e0;
  auVar46 = _DAT_1802e13d0;
  sVar45 = _UNK_1802b7c6e;
  sVar44 = _UNK_1802b7c6c;
  sVar43 = _UNK_1802b7c6a;
  sVar42 = _UNK_1802b7c68;
  sVar41 = _UNK_1802b7c66;
  sVar40 = _UNK_1802b7c64;
  sVar39 = _UNK_1802b7c62;
  sVar38 = _DAT_1802b7c60;
  uVar56 = 0;
  if (7 < (int)param_5 && param_6 == 4) {
    uVar55 = 0;
    do {
      uVar62 = *(undefined8 *)(param_2 + uVar55);
      auVar68._8_8_ = 0;
      auVar68._0_8_ = *(ulonglong *)(param_4 + uVar55);
      auVar79._8_8_ = 0;
      auVar79._0_8_ = *(ulonglong *)(param_3 + uVar55);
      auVar92._0_14_ = auVar46._0_14_;
      auVar92[0xe] = auVar46[7];
      auVar92[0xf] = (char)((ulonglong)uVar62 >> 0x38);
      auVar91._14_2_ = auVar92._14_2_;
      auVar91._0_13_ = auVar46._0_13_;
      auVar91[0xd] = (char)((ulonglong)uVar62 >> 0x30);
      auVar90._13_3_ = auVar91._13_3_;
      auVar90._0_12_ = auVar46._0_12_;
      auVar90[0xc] = auVar46[6];
      auVar89._12_4_ = auVar90._12_4_;
      auVar89._0_11_ = auVar46._0_11_;
      auVar89[0xb] = (char)((ulonglong)uVar62 >> 0x28);
      auVar88._11_5_ = auVar89._11_5_;
      auVar88._0_10_ = auVar46._0_10_;
      auVar88[10] = auVar46[5];
      auVar87._10_6_ = auVar88._10_6_;
      auVar87._0_9_ = auVar46._0_9_;
      auVar87[9] = (char)((ulonglong)uVar62 >> 0x20);
      auVar86._9_7_ = auVar87._9_7_;
      auVar86._0_8_ = auVar46._0_8_;
      auVar86[8] = auVar46[4];
      Var27 = CONCAT91(CONCAT81(auVar86._8_8_,(char)((ulonglong)uVar62 >> 0x18)),auVar46[3]);
      auVar26._2_10_ = Var27;
      auVar26[1] = (char)((ulonglong)uVar62 >> 0x10);
      auVar26[0] = auVar46[2];
      auVar25._2_12_ = auVar26;
      auVar25[1] = (char)((ulonglong)uVar62 >> 8);
      auVar25[0] = auVar46[1];
      auVar68 = auVar68 ^ auVar46;
      auVar67 = SUB1615((undefined1  [16])0x0,0);
      auVar106._0_14_ = auVar67._0_14_;
      auVar106[0xe] = 0;
      auVar106[0xf] = auVar68[7];
      auVar105._14_2_ = auVar106._14_2_;
      auVar105._0_13_ = auVar67._0_13_;
      auVar105[0xd] = auVar68[6];
      auVar104._13_3_ = auVar105._13_3_;
      auVar104._0_12_ = auVar67._0_12_;
      auVar104[0xc] = 0;
      auVar103._12_4_ = auVar104._12_4_;
      auVar103._0_11_ = auVar67._0_11_;
      auVar103[0xb] = auVar68[5];
      auVar102._11_5_ = auVar103._11_5_;
      auVar102._0_10_ = auVar67._0_10_;
      auVar102[10] = 0;
      auVar101._10_6_ = auVar102._10_6_;
      auVar101._0_9_ = auVar67._0_9_;
      auVar101[9] = auVar68[4];
      auVar100._9_7_ = auVar101._9_7_;
      auVar100._0_9_ = (unkuint9)0 << 0x40;
      auVar32._1_10_ = (unkuint10)CONCAT81(auVar100._8_8_,auVar68[3]) << 8;
      auVar32[0] = auVar68[2];
      auVar32[0xb] = 0;
      auVar31._1_12_ = auVar32 << 8;
      auVar31[0] = auVar68[1];
      auVar31[0xd] = 0;
      auVar107._1_14_ = auVar31 << 8;
      auVar107[0] = auVar68[0];
      auVar107[0xf] = 0;
      auVar79 = auVar79 ^ auVar46;
      auVar67 = SUB1615((undefined1  [16])0x0,0);
      auVar75._0_14_ = auVar67._0_14_;
      auVar75[0xe] = 0;
      auVar75[0xf] = auVar79[7];
      auVar74._14_2_ = auVar75._14_2_;
      auVar74._0_13_ = auVar67._0_13_;
      auVar74[0xd] = auVar79[6];
      auVar73._13_3_ = auVar74._13_3_;
      auVar73._0_12_ = auVar67._0_12_;
      auVar73[0xc] = 0;
      auVar72._12_4_ = auVar73._12_4_;
      auVar72._0_11_ = auVar67._0_11_;
      auVar72[0xb] = auVar79[5];
      auVar71._11_5_ = auVar72._11_5_;
      auVar71._0_10_ = auVar67._0_10_;
      auVar71[10] = 0;
      auVar70._10_6_ = auVar71._10_6_;
      auVar70._0_9_ = auVar67._0_9_;
      auVar70[9] = auVar79[4];
      auVar69._9_7_ = auVar70._9_7_;
      auVar69._0_9_ = (unkuint9)0 << 0x40;
      auVar34._1_10_ = (unkuint10)CONCAT81(auVar69._8_8_,auVar79[3]) << 8;
      auVar34[0] = auVar79[2];
      auVar34[0xb] = 0;
      auVar33._1_12_ = auVar34 << 8;
      auVar33[0] = auVar79[1];
      auVar33[0xd] = 0;
      auVar76._1_14_ = auVar33 << 8;
      auVar76[0] = auVar79[0];
      auVar76[0xf] = 0;
      uVar85 = CONCAT11((char)uVar62,auVar46[0]) >> 4;
      uVar93 = auVar25._0_2_ >> 4;
      uVar94 = auVar26._0_2_ >> 4;
      uVar95 = (ushort)Var27 >> 4;
      uVar96 = auVar86._8_2_ >> 4;
      uVar97 = auVar88._10_2_ >> 4;
      uVar98 = auVar90._12_2_ >> 4;
      uVar99 = auVar91._14_2_ >> 4;
      auVar65 = pmulhw(auVar107 << 8,auVar47);
      auVar68 = pmulhw(auVar76 << 8,auVar48);
      auVar76 = pmulhw(auVar76 << 8,auVar49);
      auVar107 = pmulhw(auVar107 << 8,auVar50);
      auVar66._0_2_ = auVar65._0_2_ + uVar85;
      auVar66._2_2_ = auVar65._2_2_ + uVar93;
      auVar66._4_2_ = auVar65._4_2_ + uVar94;
      auVar66._6_2_ = auVar65._6_2_ + uVar95;
      auVar66._8_2_ = auVar65._8_2_ + uVar96;
      auVar66._10_2_ = auVar65._10_2_ + uVar97;
      auVar66._12_2_ = auVar65._12_2_ + uVar98;
      auVar66._14_2_ = auVar65._14_2_ + uVar99;
      auVar80._0_2_ = auVar68._0_2_ + uVar85 + auVar107._0_2_;
      auVar80._2_2_ = auVar68._2_2_ + uVar93 + auVar107._2_2_;
      auVar80._4_2_ = auVar68._4_2_ + uVar94 + auVar107._4_2_;
      auVar80._6_2_ = auVar68._6_2_ + uVar95 + auVar107._6_2_;
      auVar80._8_2_ = auVar68._8_2_ + uVar96 + auVar107._8_2_;
      auVar80._10_2_ = auVar68._10_2_ + uVar97 + auVar107._10_2_;
      auVar80._12_2_ = auVar68._12_2_ + uVar98 + auVar107._12_2_;
      auVar80._14_2_ = auVar68._14_2_ + uVar99 + auVar107._14_2_;
      auVar77._0_2_ = auVar76._0_2_ + uVar85;
      auVar77._2_2_ = auVar76._2_2_ + uVar93;
      auVar77._4_2_ = auVar76._4_2_ + uVar94;
      auVar77._6_2_ = auVar76._6_2_ + uVar95;
      auVar77._8_2_ = auVar76._8_2_ + uVar96;
      auVar77._10_2_ = auVar76._10_2_ + uVar97;
      auVar77._12_2_ = auVar76._12_2_ + uVar98;
      auVar77._14_2_ = auVar76._14_2_ + uVar99;
      auVar107 = psraw(auVar66,4);
      auVar76 = psraw(auVar77,4);
      sVar1 = auVar107._0_2_;
      sVar3 = auVar107._2_2_;
      sVar5 = auVar107._4_2_;
      sVar7 = auVar107._6_2_;
      sVar9 = auVar107._8_2_;
      sVar11 = auVar107._10_2_;
      sVar13 = auVar107._12_2_;
      sVar2 = auVar107._14_2_;
      cVar24 = (0 < sVar2) * (sVar2 < 0x100) * auVar107[0xe] - (0xff < sVar2);
      sVar16 = auVar76._0_2_;
      sVar17 = auVar76._2_2_;
      sVar18 = auVar76._4_2_;
      sVar19 = auVar76._6_2_;
      sVar20 = auVar76._8_2_;
      sVar21 = auVar76._10_2_;
      sVar22 = auVar76._12_2_;
      sVar23 = auVar76._14_2_;
      auVar65 = psraw(auVar80,4);
      sVar2 = auVar65._0_2_;
      sVar4 = auVar65._2_2_;
      sVar6 = auVar65._4_2_;
      sVar8 = auVar65._6_2_;
      sVar10 = auVar65._8_2_;
      sVar12 = auVar65._10_2_;
      sVar14 = auVar65._12_2_;
      sVar15 = auVar65._14_2_;
      uVar37 = CONCAT11((0 < sVar15) * (sVar15 < 0x100) * auVar65[0xe] - (0xff < sVar15),cVar24);
      uVar36 = CONCAT31(CONCAT21(uVar37,(0 < sVar14) * (sVar14 < 0x100) * auVar65[0xc] -
                                        (0xff < sVar14)),
                        (0 < sVar13) * (sVar13 < 0x100) * auVar107[0xc] - (0xff < sVar13));
      uVar35 = CONCAT51(CONCAT41(uVar36,(0 < sVar12) * (sVar12 < 0x100) * auVar65[10] -
                                        (0xff < sVar12)),
                        (0 < sVar11) * (sVar11 < 0x100) * auVar107[10] - (0xff < sVar11));
      Var30 = CONCAT72(CONCAT61(uVar35,(0 < sVar10) * (sVar10 < 0x100) * auVar65[8] -
                                       (0xff < sVar10)),
                       CONCAT11((0 < sVar9) * (sVar9 < 0x100) * auVar107[8] - (0xff < sVar9),cVar24)
                      );
      Var27 = CONCAT91(CONCAT81((longlong)((unkuint9)Var30 >> 8),
                                (0 < sVar8) * (sVar8 < 0x100) * auVar65[6] - (0xff < sVar8)),
                       (0 < sVar7) * (sVar7 < 0x100) * auVar107[6] - (0xff < sVar7));
      auVar29._2_10_ = Var27;
      auVar29[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar65[4] - (0xff < sVar6);
      auVar29[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar107[4] - (0xff < sVar5);
      auVar28._2_12_ = auVar29;
      auVar28[1] = (0 < sVar4) * (sVar4 < 0x100) * auVar65[2] - (0xff < sVar4);
      auVar28[0] = (0 < sVar3) * (sVar3 < 0x100) * auVar107[2] - (0xff < sVar3);
      auVar78._0_2_ =
           CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar65[0] - (0xff < sVar2),
                    (0 < sVar1) * (sVar1 < 0x100) * auVar107[0] - (0xff < sVar1));
      auVar78._2_14_ = auVar28;
      uVar59 = CONCAT11((0 < sVar38) * (sVar38 < 0x100) * (char)sVar38 - (0xff < sVar38),
                        (0 < sVar16) * (sVar16 < 0x100) * auVar76[0] - (0xff < sVar16));
      uVar60 = CONCAT13((0 < sVar39) * (sVar39 < 0x100) * (char)sVar39 - (0xff < sVar39),
                        CONCAT12((0 < sVar17) * (sVar17 < 0x100) * auVar76[2] - (0xff < sVar17),
                                 uVar59));
      uVar61 = CONCAT15((0 < sVar40) * (sVar40 < 0x100) * (char)sVar40 - (0xff < sVar40),
                        CONCAT14((0 < sVar18) * (sVar18 < 0x100) * auVar76[4] - (0xff < sVar18),
                                 uVar60));
      uVar62 = CONCAT17((0 < sVar41) * (sVar41 < 0x100) * (char)sVar41 - (0xff < sVar41),
                        CONCAT16((0 < sVar19) * (sVar19 < 0x100) * auVar76[6] - (0xff < sVar19),
                                 uVar61));
      auVar63._0_10_ =
           CONCAT19((0 < sVar42) * (sVar42 < 0x100) * (char)sVar42 - (0xff < sVar42),
                    CONCAT18((0 < sVar20) * (sVar20 < 0x100) * auVar76[8] - (0xff < sVar20),uVar62))
      ;
      auVar63[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar76[10] - (0xff < sVar21);
      auVar63[0xb] = (0 < sVar43) * (sVar43 < 0x100) * (char)sVar43 - (0xff < sVar43);
      auVar64[0xc] = (0 < sVar22) * (sVar22 < 0x100) * auVar76[0xc] - (0xff < sVar22);
      auVar64._0_12_ = auVar63;
      auVar64[0xd] = (0 < sVar44) * (sVar44 < 0x100) * (char)sVar44 - (0xff < sVar44);
      auVar65[0xe] = (0 < sVar23) * (sVar23 < 0x100) * auVar76[0xe] - (0xff < sVar23);
      auVar65._0_14_ = auVar64;
      auVar65[0xf] = (0 < sVar45) * (sVar45 < 0x100) * (char)sVar45 - (0xff < sVar45);
      auVar84._0_12_ = auVar78._0_12_;
      auVar84._12_2_ = (short)Var27;
      auVar84._14_2_ = (short)((ulonglong)uVar62 >> 0x30);
      auVar83._12_4_ = auVar84._12_4_;
      auVar83._0_10_ = auVar78._0_10_;
      auVar83._10_2_ = (short)((uint6)uVar61 >> 0x20);
      auVar82._10_6_ = auVar83._10_6_;
      auVar82._0_8_ = auVar78._0_8_;
      auVar82._8_2_ = auVar29._0_2_;
      auVar81._8_8_ = auVar82._8_8_;
      auVar81._6_2_ = (short)((uint)uVar60 >> 0x10);
      auVar81._4_2_ = auVar28._0_2_;
      auVar81._2_2_ = uVar59;
      auVar81._0_2_ = auVar78._0_2_;
      *param_1 = auVar81;
      *(short *)param_1[1] = (short)((unkuint9)Var30 >> 8);
      *(short *)(param_1[1] + 2) = (short)((unkuint10)auVar63._0_10_ >> 0x40);
      *(short *)(param_1[1] + 4) = (short)uVar35;
      *(short *)(param_1[1] + 6) = auVar63._10_2_;
      *(short *)(param_1[1] + 8) = (short)uVar36;
      *(short *)(param_1[1] + 10) = auVar64._12_2_;
      *(undefined2 *)(param_1[1] + 0xc) = uVar37;
      *(short *)(param_1[1] + 0xe) = auVar65._14_2_;
      param_1 = param_1 + 2;
      uVar56 = uVar55 + 8;
      uVar53 = uVar55 + 0xf;
      uVar55 = uVar56;
    } while (uVar53 < param_5);
  }
  if ((int)uVar56 < (int)param_5) {
    uVar56 = uVar56 & 0xffffffff;
    puVar51 = *param_1 + 3;
    do {
      iVar52 = (uint)*(byte *)(param_2 + uVar56) * 0x100000;
      iVar57 = *(byte *)(param_4 + uVar56) - 0x80;
      iVar54 = iVar57 * 0x166f00 + iVar52 + 0x80000 >> 0x14;
      if (iVar54 < 1) {
        iVar54 = 0;
      }
      if (0xfe < iVar54) {
        iVar54 = 0xff;
      }
      iVar58 = *(byte *)(param_3 + uVar56) - 0x80;
      iVar57 = (iVar58 * -0x58200 & 0xffff0000U) + iVar57 * -0xb6d00 + iVar52 + 0x80000;
      if (iVar57 >> 0x14 < 1) {
        iVar57 = 0;
      }
      iVar57 = iVar57 >> 0x14;
      if (0xfe < iVar57) {
        iVar57 = 0xff;
      }
      iVar58 = iVar52 + iVar58 * 0x1c5a00 + 0x80000 >> 0x14;
      iVar52 = 0;
      if (0 < iVar58) {
        iVar52 = iVar58;
      }
      if (0xfe < iVar52) {
        iVar52 = 0xff;
      }
      puVar51[-3] = (char)iVar54;
      puVar51[-2] = (char)iVar57;
      puVar51[-1] = (char)iVar52;
      *puVar51 = 0xff;
      uVar56 = uVar56 + 1;
      puVar51 = puVar51 + param_6;
    } while (param_5 != uVar56);
  }
  return;
}

