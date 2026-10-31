/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801aac06 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801aac06(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined8 *local_158;
  ulonglong local_148;
  ulonglong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_180402640 ^ (ulonglong)auStack_198;
  cVar5 = FUN_18014d916("Layout & Scrolling",0);
  if (cVar5 != '\0') {
    cVar5 = FUN_18014c2cb("Child windows");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x11b3,"Layout/Child windows");
      FUN_1801380f1("Child windows");
      FUN_180124063(
                   "Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window."
                   );
      FUN_180135c3a("Disable Mouse Wheel",&DAT_18042048c);
      FUN_180135c3a("Disable Menu",&DAT_18042048d);
      uVar18 = (uint)DAT_18042048c;
      FUN_180111069(&local_128);
      local_108 = CONCAT44(0x43820000,(float)local_128 * DAT_1802dbb2c);
      iVar17 = 0;
      FUN_180110d11("ChildL",&local_108,0,uVar18 << 4 | 0x800);
      do {
        FUN_1801330a5("%04d: scrollable region",iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 100);
      FUN_180111339();
      FUN_180119893(0,DAT_1802bb8e0);
      iVar17 = (uint)DAT_18042048c * 0x10 + 0x400;
      if (DAT_18042048d != '\0') {
        iVar17 = (uint)DAT_18042048c * 0x10;
      }
      FUN_180101870(7,DAT_1802dc2d0);
      local_108 = DAT_180329110;
      FUN_180110d11("ChildR",&local_108,1,iVar17);
      if ((DAT_18042048d == '\0') && (cVar5 = FUN_180150cda(), cVar5 != '\0')) {
        cVar5 = FUN_180151e9c("Menu",1);
        if (cVar5 != '\0') {
          FUN_1801b4483();
          FUN_180151ea6();
        }
        FUN_180150f05();
      }
      local_108 = 0;
      local_178 = (char *)((ulonglong)local_178._4_4_ << 0x20);
      cVar5 = FUN_180164c18("split",2,0x11);
      uVar18 = DAT_1802de9b4;
      if (cVar5 != '\0') {
        iVar17 = 0;
        do {
          FUN_1801bf199(&local_108,&DAT_18036aaef,iVar17);
          FUN_18016ab34();
          local_128 = (ulonglong)uVar18;
          FUN_180134257(&local_108,&local_128);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 100);
        FUN_180168430();
      }
      FUN_180111339();
      FUN_180101ccb(1);
      FUN_1801380f1("Manual-resize");
      FUN_180124063(
                   "Drag bottom border to resize. Double-click bottom border to auto-fit to vertical contents."
                   );
      uVar12 = FUN_18010136d(7);
      FUN_1801014f9(3,uVar12);
      fVar21 = (float)FUN_18011a43e();
      local_108 = CONCAT44(fVar21 * DAT_1802de98c,0x80800000);
      cVar5 = FUN_180110d11("ResizableChild",&local_108,9,0);
      if (cVar5 != '\0') {
        iVar17 = 0;
        do {
          FUN_1801330a5("Line %04d",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 10);
      }
      FUN_180101625(1);
      FUN_180111339();
      FUN_1801380f1("Auto-resize with constraints");
      fVar22 = (float)FUN_180116c08();
      fVar21 = DAT_1802de98c;
      FUN_1800ffdb5(fVar22 * DAT_1802de98c);
      uVar1 = DAT_1802de790;
      local_168._0_4_ = 0;
      local_170 = "%d";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d731("Lines Count",&DAT_180408bf0,DAT_1802de790,0);
      fVar22 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar22 * fVar21);
      local_168 = (ulonglong)local_168._4_4_ << 0x20;
      local_170 = "%d";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d731("Max Height (in Lines)",&DAT_180408bf4,uVar1,0);
      fVar21 = (float)FUN_18011a43e();
      local_108 = CONCAT44((float)_DAT_180408bf4 * fVar21,0x7f7fffff);
      uVar18 = FUN_18011a43e();
      local_128 = (ulonglong)uVar18 << 0x20;
      FUN_180116ac1(&local_128,&local_108,0,0);
      local_108 = (ulonglong)DAT_1802de9b4;
      cVar5 = FUN_180110d11("ConstrainedChild",&local_108,0x21,0);
      if ((cVar5 != '\0') && (0 < DAT_180408bf0)) {
        iVar17 = 0;
        do {
          FUN_1801330a5("Line %04d",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 < DAT_180408bf0);
      }
      FUN_180111339();
      FUN_1801380f1("Misc/Advanced");
      fVar21 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar21 * DAT_1802de98c);
      local_170 = "%d";
      local_168 = local_168 & 0xffffffff00000000;
      local_178 = (char *)CONCAT44(local_178._4_4_,1000);
      FUN_18013d731("Offset X",&DAT_180420490,DAT_1802ac570,0xfffffc18);
      FUN_180135c3a("Override ChildBg color",&DAT_180408bf8);
      thunk_FUN_18013698f("ImGuiChildFlags_Borders",&DAT_180408bfc,1);
      thunk_FUN_18013698f("ImGuiChildFlags_AlwaysUseWindowPadding",&DAT_180408bfc,2);
      thunk_FUN_18013698f("ImGuiChildFlags_ResizeX",&DAT_180408bfc,4);
      thunk_FUN_18013698f("ImGuiChildFlags_ResizeY",&DAT_180408bfc,8);
      thunk_FUN_18013698f("ImGuiChildFlags_FrameStyle",&DAT_180408bfc,0x80);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Style the child window like a framed item: use FrameBg, FrameRounding, FrameBorderSize, FramePadding instead of ChildBg, ChildRounding, ChildBorderSize, WindowPadding."
                   );
      if ((DAT_180408bfc & 0x80) != 0) {
        DAT_180408bf8 = '\0';
      }
      fVar21 = (float)FUN_180119e82();
      FUN_180119f0f(fVar21 + (float)_DAT_180420490);
      if (DAT_180408bf8 == '\x01') {
        FUN_1801013be(3,0x640000ff);
      }
      local_108 = DAT_180329120;
      iVar17 = 0;
      FUN_180110d11(&DAT_18036a9df,&local_108,DAT_180408bfc,0);
      if (DAT_180408bf8 != '\0') {
        FUN_180101625(1);
      }
      do {
        FUN_1801330a5("Some test %d",iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 0x32);
      FUN_180111339();
      uVar6 = FUN_18010759c(0);
      FUN_180110cc6(&local_108);
      FUN_180110cdb(&local_128);
      FUN_1801330a5("Hovered: %d",uVar6);
      local_178 = (char *)(double)local_128._4_4_;
      FUN_1801330a5("Rect of child window is: (%.0f,%.0f) (%.0f,%.0f)",(double)(float)local_108,
                    (double)local_108._4_4_,(double)(float)local_128);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Widgets Width");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1239,"Layout/Widgets Width");
      FUN_180135c3a("Show indented items",&DAT_180408c00);
      FUN_1801330a5("SetNextItemWidth/PushItemWidth(100)");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Fixed width.");
      FUN_18011a05a(DAT_1802dbb34);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d2c2("float##1b",&DAT_180420494,DAT_1802ac570,0);
      if (DAT_180408c00 == '\x01') {
        FUN_180119fae(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_18013d2c2("float (indented)##1b",&DAT_180420494,DAT_1802ac570,0);
        FUN_18011a002(0);
      }
      FUN_18011a356();
      FUN_1801330a5("SetNextItemWidth/PushItemWidth(-100)");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Align to right edge minus 100");
      FUN_18011a05a(DAT_180329130);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d2c2("float##2a",&DAT_180420494,DAT_1802ac570,0);
      if (DAT_180408c00 == '\x01') {
        FUN_180119fae(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_18013d2c2("float (indented)##2b",&DAT_180420494,DAT_1802ac570,0);
        FUN_18011a002(0);
      }
      FUN_18011a356();
      FUN_1801330a5("SetNextItemWidth/PushItemWidth(GetContentRegionAvail().x * 0.5f)");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Half of available width.\n(~ right-cursor_pos)\n(works within a column set)");
      FUN_180111069(&local_108);
      FUN_18011a05a((float)local_108 * DAT_1802dbb2c);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d2c2("float##3a",&DAT_180420494,DAT_1802ac570,0);
      if (DAT_180408c00 == '\x01') {
        FUN_180119fae(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_18013d2c2("float (indented)##3b",&DAT_180420494,DAT_1802ac570,0);
        FUN_18011a002(0);
      }
      FUN_18011a356();
      FUN_1801330a5("SetNextItemWidth/PushItemWidth(-GetContentRegionAvail().x * 0.5f)");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Align to right edge minus half");
      FUN_180111069(&local_108);
      FUN_18011a05a((float)local_108 * DAT_1802de848);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d2c2("float##4a",&DAT_180420494,DAT_1802ac570,0);
      if (DAT_180408c00 == '\x01') {
        FUN_180119fae(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_18013d2c2("float (indented)##4b",&DAT_180420494,DAT_1802ac570,0);
        FUN_18011a002(0);
      }
      FUN_18011a356();
      FUN_1801330a5(
                   "SetNextItemWidth/PushItemWidth(-Min(GetContentRegionAvail().x * 0.40f, GetFontSize() * 12))"
                   );
      fVar21 = (float)FUN_180116c08();
      fVar21 = fVar21 * DAT_1802de988;
      FUN_180111069(&local_108);
      if ((float)local_108 * DAT_1802bb8d8 <= fVar21) {
        FUN_180111069(&local_128);
        fVar21 = (float)local_128 * DAT_1802bb8d8;
      }
      else {
        fVar21 = (float)FUN_180116c08();
        fVar21 = fVar21 * DAT_1802de988;
      }
      FUN_18011a05a((uint)fVar21 ^ _DAT_1802b0ce0);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d2c2("float##5a",&DAT_180420494,DAT_1802ac570,0);
      if (DAT_180408c00 == '\x01') {
        FUN_180119fae(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_18013d2c2("float (indented)##5b",&DAT_180420494,DAT_1802ac570,0);
        FUN_18011a002(0);
      }
      FUN_18011a356();
      FUN_1801330a5("SetNextItemWidth/PushItemWidth(-FLT_MIN)");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Align to right edge");
      FUN_18011a05a(DAT_1802de9b4);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_18013d2c2("##float6a",&DAT_180420494,DAT_1802ac570,0);
      if (DAT_180408c00 == '\x01') {
        FUN_180119fae(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_18013d2c2("float (indented)##6b",&DAT_180420494,DAT_1802ac570,0);
        FUN_18011a002(0);
      }
      FUN_18011a356();
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Basic Horizontal Layout");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1291,"Layout/Basic Horizontal Layout");
      FUN_1801332a0(
                   "(Use ImGui::SameLine() to keep adding items to the right of the preceding item)"
                   );
      FUN_180107e9e("imgui_demo.cpp",0x1295,"Layout/Basic Horizontal Layout/SameLine");
      FUN_1801330a5("Two items: Hello");
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      uVar14 = _UNK_180329148;
      uVar12 = _DAT_180329140;
      local_108 = _DAT_180329140;
      uStack_100 = _UNK_180329148;
      FUN_18013318b(&local_108,"Sailor");
      FUN_1801330a5("More spacing: Hello");
      FUN_180119893(0,DAT_1802dbb4c);
      local_108 = uVar12;
      uStack_100 = uVar14;
      FUN_18013318b(&local_108,"Sailor");
      FUN_18013799d();
      FUN_1801330a5("Normal buttons");
      FUN_180119893(0,uVar1);
      uVar19 = 0;
      local_108 = 0;
      FUN_180134257("Banana",&local_108);
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257("Apple",&local_108);
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257("Corniflower",&local_108);
      FUN_1801330a5("Small buttons");
      FUN_180119893(0,uVar1);
      FUN_18013425f("Like this one");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("can fit within a text block.");
      FUN_180107e9e("imgui_demo.cpp",0x12aa,"Layout/Basic Horizontal Layout/SameLine (with offset)")
      ;
      FUN_1801330a5("Aligned");
      uVar11 = DAT_1802dc2d4;
      FUN_180119893(DAT_1802dc2d4,uVar1);
      FUN_1801330a5("x=150");
      uVar18 = DAT_1803290e0;
      FUN_180119893(DAT_1803290e0,uVar1);
      FUN_1801330a5("x=300");
      FUN_1801330a5("Aligned");
      FUN_180119893(uVar11,uVar1);
      FUN_18013425f("x=150");
      FUN_180119893(uVar18,uVar1);
      FUN_18013425f("x=300");
      FUN_180107e9e("imgui_demo.cpp",0x12b3,"Layout/Basic Horizontal Layout/SameLine (more)");
      FUN_180135c3a(&DAT_1803608ba,&DAT_180420498);
      FUN_180119893(0,uVar1);
      FUN_180135c3a("Tailor",&DAT_180420499);
      FUN_180119893(0,uVar1);
      FUN_180135c3a(&DAT_180364185,&DAT_18042049a);
      FUN_180119893(0,uVar1);
      FUN_180135c3a(&DAT_1803674d4,&DAT_18042049b);
      local_178._0_4_ = 0xbf800000;
      FUN_1801023ca(&local_108,&DAT_18036ceb9,0,0);
      FUN_18011a05a((float)local_108);
      local_f8 = PTR_DAT_180328910;
      puStack_f0 = PTR_s_DDDD_18036cc9c_6_180328918;
      local_108 = CONCAT44(PTR_DAT_180328900._4_4_,PTR_DAT_180328900._0_4_);
      uStack_100 = CONCAT44(PTR_DAT_180328908._4_4_,PTR_DAT_180328908._0_4_);
      local_178 = (char *)CONCAT44(local_178._4_4_,0xffffffff);
      FUN_18013995e("Combo",&DAT_180408c10,&local_108,4);
      FUN_180119893(0,uVar1);
      fVar21 = DAT_1802dc2d0;
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%.3f";
      FUN_180141390("X",&DAT_180408c04,0,DAT_1802dc2d0);
      FUN_180119893(0,uVar1);
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%.3f";
      FUN_180141390("Y",&DAT_180408c08,0,fVar21);
      FUN_180119893(0,uVar1);
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%.3f";
      FUN_180141390("Z",&DAT_180408c0c,0,fVar21);
      FUN_1801330a5("Lists:");
      puVar15 = &DAT_180408c20;
      do {
        if (uVar19 != 0) {
          FUN_180119893(0,uVar1);
        }
        FUN_18011810d(uVar19 & 0xffffffff);
        local_178 = (char *)CONCAT44(local_178._4_4_,0xffffffff);
        FUN_18014fe30(&DAT_1803861e4,puVar15,&local_108,4);
        FUN_18011834f();
        uVar19 = uVar19 + 1;
        puVar15 = puVar15 + 4;
      } while (uVar19 != 4);
      FUN_18011a356();
      FUN_180107e9e("imgui_demo.cpp",0x12d1,"Layout/Basic Horizontal Layout/Dummy");
      local_128 = DAT_180329150;
      FUN_180134257("A",&local_128);
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_18013783d(&local_128);
      FUN_180119893(0,uVar1);
      FUN_180134257("B",&local_128);
      FUN_180107e9e("imgui_demo.cpp",0x12d9,"Layout/Basic Horizontal Layout/Manual wrapping");
      FUN_1801330a5("Manual wrapping:");
      lVar13 = FUN_18010128e();
      FUN_180119e05(&local_138);
      fVar21 = (float)local_138;
      FUN_180111069(&local_118);
      fVar21 = fVar21 + (float)local_118;
      iVar17 = 0;
      do {
        FUN_18011810d(iVar17);
        FUN_180134257("Box",&local_128);
        FUN_180110cdb(&local_138);
        if (iVar17 == 0x13) {
          FUN_18011834f();
          break;
        }
        if ((float)local_138 + *(float *)(lVar13 + 0x5c) + (float)local_128 < fVar21) {
          FUN_180119893(0,uVar1);
        }
        iVar17 = iVar17 + 1;
        FUN_18011834f();
      } while (iVar17 != 0x14);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Groups");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x12ee,"Layout/Groups");
      FUN_180124063(
                   "BeginGroup() basically locks the horizontal position for new line. EndGroup() bundles the whole group so that you can use \"item\" functions such as IsItemHovered()/IsItemActive() or SameLine() etc. on the whole group."
                   );
      FUN_18011a496();
      FUN_18011a496();
      local_108 = 0;
      FUN_180134257(&DAT_18036cebd,&local_108);
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      local_108 = 0;
      FUN_180134257(&DAT_18036ce03,&local_108);
      FUN_180119893(0,uVar1);
      FUN_18011a496();
      local_108 = 0;
      FUN_180134257(&DAT_18036cd9c,&local_108);
      local_108 = 0;
      FUN_180134257("DDD",&local_108);
      FUN_18011949a();
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257(&DAT_18036cb1d,&local_108);
      FUN_18011949a();
      FUN_18011ab06("First group hovered");
      FUN_180110cf0(&local_128);
      local_108 = CONCAT44(_UNK_180328924,_DAT_180328920);
      uStack_100 = CONCAT44(_UNK_18032892c,_UNK_180328928);
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x3e800000);
      local_160 = local_128;
      local_178 = (char *)0x0;
      local_158 = (undefined8 *)CONCAT44(local_158._4_4_,4);
      local_168 = CONCAT44(local_168._4_4_,0x3f800000);
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      FUN_180150a47("##values",&local_108,5,0);
      fVar22 = (float)local_128;
      uVar11 = local_128._4_4_;
      lVar13 = FUN_18010128e();
      fVar21 = DAT_1802dbb2c;
      local_138 = CONCAT44(uVar11,(fVar22 - *(float *)(lVar13 + 0x5c)) * DAT_1802dbb2c);
      FUN_180134257("ACTION",&local_138);
      FUN_180119893(0,uVar1);
      fVar22 = (float)local_128;
      uVar11 = local_128._4_4_;
      lVar13 = FUN_18010128e();
      local_138 = CONCAT44(uVar11,(fVar22 - *(float *)(lVar13 + 0x5c)) * fVar21);
      FUN_180134257("REACTION",&local_138);
      FUN_18011949a();
      FUN_180119893(0,uVar1);
      FUN_180134257("LEVERAGE\nBUZZWORD",&local_128);
      FUN_180119893(0,uVar1);
      cVar5 = FUN_18014fb54("List",&local_128);
      if (cVar5 != '\0') {
        local_138 = 0;
        FUN_1801391f6("Selected",1,0,&local_138);
        local_138 = 0;
        FUN_1801391f6("Not Selected",0,0,&local_138);
        FUN_18014fe1d();
      }
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Text Baseline Alignment");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x131d,"Layout/Text Baseline Alignment");
      FUN_180133606("Text baseline:");
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "This is testing the vertical alignment that gets applied on text to keep it aligned with widgets. Lines only composed of text or \"small\" widgets use less vertical space than lines with framed widgets."
                   );
      FUN_180119fae(0);
      FUN_1801330a5("KO Blahblah");
      FUN_180119893(0,uVar1);
      iVar17 = 0;
      local_108 = 0;
      FUN_180134257("Some framed item",&local_108);
      FUN_180119893(0,uVar1);
      FUN_180124063("Baseline of button will look misaligned with text..");
      FUN_18013799d();
      FUN_1801330a5("OK Blahblah");
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257("Some framed item##2",&local_108);
      FUN_180119893(0,uVar1);
      FUN_180124063(
                   "We call AlignTextToFramePadding() to vertically align the text baseline by +FramePadding.y"
                   );
      local_108 = 0;
      FUN_180134257("TEST##1",&local_108);
      FUN_180119893(0,uVar1);
      FUN_1801330a5(&DAT_18036c16a);
      FUN_180119893(0,uVar1);
      FUN_18013425f("TEST##2");
      FUN_18013799d();
      FUN_1801330a5("Text aligned to framed item");
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257("Item##1",&local_108);
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Item");
      FUN_180119893(0,uVar1);
      FUN_18013425f("Item##2");
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257("Item##3",&local_108);
      FUN_18011a002(0);
      FUN_1801377c5();
      FUN_180133606("Multi-line text:");
      FUN_180119fae(0);
      FUN_1801330a5("One\nTwo\nThree");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Hello\nWorld");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Banana");
      FUN_1801330a5("Banana");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Hello\nWorld");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("One\nTwo\nThree");
      local_108 = 0;
      FUN_180134257("HOP##1",&local_108);
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Banana");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Hello\nWorld");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Banana");
      local_108 = 0;
      FUN_180134257(&DAT_18036e6c4,&local_108);
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Hello\nWorld");
      FUN_180119893(0,uVar1);
      FUN_1801330a5("Banana");
      FUN_18011a002(0);
      FUN_1801377c5();
      FUN_180133606("Misc items:");
      FUN_180119fae(0);
      local_108 = DAT_180329160;
      FUN_180134257("80x80",&local_108);
      FUN_180119893(0,uVar1);
      local_108 = CONCAT44(DAT_180328f90._4_4_,(float)DAT_180328f90);
      FUN_180134257("50x50",&local_108);
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257("Button()",&local_108);
      FUN_180119893(0,uVar1);
      FUN_18013425f("SmallButton()");
      lVar13 = FUN_18010128e();
      uVar1 = *(undefined4 *)(lVar13 + 100);
      local_108 = 0;
      FUN_180134257("Button##1",&local_108);
      FUN_180119893(0,uVar1);
      cVar5 = FUN_18014cfb6("Node##1",0x40000);
      if (cVar5 != '\0') {
        do {
          FUN_180133606("Item %d..",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 6);
        FUN_18014d7a9();
      }
      fVar21 = (float)FUN_180116c08();
      FUN_180101aa6(0xb,(float)(int)(fVar21 * DAT_1802de904));
      local_108 = 0;
      FUN_180134257("Button##2");
      FUN_180101ccb(1);
      FUN_180119893(0,uVar1);
      cVar5 = FUN_18014cfb6("Node##2",0x40000);
      if (cVar5 != '\0') {
        FUN_18014d7a9();
      }
      FUN_18013799d();
      cVar5 = FUN_18014c2cb("Node##3");
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257("Button##3");
      if (cVar5 != '\0') {
        iVar17 = 0;
        do {
          FUN_180133606("Item %d..",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 6);
        FUN_18014d7a9();
      }
      local_108 = 0;
      FUN_180134257("Button##4",&local_108);
      FUN_180119893(0,uVar1);
      FUN_180133606("Bullet text");
      FUN_18013799d();
      FUN_180133606("Node");
      FUN_180119893(0,uVar1);
      local_108 = 0;
      FUN_180134257(&DAT_18036dfcc,&local_108);
      FUN_18011a002(0);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Scrolling");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x139d,"Layout/Scrolling/Vertical");
      FUN_180124063(
                   "Use SetScrollHereY() or SetScrollFromPosY() to scroll to a given vertical position."
                   );
      FUN_180135c3a("Decoration",&DAT_18042049c);
      fVar21 = (float)FUN_180116c08();
      FUN_18011a05a(fVar21 * DAT_1802dc2dc);
      fVar22 = DAT_1802de728;
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "Item = %d";
      local_178._0_4_ = 99;
      bVar7 = FUN_18013d731("##item",&DAT_180408c30,DAT_1802de728,0);
      uVar1 = DAT_1802bb8e0;
      DAT_180408c34 = DAT_180408c34 | bVar7;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180135c3a("Track",&DAT_180408c34);
      fVar21 = DAT_1802ac570;
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "+%.0f px";
      local_178._0_4_ = 0x7f7fffff;
      bVar7 = FUN_18013d2c2("##off",&DAT_1804204a0,DAT_1802ac570,0);
      FUN_180119893(0,uVar1);
      local_108 = 0;
      bVar8 = FUN_180134257("Scroll Offset",&local_108);
      bVar8 = bVar8 | bVar7;
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "X/Y = %.0f px";
      local_178 = (char *)CONCAT44(local_178._4_4_,0x7f7fffff);
      bVar7 = FUN_18013d2c2("##pos",&DAT_180408c38,fVar21,DAT_1802dc2d8);
      FUN_180119893(0,uVar1);
      local_108 = 0;
      bVar9 = FUN_180134257("Scroll To Pos",&local_108);
      bVar9 = bVar9 | bVar7;
      FUN_18011a356();
      if ((bVar8 | bVar9) == 1) {
        DAT_180408c34 = 0;
      }
      lVar13 = FUN_18010128e();
      FUN_180111069(&local_108);
      fVar23 = (*(float *)(lVar13 + 0x5c) * DAT_1802df088 + (float)local_108) / DAT_1802dc2d0;
      if (fVar21 <= fVar23) {
        fVar21 = fVar23;
      }
      FUN_180117f98("##VerticalScrolling");
      uVar14 = _UNK_180329148;
      uVar12 = _DAT_180329140;
      uVar1 = DAT_1802bb8e0;
      uVar19 = 0;
      do {
        if (uVar19 != 0) {
          FUN_180119893(0,uVar1);
        }
        FUN_18011a496();
        FUN_18013309a((&PTR_DAT_180328940)[uVar19],0);
        bVar7 = DAT_18042049c;
        uVar11 = FUN_180118396(uVar19);
        local_108 = CONCAT44(0x43480000,fVar21);
        cVar5 = FUN_180111048(uVar11,&local_108,1,(ulonglong)bVar7 << 10);
        cVar10 = FUN_180150cda();
        if (cVar10 != '\0') {
          FUN_18013309a(&DAT_18036b5ae,0);
          FUN_180150f05();
        }
        if (bVar8 != 0) {
          FUN_18011a79b(DAT_1804204a0);
        }
        if (bVar9 != 0) {
          FUN_180119f89(&local_108);
          FUN_18011a7ca(local_108._4_4_ + _DAT_180408c38,(float)uVar19 * fVar22);
        }
        if (cVar5 != '\0') {
          iVar17 = 0;
          do {
            if ((DAT_180408c34 == 1) && (iVar17 == DAT_180408c30)) {
              local_108 = uVar12;
              uStack_100 = uVar14;
              FUN_18013318b(&local_108,"Item %d",iVar17);
              FUN_18011a87c((float)uVar19 * fVar22);
            }
            else {
              FUN_1801330a5("Item %d",iVar17);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 != 100);
        }
        fVar23 = (float)FUN_18011a712();
        fVar24 = (float)FUN_18011a740();
        FUN_180111339();
        FUN_1801330a5(&DAT_180368753,(double)fVar23,(double)fVar24);
        FUN_18011949a();
        uVar19 = uVar19 + 1;
      } while (uVar19 != 5);
      FUN_18011834f();
      FUN_180107e9e("imgui_demo.cpp",0x13ea,"Layout/Scrolling/Horizontal");
      FUN_1801377c5();
      FUN_180124063(
                   "Use SetScrollHereX() or SetScrollFromPosX() to scroll to a given horizontal position.\n\nBecause the clipping rectangle of most window hides half worth of WindowPadding on the left/right, using SetScrollFromPosX(+1) will usually result in clipped text whereas the equivalent SetScrollFromPosY(+1) wouldn\'t."
                   );
      FUN_180117f98("##HorizontalScrolling");
      uVar1 = DAT_1802bb8e0;
      uVar19 = 0;
      do {
        fVar24 = (float)FUN_180116c08();
        fVar21 = *(float *)(lVar13 + 0x84);
        fVar23 = *(float *)(lVar13 + 0x18);
        uVar18 = (uint)DAT_18042049c;
        uVar11 = FUN_180118396(uVar19);
        local_108 = CONCAT44(fVar23 + fVar23 + fVar24 + fVar21,0xc2c80000);
        cVar5 = FUN_180111048(uVar11,&local_108,1,uVar18 << 0xe | 0x800);
        if (bVar8 != 0) {
          FUN_18011a785(DAT_1804204a0);
        }
        if (bVar9 != 0) {
          FUN_180119f89(&local_108);
          FUN_18011a7b1((float)local_108 + _DAT_180408c38,(float)uVar19 * fVar22);
        }
        if (cVar5 != '\0') {
          iVar17 = 0;
          do {
            if (iVar17 != 0) {
              FUN_180119893(0,uVar1);
            }
            if ((DAT_180408c34 == 1) && (iVar17 == DAT_180408c30)) {
              local_108 = uVar12;
              uStack_100 = uVar14;
              FUN_18013318b(&local_108,"Item %d",iVar17);
              FUN_18011a7e3((float)uVar19 * fVar22);
            }
            else {
              FUN_1801330a5("Item %d",iVar17);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 != 100);
        }
        fVar21 = (float)FUN_18011a6fb();
        fVar23 = (float)FUN_18011a729();
        FUN_180111339();
        FUN_180119893(0,uVar1);
        FUN_1801330a5(&DAT_180368750,(&PTR_s_Left_180361f69_6_180328970)[uVar19],(double)fVar21,
                      (double)fVar23);
        FUN_1801377c5();
        uVar19 = uVar19 + 1;
      } while (uVar19 != 5);
      FUN_18011834f();
      FUN_180107e9e("imgui_demo.cpp",0x1418,"Layout/Scrolling/Horizontal (more)");
      FUN_180124063(
                   "Horizontal scrolling for a window is enabled via the ImGuiWindowFlags_HorizontalScrollbar flag.\n\nYou may want to also explicitly specify content width by using SetNextWindowContentWidth() before Begin()."
                   );
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%d";
      FUN_18014162a("Lines",&DAT_180408c3c,1,0xf);
      FUN_180101870(0xc,DAT_1802dbb3c);
      local_108 = DAT_1802de4d0;
      FUN_180101bbb(0xb);
      fVar21 = (float)FUN_18011a472();
      local_118 = (ulonglong)(uint)(fVar21 * DAT_180328f04 + DAT_1802dbb40) << 0x20;
      FUN_180110d11("scrolling",&local_118,1,0x800);
      fVar23 = DAT_180327400;
      fVar22 = DAT_1802deaec;
      uVar4 = DAT_1802de3d0._4_4_;
      uVar3 = DAT_1802dc418;
      uVar2 = DAT_1802dc414;
      fVar21 = DAT_1802dbb4c;
      uVar11 = DAT_1802dbb30;
      uVar1 = DAT_1802bb8e0;
      local_148 = 0;
      if (0 < DAT_180408c3c) {
        uVar18 = 0;
        do {
          iVar17 = 9;
          if ((uVar18 & 1) == 0) {
            iVar17 = 3;
          }
          local_140 = (ulonglong)(iVar17 * uVar18 + 10 + (uint)(iVar17 * uVar18 == -10));
          uVar19 = 0;
          do {
            iVar17 = (int)uVar19;
            if (iVar17 != 0) {
              FUN_180119893(0,uVar1);
            }
            FUN_18011810d((int)local_148 + iVar17);
            FUN_1801bf199(&local_108,&DAT_18036b4b0,uVar19);
            puVar20 = (undefined8 *)&DAT_18036046c;
            if ((((int)(uVar19 / 0xf) * 0xf != iVar17) &&
                (puVar20 = (undefined8 *)&DAT_180360475, (int)(uVar19 / 3) * 3 != iVar17)) &&
               (puVar20 = &local_108, (int)(uVar19 / 5) * 5 == iVar17)) {
              puVar20 = (undefined8 *)&DAT_180360470;
            }
            fVar24 = (float)iVar17 * fVar22;
            local_178 = (char *)&local_128;
            local_170 = (char *)&local_10c;
            FUN_1800ff588(fVar24,uVar3,uVar3,&local_138);
            local_138 = CONCAT44((float)local_128,(float)local_138);
            uStack_130 = CONCAT44(uVar4,local_10c);
            local_128 = CONCAT44((float)local_128,(float)local_138);
            uStack_120 = local_10c;
            uStack_11c = uVar4;
            FUN_1801014f9(0x16,&local_128);
            local_178 = (char *)&local_128;
            local_170 = (char *)&local_10c;
            FUN_1800ff588(fVar24,uVar2,uVar2,&local_138);
            local_138 = CONCAT44((float)local_128,(float)local_138);
            uStack_130 = CONCAT44(uVar4,local_10c);
            local_128 = CONCAT44((float)local_128,(float)local_138);
            uStack_120 = local_10c;
            uStack_11c = uVar4;
            FUN_1801014f9(0x17,&local_128);
            local_178 = (char *)&local_128;
            local_170 = (char *)&local_10c;
            FUN_1800ff588(fVar24,uVar11,uVar11,&local_138);
            local_138 = CONCAT44((float)local_128,(float)local_138);
            uStack_130 = CONCAT44(uVar4,local_10c);
            local_128 = CONCAT44((float)local_128,(float)local_138);
            uStack_120 = local_10c;
            uStack_11c = uVar4;
            FUN_1801014f9(0x18,&local_128);
            fVar24 = (float)FUN_18028a830((float)(int)(uVar18 + iVar17));
            local_128 = (ulonglong)(uint)(fVar24 * fVar21 + fVar23);
            FUN_180134257(puVar20,&local_128);
            FUN_180101625(3);
            FUN_18011834f();
            uVar19 = (ulonglong)(iVar17 + 1U);
          } while ((uint)local_140 != iVar17 + 1U);
          uVar18 = uVar18 + 1;
          local_148 = (ulonglong)((int)local_148 + 1000);
        } while ((int)uVar18 < DAT_180408c3c);
      }
      fVar21 = (float)FUN_18011a6fb();
      fVar22 = (float)FUN_18011a729();
      FUN_180111339();
      FUN_180101ccb(2);
      FUN_18013425f(&DAT_18036d54c);
      fVar23 = 0.0;
      cVar5 = FUN_180110b56();
      if (cVar5 != '\0') {
        lVar13 = FUN_180107ee8();
        fVar23 = *(float *)(lVar13 + 0x18) * _DAT_180329170;
      }
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_1801330a5("Scroll from code");
      FUN_180119893(0,uVar1);
      FUN_18013425f(">>");
      cVar5 = FUN_180110b56();
      if (cVar5 != '\0') {
        lVar13 = FUN_180107ee8();
        fVar23 = *(float *)(lVar13 + 0x18) * DAT_1802de9b0;
      }
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_1801330a5(&DAT_180368753,(double)fVar21,(double)fVar22);
      if ((fVar23 != 0.0) || (NAN(fVar23))) {
        local_108 = 0;
        FUN_180110d11("scrolling",&local_108,0,0);
        fVar21 = (float)FUN_18011a6fb();
        FUN_18011a785(fVar21 + fVar23);
        FUN_180111339();
      }
      FUN_1801377c5();
      FUN_180135c3a("Show Horizontal contents size demo window",&DAT_1804204a4);
      if (DAT_1804204a4 == '\x01') {
        if (DAT_1804204a7 == '\x01') {
          local_108 = (ulonglong)(uint)DAT_180408c48;
          FUN_180116af2();
        }
        FUN_18010ca66("Horizontal contents size demo window",&DAT_1804204a4,
                      (ulonglong)DAT_180408c40 << 0xb);
        FUN_180107e9e("imgui_demo.cpp",0x1463,
                      "Layout/Scrolling/Horizontal contents size demo window");
        uVar18 = DAT_1802de650;
        local_108 = (ulonglong)DAT_1802de650;
        FUN_180101bbb(0xe,&local_108);
        local_108 = (ulonglong)uVar18;
        FUN_180101bbb(0xb,&local_108);
        FUN_180124063(
                     "Test how different widgets react and impact the work rectangle growing when horizontal scrolling is enabled.\n\nUse \'Metrics->Tools->Show windows rectangles\' to visualize rectangles."
                     );
        FUN_180135c3a("H-scrollbar",&DAT_180408c40);
        FUN_180135c3a("Button",&DAT_180408c41);
        FUN_180135c3a("Tree nodes",&DAT_180408c42);
        FUN_180135c3a("Text wrapped",&DAT_1804204a5);
        FUN_180135c3a("Columns",&DAT_180408c43);
        FUN_180135c3a("Tab bar",&DAT_180408c44);
        FUN_180135c3a("Child",&DAT_1804204a6);
        FUN_180135c3a("Explicit content size",&DAT_1804204a7);
        fVar21 = (float)FUN_18011a740();
        fVar22 = (float)FUN_18011a712();
        fVar23 = (float)FUN_18011a729();
        fVar24 = (float)FUN_18011a6fb();
        local_178 = (char *)(double)fVar21;
        FUN_1801330a5("Scroll %.1f/%.1f %.1f/%.1f",(double)fVar24,SUB84((double)fVar23,0),
                      SUB84((double)fVar22,0));
        if (DAT_1804204a7 == '\x01') {
          FUN_180119893(0,DAT_1802bb8e0);
          local_178._0_4_ = 0xbf800000;
          FUN_1801023ca(&local_108,"123456",0,0);
          FUN_1800ffdb5((float)local_108);
          local_168 = local_168 & 0xffffffff00000000;
          local_170 = "%.3f";
          local_178._0_4_ = 0;
          FUN_18013d2c2(&DAT_18036093b,&DAT_180408c48,DAT_1802ac570,0);
          FUN_180119e05(&local_108);
          uVar12 = FUN_180116bd5();
          local_128 = CONCAT44((float)(local_108 >> 0x20) + _UNK_1802de974,
                               (float)local_108 + _DAT_1802de970);
          local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
          local_178._0_4_ = 0;
          FUN_180192d20(uVar12,&local_108,&local_128,0xffffffff);
          uVar12 = FUN_180116bd5();
          fVar21 = (float)(local_108 >> 0x20);
          fVar22 = DAT_180408c48 + (float)local_108;
          local_128 = CONCAT44(DAT_180329180._4_4_ + fVar21,fVar22);
          local_138 = CONCAT44(fVar21,fVar22 + DAT_1802dc2d8);
          local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
          local_178 = (char *)((ulonglong)local_178._4_4_ << 0x20);
          FUN_180192d20(uVar12,&local_138,&local_128,0xffffffff);
          local_128 = CONCAT44(DAT_180329180._4_4_,(undefined4)DAT_180329180);
          FUN_18013783d(&local_128);
        }
        FUN_180101ccb(2);
        FUN_180137ca1();
        if (DAT_180408c41 == '\x01') {
          local_108 = (ulonglong)DAT_1803290e0;
          FUN_180134257("this is a 300-wide button");
        }
        if (DAT_180408c42 == '\x01') {
          local_108 = CONCAT71(local_108._1_7_,1);
          cVar5 = FUN_18014c2cb("this is a tree node");
          if (cVar5 != '\0') {
            cVar5 = FUN_18014c2cb("another one of those tree node...");
            if (cVar5 != '\0') {
              FUN_1801330a5("Some tree contents");
              FUN_18014d7a9();
            }
            FUN_18014d7a9();
          }
          FUN_18014d972("CollapsingHeader",&local_108,0);
        }
        if (DAT_1804204a5 == '\x01') {
          FUN_1801332a0("This text should automatically wrap on the edge of the work rectangle.");
        }
        if (DAT_180408c43 == '\x01') {
          FUN_1801330a5("Tables:");
          local_108 = 0;
          local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
          iVar17 = 4;
          cVar5 = FUN_180164c18("table",4,0x780);
          if (cVar5 != '\0') {
            iVar16 = 4;
            do {
              FUN_18016ab34();
              FUN_180111069(&local_108);
              FUN_1801330a5("Width %.2f",(double)(float)local_108);
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            FUN_180168430();
          }
          FUN_1801330a5("Columns:");
          FUN_18016f63d(4,0,1);
          do {
            fVar21 = (float)FUN_18016e486(0xffffffff);
            FUN_1801330a5("Width %.2f",(double)fVar21);
            FUN_18016f022();
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          FUN_18016f63d(1,0,1);
        }
        if ((DAT_180408c44 == '\x01') && (cVar5 = FUN_1801525a2("Hello",0), cVar5 != '\0')) {
          cVar5 = FUN_180153cc1("OneOneOne",0,0);
          if (cVar5 != '\0') {
            FUN_180154c1a();
          }
          cVar5 = FUN_180153cc1("TwoTwoTwo",0,0);
          if (cVar5 != '\0') {
            FUN_180154c1a();
          }
          cVar5 = FUN_180153cc1("ThreeThreeThree",0,0);
          if (cVar5 != '\0') {
            FUN_180154c1a();
          }
          cVar5 = FUN_180153cc1("FourFourFour",0,0);
          if (cVar5 != '\0') {
            FUN_180154c1a();
          }
          FUN_180152a30();
        }
        if (DAT_1804204a6 == '\x01') {
          local_108 = 0;
          FUN_180110d11("child",&local_108,1,0);
          FUN_180111339();
        }
        FUN_18010f900();
      }
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Text Clipping");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x14be,"Layout/Text Clipping");
      local_170 = "%.0f";
      local_168 = local_168 & 0xffffffff00000000;
      local_178 = (char *)CONCAT44(local_178._4_4_,0x43480000);
      FUN_18013d340("size",&DAT_180408c4c,DAT_1802dbb2c,DAT_1802ac570);
      FUN_1801332a0("(Click and drag to scroll)");
      FUN_180124063(
                   "(Left) Using ImGui::PushClipRect():\nWill alter ImGui hit-testing logic + ImDrawList rendering.\n(use this if you want your clipping rectangle to affect interactions)\n\n(Center) Using ImDrawList::PushClipRect():\nWill alter ImDrawList rendering only.\n(use this as a shortcut if you are only using ImDrawList calls)\n\n(Right) Using ImDrawList::AddText() with a fine ClipRect:\nWill alter only this specific ImDrawList::AddText() rendering.\nThis is often used internally to avoid altering the clipping rectangle and minimize draw calls."
                   );
      uVar1 = DAT_1802bb8e0;
      iVar17 = 0;
      do {
        if (iVar17 != 0) {
          FUN_180119893(0,uVar1);
        }
        FUN_18011810d(iVar17);
        FUN_1801342dd("##canvas",&DAT_180408c4c,0);
        cVar5 = FUN_180110b56();
        if ((cVar5 != '\0') && (cVar5 = FUN_1801083e1(0,uVar1), cVar5 != '\0')) {
          lVar13 = FUN_180107ee8();
          DAT_180408c54 = *(float *)(lVar13 + 0xd4) + DAT_180408c54;
          lVar13 = FUN_180107ee8();
          DAT_180408c58 = *(float *)(lVar13 + 0xd8) + DAT_180408c58;
        }
        FUN_18011834f();
        cVar5 = FUN_180110c74();
        if (cVar5 != '\0') {
          FUN_180110cc6(&local_128);
          FUN_180110cdb(&local_138);
          local_118 = CONCAT44(DAT_180408c58 + (float)(local_128 >> 0x20),
                               DAT_180408c54 + (float)local_128);
          uVar12 = FUN_180116bd5();
          if (iVar17 == 2) {
            local_108 = local_128;
            uStack_100 = local_138;
            local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
            local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
            FUN_180192d20(uVar12,&local_128,&local_138,0xff785a5a);
            uVar11 = FUN_180116c08();
            uVar14 = FUN_180116bf9();
            local_158 = &local_108;
            local_160 = local_160 & 0xffffffff00000000;
            local_170 = "Line 1 hello\nLine 2 clip me!";
            local_168 = 0;
            local_178 = (char *)CONCAT44(local_178._4_4_,0xffffffff);
            FUN_180193c2c(uVar12,uVar14,uVar11,&local_118);
          }
          else if (iVar17 == 1) {
            FUN_18018f5a4(uVar12,&local_128,&local_138,1);
            local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
            local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
            FUN_180192d20(uVar12,&local_128,&local_138,0xff785a5a);
            local_178 = (char *)0x0;
            FUN_1801945d2(uVar12,&local_118,0xffffffff,"Line 1 hello\nLine 2 clip me!");
            FUN_18018f750(uVar12);
          }
          else {
            FUN_18010f08e(&local_128,&local_138,1);
            local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
            local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
            FUN_180192d20(uVar12,&local_128,&local_138,0xff785a5a);
            local_178 = (char *)0x0;
            FUN_1801945d2(uVar12,&local_118,0xffffffff,"Line 1 hello\nLine 2 clip me!");
            FUN_18010f0ef();
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 != 3);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Overlap Mode");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x14ff,"Layout/Overlap Mode");
      FUN_180124063(
                   "Hit-testing is by default performed in item submission order, which generally is perceived as \'back-to-front\'.\n\nBy using SetNextItemAllowOverlap() you can notify that an item may be overlapped by another. Doing so alters the hovering logic: items using AllowOverlap mode requires an extra frame to accept hovered state."
                   );
      FUN_180135c3a("Enable AllowOverlap",&DAT_180408c5c);
      FUN_180119e05(&local_108);
      local_128 = CONCAT44((float)(local_108 >> 0x20) + DAT_180328f90._4_4_,
                           (float)local_108 + (float)DAT_180328f90);
      if (DAT_180408c5c == '\x01') {
        FUN_180110c97();
      }
      uVar12 = DAT_180329160;
      local_138 = DAT_180329160;
      FUN_180134257("Button 1",&local_138);
      FUN_180119e21(&local_128);
      local_138 = uVar12;
      FUN_180134257("Button 2",&local_138);
      if (DAT_180408c5c == '\x01') {
        FUN_180110c97();
      }
      local_138 = 0;
      FUN_1801391f6("Some Selectable",0,0);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_18013425f("++");
      FUN_18014d7a9();
    }
  }
  if (DAT_180402640 == (local_e0 ^ (ulonglong)auStack_198)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_e0 ^ (ulonglong)auStack_198);
}

