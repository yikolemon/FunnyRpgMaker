/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400af440 */

void FUN_1400af440(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [32];
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 (*pauVar25) [64];
  undefined1 (*pauVar26) [64];
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 (*pauVar30) [64];
  undefined1 (*pauVar31) [64];
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  char in_XMM0_Ba;
  undefined1 uVar42;
  char in_XMM0_Bb;
  undefined1 uVar43;
  char in_XMM0_Bc;
  undefined1 uVar44;
  char in_XMM0_Bd;
  undefined1 uVar45;
  char in_XMM0_Be;
  undefined1 uVar46;
  char in_XMM0_Bf;
  undefined1 uVar47;
  char in_XMM0_Bg;
  undefined1 uVar48;
  char in_XMM0_Bh;
  undefined1 uVar49;
  char in_XMM0_Bi;
  undefined1 uVar50;
  char in_XMM0_Bj;
  undefined1 uVar51;
  char in_XMM0_Bk;
  undefined1 uVar52;
  char in_XMM0_Bl;
  undefined1 uVar53;
  char in_XMM0_Bm;
  undefined1 uVar54;
  char in_XMM0_Bn;
  undefined1 uVar55;
  char in_XMM0_Bo;
  undefined1 uVar56;
  char in_XMM0_Bp;
  undefined1 uVar57;
  char in_YMM0_H;
  char in_register_00001211;
  char in_register_00001212;
  char in_register_00001213;
  char in_register_00001214;
  char in_register_00001215;
  char in_register_00001216;
  char in_register_00001217;
  char in_register_00001218;
  char in_register_00001219;
  char in_register_0000121a;
  char in_register_0000121b;
  char in_register_0000121c;
  char in_register_0000121d;
  char in_register_0000121e;
  char in_register_0000121f;
  char in_register_00001220;
  char in_register_00001221;
  char in_register_00001222;
  char in_register_00001223;
  char in_register_00001224;
  char in_register_00001225;
  char in_register_00001226;
  char in_register_00001227;
  char in_register_00001228;
  char in_register_00001229;
  char in_register_0000122a;
  char in_register_0000122b;
  char in_register_0000122c;
  char in_register_0000122d;
  char in_register_0000122e;
  char in_register_0000122f;
  char in_register_00001230;
  char in_register_00001231;
  char in_register_00001232;
  char in_register_00001233;
  char in_register_00001234;
  char in_register_00001235;
  char in_register_00001236;
  char in_register_00001237;
  char in_register_00001238;
  char in_register_00001239;
  char in_register_0000123a;
  char in_register_0000123b;
  char in_register_0000123c;
  char in_register_0000123d;
  char in_register_0000123e;
  char in_register_0000123f;
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  char in_YMM1_H;
  char in_register_00001251;
  char in_register_00001252;
  char in_register_00001253;
  char in_register_00001254;
  char in_register_00001255;
  char in_register_00001256;
  char in_register_00001257;
  char in_register_00001258;
  char in_register_00001259;
  char in_register_0000125a;
  char in_register_0000125b;
  char in_register_0000125c;
  char in_register_0000125d;
  undefined1 auVar58 [30];
  char in_register_0000125e;
  char in_register_0000125f;
  char in_register_00001260;
  char in_register_00001261;
  char in_register_00001262;
  char in_register_00001263;
  char in_register_00001264;
  char in_register_00001265;
  char in_register_00001266;
  char in_register_00001267;
  char in_register_00001268;
  char in_register_00001269;
  char in_register_0000126a;
  char in_register_0000126b;
  char in_register_0000126c;
  char in_register_0000126d;
  char in_register_0000126e;
  char in_register_0000126f;
  char in_register_00001270;
  char in_register_00001271;
  char in_register_00001272;
  char in_register_00001273;
  char in_register_00001274;
  char in_register_00001275;
  char in_register_00001276;
  char in_register_00001277;
  char in_register_00001278;
  char in_register_00001279;
  char in_register_0000127a;
  char in_register_0000127b;
  char in_register_0000127c;
  char in_register_0000127d;
  char in_register_0000127e;
  char in_register_0000127f;
  char in_XMM2_Ba;
  char in_XMM2_Bb;
  char in_XMM2_Bc;
  char in_XMM2_Bd;
  char in_XMM2_Be;
  char in_XMM2_Bf;
  char in_XMM2_Bg;
  char in_XMM2_Bh;
  char in_XMM2_Bi;
  char in_XMM2_Bj;
  char in_XMM2_Bk;
  char in_XMM2_Bl;
  char in_XMM2_Bm;
  char in_XMM2_Bn;
  char in_XMM2_Bo;
  char in_XMM2_Bp;
  char in_YMM2_H;
  char in_register_00001291;
  char in_register_00001292;
  char in_register_00001293;
  char in_register_00001294;
  char in_register_00001295;
  char in_register_00001296;
  char in_register_00001297;
  char in_register_00001298;
  char in_register_00001299;
  char in_register_0000129a;
  char in_register_0000129b;
  char in_register_0000129c;
  char in_register_0000129d;
  char in_register_0000129e;
  char in_register_0000129f;
  char in_register_000012a0;
  char in_register_000012a1;
  char in_register_000012a2;
  char in_register_000012a3;
  char in_register_000012a4;
  char in_register_000012a5;
  char in_register_000012a6;
  char in_register_000012a7;
  char in_register_000012a8;
  char in_register_000012a9;
  char in_register_000012aa;
  char in_register_000012ab;
  char in_register_000012ac;
  char in_register_000012ad;
  char in_register_000012ae;
  char in_register_000012af;
  char in_register_000012b0;
  char in_register_000012b1;
  char in_register_000012b2;
  char in_register_000012b3;
  char in_register_000012b4;
  char in_register_000012b5;
  char in_register_000012b6;
  char in_register_000012b7;
  char in_register_000012b8;
  char in_register_000012b9;
  char in_register_000012ba;
  char in_register_000012bb;
  char in_register_000012bc;
  char in_register_000012bd;
  char in_register_000012be;
  char in_register_000012bf;
  undefined1 auVar38 [64];
  
  if (param_3 < 0x41) {
    uVar32 = *(ulonglong *)(&DAT_1401530d8 + param_3 * 8);
    auVar36 = vmovdqu8_avx512bw(*param_2);
    bVar3 = (bool)((byte)uVar32 & 1);
    auVar37[0] = bVar3 * auVar36[0] | !bVar3 * in_XMM1_Ba;
    bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
    auVar37[1] = bVar3 * auVar36[1] | !bVar3 * in_XMM1_Bb;
    bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
    auVar37[2] = bVar3 * auVar36[2] | !bVar3 * in_XMM1_Bc;
    bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
    auVar37[3] = bVar3 * auVar36[3] | !bVar3 * in_XMM1_Bd;
    bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
    auVar37[4] = bVar3 * auVar36[4] | !bVar3 * in_XMM1_Be;
    bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
    auVar37[5] = bVar3 * auVar36[5] | !bVar3 * in_XMM1_Bf;
    bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
    auVar37[6] = bVar3 * auVar36[6] | !bVar3 * in_XMM1_Bg;
    bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
    auVar37[7] = bVar3 * auVar36[7] | !bVar3 * in_XMM1_Bh;
    bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
    auVar37[8] = bVar3 * auVar36[8] | !bVar3 * in_XMM1_Bi;
    bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
    auVar37[9] = bVar3 * auVar36[9] | !bVar3 * in_XMM1_Bj;
    bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
    auVar37[10] = bVar3 * auVar36[10] | !bVar3 * in_XMM1_Bk;
    bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
    auVar37[0xb] = bVar3 * auVar36[0xb] | !bVar3 * in_XMM1_Bl;
    bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
    auVar37[0xc] = bVar3 * auVar36[0xc] | !bVar3 * in_XMM1_Bm;
    bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
    auVar37[0xd] = bVar3 * auVar36[0xd] | !bVar3 * in_XMM1_Bn;
    bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
    auVar37[0xe] = bVar3 * auVar36[0xe] | !bVar3 * in_XMM1_Bo;
    bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
    auVar37[0xf] = bVar3 * auVar36[0xf] | !bVar3 * in_XMM1_Bp;
    bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
    auVar37[0x10] = bVar3 * auVar36[0x10] | !bVar3 * in_YMM1_H;
    bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
    auVar37[0x11] = bVar3 * auVar36[0x11] | !bVar3 * in_register_00001251;
    bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
    auVar37[0x12] = bVar3 * auVar36[0x12] | !bVar3 * in_register_00001252;
    bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
    auVar37[0x13] = bVar3 * auVar36[0x13] | !bVar3 * in_register_00001253;
    bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
    auVar37[0x14] = bVar3 * auVar36[0x14] | !bVar3 * in_register_00001254;
    bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
    auVar37[0x15] = bVar3 * auVar36[0x15] | !bVar3 * in_register_00001255;
    bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
    auVar37[0x16] = bVar3 * auVar36[0x16] | !bVar3 * in_register_00001256;
    bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
    auVar37[0x17] = bVar3 * auVar36[0x17] | !bVar3 * in_register_00001257;
    bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
    auVar37[0x18] = bVar3 * auVar36[0x18] | !bVar3 * in_register_00001258;
    bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
    auVar37[0x19] = bVar3 * auVar36[0x19] | !bVar3 * in_register_00001259;
    bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
    auVar37[0x1a] = bVar3 * auVar36[0x1a] | !bVar3 * in_register_0000125a;
    bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
    auVar37[0x1b] = bVar3 * auVar36[0x1b] | !bVar3 * in_register_0000125b;
    bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
    auVar37[0x1c] = bVar3 * auVar36[0x1c] | !bVar3 * in_register_0000125c;
    bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
    auVar37[0x1d] = bVar3 * auVar36[0x1d] | !bVar3 * in_register_0000125d;
    bVar3 = (bool)((byte)(uVar32 >> 0x1e) & 1);
    auVar37[0x1e] = bVar3 * auVar36[0x1e] | !bVar3 * in_register_0000125e;
    bVar3 = (bool)((byte)(uVar32 >> 0x1f) & 1);
    auVar37[0x1f] = bVar3 * auVar36[0x1f] | !bVar3 * in_register_0000125f;
    bVar3 = (bool)((byte)(uVar32 >> 0x20) & 1);
    auVar37[0x20] = bVar3 * auVar36[0x20] | !bVar3 * in_register_00001260;
    bVar3 = (bool)((byte)(uVar32 >> 0x21) & 1);
    auVar37[0x21] = bVar3 * auVar36[0x21] | !bVar3 * in_register_00001261;
    bVar3 = (bool)((byte)(uVar32 >> 0x22) & 1);
    auVar37[0x22] = bVar3 * auVar36[0x22] | !bVar3 * in_register_00001262;
    bVar3 = (bool)((byte)(uVar32 >> 0x23) & 1);
    auVar37[0x23] = bVar3 * auVar36[0x23] | !bVar3 * in_register_00001263;
    bVar3 = (bool)((byte)(uVar32 >> 0x24) & 1);
    auVar37[0x24] = bVar3 * auVar36[0x24] | !bVar3 * in_register_00001264;
    bVar3 = (bool)((byte)(uVar32 >> 0x25) & 1);
    auVar37[0x25] = bVar3 * auVar36[0x25] | !bVar3 * in_register_00001265;
    bVar3 = (bool)((byte)(uVar32 >> 0x26) & 1);
    auVar37[0x26] = bVar3 * auVar36[0x26] | !bVar3 * in_register_00001266;
    bVar3 = (bool)((byte)(uVar32 >> 0x27) & 1);
    auVar37[0x27] = bVar3 * auVar36[0x27] | !bVar3 * in_register_00001267;
    bVar3 = (bool)((byte)(uVar32 >> 0x28) & 1);
    auVar37[0x28] = bVar3 * auVar36[0x28] | !bVar3 * in_register_00001268;
    bVar3 = (bool)((byte)(uVar32 >> 0x29) & 1);
    auVar37[0x29] = bVar3 * auVar36[0x29] | !bVar3 * in_register_00001269;
    bVar3 = (bool)((byte)(uVar32 >> 0x2a) & 1);
    auVar37[0x2a] = bVar3 * auVar36[0x2a] | !bVar3 * in_register_0000126a;
    bVar3 = (bool)((byte)(uVar32 >> 0x2b) & 1);
    auVar37[0x2b] = bVar3 * auVar36[0x2b] | !bVar3 * in_register_0000126b;
    bVar3 = (bool)((byte)(uVar32 >> 0x2c) & 1);
    auVar37[0x2c] = bVar3 * auVar36[0x2c] | !bVar3 * in_register_0000126c;
    bVar3 = (bool)((byte)(uVar32 >> 0x2d) & 1);
    auVar37[0x2d] = bVar3 * auVar36[0x2d] | !bVar3 * in_register_0000126d;
    bVar3 = (bool)((byte)(uVar32 >> 0x2e) & 1);
    auVar37[0x2e] = bVar3 * auVar36[0x2e] | !bVar3 * in_register_0000126e;
    bVar3 = (bool)((byte)(uVar32 >> 0x2f) & 1);
    auVar37[0x2f] = bVar3 * auVar36[0x2f] | !bVar3 * in_register_0000126f;
    bVar3 = (bool)((byte)(uVar32 >> 0x30) & 1);
    auVar37[0x30] = bVar3 * auVar36[0x30] | !bVar3 * in_register_00001270;
    bVar3 = (bool)((byte)(uVar32 >> 0x31) & 1);
    auVar37[0x31] = bVar3 * auVar36[0x31] | !bVar3 * in_register_00001271;
    bVar3 = (bool)((byte)(uVar32 >> 0x32) & 1);
    auVar37[0x32] = bVar3 * auVar36[0x32] | !bVar3 * in_register_00001272;
    bVar3 = (bool)((byte)(uVar32 >> 0x33) & 1);
    auVar37[0x33] = bVar3 * auVar36[0x33] | !bVar3 * in_register_00001273;
    bVar3 = (bool)((byte)(uVar32 >> 0x34) & 1);
    auVar37[0x34] = bVar3 * auVar36[0x34] | !bVar3 * in_register_00001274;
    bVar3 = (bool)((byte)(uVar32 >> 0x35) & 1);
    auVar37[0x35] = bVar3 * auVar36[0x35] | !bVar3 * in_register_00001275;
    bVar3 = (bool)((byte)(uVar32 >> 0x36) & 1);
    auVar37[0x36] = bVar3 * auVar36[0x36] | !bVar3 * in_register_00001276;
    bVar3 = (bool)((byte)(uVar32 >> 0x37) & 1);
    auVar37[0x37] = bVar3 * auVar36[0x37] | !bVar3 * in_register_00001277;
    bVar4 = (byte)(uVar32 >> 0x38);
    auVar37[0x38] = (bVar4 & 1) * auVar36[0x38] | !(bool)(bVar4 & 1) * in_register_00001278;
    bVar3 = (bool)(bVar4 >> 1 & 1);
    auVar37[0x39] = bVar3 * auVar36[0x39] | !bVar3 * in_register_00001279;
    bVar3 = (bool)(bVar4 >> 2 & 1);
    auVar37[0x3a] = bVar3 * auVar36[0x3a] | !bVar3 * in_register_0000127a;
    bVar3 = (bool)(bVar4 >> 3 & 1);
    auVar37[0x3b] = bVar3 * auVar36[0x3b] | !bVar3 * in_register_0000127b;
    bVar3 = (bool)(bVar4 >> 4 & 1);
    auVar37[0x3c] = bVar3 * auVar36[0x3c] | !bVar3 * in_register_0000127c;
    bVar3 = (bool)(bVar4 >> 5 & 1);
    auVar37[0x3d] = bVar3 * auVar36[0x3d] | !bVar3 * in_register_0000127d;
    bVar3 = (bool)(bVar4 >> 6 & 1);
    auVar37[0x3e] = bVar3 * auVar36[0x3e] | !bVar3 * in_register_0000127e;
    auVar37[0x3f] =
         -((char)bVar4 >> 7) * auVar36[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_0000127f;
    auVar36 = vmovdqu8_avx512bw(auVar37);
    *param_1 = auVar36;
    return;
  }
  if (param_3 < 0x81) {
    uVar32 = *(ulonglong *)(&DAT_1401530d8 + (param_3 - 0x40) * 8);
    auVar36 = vmovdqu8_avx512bw(*param_2);
    auVar37 = vmovdqu8_avx512bw(param_2[1]);
    bVar3 = (bool)((byte)uVar32 & 1);
    auVar38[0] = bVar3 * auVar37[0] | !bVar3 * in_XMM2_Ba;
    bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
    auVar38[1] = bVar3 * auVar37[1] | !bVar3 * in_XMM2_Bb;
    bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
    auVar38[2] = bVar3 * auVar37[2] | !bVar3 * in_XMM2_Bc;
    bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
    auVar38[3] = bVar3 * auVar37[3] | !bVar3 * in_XMM2_Bd;
    bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
    auVar38[4] = bVar3 * auVar37[4] | !bVar3 * in_XMM2_Be;
    bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
    auVar38[5] = bVar3 * auVar37[5] | !bVar3 * in_XMM2_Bf;
    bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
    auVar38[6] = bVar3 * auVar37[6] | !bVar3 * in_XMM2_Bg;
    bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
    auVar38[7] = bVar3 * auVar37[7] | !bVar3 * in_XMM2_Bh;
    bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
    auVar38[8] = bVar3 * auVar37[8] | !bVar3 * in_XMM2_Bi;
    bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
    auVar38[9] = bVar3 * auVar37[9] | !bVar3 * in_XMM2_Bj;
    bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
    auVar38[10] = bVar3 * auVar37[10] | !bVar3 * in_XMM2_Bk;
    bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
    auVar38[0xb] = bVar3 * auVar37[0xb] | !bVar3 * in_XMM2_Bl;
    bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
    auVar38[0xc] = bVar3 * auVar37[0xc] | !bVar3 * in_XMM2_Bm;
    bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
    auVar38[0xd] = bVar3 * auVar37[0xd] | !bVar3 * in_XMM2_Bn;
    bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
    auVar38[0xe] = bVar3 * auVar37[0xe] | !bVar3 * in_XMM2_Bo;
    bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
    auVar38[0xf] = bVar3 * auVar37[0xf] | !bVar3 * in_XMM2_Bp;
    bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
    auVar38[0x10] = bVar3 * auVar37[0x10] | !bVar3 * in_YMM2_H;
    bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
    auVar38[0x11] = bVar3 * auVar37[0x11] | !bVar3 * in_register_00001291;
    bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
    auVar38[0x12] = bVar3 * auVar37[0x12] | !bVar3 * in_register_00001292;
    bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
    auVar38[0x13] = bVar3 * auVar37[0x13] | !bVar3 * in_register_00001293;
    bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
    auVar38[0x14] = bVar3 * auVar37[0x14] | !bVar3 * in_register_00001294;
    bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
    auVar38[0x15] = bVar3 * auVar37[0x15] | !bVar3 * in_register_00001295;
    bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
    auVar38[0x16] = bVar3 * auVar37[0x16] | !bVar3 * in_register_00001296;
    bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
    auVar38[0x17] = bVar3 * auVar37[0x17] | !bVar3 * in_register_00001297;
    bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
    auVar38[0x18] = bVar3 * auVar37[0x18] | !bVar3 * in_register_00001298;
    bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
    auVar38[0x19] = bVar3 * auVar37[0x19] | !bVar3 * in_register_00001299;
    bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
    auVar38[0x1a] = bVar3 * auVar37[0x1a] | !bVar3 * in_register_0000129a;
    bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
    auVar38[0x1b] = bVar3 * auVar37[0x1b] | !bVar3 * in_register_0000129b;
    bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
    auVar38[0x1c] = bVar3 * auVar37[0x1c] | !bVar3 * in_register_0000129c;
    bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
    auVar38[0x1d] = bVar3 * auVar37[0x1d] | !bVar3 * in_register_0000129d;
    bVar3 = (bool)((byte)(uVar32 >> 0x1e) & 1);
    auVar38[0x1e] = bVar3 * auVar37[0x1e] | !bVar3 * in_register_0000129e;
    bVar3 = (bool)((byte)(uVar32 >> 0x1f) & 1);
    auVar38[0x1f] = bVar3 * auVar37[0x1f] | !bVar3 * in_register_0000129f;
    bVar3 = (bool)((byte)(uVar32 >> 0x20) & 1);
    auVar38[0x20] = bVar3 * auVar37[0x20] | !bVar3 * in_register_000012a0;
    bVar3 = (bool)((byte)(uVar32 >> 0x21) & 1);
    auVar38[0x21] = bVar3 * auVar37[0x21] | !bVar3 * in_register_000012a1;
    bVar3 = (bool)((byte)(uVar32 >> 0x22) & 1);
    auVar38[0x22] = bVar3 * auVar37[0x22] | !bVar3 * in_register_000012a2;
    bVar3 = (bool)((byte)(uVar32 >> 0x23) & 1);
    auVar38[0x23] = bVar3 * auVar37[0x23] | !bVar3 * in_register_000012a3;
    bVar3 = (bool)((byte)(uVar32 >> 0x24) & 1);
    auVar38[0x24] = bVar3 * auVar37[0x24] | !bVar3 * in_register_000012a4;
    bVar3 = (bool)((byte)(uVar32 >> 0x25) & 1);
    auVar38[0x25] = bVar3 * auVar37[0x25] | !bVar3 * in_register_000012a5;
    bVar3 = (bool)((byte)(uVar32 >> 0x26) & 1);
    auVar38[0x26] = bVar3 * auVar37[0x26] | !bVar3 * in_register_000012a6;
    bVar3 = (bool)((byte)(uVar32 >> 0x27) & 1);
    auVar38[0x27] = bVar3 * auVar37[0x27] | !bVar3 * in_register_000012a7;
    bVar3 = (bool)((byte)(uVar32 >> 0x28) & 1);
    auVar38[0x28] = bVar3 * auVar37[0x28] | !bVar3 * in_register_000012a8;
    bVar3 = (bool)((byte)(uVar32 >> 0x29) & 1);
    auVar38[0x29] = bVar3 * auVar37[0x29] | !bVar3 * in_register_000012a9;
    bVar3 = (bool)((byte)(uVar32 >> 0x2a) & 1);
    auVar38[0x2a] = bVar3 * auVar37[0x2a] | !bVar3 * in_register_000012aa;
    bVar3 = (bool)((byte)(uVar32 >> 0x2b) & 1);
    auVar38[0x2b] = bVar3 * auVar37[0x2b] | !bVar3 * in_register_000012ab;
    bVar3 = (bool)((byte)(uVar32 >> 0x2c) & 1);
    auVar38[0x2c] = bVar3 * auVar37[0x2c] | !bVar3 * in_register_000012ac;
    bVar3 = (bool)((byte)(uVar32 >> 0x2d) & 1);
    auVar38[0x2d] = bVar3 * auVar37[0x2d] | !bVar3 * in_register_000012ad;
    bVar3 = (bool)((byte)(uVar32 >> 0x2e) & 1);
    auVar38[0x2e] = bVar3 * auVar37[0x2e] | !bVar3 * in_register_000012ae;
    bVar3 = (bool)((byte)(uVar32 >> 0x2f) & 1);
    auVar38[0x2f] = bVar3 * auVar37[0x2f] | !bVar3 * in_register_000012af;
    bVar3 = (bool)((byte)(uVar32 >> 0x30) & 1);
    auVar38[0x30] = bVar3 * auVar37[0x30] | !bVar3 * in_register_000012b0;
    bVar3 = (bool)((byte)(uVar32 >> 0x31) & 1);
    auVar38[0x31] = bVar3 * auVar37[0x31] | !bVar3 * in_register_000012b1;
    bVar3 = (bool)((byte)(uVar32 >> 0x32) & 1);
    auVar38[0x32] = bVar3 * auVar37[0x32] | !bVar3 * in_register_000012b2;
    bVar3 = (bool)((byte)(uVar32 >> 0x33) & 1);
    auVar38[0x33] = bVar3 * auVar37[0x33] | !bVar3 * in_register_000012b3;
    bVar3 = (bool)((byte)(uVar32 >> 0x34) & 1);
    auVar38[0x34] = bVar3 * auVar37[0x34] | !bVar3 * in_register_000012b4;
    bVar3 = (bool)((byte)(uVar32 >> 0x35) & 1);
    auVar38[0x35] = bVar3 * auVar37[0x35] | !bVar3 * in_register_000012b5;
    bVar3 = (bool)((byte)(uVar32 >> 0x36) & 1);
    auVar38[0x36] = bVar3 * auVar37[0x36] | !bVar3 * in_register_000012b6;
    bVar3 = (bool)((byte)(uVar32 >> 0x37) & 1);
    auVar38[0x37] = bVar3 * auVar37[0x37] | !bVar3 * in_register_000012b7;
    bVar4 = (byte)(uVar32 >> 0x38);
    auVar38[0x38] = (bVar4 & 1) * auVar37[0x38] | !(bool)(bVar4 & 1) * in_register_000012b8;
    bVar3 = (bool)(bVar4 >> 1 & 1);
    auVar38[0x39] = bVar3 * auVar37[0x39] | !bVar3 * in_register_000012b9;
    bVar3 = (bool)(bVar4 >> 2 & 1);
    auVar38[0x3a] = bVar3 * auVar37[0x3a] | !bVar3 * in_register_000012ba;
    bVar3 = (bool)(bVar4 >> 3 & 1);
    auVar38[0x3b] = bVar3 * auVar37[0x3b] | !bVar3 * in_register_000012bb;
    bVar3 = (bool)(bVar4 >> 4 & 1);
    auVar38[0x3c] = bVar3 * auVar37[0x3c] | !bVar3 * in_register_000012bc;
    bVar3 = (bool)(bVar4 >> 5 & 1);
    auVar38[0x3d] = bVar3 * auVar37[0x3d] | !bVar3 * in_register_000012bd;
    bVar3 = (bool)(bVar4 >> 6 & 1);
    auVar38[0x3e] = bVar3 * auVar37[0x3e] | !bVar3 * in_register_000012be;
    auVar38[0x3f] =
         -((char)bVar4 >> 7) * auVar37[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_000012bf;
    auVar36 = vmovdqu8_avx512bw(auVar36);
    *param_1 = auVar36;
    auVar36 = vmovdqu8_avx512bw(auVar38);
    param_1[1] = auVar36;
    return;
  }
  pauVar25 = (undefined1 (*) [64])(*param_2 + param_3);
  if (param_1 <= param_2) {
    pauVar25 = param_1;
  }
  if (pauVar25 <= param_1) {
    if ((param_3 < 0x180000) && (0x4000 < param_3)) {
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*param_1)[0] = (*param_2)[0];
        param_2 = (undefined1 (*) [64])(*param_2 + 1);
        param_1 = (undefined1 (*) [64])(*param_1 + 1);
      }
      return;
    }
    lVar33 = ((ulonglong)(param_1 + 1) & 0xffffffffffffffc0) - (longlong)param_1;
    uVar32 = *(ulonglong *)(&DAT_1401530d8 + lVar33 * 8);
    auVar36 = vmovdqu8_avx512bw(*param_2);
    bVar3 = (bool)((byte)uVar32 & 1);
    auVar39[0] = bVar3 * auVar36[0] | !bVar3 * in_XMM0_Ba;
    bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
    auVar39[1] = bVar3 * auVar36[1] | !bVar3 * in_XMM0_Bb;
    bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
    auVar39[2] = bVar3 * auVar36[2] | !bVar3 * in_XMM0_Bc;
    bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
    auVar39[3] = bVar3 * auVar36[3] | !bVar3 * in_XMM0_Bd;
    bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
    auVar39[4] = bVar3 * auVar36[4] | !bVar3 * in_XMM0_Be;
    bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
    auVar39[5] = bVar3 * auVar36[5] | !bVar3 * in_XMM0_Bf;
    bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
    auVar39[6] = bVar3 * auVar36[6] | !bVar3 * in_XMM0_Bg;
    bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
    auVar39[7] = bVar3 * auVar36[7] | !bVar3 * in_XMM0_Bh;
    bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
    auVar39[8] = bVar3 * auVar36[8] | !bVar3 * in_XMM0_Bi;
    bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
    auVar39[9] = bVar3 * auVar36[9] | !bVar3 * in_XMM0_Bj;
    bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
    auVar39[10] = bVar3 * auVar36[10] | !bVar3 * in_XMM0_Bk;
    bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
    auVar39[0xb] = bVar3 * auVar36[0xb] | !bVar3 * in_XMM0_Bl;
    bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
    auVar39[0xc] = bVar3 * auVar36[0xc] | !bVar3 * in_XMM0_Bm;
    bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
    auVar39[0xd] = bVar3 * auVar36[0xd] | !bVar3 * in_XMM0_Bn;
    bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
    auVar39[0xe] = bVar3 * auVar36[0xe] | !bVar3 * in_XMM0_Bo;
    bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
    auVar39[0xf] = bVar3 * auVar36[0xf] | !bVar3 * in_XMM0_Bp;
    bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
    auVar39[0x10] = bVar3 * auVar36[0x10] | !bVar3 * in_YMM0_H;
    bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
    auVar39[0x11] = bVar3 * auVar36[0x11] | !bVar3 * in_register_00001211;
    bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
    auVar39[0x12] = bVar3 * auVar36[0x12] | !bVar3 * in_register_00001212;
    bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
    auVar39[0x13] = bVar3 * auVar36[0x13] | !bVar3 * in_register_00001213;
    bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
    auVar39[0x14] = bVar3 * auVar36[0x14] | !bVar3 * in_register_00001214;
    bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
    auVar39[0x15] = bVar3 * auVar36[0x15] | !bVar3 * in_register_00001215;
    bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
    auVar39[0x16] = bVar3 * auVar36[0x16] | !bVar3 * in_register_00001216;
    bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
    auVar39[0x17] = bVar3 * auVar36[0x17] | !bVar3 * in_register_00001217;
    bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
    auVar39[0x18] = bVar3 * auVar36[0x18] | !bVar3 * in_register_00001218;
    bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
    auVar39[0x19] = bVar3 * auVar36[0x19] | !bVar3 * in_register_00001219;
    bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
    auVar39[0x1a] = bVar3 * auVar36[0x1a] | !bVar3 * in_register_0000121a;
    bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
    auVar39[0x1b] = bVar3 * auVar36[0x1b] | !bVar3 * in_register_0000121b;
    bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
    auVar39[0x1c] = bVar3 * auVar36[0x1c] | !bVar3 * in_register_0000121c;
    bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
    auVar39[0x1d] = bVar3 * auVar36[0x1d] | !bVar3 * in_register_0000121d;
    bVar3 = (bool)((byte)(uVar32 >> 0x1e) & 1);
    auVar39[0x1e] = bVar3 * auVar36[0x1e] | !bVar3 * in_register_0000121e;
    bVar3 = (bool)((byte)(uVar32 >> 0x1f) & 1);
    auVar39[0x1f] = bVar3 * auVar36[0x1f] | !bVar3 * in_register_0000121f;
    bVar3 = (bool)((byte)(uVar32 >> 0x20) & 1);
    auVar39[0x20] = bVar3 * auVar36[0x20] | !bVar3 * in_register_00001220;
    bVar3 = (bool)((byte)(uVar32 >> 0x21) & 1);
    auVar39[0x21] = bVar3 * auVar36[0x21] | !bVar3 * in_register_00001221;
    bVar3 = (bool)((byte)(uVar32 >> 0x22) & 1);
    auVar39[0x22] = bVar3 * auVar36[0x22] | !bVar3 * in_register_00001222;
    bVar3 = (bool)((byte)(uVar32 >> 0x23) & 1);
    auVar39[0x23] = bVar3 * auVar36[0x23] | !bVar3 * in_register_00001223;
    bVar3 = (bool)((byte)(uVar32 >> 0x24) & 1);
    auVar39[0x24] = bVar3 * auVar36[0x24] | !bVar3 * in_register_00001224;
    bVar3 = (bool)((byte)(uVar32 >> 0x25) & 1);
    auVar39[0x25] = bVar3 * auVar36[0x25] | !bVar3 * in_register_00001225;
    bVar3 = (bool)((byte)(uVar32 >> 0x26) & 1);
    auVar39[0x26] = bVar3 * auVar36[0x26] | !bVar3 * in_register_00001226;
    bVar3 = (bool)((byte)(uVar32 >> 0x27) & 1);
    auVar39[0x27] = bVar3 * auVar36[0x27] | !bVar3 * in_register_00001227;
    bVar3 = (bool)((byte)(uVar32 >> 0x28) & 1);
    auVar39[0x28] = bVar3 * auVar36[0x28] | !bVar3 * in_register_00001228;
    bVar3 = (bool)((byte)(uVar32 >> 0x29) & 1);
    auVar39[0x29] = bVar3 * auVar36[0x29] | !bVar3 * in_register_00001229;
    bVar3 = (bool)((byte)(uVar32 >> 0x2a) & 1);
    auVar39[0x2a] = bVar3 * auVar36[0x2a] | !bVar3 * in_register_0000122a;
    bVar3 = (bool)((byte)(uVar32 >> 0x2b) & 1);
    auVar39[0x2b] = bVar3 * auVar36[0x2b] | !bVar3 * in_register_0000122b;
    bVar3 = (bool)((byte)(uVar32 >> 0x2c) & 1);
    auVar39[0x2c] = bVar3 * auVar36[0x2c] | !bVar3 * in_register_0000122c;
    bVar3 = (bool)((byte)(uVar32 >> 0x2d) & 1);
    auVar39[0x2d] = bVar3 * auVar36[0x2d] | !bVar3 * in_register_0000122d;
    bVar3 = (bool)((byte)(uVar32 >> 0x2e) & 1);
    auVar39[0x2e] = bVar3 * auVar36[0x2e] | !bVar3 * in_register_0000122e;
    bVar3 = (bool)((byte)(uVar32 >> 0x2f) & 1);
    auVar39[0x2f] = bVar3 * auVar36[0x2f] | !bVar3 * in_register_0000122f;
    bVar3 = (bool)((byte)(uVar32 >> 0x30) & 1);
    auVar39[0x30] = bVar3 * auVar36[0x30] | !bVar3 * in_register_00001230;
    bVar3 = (bool)((byte)(uVar32 >> 0x31) & 1);
    auVar39[0x31] = bVar3 * auVar36[0x31] | !bVar3 * in_register_00001231;
    bVar3 = (bool)((byte)(uVar32 >> 0x32) & 1);
    auVar39[0x32] = bVar3 * auVar36[0x32] | !bVar3 * in_register_00001232;
    bVar3 = (bool)((byte)(uVar32 >> 0x33) & 1);
    auVar39[0x33] = bVar3 * auVar36[0x33] | !bVar3 * in_register_00001233;
    bVar3 = (bool)((byte)(uVar32 >> 0x34) & 1);
    auVar39[0x34] = bVar3 * auVar36[0x34] | !bVar3 * in_register_00001234;
    bVar3 = (bool)((byte)(uVar32 >> 0x35) & 1);
    auVar39[0x35] = bVar3 * auVar36[0x35] | !bVar3 * in_register_00001235;
    bVar3 = (bool)((byte)(uVar32 >> 0x36) & 1);
    auVar39[0x36] = bVar3 * auVar36[0x36] | !bVar3 * in_register_00001236;
    bVar3 = (bool)((byte)(uVar32 >> 0x37) & 1);
    auVar39[0x37] = bVar3 * auVar36[0x37] | !bVar3 * in_register_00001237;
    bVar4 = (byte)(uVar32 >> 0x38);
    auVar39[0x38] = (bVar4 & 1) * auVar36[0x38] | !(bool)(bVar4 & 1) * in_register_00001238;
    bVar3 = (bool)(bVar4 >> 1 & 1);
    auVar39[0x39] = bVar3 * auVar36[0x39] | !bVar3 * in_register_00001239;
    bVar3 = (bool)(bVar4 >> 2 & 1);
    auVar39[0x3a] = bVar3 * auVar36[0x3a] | !bVar3 * in_register_0000123a;
    bVar3 = (bool)(bVar4 >> 3 & 1);
    auVar39[0x3b] = bVar3 * auVar36[0x3b] | !bVar3 * in_register_0000123b;
    bVar3 = (bool)(bVar4 >> 4 & 1);
    auVar39[0x3c] = bVar3 * auVar36[0x3c] | !bVar3 * in_register_0000123c;
    bVar3 = (bool)(bVar4 >> 5 & 1);
    auVar39[0x3d] = bVar3 * auVar36[0x3d] | !bVar3 * in_register_0000123d;
    bVar3 = (bool)(bVar4 >> 6 & 1);
    auVar39[0x3e] = bVar3 * auVar36[0x3e] | !bVar3 * in_register_0000123e;
    auVar39[0x3f] =
         -((char)bVar4 >> 7) * auVar36[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_0000123f;
    pauVar25 = (undefined1 (*) [64])((longlong)param_1 + lVar33);
    pauVar30 = (undefined1 (*) [64])((longlong)param_2 + lVar33);
    uVar32 = param_3 - lVar33;
    if (0x100 < uVar32) {
      if (0x180000 < uVar32) {
        do {
          uVar35 = uVar32;
          pauVar31 = pauVar30;
          pauVar26 = pauVar25;
          auVar36 = vmovdqu8_avx512bw(*pauVar31);
          auVar58 = auVar36._0_30_;
          auVar37 = vmovdqu8_avx512bw(pauVar31[1]);
          auVar40 = vmovdqu8_avx512bw(pauVar31[2]);
          auVar41 = vmovdqu8_avx512bw(pauVar31[3]);
          auVar36 = vmovntdq_avx512f(auVar36);
          *pauVar26 = auVar36;
          auVar36 = vmovntdq_avx512f(auVar37);
          pauVar26[1] = auVar36;
          auVar36 = vmovntdq_avx512f(auVar40);
          pauVar26[2] = auVar36;
          auVar36 = vmovntdq_avx512f(auVar41);
          pauVar26[3] = auVar36;
          uVar32 = uVar35 - 0x100;
          pauVar25 = pauVar26 + 4;
          pauVar30 = pauVar31 + 4;
        } while (0xff < uVar32);
        uVar34 = uVar35 - 0xe1 & 0xffffffffffffffe0;
        uVar32 = *(ulonglong *)(&DAT_1401530d8 + (0x20 - (uVar34 - uVar32)) * 8);
        switch(uVar35) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar31 + uVar34));
          auVar2 = vmovntdq_avx(auVar41._0_32_);
          *(undefined1 (*) [32])(*pauVar26 + uVar34) = auVar2;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar31 + uVar34 + 0x20));
          auVar2 = vmovntdq_avx(auVar41._0_32_);
          *(undefined1 (*) [32])(*pauVar26 + uVar34 + 0x20) = auVar2;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[1] + uVar34));
          auVar2 = vmovntdq_avx(auVar41._0_32_);
          *(undefined1 (*) [32])(pauVar26[1] + uVar34) = auVar2;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[1] + uVar34 + 0x20));
          auVar2 = vmovntdq_avx(auVar41._0_32_);
          *(undefined1 (*) [32])(pauVar26[1] + uVar34 + 0x20) = auVar2;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[2] + uVar34));
          auVar2 = vmovntdq_avx(auVar41._0_32_);
          *(undefined1 (*) [32])(pauVar26[2] + uVar34) = auVar2;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[2] + uVar34 + 0x20));
          auVar2 = vmovntdq_avx(auVar41._0_32_);
          *(undefined1 (*) [32])(pauVar26[2] + uVar34 + 0x20) = auVar2;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar41._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[3] + uVar34));
          auVar58 = auVar41._0_30_;
          auVar2 = vmovntdq_avx(auVar41._0_32_);
          *(undefined1 (*) [32])(pauVar26[3] + uVar34) = auVar2;
        default:
          auVar36._32_32_ = auVar41._32_32_;
          auVar36._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[3] + uVar34 + 0x20));
          bVar3 = (bool)((byte)uVar32 & 1);
          auVar40[0] = bVar3 * auVar36[0] | !bVar3 * auVar58[0];
          bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
          auVar40[1] = bVar3 * auVar36[1] | !bVar3 * auVar58[1];
          bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
          auVar40[2] = bVar3 * auVar36[2] | !bVar3 * auVar58[2];
          bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
          auVar40[3] = bVar3 * auVar36[3] | !bVar3 * auVar58[3];
          bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
          auVar40[4] = bVar3 * auVar36[4] | !bVar3 * auVar58[4];
          bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
          auVar40[5] = bVar3 * auVar36[5] | !bVar3 * auVar58[5];
          bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
          auVar40[6] = bVar3 * auVar36[6] | !bVar3 * auVar58[6];
          bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
          auVar40[7] = bVar3 * auVar36[7] | !bVar3 * auVar58[7];
          bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
          auVar40[8] = bVar3 * auVar36[8] | !bVar3 * auVar58[8];
          bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
          auVar40[9] = bVar3 * auVar36[9] | !bVar3 * auVar58[9];
          bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
          auVar40[10] = bVar3 * auVar36[10] | !bVar3 * auVar58[10];
          bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
          auVar40[0xb] = bVar3 * auVar36[0xb] | !bVar3 * auVar58[0xb];
          bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
          auVar40[0xc] = bVar3 * auVar36[0xc] | !bVar3 * auVar58[0xc];
          bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
          auVar40[0xd] = bVar3 * auVar36[0xd] | !bVar3 * auVar58[0xd];
          bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
          auVar40[0xe] = bVar3 * auVar36[0xe] | !bVar3 * auVar58[0xe];
          bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
          auVar40[0xf] = bVar3 * auVar36[0xf] | !bVar3 * auVar58[0xf];
          bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
          auVar40[0x10] = bVar3 * auVar36[0x10] | !bVar3 * auVar58[0x10];
          bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
          auVar40[0x11] = bVar3 * auVar36[0x11] | !bVar3 * auVar58[0x11];
          bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
          auVar40[0x12] = bVar3 * auVar36[0x12] | !bVar3 * auVar58[0x12];
          bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
          auVar40[0x13] = bVar3 * auVar36[0x13] | !bVar3 * auVar58[0x13];
          bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
          auVar40[0x14] = bVar3 * auVar36[0x14] | !bVar3 * auVar58[0x14];
          bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
          auVar40[0x15] = bVar3 * auVar36[0x15] | !bVar3 * auVar58[0x15];
          bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
          auVar40[0x16] = bVar3 * auVar36[0x16] | !bVar3 * auVar58[0x16];
          bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
          auVar40[0x17] = bVar3 * auVar36[0x17] | !bVar3 * auVar58[0x17];
          bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
          auVar40[0x18] = bVar3 * auVar36[0x18] | !bVar3 * auVar58[0x18];
          bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
          auVar40[0x19] = bVar3 * auVar36[0x19] | !bVar3 * auVar58[0x19];
          bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
          auVar40[0x1a] = bVar3 * auVar36[0x1a] | !bVar3 * auVar58[0x1a];
          bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
          auVar40[0x1b] = bVar3 * auVar36[0x1b] | !bVar3 * auVar58[0x1b];
          bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
          auVar40[0x1c] = bVar3 * auVar36[0x1c] | !bVar3 * auVar58[0x1c];
          bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
          auVar40._30_34_ = auVar36._30_34_;
          auVar40[0x1d] = bVar3 * auVar36[0x1d] | !bVar3 * auVar58[0x1d];
          auVar2 = vmovdqu8_avx512vl(auVar40._0_32_);
          *(undefined1 (*) [32])(pauVar26[3] + uVar34 + 0x20) = auVar2;
        case 0x100:
          auVar36 = vmovdqu8_avx512bw(auVar39);
          *param_1 = auVar36;
          return;
        }
      }
      do {
        auVar36 = vmovdqu8_avx512bw(*pauVar30);
        auVar37 = vmovdqu8_avx512bw(pauVar30[1]);
        auVar39 = vmovdqu8_avx512bw(pauVar30[2]);
        auVar40 = vmovdqu8_avx512bw(pauVar30[3]);
        auVar36 = vmovdqu8_avx512bw(auVar36);
        *pauVar25 = auVar36;
        auVar36 = vmovdqu8_avx512bw(auVar37);
        pauVar25[1] = auVar36;
        auVar36 = vmovdqu8_avx512bw(auVar39);
        pauVar25[2] = auVar36;
        auVar36 = vmovdqu8_avx512bw(auVar40);
        pauVar25[3] = auVar36;
        pauVar25 = pauVar25 + 4;
        pauVar30 = pauVar30 + 4;
        uVar32 = uVar32 - 0x100;
      } while (0xff < uVar32);
    }
                    /* WARNING: Could not recover jumptable at 0x0001400af598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
              *(uint *)(&DAT_140153090 + (uVar32 + 0x1f >> 5) * 4)))();
    return;
  }
  uVar20 = *(undefined8 *)*param_2;
  uVar21 = *(undefined8 *)(*param_2 + 8);
  lVar33 = (longlong)param_2 - (longlong)param_1;
  puVar29 = (undefined1 *)((longlong)param_1 + lVar33 + (param_3 - 0x10));
  uVar5 = puVar29[1];
  uVar6 = puVar29[2];
  uVar7 = puVar29[3];
  uVar8 = puVar29[4];
  uVar9 = puVar29[5];
  uVar10 = puVar29[6];
  uVar11 = puVar29[7];
  uVar12 = puVar29[8];
  uVar13 = puVar29[9];
  uVar14 = puVar29[10];
  uVar15 = puVar29[0xb];
  uVar16 = puVar29[0xc];
  uVar17 = puVar29[0xd];
  uVar18 = puVar29[0xe];
  uVar19 = puVar29[0xf];
  puVar27 = param_1[-1] + param_3 + 0x30;
  uVar32 = param_3 - 0x10;
  puVar28 = puVar27;
  uVar42 = *puVar29;
  uVar43 = uVar5;
  uVar44 = uVar6;
  uVar45 = uVar7;
  uVar46 = uVar8;
  uVar47 = uVar9;
  uVar48 = uVar10;
  uVar49 = uVar11;
  uVar50 = uVar12;
  uVar51 = uVar13;
  uVar52 = uVar14;
  uVar53 = uVar15;
  uVar54 = uVar16;
  uVar55 = uVar17;
  uVar56 = uVar18;
  uVar57 = uVar19;
  if (((ulonglong)puVar27 & 0xf) != 0) {
    puVar28 = (undefined1 *)((ulonglong)puVar27 & 0xfffffffffffffff0);
    puVar1 = puVar28 + lVar33;
    uVar42 = *puVar1;
    uVar43 = puVar1[1];
    uVar44 = puVar1[2];
    uVar45 = puVar1[3];
    uVar46 = puVar1[4];
    uVar47 = puVar1[5];
    uVar48 = puVar1[6];
    uVar49 = puVar1[7];
    uVar50 = puVar1[8];
    uVar51 = puVar1[9];
    uVar52 = puVar1[10];
    uVar53 = puVar1[0xb];
    uVar54 = puVar1[0xc];
    uVar55 = puVar1[0xd];
    uVar56 = puVar1[0xe];
    uVar57 = puVar1[0xf];
    *puVar27 = *puVar29;
    param_1[-1][param_3 + 0x31] = uVar5;
    param_1[-1][param_3 + 0x32] = uVar6;
    param_1[-1][param_3 + 0x33] = uVar7;
    param_1[-1][param_3 + 0x34] = uVar8;
    param_1[-1][param_3 + 0x35] = uVar9;
    param_1[-1][param_3 + 0x36] = uVar10;
    param_1[-1][param_3 + 0x37] = uVar11;
    param_1[-1][param_3 + 0x38] = uVar12;
    param_1[-1][param_3 + 0x39] = uVar13;
    param_1[-1][param_3 + 0x3a] = uVar14;
    param_1[-1][param_3 + 0x3b] = uVar15;
    param_1[-1][param_3 + 0x3c] = uVar16;
    param_1[-1][param_3 + 0x3d] = uVar17;
    param_1[-1][param_3 + 0x3e] = uVar18;
    param_1[-1][param_3 + 0x3f] = uVar19;
    uVar32 = (longlong)puVar28 - (longlong)param_1;
  }
  uVar35 = uVar32 >> 7;
  if (uVar35 != 0) {
    *puVar28 = uVar42;
    puVar28[1] = uVar43;
    puVar28[2] = uVar44;
    puVar28[3] = uVar45;
    puVar28[4] = uVar46;
    puVar28[5] = uVar47;
    puVar28[6] = uVar48;
    puVar28[7] = uVar49;
    puVar28[8] = uVar50;
    puVar28[9] = uVar51;
    puVar28[10] = uVar52;
    puVar28[0xb] = uVar53;
    puVar28[0xc] = uVar54;
    puVar28[0xd] = uVar55;
    puVar28[0xe] = uVar56;
    puVar28[0xf] = uVar57;
    puVar29 = puVar28;
    while( true ) {
      uVar22 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x10) + 8);
      uVar23 = *(undefined8 *)(puVar29 + lVar33 + -0x20);
      uVar24 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x20) + 8);
      puVar28 = puVar29 + -0x80;
      *(undefined8 *)(puVar29 + -0x10) = *(undefined8 *)(puVar29 + lVar33 + -0x10);
      *(undefined8 *)(puVar29 + -8) = uVar22;
      *(undefined8 *)(puVar29 + -0x20) = uVar23;
      *(undefined8 *)(puVar29 + -0x18) = uVar24;
      uVar22 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x30) + 8);
      uVar23 = *(undefined8 *)(puVar29 + lVar33 + -0x40);
      uVar24 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x40) + 8);
      uVar35 = uVar35 - 1;
      *(undefined8 *)(puVar29 + -0x30) = *(undefined8 *)(puVar29 + lVar33 + -0x30);
      *(undefined8 *)(puVar29 + -0x28) = uVar22;
      *(undefined8 *)(puVar29 + -0x40) = uVar23;
      *(undefined8 *)(puVar29 + -0x38) = uVar24;
      uVar22 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x50) + 8);
      uVar23 = *(undefined8 *)(puVar29 + lVar33 + -0x60);
      uVar24 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x60) + 8);
      *(undefined8 *)(puVar29 + -0x50) = *(undefined8 *)(puVar29 + lVar33 + -0x50);
      *(undefined8 *)(puVar29 + -0x48) = uVar22;
      *(undefined8 *)(puVar29 + -0x60) = uVar23;
      *(undefined8 *)(puVar29 + -0x58) = uVar24;
      uVar22 = *(undefined8 *)(puVar29 + lVar33 + -0x70);
      uVar23 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x70) + 8);
      puVar27 = puVar28 + lVar33;
      uVar42 = *puVar27;
      uVar43 = puVar27[1];
      uVar44 = puVar27[2];
      uVar45 = puVar27[3];
      uVar46 = puVar27[4];
      uVar47 = puVar27[5];
      uVar48 = puVar27[6];
      uVar49 = puVar27[7];
      uVar50 = puVar27[8];
      uVar51 = puVar27[9];
      uVar52 = puVar27[10];
      uVar53 = puVar27[0xb];
      uVar54 = puVar27[0xc];
      uVar55 = puVar27[0xd];
      uVar56 = puVar27[0xe];
      uVar57 = puVar27[0xf];
      if (uVar35 == 0) break;
      *(undefined8 *)(puVar29 + -0x70) = uVar22;
      *(undefined8 *)(puVar29 + -0x68) = uVar23;
      *puVar28 = uVar42;
      puVar29[-0x7f] = uVar43;
      puVar29[-0x7e] = uVar44;
      puVar29[-0x7d] = uVar45;
      puVar29[-0x7c] = uVar46;
      puVar29[-0x7b] = uVar47;
      puVar29[-0x7a] = uVar48;
      puVar29[-0x79] = uVar49;
      puVar29[-0x78] = uVar50;
      puVar29[-0x77] = uVar51;
      puVar29[-0x76] = uVar52;
      puVar29[-0x75] = uVar53;
      puVar29[-0x74] = uVar54;
      puVar29[-0x73] = uVar55;
      puVar29[-0x72] = uVar56;
      puVar29[-0x71] = uVar57;
      puVar29 = puVar28;
    }
    *(undefined8 *)(puVar29 + -0x70) = uVar22;
    *(undefined8 *)(puVar29 + -0x68) = uVar23;
    uVar32 = uVar32 & 0x7f;
  }
  for (uVar35 = uVar32 >> 4; uVar35 != 0; uVar35 = uVar35 - 1) {
    *puVar28 = uVar42;
    puVar28[1] = uVar43;
    puVar28[2] = uVar44;
    puVar28[3] = uVar45;
    puVar28[4] = uVar46;
    puVar28[5] = uVar47;
    puVar28[6] = uVar48;
    puVar28[7] = uVar49;
    puVar28[8] = uVar50;
    puVar28[9] = uVar51;
    puVar28[10] = uVar52;
    puVar28[0xb] = uVar53;
    puVar28[0xc] = uVar54;
    puVar28[0xd] = uVar55;
    puVar28[0xe] = uVar56;
    puVar28[0xf] = uVar57;
    puVar28 = puVar28 + -0x10;
    puVar29 = puVar28 + lVar33;
    uVar42 = *puVar29;
    uVar43 = puVar29[1];
    uVar44 = puVar29[2];
    uVar45 = puVar29[3];
    uVar46 = puVar29[4];
    uVar47 = puVar29[5];
    uVar48 = puVar29[6];
    uVar49 = puVar29[7];
    uVar50 = puVar29[8];
    uVar51 = puVar29[9];
    uVar52 = puVar29[10];
    uVar53 = puVar29[0xb];
    uVar54 = puVar29[0xc];
    uVar55 = puVar29[0xd];
    uVar56 = puVar29[0xe];
    uVar57 = puVar29[0xf];
  }
  if ((uVar32 & 0xf) != 0) {
    *(undefined8 *)*param_1 = uVar20;
    *(undefined8 *)(*param_1 + 8) = uVar21;
  }
  *puVar28 = uVar42;
  puVar28[1] = uVar43;
  puVar28[2] = uVar44;
  puVar28[3] = uVar45;
  puVar28[4] = uVar46;
  puVar28[5] = uVar47;
  puVar28[6] = uVar48;
  puVar28[7] = uVar49;
  puVar28[8] = uVar50;
  puVar28[9] = uVar51;
  puVar28[10] = uVar52;
  puVar28[0xb] = uVar53;
  puVar28[0xc] = uVar54;
  puVar28[0xd] = uVar55;
  puVar28[0xe] = uVar56;
  puVar28[0xf] = uVar57;
  return;
}

