/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ff2b7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ff2b7(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined *puVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  ulonglong local_c0;
  
  local_c0 = DAT_140f17b40 ^ (ulonglong)auStack_128;
  cVar7 = FUN_1400c51fb("Selectables");
  if (cVar7 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x9a3,"Widgets/Selectables");
    FUN_1400811b6("imgui_demo.cpp",0x9aa,"Widgets/Selectables/Basic");
    cVar7 = FUN_1400c51fb("Basic");
    if (cVar7 != '\0') {
      local_e8 = 0;
      FUN_1400c6a29("1. I am selectable",&DAT_140f181d8,0,&local_e8);
      local_e8 = 0;
      FUN_1400c6a29("2. I am selectable",&DAT_140f181d9,0,&local_e8);
      local_e8 = 0;
      FUN_1400c6a29("3. I am selectable",&DAT_140f181da,0,&local_e8);
      local_e8 = 0;
      cVar7 = FUN_1400b2126("4. I am double clickable",DAT_140f181db,4,&local_e8);
      if ((cVar7 != '\0') && (cVar7 = FUN_1400920d0(0), cVar7 != '\0')) {
        DAT_140f181db = DAT_140f181db ^ 1;
      }
      FUN_1400c66d9();
    }
    FUN_1400811b6("imgui_demo.cpp",0x9b7,"Widgets/Selectables/Rendering more items on the same line"
                 );
    cVar7 = FUN_1400c51fb("Multiple items on the same line");
    if (cVar7 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x9ba,"Widgets/Selectables/Multiple items on the same line");
      FUN_140089faf();
      uVar10 = 0;
      local_e8 = 0;
      FUN_1400c6a29("main.c",&DAT_140f315d2,0,&local_e8);
      FUN_140092bab(0);
      FUN_1400ad18f("Link 1");
      FUN_140089faf();
      local_e8 = 0;
      FUN_1400c6a29("hello.cpp",&DAT_140f315d3,0,&local_e8);
      FUN_140092bab(0);
      FUN_1400ad18f("Link 2");
      FUN_140089faf();
      local_e8 = 0;
      FUN_1400c6a29("hello.h",&DAT_140f315d4,0,&local_e8);
      FUN_140092bab(0);
      FUN_1400ad18f(&DAT_140ece45a);
      FUN_1400b06f5();
      local_108 = 0xbf800000;
      FUN_14007b686(&local_e8,"x",0,0);
      uVar6 = local_e8;
      uVar4 = DAT_140e8d610;
      uVar3 = DAT_140e8d390._4_4_;
      uVar2 = (uint)DAT_140e8d390;
      uVar11 = _DAT_140211890;
      auVar1 = _DAT_1401c8660;
      do {
        uVar9 = (uint)uVar10;
        FUN_140091425(uVar10 & 0xffffffff);
        FUN_1400b08cd();
        local_e8 = 0;
        cVar7 = FUN_1400b2126("##selectable",uVar10 == DAT_140f315dc,0x10,&local_e8);
        if (cVar7 != '\0') {
          DAT_140f315dc = uVar9;
        }
        FUN_140092bab(0);
        FUN_1400aeb6a("##check",&DAT_140f315d5 + uVar10);
        FUN_140092bab(0);
        uVar20 = CONCAT44(-(uint)((uVar9 & uVar3) == 0),-(uint)((uVar9 & uVar2) == 0));
        local_e8 = uVar20 & uVar11 | ~uVar20 & auVar1._0_8_;
        uStack_e0 = uVar4;
        local_f0 = uVar6 & 0xffffffff;
        FUN_1400c2545("##color",&local_e8,0x40,&local_f0);
        FUN_140092bab(0);
        FUN_1400abfd5("Some label");
        FUN_140091667();
        uVar10 = uVar10 + 1;
      } while (uVar10 != 5);
      FUN_1400c66d9();
    }
    cVar7 = FUN_1400c51fb("In Tables");
    if (cVar7 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x9e3,"Widgets/Selectables/In Tables");
      local_e8 = 0;
      local_108 = 0;
      cVar7 = FUN_14010cbe8("split1",3,0x791);
      if (cVar7 != '\0') {
        uVar11 = 0;
        do {
          FUN_140104e1d(&local_e8,"Item %d",uVar11 & 0xffffffff);
          FUN_140112b04();
          local_f0 = 0;
          FUN_1400c6a29(&local_e8,&DAT_140f315e0 + uVar11,0,&local_f0);
          uVar11 = uVar11 + 1;
        } while (uVar11 != 10);
        FUN_140110400();
      }
      FUN_1400b06f5();
      local_e8 = 0;
      local_108 = 0;
      cVar7 = FUN_14010cbe8("split2",3,0x791);
      if (cVar7 != '\0') {
        uVar11 = 0;
        do {
          FUN_140104e1d(&local_e8,"Item %d",uVar11 & 0xffffffff);
          FUN_14011264b(0);
          FUN_140112b04();
          local_f0 = 0;
          FUN_1400c6a29(&local_e8,&DAT_140f315e0 + uVar11,2,&local_f0);
          FUN_140112b04();
          FUN_1400abfd5("Some other contents");
          FUN_140112b04();
          FUN_1400abfd5("123456");
          uVar11 = uVar11 + 1;
        } while (uVar11 != 10);
        FUN_140110400();
      }
      FUN_1400c66d9();
    }
    cVar7 = FUN_1400c51fb("Grid");
    if (cVar7 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xa07,"Widgets/Selectables/Grid");
      dVar21 = (double)FUN_14008124c();
      puVar12 = &DAT_140f181e0;
      lVar8 = FUN_1401c4fe0(&DAT_140f181e0,0,0x10);
      if (lVar8 == 0) {
        fVar17 = (float)FUN_1401a86e0(DAT_1402113b0 * (float)dVar21);
        fVar18 = (float)FUN_1401a27d0();
        local_e8 = CONCAT44(fVar17 * DAT_1401c8640._4_4_ + DAT_1401c8640._4_4_,
                            fVar18 * (float)DAT_1401c8640 + (float)DAT_1401c8640);
        FUN_14007ae77(0x25);
      }
      local_108 = 0xbf800000;
      iVar16 = 0;
      FUN_14007b686(&local_e8,"Sailor",0,0);
      uVar5 = (undefined4)local_e8;
      lVar13 = 0;
      do {
        lVar15 = 0;
        do {
          if (lVar15 != 0) {
            FUN_140092bab(0);
          }
          FUN_140091425(iVar16 + (int)lVar15);
          local_e8 = CONCAT44(uVar5,uVar5);
          cVar7 = FUN_1400b2126("Sailor",puVar12[lVar15] != '\0',0,&local_e8);
          if (cVar7 != '\0') {
            puVar12[lVar15] = puVar12[lVar15] ^ 1;
            if ((lVar15 == 0) || (puVar12[lVar15 + -1] = puVar12[lVar15 + -1] ^ 1, lVar15 != 3)) {
              puVar12[lVar15 + 1] = puVar12[lVar15 + 1] ^ 1;
            }
            if ((lVar13 == 0) || (puVar12[lVar15 + -4] = puVar12[lVar15 + -4] ^ 1, lVar13 != 3)) {
              puVar12[lVar15 + 4] = puVar12[lVar15 + 4] ^ 1;
            }
          }
          FUN_140091667();
          lVar15 = lVar15 + 1;
        } while (lVar15 != 4);
        lVar13 = lVar13 + 1;
        puVar12 = puVar12 + 4;
        iVar16 = iVar16 + 4;
      } while (lVar13 != 4);
      if (lVar8 == 0) {
        FUN_14007af87(1);
      }
      FUN_1400c66d9();
    }
    cVar7 = FUN_1400c51fb("Alignment");
    if (cVar7 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xa29,"Widgets/Selectables/Alignment");
      FUN_14009cf92(
                   "By default, Selectables uses style.SelectableTextAlign but it can be overridden on a per-item basis using PushStyleVar(). You\'ll probably want to always keep your default situation to left-align otherwise it becomes difficult to layout multiple items on a same line"
                   );
      local_108 = 0xbf800000;
      uVar11 = 0;
      FUN_14007b686(&local_e8,"(1.0,1.0)",0,0);
      fVar17 = DAT_1401c86a0;
      uVar5 = (undefined4)local_e8;
      puVar14 = &DAT_140f181f0;
      do {
        fVar18 = (float)uVar11 * fVar17;
        lVar8 = 0;
        do {
          fVar19 = (float)(int)lVar8 * fVar17;
          local_f0 = CONCAT44(fVar18,fVar19);
          FUN_140104e1d(&local_e8,"(%.1f,%.1f)",(double)fVar19,(double)fVar18);
          if (lVar8 != 0) {
            FUN_140092bab();
          }
          FUN_14007ae77(0x25,&local_f0);
          local_f8 = uVar5;
          local_f4 = uVar5;
          FUN_1400c6a29(&local_e8,puVar14 + lVar8,0,&local_f8);
          FUN_14007af87(1);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        uVar11 = uVar11 + 1;
        puVar14 = puVar14 + 3;
      } while (uVar11 != 3);
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_c0 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_c0 ^ (ulonglong)auStack_128);
}

