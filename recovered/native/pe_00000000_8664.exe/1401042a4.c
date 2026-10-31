/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401042a4 */

void FUN_1401042a4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  char cVar9;
  float *pfVar10;
  int iVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  cVar9 = FUN_1400c51fb("Vertical Sliders");
  if (cVar9 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x1135,"Widgets/Vertical Sliders");
    local_f8 = DAT_140e8d2c0;
    FUN_14007ae77(0xe,&local_f8);
    uVar8 = DAT_140e8d640;
    local_f8 = DAT_140e8d640;
    local_120 = "%d";
    local_118 = 0;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,5);
    uVar13 = 0;
    FUN_1400babda("##int",&local_f8,&DAT_140f31bd8,0);
    uVar2 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400912b0(&DAT_140ece75a);
    fVar7 = DAT_140e8d298;
    uVar6 = DAT_1402114e8;
    uVar5 = DAT_140211150._4_4_;
    uVar4 = DAT_140210014;
    uVar3 = DAT_14020ff98;
    uVar1 = DAT_1401c86a0;
    pfVar10 = (float *)&DAT_140f1c360;
    do {
      if (uVar13 != 0) {
        FUN_140092bab(0,uVar2);
      }
      FUN_140091425(uVar13 & 0xffffffff);
      fVar16 = (float)(int)uVar13 / fVar7;
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_140078844(fVar16,uVar1,uVar1,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_14007a7b5(7,&local_f8);
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_140078844(fVar16,uVar4,uVar1,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_14007a7b5(8,&local_f8);
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_140078844(fVar16,uVar6,uVar1,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_14007a7b5(9,&local_f8);
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_140078844(fVar16,uVar3,uVar3,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_14007a7b5(0x14,&local_f8);
      local_f8 = uVar8;
      local_120 = "";
      local_118 = 0;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3f800000);
      FUN_1400bab5c(&DAT_140ec30ce,&local_f8,pfVar10,0);
      cVar9 = FUN_140089e6e();
      if (cVar9 == '\0') {
        cVar9 = FUN_1400808b4(0);
        if (cVar9 != '\0') goto LAB_1401045da;
      }
      else {
LAB_1401045da:
        FUN_140080f0f("%.3f",(double)*pfVar10);
      }
      FUN_14007a8e1(4);
      FUN_140091667();
      uVar13 = uVar13 + 1;
      pfVar10 = pfVar10 + 1;
    } while (uVar13 != 7);
    FUN_140091667();
    uVar1 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400912b0(&DAT_140ece495);
    local_f8 = DAT_140e8d650;
    lVar15 = 0;
    iVar11 = 0;
    do {
      if (lVar15 != 0) {
        FUN_140092bab(0,uVar1);
      }
      FUN_1400937ae();
      iVar14 = 0;
      do {
        FUN_140091425(iVar14 + iVar11);
        local_120 = "";
        local_118 = 0;
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3f800000);
        FUN_1400bab5c(&DAT_140ec30ce,&local_f8,&DAT_140f1c380 + lVar15,0);
        cVar9 = FUN_140089e6e();
        if (cVar9 == '\0') {
          cVar9 = FUN_1400808b4(0);
          if (cVar9 != '\0') goto LAB_1401046bc;
        }
        else {
LAB_1401046bc:
          FUN_140080f0f("%.3f",(double)(float)(&DAT_140f1c380)[lVar15]);
        }
        FUN_140091667();
        iVar14 = iVar14 + 1;
      } while (iVar14 != 3);
      FUN_1400927b2();
      lVar15 = lVar15 + 1;
      iVar11 = iVar11 + 3;
    } while (lVar15 != 4);
    FUN_140091667();
    uVar1 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400912b0(&DAT_140ece23e);
    uVar8 = DAT_140e8d660;
    uVar2 = DAT_140e8c7d0;
    puVar12 = &DAT_140f1c360;
    uVar13 = 0;
    do {
      if (uVar13 != 0) {
        FUN_140092bab(0,uVar1);
      }
      FUN_140091425(uVar13 & 0xffffffff);
      FUN_14007ab2c(0x15,uVar2);
      local_108 = uVar8;
      local_120 = "%.2f\nsec";
      local_118 = 0;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3f800000);
      FUN_1400bab5c(&DAT_140ec30ce,&local_108,puVar12,0);
      FUN_14007af87(1);
      FUN_140091667();
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar13 != 4);
    FUN_140091667();
    FUN_14007af87(1);
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_e0 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_e0 ^ (ulonglong)auStack_148);
}

