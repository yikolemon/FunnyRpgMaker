/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400eb04c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400eb04c(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  ulonglong in_stack_fffffffffffffe68;
  undefined8 *puVar35;
  ulonglong uVar36;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 uVar37;
  char *pcVar38;
  ulonglong uVar39;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  
  local_f0 = 0xfffffffffffffffe;
  cVar2 = FUN_140085d7e("Example: Custom rendering",&DAT_140f30933,0);
  if (cVar2 == '\0') {
    FUN_140088c18();
    return;
  }
  FUN_1400811b6("imgui_demo.cpp",0x2820,"Examples/Custom rendering");
  cVar2 = FUN_1400cb4d2("##TabBar",0);
  if (cVar2 == '\0') goto LAB_1400ec91b;
  cVar2 = FUN_1400ccbf1("Primitives",0,0);
  uVar5 = (undefined4)(in_stack_fffffffffffffe68 >> 0x20);
  uVar6 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x282b,"Examples/Custom rendering/Primitives");
    fVar17 = (float)FUN_14008ff20();
    FUN_140093372(fVar17 * _DAT_140e8d29c);
    lVar7 = FUN_14008feed();
    FUN_1400abfd5("Gradients");
    uVar18 = FUN_14009376e();
    uVar19 = FUN_1400936b2();
    local_110 = CONCAT44(uVar18,uVar19);
    FUN_14009311d(&local_108);
    fVar17 = DAT_1401c86c8;
    local_118 = CONCAT44((float)((ulonglong)local_110 >> 0x20) +
                         (float)((ulonglong)local_108 >> 0x20),(float)local_110 + (float)local_108);
    uVar18 = FUN_14007a641(0xff000000,DAT_1401c86c8);
    uVar19 = FUN_14007a641(0xffffffff,fVar17);
    uVar37 = CONCAT44(uVar6,uVar19);
    uVar10 = CONCAT44(uVar5,uVar19);
    FUN_1400de346(lVar7,&local_108,&local_118,uVar18,uVar10,uVar37,uVar18);
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar19 = (undefined4)((ulonglong)uVar37 >> 0x20);
    FUN_1400ad20d("##gradient1",&local_110,0);
    FUN_14009311d(&local_108);
    local_118 = CONCAT44((float)((ulonglong)local_110 >> 0x20) +
                         (float)((ulonglong)local_108 >> 0x20),(float)local_110 + (float)local_108);
    uVar5 = FUN_14007a641(0xff00ff00,fVar17);
    uVar6 = FUN_14007a641(0xff0000ff,fVar17);
    uVar10 = CONCAT44(uVar18,uVar6);
    FUN_1400de346(lVar7,&local_108,&local_118,uVar5,uVar10,CONCAT44(uVar19,uVar6),uVar5);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    FUN_1400ad20d("##gradient2",&local_110,0);
    FUN_1400abfd5("All primitives");
    FUN_1400b61f2("Size",&DAT_140f1c618,DAT_14021001c,DAT_1402113a0,CONCAT44(uVar5,0x42c80000),
                  &DAT_140ec9859,0);
    pcVar38 = "%.02f";
    FUN_1400b61f2("Thickness",&DAT_140f1c61c,DAT_14021185c,fVar17,0x41000000,"%.02f",0);
    uVar36 = (ulonglong)pcVar38 & 0xffffffff00000000;
    FUN_1400ba55a("N-gon sides",&DAT_140f1c620,3,0xc,&DAT_140ecbfd4,uVar36);
    FUN_1400aeb6a("##circlesegmentoverride",&DAT_140f32370);
    lVar8 = FUN_14007a54a();
    FUN_140092bab(0,*(undefined4 *)(lVar8 + 100));
    uVar36 = uVar36 & 0xffffffff00000000;
    bVar3 = FUN_1400ba55a("Circle segments override",&DAT_140f1c624,3,0x28,&DAT_140ecbfd4,uVar36);
    DAT_140f32370 = DAT_140f32370 | bVar3;
    FUN_1400aeb6a("##curvessegmentoverride",&DAT_140f32371);
    lVar8 = FUN_14007a54a();
    FUN_140092bab(0,*(undefined4 *)(lVar8 + 100));
    uVar36 = uVar36 & 0xffffffff00000000;
    puVar35 = (undefined8 *)&DAT_140ecbfd4;
    bVar3 = FUN_1400ba55a("Curves segments override",&DAT_140f1c628,3,0x28,&DAT_140ecbfd4,uVar36);
    DAT_140f32371 = DAT_140f32371 | bVar3;
    FUN_1400c12a8("Color",&DAT_140f1c62c,0);
    FUN_14009311d(&local_118);
    local_108 = CONCAT44(uRam0000000140f1c630,_DAT_140f1c62c);
    uStack_100 = uRam0000000140f1c634;
    uStack_fc = uRam0000000140f1c638;
    uVar5 = FUN_140078692(&local_108);
    fVar30 = DAT_140f1c618;
    fVar29 = DAT_1401c86d0;
    fVar17 = DAT_1401c86a0;
    local_124 = 0;
    if (DAT_140f32370 != 0) {
      local_124 = DAT_140f1c624;
    }
    uVar6 = 0;
    if (DAT_140f32371 != 0) {
      uVar6 = DAT_140f1c628;
    }
    fVar33 = DAT_140f1c618 / DAT_1401c86c0;
    fVar20 = DAT_140210014 * DAT_140f1c618;
    fVar21 = (float)DAT_140e8d2a0 * DAT_140f1c618;
    fVar23 = (float)((ulonglong)DAT_140e8d2a0 >> 0x20) * DAT_140f1c618;
    fVar22 = (float)DAT_140e8d2b0 * DAT_140f1c618;
    fVar24 = (float)((ulonglong)DAT_140e8d2b0 >> 0x20) * DAT_140f1c618;
    fVar25 = DAT_140f1c618 - fVar22;
    fVar26 = DAT_140f1c618 - fVar24;
    fVar31 = (float)local_118 + (float)DAT_140e8d2c0;
    fVar32 = (float)((ulonglong)local_118 >> 0x20) + DAT_140e8d2c0._4_4_;
    bVar1 = true;
    do {
      bVar14 = bVar1;
      fVar34 = DAT_1401c86c8;
      if (!bVar14) {
        fVar34 = DAT_140f1c61c;
      }
      fVar27 = DAT_140f1c618 * fVar17;
      local_108 = CONCAT44(fVar27 + fVar32,fVar27 + fVar31);
      uVar37 = CONCAT44((int)(uVar36 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)puVar35 >> 0x20),DAT_140f1c620);
      FUN_1400decc8(lVar7,&local_108,fVar27,uVar5,uVar10,uVar37);
      uVar18 = local_124;
      fVar27 = DAT_140f1c618 + fVar29;
      fVar28 = DAT_140f1c618 * fVar17;
      local_108 = CONCAT44(fVar28 + fVar32,fVar28 + fVar31 + fVar27);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_124);
      FUN_1400deace(lVar7,&local_108,fVar28,uVar5,uVar10,uVar37);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31 + fVar27;
      local_108 = CONCAT44(DAT_140f1c618 * _UNK_140e8d2d4,DAT_140f1c618 * _DAT_140e8d2d0);
      local_f8 = CONCAT44(DAT_140f1c618 * fVar17 + fVar32,DAT_140f1c618 * fVar17 + fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),uVar18);
      uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0xbe99999a);
      FUN_1400dede8(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar37,fVar34);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar32 + DAT_140f1c618,fVar31 + DAT_140f1c618);
      local_f8 = CONCAT44(fVar32,fVar31);
      uVar10 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar36 = uVar36 & 0xffffffff00000000;
      FUN_1400de17e(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar10,0);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar32 + DAT_140f1c618,fVar31 + DAT_140f1c618);
      local_f8 = CONCAT44(fVar32,fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)(uVar36 >> 0x20),fVar33);
      FUN_1400de17e(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar37,0);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar32 + DAT_140f1c618,fVar31 + DAT_140f1c618);
      local_f8 = CONCAT44(fVar32,fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar33);
      FUN_1400de17e(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar37,0x90);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      fVar27 = fVar32 + DAT_140f1c618 + DAT_1402115a8;
      local_108 = CONCAT44(fVar27,fVar31);
      local_f8 = CONCAT44(fVar27,DAT_140f1c618 + fVar31);
      local_120 = CONCAT44(fVar32,DAT_140f1c618 * fVar17 + fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uVar5);
      FUN_1400de720(lVar7,&local_120,&local_f8,&local_108,uVar10,uVar37);
      uVar19 = (undefined4)((ulonglong)uVar37 >> 0x20);
      uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      FUN_140109b01(lVar7,fVar31,fVar32);
      uVar10 = CONCAT44(uVar19,0x200);
      FUN_1400db1c8(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5,
                    CONCAT44(uVar18,fVar34),uVar10);
      *(undefined4 *)(lVar7 + 0x50) = 0;
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar34);
      FUN_1400dde72(lVar7,fVar31,DAT_140f1c618 + fVar31,fVar32,uVar5,uVar10);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar34);
      FUN_1400ddffa(lVar7,fVar31,fVar32,DAT_140f1c618 + fVar32,uVar5,uVar36);
      fVar31 = fVar31 + fVar29;
      local_108 = CONCAT44(DAT_140f1c618 + fVar32,DAT_140f1c618 + fVar31);
      local_f8 = CONCAT44(fVar32,fVar31);
      FUN_1400ddd04(lVar7,&local_f8,&local_108,uVar5,fVar34);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      fVar27 = DAT_140f1c618 * fVar17;
      local_108 = CONCAT44(fVar27 + fVar32,fVar27 + fVar31);
      uVar36 = uVar36 & 0xffffffff00000000;
      FUN_1400dc6f0(lVar7,&local_108,fVar27,DAT_140e8d2e0,0xbfc90fd8,uVar36);
      uVar36 = uVar36 & 0xffffffff00000000;
      FUN_1400db1c8(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5,fVar34,
                    uVar36);
      *(undefined4 *)(lVar7 + 0x50) = 0;
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar30 + fVar32,fVar30 + fVar31);
      local_f8 = CONCAT44(fVar32 + fVar23,fVar31 + fVar21);
      local_120 = CONCAT44(fVar32 + fVar20,fVar31);
      uVar10 = CONCAT44((int)(uVar36 >> 0x20),fVar34);
      FUN_1400df09c(lVar7,&local_120,&local_f8,&local_108,uVar5,uVar10,uVar6);
      fVar31 = DAT_140f1c618 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar30 + fVar32,fVar30 + fVar31);
      local_f8 = CONCAT44(fVar26 + fVar32,fVar25 + fVar31);
      local_120 = CONCAT44(fVar32 + fVar24,fVar31 + fVar22);
      local_130 = CONCAT44(fVar32,fVar31);
      uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uVar5);
      puVar35 = &local_108;
      FUN_1400def84(lVar7,&local_130,&local_120,&local_f8,&local_108,uVar36,fVar34,uVar6);
      uVar18 = (undefined4)(uVar36 >> 0x20);
      fVar31 = (float)local_118 + _DAT_140e8d2f0;
      fVar32 = fVar32 + DAT_140f1c618 + fVar29;
      bVar1 = false;
    } while (bVar14);
    fVar22 = DAT_140f1c618 * fVar17;
    local_108 = CONCAT44(fVar22 + fVar32,fVar22 + fVar31);
    uVar10 = CONCAT44((int)((ulonglong)puVar35 >> 0x20),DAT_140f1c620);
    FUN_1400ded6e(lVar7,&local_108,fVar22,uVar5,uVar10);
    uVar19 = local_124;
    fVar22 = DAT_140f1c618 + fVar29;
    fVar24 = DAT_140f1c618 * fVar17;
    local_108 = CONCAT44(fVar24 + fVar32,fVar24 + fVar31 + fVar22);
    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_124);
    FUN_1400debe4(lVar7,&local_108,fVar24,uVar5,uVar10);
    fVar24 = DAT_140f1c618 + fVar29 + fVar31 + fVar22;
    local_108 = CONCAT44(DAT_140f1c618 * _UNK_140e8d2d4,DAT_140f1c618 * _DAT_140e8d2d0);
    local_f8 = CONCAT44(DAT_140f1c618 * fVar17 + fVar32,DAT_140f1c618 * fVar17 + fVar24);
    uVar39 = CONCAT44(uVar18,uVar19);
    uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0xbe99999a);
    FUN_1400deec6(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_140f1c618,fVar24 + DAT_140f1c618);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_1400de294(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_140f1c618,fVar24 + DAT_140f1c618);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar10 = CONCAT44((int)(uVar36 >> 0x20),0x41200000);
    FUN_1400de294(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar39);
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_140f1c618,fVar24 + DAT_140f1c618);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x41200000);
    uVar39 = CONCAT44((int)(uVar39 >> 0x20),0x90);
    FUN_1400de294(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar39);
    fVar22 = fVar32 + DAT_140f1c618 + DAT_1402115a8;
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar22,fVar24);
    local_f8 = CONCAT44(fVar22,DAT_140f1c618 + fVar24);
    local_120 = CONCAT44(fVar32,DAT_140f1c618 * fVar17 + fVar24);
    uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uVar5);
    FUN_1400de908(lVar7,&local_120,&local_f8,&local_108,uVar36);
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    FUN_140109b01(lVar7,fVar24,fVar32);
    FUN_1400e0458(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5);
    *(undefined4 *)(lVar7 + 0x50) = 0;
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    local_108 = CONCAT44(DAT_140f1c61c + fVar32,fVar24 + DAT_140f1c618);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_1400de294(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    local_108 = CONCAT44(DAT_140f1c618 + fVar32,DAT_140f1c61c + fVar24);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_1400de294(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = fVar24 + DAT_1401c86d4;
    local_108 = CONCAT44(fVar32 + DAT_1401c8660._4_4_,fVar24 + (float)DAT_1401c8660);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_1400de294(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = fVar24 + DAT_140f1c618;
    fVar17 = DAT_140f1c618 * fVar17;
    local_108 = CONCAT44(fVar17 + fVar32,fVar17 + fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar10 = CONCAT44((int)(uVar36 >> 0x20),0x40490fd8);
    FUN_1400dc6f0(lVar7,&local_108,fVar17,DAT_140e8d300,uVar10,uVar39);
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar19 = (undefined4)(uVar39 >> 0x20);
    FUN_1400dbd54(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5);
    *(undefined4 *)(lVar7 + 0x50) = 0;
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    if (*(int *)(lVar7 + 0x54) == 0) {
      lVar8 = FUN_140077ab4(0x40);
      if (*(longlong *)(lVar7 + 0x58) != 0) {
        FUN_1401c5180(lVar8,*(longlong *)(lVar7 + 0x58),(longlong)*(int *)(lVar7 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(lVar7 + 0x58));
      }
      *(longlong *)(lVar7 + 0x58) = lVar8;
      *(undefined4 *)(lVar7 + 0x54) = 8;
      lVar9 = (longlong)*(int *)(lVar7 + 0x50);
    }
    else {
      lVar8 = *(longlong *)(lVar7 + 0x58);
      lVar9 = 0;
    }
    *(ulonglong *)(lVar8 + lVar9 * 8) = CONCAT44(fVar32 + fVar20,fVar24);
    *(int *)(lVar7 + 0x50) = *(int *)(lVar7 + 0x50) + 1;
    local_108 = CONCAT44(fVar30 + fVar32,fVar30 + fVar24);
    local_f8 = CONCAT44(fVar23 + fVar32,fVar21 + fVar24);
    FUN_1400dd438(lVar7,&local_f8,&local_108,uVar6);
    FUN_1400dbd54(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5);
    *(undefined4 *)(lVar7 + 0x50) = 0;
    fVar24 = DAT_140f1c618 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_140f1c618,fVar24 + DAT_140f1c618);
    local_f8 = CONCAT44(fVar32,fVar24);
    in_stack_fffffffffffffe70 = CONCAT44(uVar19,0xff00ffff);
    in_stack_fffffffffffffe68 = CONCAT44(uVar18,0xff0000ff);
    FUN_1400de346(lVar7,&local_f8,&local_108,0xff000000,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70,0xff00ff00);
    local_108 = CONCAT44((fVar29 + DAT_140f1c618) * _UNK_140e8d314,
                         (fVar29 + DAT_140f1c618) * _DAT_140e8d310);
    FUN_1400b076d(&local_108);
    FUN_14009366e();
    FUN_1400cdb4a();
  }
  cVar2 = FUN_1400ccbf1("Canvas",0,0);
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x28ab,"Examples/Custom rendering/Canvas");
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_140f32388) && (FUN_140188840(&DAT_140f32388), DAT_140f32388 == -1)) {
      _DAT_140f32378 = 0;
      DAT_140f32380 = 0;
      FUN_140188b50(&LAB_140109bf1);
      _Init_thread_footer(&DAT_140f32388);
    }
    FUN_1400aeb6a("Enable grid",&DAT_140f1c63c);
    FUN_1400aeb6a("Enable context menu",&DAT_140f1c63d);
    FUN_1400abfd5(
                 "Mouse Left: drag to add lines,\nMouse Right: drag to scroll, click for context menu."
                 );
    FUN_14009311d(&local_108);
    FUN_14008a381(&local_110);
    fVar17 = (float)local_110;
    if ((float)local_110 < DAT_140e8d320) {
      local_110 = CONCAT44(local_110._4_4_,0x42480000);
      fVar17 = DAT_140e8d320;
    }
    fVar29 = local_110._4_4_;
    if (local_110._4_4_ < DAT_140e8d320) {
      local_110 = CONCAT44(0x42480000,(float)local_110);
      fVar29 = DAT_140e8d320;
    }
    local_118 = CONCAT44((float)((ulonglong)local_108 >> 0x20) + fVar29,(float)local_108 + fVar17);
    lVar7 = FUN_140081200();
    uVar10 = FUN_14008feed();
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_1400de294(uVar10,&local_108,&local_118,0xff323232,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    in_stack_fffffffffffffe70 = CONCAT44((int)(in_stack_fffffffffffffe70 >> 0x20),0x3f800000);
    FUN_1400de17e(uVar10,&local_108,&local_118,0xffffffff,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70,0);
    FUN_1400ad20d("canvas",&local_110,3);
    bVar3 = FUN_1400808b4(0);
    cVar2 = FUN_140089e6e();
    fVar30 = DAT_140f3238c + (float)local_108;
    fVar20 = DAT_140f32390 + (float)((ulonglong)local_108 >> 0x20);
    fVar17 = (float)*(undefined8 *)(lVar7 + 0xe8) - fVar30;
    fVar29 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0xe8) >> 0x20) - fVar20;
    if (((~bVar3 | DAT_140f32394) & 1) == 0) {
      cVar4 = FUN_1400816ee(0,0);
      if (cVar4 == '\0') {
        if (DAT_140f32394 == 0) goto LAB_1400ec25b;
      }
      else {
        iVar11 = DAT_140f32378;
        if (DAT_140f32378 == DAT_140f3237c) {
          if (DAT_140f32378 == 0) {
            iVar11 = 8;
          }
          else {
            iVar11 = (int)DAT_140f32378 / 2 + DAT_140f32378;
          }
          iVar16 = DAT_140f32378 + 1;
          if ((int)(DAT_140f32378 + 1) < iVar11) {
            iVar16 = iVar11;
          }
          lVar8 = FUN_140077ab4((longlong)iVar16 << 3);
          if (DAT_140f32380 != 0) {
            FUN_1401c5180(lVar8,DAT_140f32380,(longlong)(int)DAT_140f32378 << 3);
            FUN_140077b90(DAT_140f32380);
          }
          _DAT_140f32378 = CONCAT44(iVar16,DAT_140f32378);
          iVar11 = DAT_140f32378;
          DAT_140f32380 = lVar8;
        }
        *(ulonglong *)(DAT_140f32380 + (longlong)iVar11 * 8) = CONCAT44(fVar29,fVar17);
        iVar11 = DAT_140f32378 + 1;
        lVar8 = DAT_140f32380;
        iVar16 = DAT_140f3237c;
        if (iVar11 == DAT_140f3237c) {
          if (iVar11 == 0) {
            iVar12 = 8;
          }
          else {
            iVar12 = iVar11 / 2 + iVar11;
          }
          iVar16 = DAT_140f32378 + 2;
          if ((int)(DAT_140f32378 + 2) < iVar12) {
            iVar16 = iVar12;
          }
          DAT_140f32378 = iVar11;
          lVar8 = FUN_140077ab4((longlong)iVar16 << 3);
          iVar11 = DAT_140f32378;
          if (DAT_140f32380 != 0) {
            FUN_1401c5180(lVar8,DAT_140f32380,(longlong)(int)DAT_140f32378 << 3);
            FUN_140077b90(DAT_140f32380);
            iVar11 = DAT_140f32378;
          }
        }
        DAT_140f3237c = iVar16;
        DAT_140f32380 = lVar8;
        DAT_140f32378 = iVar11;
        *(ulonglong *)(DAT_140f32380 + (longlong)iVar11 * 8) = CONCAT44(fVar29,fVar17);
        DAT_140f32378 = DAT_140f32378 + 1;
        DAT_140f32394 = 1;
      }
code_r0x0001400ec235:
      *(ulonglong *)(DAT_140f32380 + -8 + (longlong)(int)DAT_140f32378 * 8) =
           CONCAT44(fVar29,fVar17);
      cVar4 = FUN_140089065(0);
      if (cVar4 == '\0') {
        DAT_140f32394 = 0;
      }
    }
    else if ((DAT_140f32394 & 1) != 0) goto code_r0x0001400ec235;
LAB_1400ec25b:
    if (cVar2 != '\0') {
      uVar5 = DAT_1401c86a4;
      if (DAT_140f1c63d == '\0') {
        uVar5 = 0;
      }
      cVar2 = FUN_1400816f9(1,uVar5);
      if (cVar2 != '\0') {
        DAT_140f3238c = *(float *)(lVar7 + 0xd4) + DAT_140f3238c;
        DAT_140f32390 = *(float *)(lVar7 + 0xd8) + DAT_140f32390;
      }
    }
    FUN_140092182(&local_f8,1,DAT_1401c86a4);
    if (DAT_140f1c63d == '\x01') {
      if (((float)local_f8 == 0.0) && (!NAN((float)local_f8))) {
        if ((local_f8._4_4_ == 0.0) && (!NAN(local_f8._4_4_))) {
          FUN_140094ad1("context",8);
        }
      }
    }
    cVar2 = FUN_140094826("context",0);
    if (cVar2 != '\0') {
      uVar13 = DAT_140f32378;
      if (DAT_140f32394 == 1) {
        uVar13 = DAT_140f32378 - 2;
        if (DAT_140f3237c < (int)uVar13) {
          if (DAT_140f3237c == 0) {
            uVar15 = 8;
          }
          else {
            uVar15 = DAT_140f3237c / 2 + DAT_140f3237c;
          }
          if ((int)uVar15 <= (int)uVar13) {
            uVar15 = uVar13;
          }
          lVar7 = FUN_140077ab4((longlong)(int)uVar15 << 3);
          if (DAT_140f32380 != 0) {
            FUN_1401c5180(lVar7,DAT_140f32380,(longlong)(int)DAT_140f32378 << 3);
            FUN_140077b90(DAT_140f32380);
          }
          _DAT_140f32378 = (ulonglong)uVar15 << 0x20;
          DAT_140f32380 = lVar7;
        }
        _DAT_140f32378 = CONCAT44(DAT_140f3237c,uVar13);
      }
      DAT_140f32394 = 0;
      cVar2 = FUN_1400b06d6("Remove one",0,0,0 < (int)uVar13);
      uVar13 = DAT_140f32378;
      if (cVar2 != '\0') {
        uVar13 = DAT_140f32378 - 2;
        if (DAT_140f3237c < (int)uVar13) {
          if (DAT_140f3237c == 0) {
            uVar15 = 8;
          }
          else {
            uVar15 = DAT_140f3237c / 2 + DAT_140f3237c;
          }
          if ((int)uVar15 <= (int)uVar13) {
            uVar15 = uVar13;
          }
          lVar7 = FUN_140077ab4((longlong)(int)uVar15 << 3);
          if (DAT_140f32380 != 0) {
            FUN_1401c5180(lVar7,DAT_140f32380,(longlong)(int)DAT_140f32378 << 3);
            FUN_140077b90(DAT_140f32380);
          }
          _DAT_140f32378 = (ulonglong)uVar15 << 0x20;
          DAT_140f32380 = lVar7;
        }
        _DAT_140f32378 = CONCAT44(DAT_140f3237c,uVar13);
      }
      cVar2 = FUN_1400b06d6("Remove all",0,0,0 < (int)uVar13);
      if ((cVar2 != '\0') && (DAT_140f32380 != 0)) {
        _DAT_140f32378 = 0;
        FUN_140077b90();
        DAT_140f32380 = 0;
      }
      FUN_1400946ab();
    }
    FUN_1400dab18(uVar10,&local_108,&local_118,1);
    fVar17 = DAT_140e8d324;
    if (DAT_140f1c63c == '\x01') {
      fVar29 = (float)FUN_1401a3780(DAT_140f3238c,DAT_140e8d324);
      if (fVar29 < (float)local_110) {
        do {
          in_stack_fffffffffffffe70 = CONCAT44((int)(in_stack_fffffffffffffe70 >> 0x20),0x3f800000);
          in_stack_fffffffffffffe68 = CONCAT44((int)(in_stack_fffffffffffffe68 >> 0x20),0x28c8c8c8);
          FUN_1400ddffa(uVar10,(float)local_108 + fVar29,local_108._4_4_,local_118._4_4_,
                        in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
          fVar29 = fVar29 + fVar17;
        } while (fVar29 < (float)local_110);
      }
      fVar17 = DAT_140e8d324;
      fVar29 = (float)FUN_1401a3780(DAT_140f32390,DAT_140e8d324);
      if (fVar29 < local_110._4_4_) {
        do {
          in_stack_fffffffffffffe70 = CONCAT44((int)(in_stack_fffffffffffffe70 >> 0x20),0x3f800000);
          in_stack_fffffffffffffe68 = CONCAT44((int)(in_stack_fffffffffffffe68 >> 0x20),0x28c8c8c8);
          FUN_1400dde72(uVar10,(float)local_108,(float)local_118,local_108._4_4_ + fVar29,
                        in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
          fVar29 = fVar29 + fVar17;
        } while (fVar29 < local_110._4_4_);
      }
    }
    if (0 < (int)DAT_140f32378) {
      lVar7 = 0;
      do {
        uVar37 = *(undefined8 *)(DAT_140f32380 + 8 + lVar7 * 8);
        local_120 = CONCAT44((float)((ulonglong)uVar37 >> 0x20) + fVar20,(float)uVar37 + fVar30);
        uVar37 = *(undefined8 *)(DAT_140f32380 + lVar7 * 8);
        local_130 = CONCAT44((float)((ulonglong)uVar37 >> 0x20) + fVar20,(float)uVar37 + fVar30);
        in_stack_fffffffffffffe68 = CONCAT44((int)(in_stack_fffffffffffffe68 >> 0x20),0x40000000);
        FUN_1400ddd04(uVar10,&local_130,&local_120,0xff00ffff,in_stack_fffffffffffffe68);
        lVar7 = lVar7 + 2;
      } while ((int)lVar7 < (int)DAT_140f32378);
    }
    FUN_1400dacc4(uVar10);
    FUN_1400cdb4a();
  }
  cVar2 = FUN_1400ccbf1("BG/FG draw lists",0,0);
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x290d,"Examples/Custom rendering/BG & FG draw lists");
    FUN_1400aeb6a("Draw in Background draw list",&DAT_140f1c63e);
    uVar5 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92("The Background draw list will be rendered below every Dear ImGui windows.");
    FUN_1400aeb6a("Draw in Foreground draw list",&DAT_140f1c63f);
    FUN_140092bab(0,uVar5);
    FUN_14009cf92("The Foreground draw list will be rendered over every Dear ImGui windows.");
    FUN_14008fce3(&local_108);
    FUN_14008fcfc(&local_110);
    uVar5 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
    local_118 = CONCAT44((float)((ulonglong)local_110 >> 0x20) * DAT_1401c8640._4_4_ +
                         (float)((ulonglong)local_108 >> 0x20),
                         (float)local_110 * (float)DAT_1401c8640 + (float)local_108);
    if (DAT_140f1c63e == '\x01') {
      uVar10 = FUN_140081264(0);
      in_stack_fffffffffffffe70 = CONCAT44(uVar5,0x41600000);
      in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
      FUN_1400deace(uVar10,&local_118,(float)local_110 * DAT_140210014,0xc80000ff,
                    in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
    }
    uVar5 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
    if (DAT_140f1c63f == '\x01') {
      uVar10 = FUN_14007c4e4(0);
      in_stack_fffffffffffffe70 = CONCAT44(uVar5,0x41200000);
      in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
      FUN_1400deace(uVar10,&local_118,local_110._4_4_ * DAT_140210014,0xc800ff00,
                    in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
    }
    FUN_1400cdb4a();
  }
  cVar2 = FUN_1400ccbf1("Draw Channels",0,0);
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x2923,"Examples/Custom rendering/Draw Channels");
    lVar8 = FUN_14008feed();
    FUN_1400abfd5("Blue shape is drawn first: appears in back");
    FUN_1400abfd5("Red shape is drawn after: appears in front");
    FUN_14009311d(&local_108);
    fVar29 = DAT_140e8d330._4_4_;
    fVar17 = (float)DAT_140e8d330;
    local_118 = local_108;
    local_110 = CONCAT44((float)((ulonglong)local_108 >> 0x20) + DAT_140e8d330._4_4_,
                         (float)local_108 + (float)DAT_140e8d330);
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_1400de294(lVar8,&local_118,&local_110,0xffff0000,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    fVar22 = _UNK_140e8d354;
    fVar21 = _DAT_140e8d350;
    fVar20 = _UNK_140e8d344;
    fVar30 = _DAT_140e8d340;
    fVar23 = (float)((ulonglong)local_108 >> 0x20);
    local_110 = CONCAT44(fVar23 + _UNK_140e8d344,(float)local_108 + _DAT_140e8d340);
    local_118 = CONCAT44(fVar23 + _UNK_140e8d354,(float)local_108 + _DAT_140e8d350);
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_1400de294(lVar8,&local_118,&local_110,0xff0000ff,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    local_110 = CONCAT44(fVar20,fVar30);
    FUN_1400b076d(&local_110);
    FUN_1400b0bd1();
    FUN_1400abfd5("Blue shape is drawn first, into channel 1: appears in front");
    FUN_1400abfd5("Red shape is drawn after, into channel 0: appears in back");
    FUN_14009311d(&local_108);
    lVar7 = lVar8 + 0x88;
    FUN_1400e08f0(lVar7,lVar8,2);
    FUN_1400e0ab6(lVar7,lVar8,1);
    local_110 = CONCAT44(fVar29 + (float)((ulonglong)local_108 >> 0x20),fVar17 + (float)local_108);
    local_118 = local_108;
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_1400de294(lVar8,&local_118,&local_110,0xffff0000,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    FUN_1400e0ab6(lVar7,lVar8,0);
    fVar17 = (float)((ulonglong)local_108 >> 0x20);
    local_110 = CONCAT44(fVar17 + fVar20,(float)local_108 + fVar30);
    local_118 = CONCAT44(fVar17 + fVar22,(float)local_108 + fVar21);
    FUN_1400de294(lVar8,&local_118,&local_110,0xff0000ff,
                  in_stack_fffffffffffffe68 & 0xffffffff00000000,
                  in_stack_fffffffffffffe70 & 0xffffffff00000000);
    FUN_1400da236(lVar7,lVar8);
    local_110 = CONCAT44(fVar20,fVar30);
    FUN_1400b076d(&local_110);
    FUN_1400abfd5("After reordering, contents of channel 0 appears below channel 1.");
    FUN_1400cdb4a();
  }
  FUN_1400cb960();
LAB_1400ec91b:
  FUN_140088c18();
  return;
}

