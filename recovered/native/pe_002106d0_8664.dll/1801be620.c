/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801be620 */

void FUN_1801be620(void)

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
  
  local_e0 = DAT_180402640 ^ (ulonglong)auStack_148;
  cVar9 = FUN_18014c2cb("Vertical Sliders");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1135,"Widgets/Vertical Sliders");
    local_f8 = DAT_180328f30;
    FUN_180101bbb(0xe,&local_f8);
    uVar8 = DAT_1803292b0;
    local_f8 = DAT_1803292b0;
    local_120 = "%d";
    local_118 = 0;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,5);
    uVar13 = 0;
    FUN_180141caa("##int",&local_f8,&DAT_180420488,0);
    uVar1 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180117f98(&DAT_18036e731);
    fVar7 = DAT_180328f04;
    uVar6 = DAT_1802de900;
    uVar5 = DAT_1802de3d0._4_4_;
    uVar4 = DAT_1802dc418;
    uVar3 = DAT_1802dc414;
    uVar2 = DAT_1802dbb2c;
    pfVar10 = (float *)&DAT_180408bc0;
    do {
      if (uVar13 != 0) {
        FUN_180119893(0,uVar1);
      }
      FUN_18011810d(uVar13 & 0xffffffff);
      fVar16 = (float)(int)uVar13 / fVar7;
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_1800ff588(fVar16,uVar2,uVar2,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_1801014f9(7,&local_f8);
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_1800ff588(fVar16,uVar4,uVar2,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_1801014f9(8,&local_f8);
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_1800ff588(fVar16,uVar3,uVar2,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_1801014f9(9,&local_f8);
      local_128 = &local_f8;
      local_120 = (char *)&local_e4;
      FUN_1800ff588(fVar16,uVar6,uVar6,&local_108);
      local_108 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_100 = CONCAT44(uVar5,local_e4);
      local_f8 = CONCAT44((undefined4)local_f8,(undefined4)local_108);
      uStack_f0 = local_e4;
      uStack_ec = uVar5;
      FUN_1801014f9(0x14,&local_f8);
      local_f8 = uVar8;
      local_120 = "";
      local_118 = 0;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3f800000);
      FUN_180141c2c(&DAT_180360f7e,&local_f8,pfVar10,0);
      cVar9 = FUN_180110b56();
      if (cVar9 == '\0') {
        cVar9 = FUN_18010759c(0);
        if (cVar9 != '\0') goto LAB_1801be956;
      }
      else {
LAB_1801be956:
        FUN_180107bf7("%.3f",(double)*pfVar10);
      }
      FUN_180101625(4);
      FUN_18011834f();
      uVar13 = uVar13 + 1;
      pfVar10 = pfVar10 + 1;
    } while (uVar13 != 7);
    FUN_18011834f();
    uVar1 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180117f98(&DAT_18036e45c);
    local_f8 = DAT_1803292c0;
    lVar15 = 0;
    iVar11 = 0;
    do {
      if (lVar15 != 0) {
        FUN_180119893(0,uVar1);
      }
      FUN_18011a496();
      iVar14 = 0;
      do {
        FUN_18011810d(iVar14 + iVar11);
        local_120 = "";
        local_118 = 0;
        local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3f800000);
        FUN_180141c2c(&DAT_180360f7e,&local_f8,&DAT_180408be0 + lVar15,0);
        cVar9 = FUN_180110b56();
        if (cVar9 == '\0') {
          cVar9 = FUN_18010759c(0);
          if (cVar9 != '\0') goto LAB_1801bea38;
        }
        else {
LAB_1801bea38:
          FUN_180107bf7("%.3f",(double)(float)(&DAT_180408be0)[lVar15]);
        }
        FUN_18011834f();
        iVar14 = iVar14 + 1;
      } while (iVar14 != 3);
      FUN_18011949a();
      lVar15 = lVar15 + 1;
      iVar11 = iVar11 + 3;
    } while (lVar15 != 4);
    FUN_18011834f();
    uVar1 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180117f98(&DAT_18036e1fc);
    uVar8 = DAT_1803292d0;
    uVar2 = DAT_180327400;
    puVar12 = &DAT_180408bc0;
    uVar13 = 0;
    do {
      if (uVar13 != 0) {
        FUN_180119893(0,uVar1);
      }
      FUN_18011810d(uVar13 & 0xffffffff);
      FUN_180101870(0x15,uVar2);
      local_108 = uVar8;
      local_120 = "%.2f\nsec";
      local_118 = 0;
      local_128 = (undefined8 *)CONCAT44(local_128._4_4_,0x3f800000);
      FUN_180141c2c(&DAT_180360f7e,&local_108,puVar12,0);
      FUN_180101ccb(1);
      FUN_18011834f();
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar13 != 4);
    FUN_18011834f();
    FUN_180101ccb(1);
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_e0 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_e0 ^ (ulonglong)auStack_148);
}

