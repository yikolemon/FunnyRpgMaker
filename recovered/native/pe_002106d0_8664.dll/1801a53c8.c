/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a53c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a53c8(void)

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
  cVar2 = FUN_18010ca66("Example: Custom rendering",&DAT_18041f1e3,0);
  if (cVar2 == '\0') {
    FUN_18010f900();
    return;
  }
  FUN_180107e9e("imgui_demo.cpp",0x2820,"Examples/Custom rendering");
  cVar2 = FUN_1801525a2("##TabBar",0);
  if (cVar2 == '\0') goto LAB_1801a6c97;
  cVar2 = FUN_180153cc1("Primitives",0,0);
  uVar5 = (undefined4)(in_stack_fffffffffffffe68 >> 0x20);
  uVar6 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x282b,"Examples/Custom rendering/Primitives");
    fVar17 = (float)FUN_180116c08();
    FUN_18011a05a(fVar17 * _DAT_180328f08);
    lVar7 = FUN_180116bd5();
    FUN_1801330a5("Gradients");
    uVar18 = FUN_18011a456();
    uVar19 = FUN_18011a39a();
    local_110 = CONCAT44(uVar18,uVar19);
    FUN_180119e05(&local_108);
    fVar17 = DAT_1802ac570;
    local_118 = CONCAT44((float)((ulonglong)local_110 >> 0x20) +
                         (float)((ulonglong)local_108 >> 0x20),(float)local_110 + (float)local_108);
    uVar18 = FUN_180101385(0xff000000,DAT_1802ac570);
    uVar19 = FUN_180101385(0xffffffff,fVar17);
    uVar37 = CONCAT44(uVar6,uVar19);
    uVar10 = CONCAT44(uVar5,uVar19);
    FUN_180192dd2(lVar7,&local_108,&local_118,uVar18,uVar10,uVar37,uVar18);
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar19 = (undefined4)((ulonglong)uVar37 >> 0x20);
    FUN_1801342dd("##gradient1",&local_110,0);
    FUN_180119e05(&local_108);
    local_118 = CONCAT44((float)((ulonglong)local_110 >> 0x20) +
                         (float)((ulonglong)local_108 >> 0x20),(float)local_110 + (float)local_108);
    uVar5 = FUN_180101385(0xff00ff00,fVar17);
    uVar6 = FUN_180101385(0xff0000ff,fVar17);
    uVar10 = CONCAT44(uVar18,uVar6);
    FUN_180192dd2(lVar7,&local_108,&local_118,uVar5,uVar10,CONCAT44(uVar19,uVar6),uVar5);
    uVar5 = (undefined4)((ulonglong)uVar10 >> 0x20);
    FUN_1801342dd("##gradient2",&local_110,0);
    FUN_1801330a5("All primitives");
    FUN_18013d2c2("Size",&DAT_180408e78,DAT_1802de790,DAT_1802de650,CONCAT44(uVar5,0x42c80000),
                  &DAT_180368758,0);
    pcVar38 = "%.02f";
    FUN_18013d2c2("Thickness",&DAT_180408e7c,DAT_1802deaec,fVar17,0x41000000,"%.02f",0);
    uVar36 = (ulonglong)pcVar38 & 0xffffffff00000000;
    FUN_18014162a("N-gon sides",&DAT_180408e80,3,0xc,&DAT_18036b4b0,uVar36);
    FUN_180135c3a("##circlesegmentoverride",&DAT_180420c20);
    lVar8 = FUN_18010128e();
    FUN_180119893(0,*(undefined4 *)(lVar8 + 100));
    uVar36 = uVar36 & 0xffffffff00000000;
    bVar3 = FUN_18014162a("Circle segments override",&DAT_180408e84,3,0x28,&DAT_18036b4b0,uVar36);
    DAT_180420c20 = DAT_180420c20 | bVar3;
    FUN_180135c3a("##curvessegmentoverride",&DAT_180420c21);
    lVar8 = FUN_18010128e();
    FUN_180119893(0,*(undefined4 *)(lVar8 + 100));
    uVar36 = uVar36 & 0xffffffff00000000;
    puVar35 = (undefined8 *)&DAT_18036b4b0;
    bVar3 = FUN_18014162a("Curves segments override",&DAT_180408e88,3,0x28,&DAT_18036b4b0,uVar36);
    DAT_180420c21 = DAT_180420c21 | bVar3;
    FUN_180148378("Color",&DAT_180408e8c,0);
    FUN_180119e05(&local_118);
    local_108 = CONCAT44(uRam0000000180408e90,_DAT_180408e8c);
    uStack_100 = uRam0000000180408e94;
    uStack_fc = uRam0000000180408e98;
    uVar5 = FUN_1800ff3d6(&local_108);
    fVar30 = DAT_180408e78;
    fVar29 = DAT_1802dc2dc;
    fVar17 = DAT_1802dbb2c;
    local_124 = 0;
    if (DAT_180420c20 != 0) {
      local_124 = DAT_180408e84;
    }
    uVar6 = 0;
    if (DAT_180420c21 != 0) {
      uVar6 = DAT_180408e88;
    }
    fVar33 = DAT_180408e78 / DAT_1802dc2d0;
    fVar20 = DAT_1802dc418 * DAT_180408e78;
    fVar21 = (float)DAT_180328f10 * DAT_180408e78;
    fVar23 = (float)((ulonglong)DAT_180328f10 >> 0x20) * DAT_180408e78;
    fVar22 = (float)DAT_180328f20 * DAT_180408e78;
    fVar24 = (float)((ulonglong)DAT_180328f20 >> 0x20) * DAT_180408e78;
    fVar25 = DAT_180408e78 - fVar22;
    fVar26 = DAT_180408e78 - fVar24;
    fVar31 = (float)local_118 + (float)DAT_180328f30;
    fVar32 = (float)((ulonglong)local_118 >> 0x20) + DAT_180328f30._4_4_;
    bVar1 = true;
    do {
      bVar14 = bVar1;
      fVar34 = DAT_1802ac570;
      if (!bVar14) {
        fVar34 = DAT_180408e7c;
      }
      fVar27 = DAT_180408e78 * fVar17;
      local_108 = CONCAT44(fVar27 + fVar32,fVar27 + fVar31);
      uVar37 = CONCAT44((int)(uVar36 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)puVar35 >> 0x20),DAT_180408e80);
      FUN_180193754(lVar7,&local_108,fVar27,uVar5,uVar10,uVar37);
      uVar18 = local_124;
      fVar27 = DAT_180408e78 + fVar29;
      fVar28 = DAT_180408e78 * fVar17;
      local_108 = CONCAT44(fVar28 + fVar32,fVar28 + fVar31 + fVar27);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_124);
      FUN_18019355a(lVar7,&local_108,fVar28,uVar5,uVar10,uVar37);
      fVar31 = DAT_180408e78 + fVar29 + fVar31 + fVar27;
      local_108 = CONCAT44(DAT_180408e78 * _UNK_180328f44,DAT_180408e78 * _DAT_180328f40);
      local_f8 = CONCAT44(DAT_180408e78 * fVar17 + fVar32,DAT_180408e78 * fVar17 + fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),uVar18);
      uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0xbe99999a);
      FUN_180193874(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar37,fVar34);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar32 + DAT_180408e78,fVar31 + DAT_180408e78);
      local_f8 = CONCAT44(fVar32,fVar31);
      uVar10 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar36 = uVar36 & 0xffffffff00000000;
      FUN_180192c0a(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar10,0);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar32 + DAT_180408e78,fVar31 + DAT_180408e78);
      local_f8 = CONCAT44(fVar32,fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)(uVar36 >> 0x20),fVar33);
      FUN_180192c0a(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar37,0);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar32 + DAT_180408e78,fVar31 + DAT_180408e78);
      local_f8 = CONCAT44(fVar32,fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar33);
      FUN_180192c0a(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar37,0x90);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      fVar27 = fVar32 + DAT_180408e78 + DAT_1802de848;
      local_108 = CONCAT44(fVar27,fVar31);
      local_f8 = CONCAT44(fVar27,DAT_180408e78 + fVar31);
      local_120 = CONCAT44(fVar32,DAT_180408e78 * fVar17 + fVar31);
      uVar37 = CONCAT44((int)((ulonglong)uVar37 >> 0x20),fVar34);
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uVar5);
      FUN_1801931ac(lVar7,&local_120,&local_f8,&local_108,uVar10,uVar37);
      uVar19 = (undefined4)((ulonglong)uVar37 >> 0x20);
      uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      FUN_1801c3dfd(lVar7,fVar31,fVar32);
      uVar10 = CONCAT44(uVar19,0x200);
      FUN_18018fc54(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5,
                    CONCAT44(uVar18,fVar34),uVar10);
      *(undefined4 *)(lVar7 + 0x50) = 0;
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar34);
      FUN_1801928fe(lVar7,fVar31,DAT_180408e78 + fVar31,fVar32,uVar5,uVar10);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),fVar34);
      FUN_180192a86(lVar7,fVar31,fVar32,DAT_180408e78 + fVar32,uVar5,uVar36);
      fVar31 = fVar31 + fVar29;
      local_108 = CONCAT44(DAT_180408e78 + fVar32,DAT_180408e78 + fVar31);
      local_f8 = CONCAT44(fVar32,fVar31);
      FUN_180192790(lVar7,&local_f8,&local_108,uVar5,fVar34);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      fVar27 = DAT_180408e78 * fVar17;
      local_108 = CONCAT44(fVar27 + fVar32,fVar27 + fVar31);
      uVar36 = uVar36 & 0xffffffff00000000;
      FUN_18019117c(lVar7,&local_108,fVar27,DAT_180328f50,0xbfc90fd8,uVar36);
      uVar36 = uVar36 & 0xffffffff00000000;
      FUN_18018fc54(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5,fVar34,
                    uVar36);
      *(undefined4 *)(lVar7 + 0x50) = 0;
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar30 + fVar32,fVar30 + fVar31);
      local_f8 = CONCAT44(fVar32 + fVar23,fVar31 + fVar21);
      local_120 = CONCAT44(fVar32 + fVar20,fVar31);
      uVar10 = CONCAT44((int)(uVar36 >> 0x20),fVar34);
      FUN_180193b28(lVar7,&local_120,&local_f8,&local_108,uVar5,uVar10,uVar6);
      fVar31 = DAT_180408e78 + fVar29 + fVar31;
      local_108 = CONCAT44(fVar30 + fVar32,fVar30 + fVar31);
      local_f8 = CONCAT44(fVar26 + fVar32,fVar25 + fVar31);
      local_120 = CONCAT44(fVar32 + fVar24,fVar31 + fVar22);
      local_130 = CONCAT44(fVar32,fVar31);
      uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uVar5);
      puVar35 = &local_108;
      FUN_180193a10(lVar7,&local_130,&local_120,&local_f8,&local_108,uVar36,fVar34,uVar6);
      uVar18 = (undefined4)(uVar36 >> 0x20);
      fVar31 = (float)local_118 + _DAT_180328f60;
      fVar32 = fVar32 + DAT_180408e78 + fVar29;
      bVar1 = false;
    } while (bVar14);
    fVar22 = DAT_180408e78 * fVar17;
    local_108 = CONCAT44(fVar22 + fVar32,fVar22 + fVar31);
    uVar10 = CONCAT44((int)((ulonglong)puVar35 >> 0x20),DAT_180408e80);
    FUN_1801937fa(lVar7,&local_108,fVar22,uVar5,uVar10);
    uVar19 = local_124;
    fVar22 = DAT_180408e78 + fVar29;
    fVar24 = DAT_180408e78 * fVar17;
    local_108 = CONCAT44(fVar24 + fVar32,fVar24 + fVar31 + fVar22);
    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),local_124);
    FUN_180193670(lVar7,&local_108,fVar24,uVar5,uVar10);
    fVar24 = DAT_180408e78 + fVar29 + fVar31 + fVar22;
    local_108 = CONCAT44(DAT_180408e78 * _UNK_180328f44,DAT_180408e78 * _DAT_180328f40);
    local_f8 = CONCAT44(DAT_180408e78 * fVar17 + fVar32,DAT_180408e78 * fVar17 + fVar24);
    uVar39 = CONCAT44(uVar18,uVar19);
    uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0xbe99999a);
    FUN_180193952(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_180408e78,fVar24 + DAT_180408e78);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_180192d20(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_180408e78,fVar24 + DAT_180408e78);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar10 = CONCAT44((int)(uVar36 >> 0x20),0x41200000);
    FUN_180192d20(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar39);
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_180408e78,fVar24 + DAT_180408e78);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar10 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),0x41200000);
    uVar39 = CONCAT44((int)(uVar39 >> 0x20),0x90);
    FUN_180192d20(lVar7,&local_f8,&local_108,uVar5,uVar10,uVar39);
    fVar22 = fVar32 + DAT_180408e78 + DAT_1802de848;
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar22,fVar24);
    local_f8 = CONCAT44(fVar22,DAT_180408e78 + fVar24);
    local_120 = CONCAT44(fVar32,DAT_180408e78 * fVar17 + fVar24);
    uVar36 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),uVar5);
    FUN_180193394(lVar7,&local_120,&local_f8,&local_108,uVar36);
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    FUN_1801c3dfd(lVar7,fVar24,fVar32);
    FUN_180194ee4(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5);
    *(undefined4 *)(lVar7 + 0x50) = 0;
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    local_108 = CONCAT44(DAT_180408e7c + fVar32,fVar24 + DAT_180408e78);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_180192d20(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    local_108 = CONCAT44(DAT_180408e78 + fVar32,DAT_180408e7c + fVar24);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_180192d20(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = fVar24 + DAT_1802dbb4c;
    local_108 = CONCAT44(fVar32 + DAT_1802dc280._4_4_,fVar24 + (float)DAT_1802dc280);
    local_f8 = CONCAT44(fVar32,fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar36 = uVar36 & 0xffffffff00000000;
    FUN_180192d20(lVar7,&local_f8,&local_108,uVar5,uVar36,uVar39);
    fVar24 = fVar24 + DAT_180408e78;
    fVar17 = DAT_180408e78 * fVar17;
    local_108 = CONCAT44(fVar17 + fVar32,fVar17 + fVar24);
    uVar39 = uVar39 & 0xffffffff00000000;
    uVar10 = CONCAT44((int)(uVar36 >> 0x20),0x40490fd8);
    FUN_18019117c(lVar7,&local_108,fVar17,DAT_180328f70,uVar10,uVar39);
    uVar18 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar19 = (undefined4)(uVar39 >> 0x20);
    FUN_1801907e0(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5);
    *(undefined4 *)(lVar7 + 0x50) = 0;
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    if (*(int *)(lVar7 + 0x54) == 0) {
      lVar8 = FUN_1800fe7f8(0x40);
      if (*(longlong *)(lVar7 + 0x58) != 0) {
        FUN_1802a82f0(lVar8,*(longlong *)(lVar7 + 0x58),(longlong)*(int *)(lVar7 + 0x50) << 3);
        FUN_1800fe8d4(*(undefined8 *)(lVar7 + 0x58));
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
    FUN_180191ec4(lVar7,&local_f8,&local_108,uVar6);
    FUN_1801907e0(lVar7,*(undefined8 *)(lVar7 + 0x58),*(undefined4 *)(lVar7 + 0x50),uVar5);
    *(undefined4 *)(lVar7 + 0x50) = 0;
    fVar24 = DAT_180408e78 + fVar29 + fVar24;
    local_108 = CONCAT44(fVar32 + DAT_180408e78,fVar24 + DAT_180408e78);
    local_f8 = CONCAT44(fVar32,fVar24);
    in_stack_fffffffffffffe70 = CONCAT44(uVar19,0xff00ffff);
    in_stack_fffffffffffffe68 = CONCAT44(uVar18,0xff0000ff);
    FUN_180192dd2(lVar7,&local_f8,&local_108,0xff000000,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70,0xff00ff00);
    local_108 = CONCAT44((fVar29 + DAT_180408e78) * _UNK_180328f84,
                         (fVar29 + DAT_180408e78) * _DAT_180328f80);
    FUN_18013783d(&local_108);
    FUN_18011a356();
    FUN_180154c1a();
  }
  cVar2 = FUN_180153cc1("Canvas",0,0);
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x28ab,"Examples/Custom rendering/Canvas");
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180420c38) && (FUN_18023d500(&DAT_180420c38), DAT_180420c38 == -1)) {
      _DAT_180420c28 = 0;
      DAT_180420c30 = 0;
      FUN_18023d710(&LAB_1801c3eed);
      _Init_thread_footer(&DAT_180420c38);
    }
    FUN_180135c3a("Enable grid",&DAT_180408e9c);
    FUN_180135c3a("Enable context menu",&DAT_180408e9d);
    FUN_1801330a5(
                 "Mouse Left: drag to add lines,\nMouse Right: drag to scroll, click for context menu."
                 );
    FUN_180119e05(&local_108);
    FUN_180111069(&local_110);
    fVar17 = (float)local_110;
    if ((float)local_110 < DAT_1802dbb44) {
      local_110 = CONCAT44(local_110._4_4_,0x42480000);
      fVar17 = DAT_1802dbb44;
    }
    fVar29 = local_110._4_4_;
    if (local_110._4_4_ < DAT_1802dbb44) {
      local_110 = CONCAT44(0x42480000,(float)local_110);
      fVar29 = DAT_1802dbb44;
    }
    local_118 = CONCAT44((float)((ulonglong)local_108 >> 0x20) + fVar29,(float)local_108 + fVar17);
    lVar7 = FUN_180107ee8();
    uVar10 = FUN_180116bd5();
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_180192d20(uVar10,&local_108,&local_118,0xff323232,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    in_stack_fffffffffffffe70 = CONCAT44((int)(in_stack_fffffffffffffe70 >> 0x20),0x3f800000);
    FUN_180192c0a(uVar10,&local_108,&local_118,0xffffffff,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70,0);
    FUN_1801342dd("canvas",&local_110,3);
    bVar3 = FUN_18010759c(0);
    cVar2 = FUN_180110b56();
    fVar30 = DAT_180420c3c + (float)local_108;
    fVar20 = DAT_180420c40 + (float)((ulonglong)local_108 >> 0x20);
    fVar17 = (float)*(undefined8 *)(lVar7 + 0xe8) - fVar30;
    fVar29 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0xe8) >> 0x20) - fVar20;
    if (((~bVar3 | DAT_180420c44) & 1) == 0) {
      cVar4 = FUN_1801083d6(0,0);
      if (cVar4 == '\0') {
        if (DAT_180420c44 == 0) goto LAB_1801a65d7;
      }
      else {
        iVar11 = DAT_180420c28;
        if (DAT_180420c28 == DAT_180420c2c) {
          if (DAT_180420c28 == 0) {
            iVar11 = 8;
          }
          else {
            iVar11 = (int)DAT_180420c28 / 2 + DAT_180420c28;
          }
          iVar16 = DAT_180420c28 + 1;
          if ((int)(DAT_180420c28 + 1) < iVar11) {
            iVar16 = iVar11;
          }
          lVar8 = FUN_1800fe7f8((longlong)iVar16 << 3);
          if (DAT_180420c30 != 0) {
            FUN_1802a82f0(lVar8,DAT_180420c30,(longlong)(int)DAT_180420c28 << 3);
            FUN_1800fe8d4(DAT_180420c30);
          }
          _DAT_180420c28 = CONCAT44(iVar16,DAT_180420c28);
          iVar11 = DAT_180420c28;
          DAT_180420c30 = lVar8;
        }
        *(ulonglong *)(DAT_180420c30 + (longlong)iVar11 * 8) = CONCAT44(fVar29,fVar17);
        iVar11 = DAT_180420c28 + 1;
        lVar8 = DAT_180420c30;
        iVar16 = DAT_180420c2c;
        if (iVar11 == DAT_180420c2c) {
          if (iVar11 == 0) {
            iVar12 = 8;
          }
          else {
            iVar12 = iVar11 / 2 + iVar11;
          }
          iVar16 = DAT_180420c28 + 2;
          if ((int)(DAT_180420c28 + 2) < iVar12) {
            iVar16 = iVar12;
          }
          DAT_180420c28 = iVar11;
          lVar8 = FUN_1800fe7f8((longlong)iVar16 << 3);
          iVar11 = DAT_180420c28;
          if (DAT_180420c30 != 0) {
            FUN_1802a82f0(lVar8,DAT_180420c30,(longlong)(int)DAT_180420c28 << 3);
            FUN_1800fe8d4(DAT_180420c30);
            iVar11 = DAT_180420c28;
          }
        }
        DAT_180420c2c = iVar16;
        DAT_180420c30 = lVar8;
        DAT_180420c28 = iVar11;
        *(ulonglong *)(DAT_180420c30 + (longlong)iVar11 * 8) = CONCAT44(fVar29,fVar17);
        DAT_180420c28 = DAT_180420c28 + 1;
        DAT_180420c44 = 1;
      }
code_r0x0001801a65b1:
      *(ulonglong *)(DAT_180420c30 + -8 + (longlong)(int)DAT_180420c28 * 8) =
           CONCAT44(fVar29,fVar17);
      cVar4 = FUN_18010fd4d(0);
      if (cVar4 == '\0') {
        DAT_180420c44 = 0;
      }
    }
    else if ((DAT_180420c44 & 1) != 0) goto code_r0x0001801a65b1;
LAB_1801a65d7:
    if (cVar2 != '\0') {
      uVar5 = DAT_1802bb8e0;
      if (DAT_180408e9d == '\0') {
        uVar5 = 0;
      }
      cVar2 = FUN_1801083e1(1,uVar5);
      if (cVar2 != '\0') {
        DAT_180420c3c = *(float *)(lVar7 + 0xd4) + DAT_180420c3c;
        DAT_180420c40 = *(float *)(lVar7 + 0xd8) + DAT_180420c40;
      }
    }
    FUN_180118e6a(&local_f8,1,DAT_1802bb8e0);
    if (DAT_180408e9d == '\x01') {
      if (((float)local_f8 == 0.0) && (!NAN((float)local_f8))) {
        if ((local_f8._4_4_ == 0.0) && (!NAN(local_f8._4_4_))) {
          FUN_18011b815("context",8);
        }
      }
    }
    cVar2 = FUN_18011b56a("context",0);
    if (cVar2 != '\0') {
      uVar13 = DAT_180420c28;
      if (DAT_180420c44 == 1) {
        uVar13 = DAT_180420c28 - 2;
        if (DAT_180420c2c < (int)uVar13) {
          if (DAT_180420c2c == 0) {
            uVar15 = 8;
          }
          else {
            uVar15 = DAT_180420c2c / 2 + DAT_180420c2c;
          }
          if ((int)uVar15 <= (int)uVar13) {
            uVar15 = uVar13;
          }
          lVar7 = FUN_1800fe7f8((longlong)(int)uVar15 << 3);
          if (DAT_180420c30 != 0) {
            FUN_1802a82f0(lVar7,DAT_180420c30,(longlong)(int)DAT_180420c28 << 3);
            FUN_1800fe8d4(DAT_180420c30);
          }
          _DAT_180420c28 = (ulonglong)uVar15 << 0x20;
          DAT_180420c30 = lVar7;
        }
        _DAT_180420c28 = CONCAT44(DAT_180420c2c,uVar13);
      }
      DAT_180420c44 = 0;
      cVar2 = FUN_1801377a6("Remove one",0,0,0 < (int)uVar13);
      uVar13 = DAT_180420c28;
      if (cVar2 != '\0') {
        uVar13 = DAT_180420c28 - 2;
        if (DAT_180420c2c < (int)uVar13) {
          if (DAT_180420c2c == 0) {
            uVar15 = 8;
          }
          else {
            uVar15 = DAT_180420c2c / 2 + DAT_180420c2c;
          }
          if ((int)uVar15 <= (int)uVar13) {
            uVar15 = uVar13;
          }
          lVar7 = FUN_1800fe7f8((longlong)(int)uVar15 << 3);
          if (DAT_180420c30 != 0) {
            FUN_1802a82f0(lVar7,DAT_180420c30,(longlong)(int)DAT_180420c28 << 3);
            FUN_1800fe8d4(DAT_180420c30);
          }
          _DAT_180420c28 = (ulonglong)uVar15 << 0x20;
          DAT_180420c30 = lVar7;
        }
        _DAT_180420c28 = CONCAT44(DAT_180420c2c,uVar13);
      }
      cVar2 = FUN_1801377a6("Remove all",0,0,0 < (int)uVar13);
      if ((cVar2 != '\0') && (DAT_180420c30 != 0)) {
        _DAT_180420c28 = 0;
        FUN_1800fe8d4();
        DAT_180420c30 = 0;
      }
      FUN_18011b3ef();
    }
    FUN_18018f5a4(uVar10,&local_108,&local_118,1);
    fVar17 = DAT_180328034;
    if (DAT_180408e9c == '\x01') {
      fVar29 = (float)FUN_180285540(DAT_180420c3c,DAT_180328034);
      if (fVar29 < (float)local_110) {
        do {
          in_stack_fffffffffffffe70 = CONCAT44((int)(in_stack_fffffffffffffe70 >> 0x20),0x3f800000);
          in_stack_fffffffffffffe68 = CONCAT44((int)(in_stack_fffffffffffffe68 >> 0x20),0x28c8c8c8);
          FUN_180192a86(uVar10,(float)local_108 + fVar29,local_108._4_4_,local_118._4_4_,
                        in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
          fVar29 = fVar29 + fVar17;
        } while (fVar29 < (float)local_110);
      }
      fVar17 = DAT_180328034;
      fVar29 = (float)FUN_180285540(DAT_180420c40,DAT_180328034);
      if (fVar29 < local_110._4_4_) {
        do {
          in_stack_fffffffffffffe70 = CONCAT44((int)(in_stack_fffffffffffffe70 >> 0x20),0x3f800000);
          in_stack_fffffffffffffe68 = CONCAT44((int)(in_stack_fffffffffffffe68 >> 0x20),0x28c8c8c8);
          FUN_1801928fe(uVar10,(float)local_108,(float)local_118,local_108._4_4_ + fVar29,
                        in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
          fVar29 = fVar29 + fVar17;
        } while (fVar29 < local_110._4_4_);
      }
    }
    if (0 < (int)DAT_180420c28) {
      lVar7 = 0;
      do {
        uVar37 = *(undefined8 *)(DAT_180420c30 + 8 + lVar7 * 8);
        local_120 = CONCAT44((float)((ulonglong)uVar37 >> 0x20) + fVar20,(float)uVar37 + fVar30);
        uVar37 = *(undefined8 *)(DAT_180420c30 + lVar7 * 8);
        local_130 = CONCAT44((float)((ulonglong)uVar37 >> 0x20) + fVar20,(float)uVar37 + fVar30);
        in_stack_fffffffffffffe68 = CONCAT44((int)(in_stack_fffffffffffffe68 >> 0x20),0x40000000);
        FUN_180192790(uVar10,&local_130,&local_120,0xff00ffff,in_stack_fffffffffffffe68);
        lVar7 = lVar7 + 2;
      } while ((int)lVar7 < (int)DAT_180420c28);
    }
    FUN_18018f750(uVar10);
    FUN_180154c1a();
  }
  cVar2 = FUN_180153cc1("BG/FG draw lists",0,0);
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x290d,"Examples/Custom rendering/BG & FG draw lists");
    FUN_180135c3a("Draw in Background draw list",&DAT_180408e9e);
    uVar5 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063("The Background draw list will be rendered below every Dear ImGui windows.");
    FUN_180135c3a("Draw in Foreground draw list",&DAT_180408e9f);
    FUN_180119893(0,uVar5);
    FUN_180124063("The Foreground draw list will be rendered over every Dear ImGui windows.");
    FUN_1801169cb(&local_108);
    FUN_1801169e4(&local_110);
    uVar5 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
    local_118 = CONCAT44((float)((ulonglong)local_110 >> 0x20) * DAT_1802de570._4_4_ +
                         (float)((ulonglong)local_108 >> 0x20),
                         (float)local_110 * (float)DAT_1802de570 + (float)local_108);
    if (DAT_180408e9e == '\x01') {
      uVar10 = FUN_180107f4c(0);
      in_stack_fffffffffffffe70 = CONCAT44(uVar5,0x41600000);
      in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
      FUN_18019355a(uVar10,&local_118,(float)local_110 * DAT_1802dc418,0xc80000ff,
                    in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
    }
    uVar5 = (undefined4)(in_stack_fffffffffffffe70 >> 0x20);
    if (DAT_180408e9f == '\x01') {
      uVar10 = FUN_180103228(0);
      in_stack_fffffffffffffe70 = CONCAT44(uVar5,0x41200000);
      in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
      FUN_18019355a(uVar10,&local_118,local_110._4_4_ * DAT_1802dc418,0xc800ff00,
                    in_stack_fffffffffffffe68,in_stack_fffffffffffffe70);
    }
    FUN_180154c1a();
  }
  cVar2 = FUN_180153cc1("Draw Channels",0,0);
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x2923,"Examples/Custom rendering/Draw Channels");
    lVar8 = FUN_180116bd5();
    FUN_1801330a5("Blue shape is drawn first: appears in back");
    FUN_1801330a5("Red shape is drawn after: appears in front");
    FUN_180119e05(&local_108);
    fVar29 = DAT_180328f90._4_4_;
    fVar17 = (float)DAT_180328f90;
    local_118 = local_108;
    local_110 = CONCAT44((float)((ulonglong)local_108 >> 0x20) + DAT_180328f90._4_4_,
                         (float)local_108 + (float)DAT_180328f90);
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_180192d20(lVar8,&local_118,&local_110,0xffff0000,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    fVar22 = _UNK_180328fb4;
    fVar21 = _DAT_180328fb0;
    fVar20 = _UNK_180328fa4;
    fVar30 = _DAT_180328fa0;
    fVar23 = (float)((ulonglong)local_108 >> 0x20);
    local_110 = CONCAT44(fVar23 + _UNK_180328fa4,(float)local_108 + _DAT_180328fa0);
    local_118 = CONCAT44(fVar23 + _UNK_180328fb4,(float)local_108 + _DAT_180328fb0);
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_180192d20(lVar8,&local_118,&local_110,0xff0000ff,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    local_110 = CONCAT44(fVar20,fVar30);
    FUN_18013783d(&local_110);
    FUN_180137ca1();
    FUN_1801330a5("Blue shape is drawn first, into channel 1: appears in front");
    FUN_1801330a5("Red shape is drawn after, into channel 0: appears in back");
    FUN_180119e05(&local_108);
    lVar7 = lVar8 + 0x88;
    FUN_18019537c(lVar7,lVar8,2);
    FUN_180195542(lVar7,lVar8,1);
    local_110 = CONCAT44(fVar29 + (float)((ulonglong)local_108 >> 0x20),fVar17 + (float)local_108);
    local_118 = local_108;
    in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffff00000000;
    in_stack_fffffffffffffe68 = in_stack_fffffffffffffe68 & 0xffffffff00000000;
    FUN_180192d20(lVar8,&local_118,&local_110,0xffff0000,in_stack_fffffffffffffe68,
                  in_stack_fffffffffffffe70);
    FUN_180195542(lVar7,lVar8,0);
    fVar17 = (float)((ulonglong)local_108 >> 0x20);
    local_110 = CONCAT44(fVar17 + fVar20,(float)local_108 + fVar30);
    local_118 = CONCAT44(fVar17 + fVar22,(float)local_108 + fVar21);
    FUN_180192d20(lVar8,&local_118,&local_110,0xff0000ff,
                  in_stack_fffffffffffffe68 & 0xffffffff00000000,
                  in_stack_fffffffffffffe70 & 0xffffffff00000000);
    FUN_18018ecc2(lVar7,lVar8);
    local_110 = CONCAT44(fVar20,fVar30);
    FUN_18013783d(&local_110);
    FUN_1801330a5("After reordering, contents of channel 0 appears below channel 1.");
    FUN_180154c1a();
  }
  FUN_180152a30();
LAB_1801a6c97:
  FUN_18010f900();
  return;
}

