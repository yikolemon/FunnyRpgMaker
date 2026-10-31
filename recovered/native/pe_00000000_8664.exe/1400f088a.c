/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400f088a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f088a(void)

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
  
  local_e0 = DAT_140f17b40 ^ (ulonglong)auStack_198;
  cVar5 = FUN_1400c6846("Layout & Scrolling",0);
  if (cVar5 != '\0') {
    cVar5 = FUN_1400c51fb("Child windows");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x11b3,"Layout/Child windows");
      FUN_1400b1021("Child windows");
      FUN_14009cf92(
                   "Use child windows to begin into a self-contained independent scrolling/clipping regions within a host window."
                   );
      FUN_1400aeb6a("Disable Mouse Wheel",&DAT_140f31bdc);
      FUN_1400aeb6a("Disable Menu",&DAT_140f31bdd);
      uVar18 = (uint)DAT_140f31bdc;
      FUN_14008a381(&local_128);
      local_108 = CONCAT44(0x43820000,(float)local_128 * DAT_1401c86a0);
      iVar17 = 0;
      FUN_14008a029("ChildL",&local_108,0,uVar18 << 4 | 0x800);
      do {
        FUN_1400abfd5("%04d: scrollable region",iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 100);
      FUN_14008a651();
      FUN_140092bab(0,DAT_1401c86a4);
      iVar17 = (uint)DAT_140f31bdc * 0x10 + 0x400;
      if (DAT_140f31bdd != '\0') {
        iVar17 = (uint)DAT_140f31bdc * 0x10;
      }
      FUN_14007ab2c(7,DAT_1401c86c0);
      local_108 = DAT_140e8d4a0;
      FUN_14008a029("ChildR",&local_108,1,iVar17);
      if ((DAT_140f31bdd == '\0') && (cVar5 = FUN_1400c9c0a(), cVar5 != '\0')) {
        cVar5 = FUN_1400cadcc("Menu",1);
        if (cVar5 != '\0') {
          FUN_1400fa107();
          FUN_1400cadd6();
        }
        FUN_1400c9e35();
      }
      local_108 = 0;
      local_178 = (char *)((ulonglong)local_178._4_4_ << 0x20);
      cVar5 = FUN_14010cbe8("split",2,0x11);
      uVar18 = DAT_140211724;
      if (cVar5 != '\0') {
        iVar17 = 0;
        do {
          FUN_140104e1d(&local_108,&DAT_140ecb613,iVar17);
          FUN_140112b04();
          local_128 = (ulonglong)uVar18;
          FUN_1400ad187(&local_108,&local_128);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 100);
        FUN_140110400();
      }
      FUN_14008a651();
      FUN_14007af87(1);
      FUN_1400b1021("Manual-resize");
      FUN_14009cf92(
                   "Drag bottom border to resize. Double-click bottom border to auto-fit to vertical contents."
                   );
      uVar12 = FUN_14007a629(7);
      FUN_14007a7b5(3,uVar12);
      fVar21 = (float)FUN_140093756();
      local_108 = CONCAT44(fVar21 * DAT_1402116fc,0x80800000);
      cVar5 = FUN_14008a029("ResizableChild",&local_108,9,0);
      if (cVar5 != '\0') {
        iVar17 = 0;
        do {
          FUN_1400abfd5("Line %04d",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 10);
      }
      FUN_14007a8e1(1);
      FUN_14008a651();
      FUN_1400b1021("Auto-resize with constraints");
      fVar22 = (float)FUN_14008ff20();
      fVar21 = DAT_1402116fc;
      FUN_140079071(fVar22 * DAT_1402116fc);
      uVar1 = DAT_14021001c;
      local_168._0_4_ = 0;
      local_170 = "%d";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b6661("Lines Count",&DAT_140f1c390,DAT_14021001c,0);
      fVar22 = (float)FUN_14008ff20();
      FUN_140079071(fVar22 * fVar21);
      local_168 = (ulonglong)local_168._4_4_ << 0x20;
      local_170 = "%d";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b6661("Max Height (in Lines)",&DAT_140f1c394,uVar1,0);
      fVar21 = (float)FUN_140093756();
      local_108 = CONCAT44((float)_DAT_140f1c394 * fVar21,0x7f7fffff);
      uVar18 = FUN_140093756();
      local_128 = (ulonglong)uVar18 << 0x20;
      FUN_14008fdd9(&local_128,&local_108,0,0);
      local_108 = (ulonglong)DAT_140211724;
      cVar5 = FUN_14008a029("ConstrainedChild",&local_108,0x21,0);
      if ((cVar5 != '\0') && (0 < DAT_140f1c390)) {
        iVar17 = 0;
        do {
          FUN_1400abfd5("Line %04d",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 < DAT_140f1c390);
      }
      FUN_14008a651();
      FUN_1400b1021("Misc/Advanced");
      fVar21 = (float)FUN_14008ff20();
      FUN_140079071(fVar21 * DAT_1402116fc);
      local_170 = "%d";
      local_168 = local_168 & 0xffffffff00000000;
      local_178 = (char *)CONCAT44(local_178._4_4_,1000);
      FUN_1400b6661("Offset X",&DAT_140f31be0,DAT_1401c86c8,0xfffffc18);
      FUN_1400aeb6a("Override ChildBg color",&DAT_140f1c398);
      thunk_FUN_1400af8bf("ImGuiChildFlags_Borders",&DAT_140f1c39c,1);
      thunk_FUN_1400af8bf("ImGuiChildFlags_AlwaysUseWindowPadding",&DAT_140f1c39c,2);
      thunk_FUN_1400af8bf("ImGuiChildFlags_ResizeX",&DAT_140f1c39c,4);
      thunk_FUN_1400af8bf("ImGuiChildFlags_ResizeY",&DAT_140f1c39c,8);
      thunk_FUN_1400af8bf("ImGuiChildFlags_FrameStyle",&DAT_140f1c39c,0x80);
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92(
                   "Style the child window like a framed item: use FrameBg, FrameRounding, FrameBorderSize, FramePadding instead of ChildBg, ChildRounding, ChildBorderSize, WindowPadding."
                   );
      if ((DAT_140f1c39c & 0x80) != 0) {
        DAT_140f1c398 = '\0';
      }
      fVar21 = (float)FUN_14009319a();
      FUN_140093227(fVar21 + (float)_DAT_140f31be0);
      if (DAT_140f1c398 == '\x01') {
        FUN_14007a67a(3,0x640000ff);
      }
      local_108 = DAT_140e8d4b0;
      iVar17 = 0;
      FUN_14008a029(&DAT_140ecb55e,&local_108,DAT_140f1c39c,0);
      if (DAT_140f1c398 != '\0') {
        FUN_14007a8e1(1);
      }
      do {
        FUN_1400abfd5("Some test %d",iVar17);
        iVar17 = iVar17 + 1;
      } while (iVar17 != 0x32);
      FUN_14008a651();
      uVar6 = FUN_1400808b4(0);
      FUN_140089fde(&local_108);
      FUN_140089ff3(&local_128);
      FUN_1400abfd5("Hovered: %d",uVar6);
      local_178 = (char *)(double)local_128._4_4_;
      FUN_1400abfd5("Rect of child window is: (%.0f,%.0f) (%.0f,%.0f)",(double)(float)local_108,
                    (double)local_108._4_4_,(double)(float)local_128);
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Widgets Width");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1239,"Layout/Widgets Width");
      FUN_1400aeb6a("Show indented items",&DAT_140f1c3a0);
      FUN_1400abfd5("SetNextItemWidth/PushItemWidth(100)");
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Fixed width.");
      FUN_140093372(DAT_1402114b0);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b61f2("float##1b",&DAT_140f31be4,DAT_1401c86c8,0);
      if (DAT_140f1c3a0 == '\x01') {
        FUN_1400932c6(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_1400b61f2("float (indented)##1b",&DAT_140f31be4,DAT_1401c86c8,0);
        FUN_14009331a(0);
      }
      FUN_14009366e();
      FUN_1400abfd5("SetNextItemWidth/PushItemWidth(-100)");
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Align to right edge minus 100");
      FUN_140093372(DAT_140e8d4c0);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b61f2("float##2a",&DAT_140f31be4,DAT_1401c86c8,0);
      if (DAT_140f1c3a0 == '\x01') {
        FUN_1400932c6(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_1400b61f2("float (indented)##2b",&DAT_140f31be4,DAT_1401c86c8,0);
        FUN_14009331a(0);
      }
      FUN_14009366e();
      FUN_1400abfd5("SetNextItemWidth/PushItemWidth(GetContentRegionAvail().x * 0.5f)");
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Half of available width.\n(~ right-cursor_pos)\n(works within a column set)");
      FUN_14008a381(&local_108);
      FUN_140093372((float)local_108 * DAT_1401c86a0);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b61f2("float##3a",&DAT_140f31be4,DAT_1401c86c8,0);
      if (DAT_140f1c3a0 == '\x01') {
        FUN_1400932c6(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_1400b61f2("float (indented)##3b",&DAT_140f31be4,DAT_1401c86c8,0);
        FUN_14009331a(0);
      }
      FUN_14009366e();
      FUN_1400abfd5("SetNextItemWidth/PushItemWidth(-GetContentRegionAvail().x * 0.5f)");
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Align to right edge minus half");
      FUN_14008a381(&local_108);
      FUN_140093372((float)local_108 * DAT_1402115a8);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b61f2("float##4a",&DAT_140f31be4,DAT_1401c86c8,0);
      if (DAT_140f1c3a0 == '\x01') {
        FUN_1400932c6(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_1400b61f2("float (indented)##4b",&DAT_140f31be4,DAT_1401c86c8,0);
        FUN_14009331a(0);
      }
      FUN_14009366e();
      FUN_1400abfd5(
                   "SetNextItemWidth/PushItemWidth(-Min(GetContentRegionAvail().x * 0.40f, GetFontSize() * 12))"
                   );
      fVar21 = (float)FUN_14008ff20();
      fVar21 = fVar21 * DAT_1402116f8;
      FUN_14008a381(&local_108);
      if ((float)local_108 * DAT_140210024 <= fVar21) {
        FUN_14008a381(&local_128);
        fVar21 = (float)local_128 * DAT_140210024;
      }
      else {
        fVar21 = (float)FUN_14008ff20();
        fVar21 = fVar21 * DAT_1402116f8;
      }
      FUN_140093372((uint)fVar21 ^ _DAT_1401c8590);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b61f2("float##5a",&DAT_140f31be4,DAT_1401c86c8,0);
      if (DAT_140f1c3a0 == '\x01') {
        FUN_1400932c6(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_1400b61f2("float (indented)##5b",&DAT_140f31be4,DAT_1401c86c8,0);
        FUN_14009331a(0);
      }
      FUN_14009366e();
      FUN_1400abfd5("SetNextItemWidth/PushItemWidth(-FLT_MIN)");
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Align to right edge");
      FUN_140093372(DAT_140211724);
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "%.3f";
      local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
      FUN_1400b61f2("##float6a",&DAT_140f31be4,DAT_1401c86c8,0);
      if (DAT_140f1c3a0 == '\x01') {
        FUN_1400932c6(0);
        local_168 = local_168 & 0xffffffff00000000;
        local_170 = "%.3f";
        local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
        FUN_1400b61f2("float (indented)##6b",&DAT_140f31be4,DAT_1401c86c8,0);
        FUN_14009331a(0);
      }
      FUN_14009366e();
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Basic Horizontal Layout");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1291,"Layout/Basic Horizontal Layout");
      FUN_1400ac1d0(
                   "(Use ImGui::SameLine() to keep adding items to the right of the preceding item)"
                   );
      FUN_1400811b6("imgui_demo.cpp",0x1295,"Layout/Basic Horizontal Layout/SameLine");
      FUN_1400abfd5("Two items: Hello");
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      uVar14 = _UNK_140e8d4d8;
      uVar12 = _DAT_140e8d4d0;
      local_108 = _DAT_140e8d4d0;
      uStack_100 = _UNK_140e8d4d8;
      FUN_1400ac0bb(&local_108,"Sailor");
      FUN_1400abfd5("More spacing: Hello");
      FUN_140092bab(0,DAT_1401c86d4);
      local_108 = uVar12;
      uStack_100 = uVar14;
      FUN_1400ac0bb(&local_108,"Sailor");
      FUN_1400b08cd();
      FUN_1400abfd5("Normal buttons");
      FUN_140092bab(0,uVar1);
      uVar19 = 0;
      local_108 = 0;
      FUN_1400ad187("Banana",&local_108);
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187("Apple",&local_108);
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187("Corniflower",&local_108);
      FUN_1400abfd5("Small buttons");
      FUN_140092bab(0,uVar1);
      FUN_1400ad18f("Like this one");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("can fit within a text block.");
      FUN_1400811b6("imgui_demo.cpp",0x12aa,"Layout/Basic Horizontal Layout/SameLine (with offset)")
      ;
      FUN_1400abfd5("Aligned");
      uVar11 = DAT_1401c86c4;
      FUN_140092bab(DAT_1401c86c4,uVar1);
      FUN_1400abfd5("x=150");
      uVar18 = DAT_1401c8650;
      FUN_140092bab(DAT_1401c8650,uVar1);
      FUN_1400abfd5("x=300");
      FUN_1400abfd5("Aligned");
      FUN_140092bab(uVar11,uVar1);
      FUN_1400ad18f("x=150");
      FUN_140092bab(uVar18,uVar1);
      FUN_1400ad18f("x=300");
      FUN_1400811b6("imgui_demo.cpp",0x12b3,"Layout/Basic Horizontal Layout/SameLine (more)");
      FUN_1400aeb6a(&DAT_140ec2a6a,&DAT_140f31be8);
      FUN_140092bab(0,uVar1);
      FUN_1400aeb6a("Tailor",&DAT_140f31be9);
      FUN_140092bab(0,uVar1);
      FUN_1400aeb6a(&DAT_140ec5c1c,&DAT_140f31bea);
      FUN_140092bab(0,uVar1);
      FUN_1400aeb6a(&DAT_140ec8690,&DAT_140f31beb);
      local_178._0_4_ = 0xbf800000;
      FUN_14007b686(&local_108,&DAT_140ecd588,0,0);
      FUN_140093372((float)local_108);
      local_f8 = PTR_DAT_140e8cca0;
      puStack_f0 = PTR_s_DDDD_140ecd3ee_6_140e8cca8;
      local_108 = CONCAT44(PTR_DAT_140e8cc90._4_4_,PTR_DAT_140e8cc90._0_4_);
      uStack_100 = CONCAT44(PTR_DAT_140e8cc98._4_4_,PTR_DAT_140e8cc98._0_4_);
      local_178 = (char *)CONCAT44(local_178._4_4_,0xffffffff);
      FUN_1400b288e("Combo",&DAT_140f1c3b0,&local_108,4);
      FUN_140092bab(0,uVar1);
      fVar21 = DAT_1401c86c0;
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%.3f";
      FUN_1400ba2c0("X",&DAT_140f1c3a4,0,DAT_1401c86c0);
      FUN_140092bab(0,uVar1);
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%.3f";
      FUN_1400ba2c0("Y",&DAT_140f1c3a8,0,fVar21);
      FUN_140092bab(0,uVar1);
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%.3f";
      FUN_1400ba2c0("Z",&DAT_140f1c3ac,0,fVar21);
      FUN_1400abfd5("Lists:");
      puVar15 = &DAT_140f1c3c0;
      do {
        if (uVar19 != 0) {
          FUN_140092bab(0,uVar1);
        }
        FUN_140091425(uVar19 & 0xffffffff);
        local_178 = (char *)CONCAT44(local_178._4_4_,0xffffffff);
        FUN_1400c8d60(&DAT_140edcdbf,puVar15,&local_108,4);
        FUN_140091667();
        uVar19 = uVar19 + 1;
        puVar15 = puVar15 + 4;
      } while (uVar19 != 4);
      FUN_14009366e();
      FUN_1400811b6("imgui_demo.cpp",0x12d1,"Layout/Basic Horizontal Layout/Dummy");
      local_128 = DAT_140e8d4e0;
      FUN_1400ad187("A",&local_128);
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400b076d(&local_128);
      FUN_140092bab(0,uVar1);
      FUN_1400ad187("B",&local_128);
      FUN_1400811b6("imgui_demo.cpp",0x12d9,"Layout/Basic Horizontal Layout/Manual wrapping");
      FUN_1400abfd5("Manual wrapping:");
      lVar13 = FUN_14007a54a();
      FUN_14009311d(&local_138);
      fVar21 = (float)local_138;
      FUN_14008a381(&local_118);
      fVar21 = fVar21 + (float)local_118;
      iVar17 = 0;
      do {
        FUN_140091425(iVar17);
        FUN_1400ad187("Box",&local_128);
        FUN_140089ff3(&local_138);
        if (iVar17 == 0x13) {
          FUN_140091667();
          break;
        }
        if ((float)local_138 + *(float *)(lVar13 + 0x5c) + (float)local_128 < fVar21) {
          FUN_140092bab(0,uVar1);
        }
        iVar17 = iVar17 + 1;
        FUN_140091667();
      } while (iVar17 != 0x14);
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Groups");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x12ee,"Layout/Groups");
      FUN_14009cf92(
                   "BeginGroup() basically locks the horizontal position for new line. EndGroup() bundles the whole group so that you can use \"item\" functions such as IsItemHovered()/IsItemActive() or SameLine() etc. on the whole group."
                   );
      FUN_1400937ae();
      FUN_1400937ae();
      local_108 = 0;
      FUN_1400ad187(&DAT_140ecd58c,&local_108);
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      local_108 = 0;
      FUN_1400ad187(&DAT_140ecd4db,&local_108);
      FUN_140092bab(0,uVar1);
      FUN_1400937ae();
      local_108 = 0;
      FUN_1400ad187(&DAT_140ecd474,&local_108);
      local_108 = 0;
      FUN_1400ad187("DDD",&local_108);
      FUN_1400927b2();
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187(&DAT_140ecd2c5,&local_108);
      FUN_1400927b2();
      FUN_140093dc2("First group hovered");
      FUN_14008a008(&local_128);
      local_108 = CONCAT44(_UNK_140e8ccb4,_DAT_140e8ccb0);
      uStack_100 = CONCAT44(_UNK_140e8ccbc,_UNK_140e8ccb8);
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0x3e800000);
      local_160 = local_128;
      local_178 = (char *)0x0;
      local_158 = (undefined8 *)CONCAT44(local_158._4_4_,4);
      local_168 = CONCAT44(local_168._4_4_,0x3f800000);
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      FUN_1400c9977("##values",&local_108,5,0);
      fVar22 = (float)local_128;
      uVar11 = local_128._4_4_;
      lVar13 = FUN_14007a54a();
      fVar21 = DAT_1401c86a0;
      local_138 = CONCAT44(uVar11,(fVar22 - *(float *)(lVar13 + 0x5c)) * DAT_1401c86a0);
      FUN_1400ad187("ACTION",&local_138);
      FUN_140092bab(0,uVar1);
      fVar22 = (float)local_128;
      uVar11 = local_128._4_4_;
      lVar13 = FUN_14007a54a();
      local_138 = CONCAT44(uVar11,(fVar22 - *(float *)(lVar13 + 0x5c)) * fVar21);
      FUN_1400ad187("REACTION",&local_138);
      FUN_1400927b2();
      FUN_140092bab(0,uVar1);
      FUN_1400ad187("LEVERAGE\nBUZZWORD",&local_128);
      FUN_140092bab(0,uVar1);
      cVar5 = FUN_1400c8a84("List",&local_128);
      if (cVar5 != '\0') {
        local_138 = 0;
        FUN_1400b2126("Selected",1,0,&local_138);
        local_138 = 0;
        FUN_1400b2126("Not Selected",0,0,&local_138);
        FUN_1400c8d4d();
      }
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Text Baseline Alignment");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x131d,"Layout/Text Baseline Alignment");
      FUN_1400ac536("Text baseline:");
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92(
                   "This is testing the vertical alignment that gets applied on text to keep it aligned with widgets. Lines only composed of text or \"small\" widgets use less vertical space than lines with framed widgets."
                   );
      FUN_1400932c6(0);
      FUN_1400abfd5("KO Blahblah");
      FUN_140092bab(0,uVar1);
      iVar17 = 0;
      local_108 = 0;
      FUN_1400ad187("Some framed item",&local_108);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92("Baseline of button will look misaligned with text..");
      FUN_1400b08cd();
      FUN_1400abfd5("OK Blahblah");
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187("Some framed item##2",&local_108);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92(
                   "We call AlignTextToFramePadding() to vertically align the text baseline by +FramePadding.y"
                   );
      local_108 = 0;
      FUN_1400ad187("TEST##1",&local_108);
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5(&DAT_140ecca92);
      FUN_140092bab(0,uVar1);
      FUN_1400ad18f("TEST##2");
      FUN_1400b08cd();
      FUN_1400abfd5("Text aligned to framed item");
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187("Item##1",&local_108);
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Item");
      FUN_140092bab(0,uVar1);
      FUN_1400ad18f("Item##2");
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187("Item##3",&local_108);
      FUN_14009331a(0);
      FUN_1400b06f5();
      FUN_1400ac536("Multi-line text:");
      FUN_1400932c6(0);
      FUN_1400abfd5("One\nTwo\nThree");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Hello\nWorld");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Banana");
      FUN_1400abfd5("Banana");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Hello\nWorld");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("One\nTwo\nThree");
      local_108 = 0;
      FUN_1400ad187("HOP##1",&local_108);
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Banana");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Hello\nWorld");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Banana");
      local_108 = 0;
      FUN_1400ad187(&DAT_140ece6ed,&local_108);
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Hello\nWorld");
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("Banana");
      FUN_14009331a(0);
      FUN_1400b06f5();
      FUN_1400ac536("Misc items:");
      FUN_1400932c6(0);
      local_108 = DAT_140e8d4f0;
      FUN_1400ad187("80x80",&local_108);
      FUN_140092bab(0,uVar1);
      local_108 = CONCAT44(DAT_140e8d330._4_4_,(float)DAT_140e8d330);
      FUN_1400ad187("50x50",&local_108);
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187("Button()",&local_108);
      FUN_140092bab(0,uVar1);
      FUN_1400ad18f("SmallButton()");
      lVar13 = FUN_14007a54a();
      uVar1 = *(undefined4 *)(lVar13 + 100);
      local_108 = 0;
      FUN_1400ad187("Button##1",&local_108);
      FUN_140092bab(0,uVar1);
      cVar5 = FUN_1400c5ee6("Node##1",0x40000);
      if (cVar5 != '\0') {
        do {
          FUN_1400ac536("Item %d..",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 6);
        FUN_1400c66d9();
      }
      fVar21 = (float)FUN_14008ff20();
      FUN_14007ad62(0xb,(float)(int)(fVar21 * DAT_140211670));
      local_108 = 0;
      FUN_1400ad187("Button##2");
      FUN_14007af87(1);
      FUN_140092bab(0,uVar1);
      cVar5 = FUN_1400c5ee6("Node##2",0x40000);
      if (cVar5 != '\0') {
        FUN_1400c66d9();
      }
      FUN_1400b08cd();
      cVar5 = FUN_1400c51fb("Node##3");
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187("Button##3");
      if (cVar5 != '\0') {
        iVar17 = 0;
        do {
          FUN_1400ac536("Item %d..",iVar17);
          iVar17 = iVar17 + 1;
        } while (iVar17 != 6);
        FUN_1400c66d9();
      }
      local_108 = 0;
      FUN_1400ad187(&DAT_140ece213,&local_108);
      FUN_140092bab(0,uVar1);
      FUN_1400ac536("Bullet text");
      FUN_1400b08cd();
      FUN_1400ac536("Node");
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      FUN_1400ad187(&DAT_140ece08e,&local_108);
      FUN_14009331a(0);
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Scrolling");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x139d,"Layout/Scrolling/Vertical");
      FUN_14009cf92(
                   "Use SetScrollHereY() or SetScrollFromPosY() to scroll to a given vertical position."
                   );
      FUN_1400aeb6a("Decoration",&DAT_140f31bec);
      fVar21 = (float)FUN_14008ff20();
      FUN_140093372(fVar21 * DAT_1401c86d0);
      fVar22 = DAT_140210020;
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "Item = %d";
      local_178._0_4_ = 99;
      bVar7 = FUN_1400b6661("##item",&DAT_140f1c3d0,DAT_140210020,0);
      uVar1 = DAT_1401c86a4;
      DAT_140f1c3d4 = DAT_140f1c3d4 | bVar7;
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400aeb6a("Track",&DAT_140f1c3d4);
      fVar21 = DAT_1401c86c8;
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "+%.0f px";
      local_178._0_4_ = 0x7f7fffff;
      bVar7 = FUN_1400b61f2("##off",&DAT_140f31bf0,DAT_1401c86c8,0);
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      bVar8 = FUN_1400ad187("Scroll Offset",&local_108);
      bVar8 = bVar8 | bVar7;
      local_168 = local_168 & 0xffffffff00000000;
      local_170 = "X/Y = %.0f px";
      local_178 = (char *)CONCAT44(local_178._4_4_,0x7f7fffff);
      bVar7 = FUN_1400b61f2("##pos",&DAT_140f1c3d8,fVar21,DAT_1401c86cc);
      FUN_140092bab(0,uVar1);
      local_108 = 0;
      bVar9 = FUN_1400ad187("Scroll To Pos",&local_108);
      bVar9 = bVar9 | bVar7;
      FUN_14009366e();
      if ((bVar8 | bVar9) == 1) {
        DAT_140f1c3d4 = 0;
      }
      lVar13 = FUN_14007a54a();
      FUN_14008a381(&local_108);
      fVar23 = (*(float *)(lVar13 + 0x5c) * DAT_140211df8 + (float)local_108) / DAT_1401c86c0;
      if (fVar21 <= fVar23) {
        fVar21 = fVar23;
      }
      FUN_1400912b0("##VerticalScrolling");
      uVar14 = _UNK_140e8d4d8;
      uVar12 = _DAT_140e8d4d0;
      uVar1 = DAT_1401c86a4;
      uVar19 = 0;
      do {
        if (uVar19 != 0) {
          FUN_140092bab(0,uVar1);
        }
        FUN_1400937ae();
        FUN_1400abfca((&PTR_DAT_140e8ccd0)[uVar19],0);
        bVar7 = DAT_140f31bec;
        uVar11 = FUN_1400916ae(uVar19);
        local_108 = CONCAT44(0x43480000,fVar21);
        cVar5 = FUN_14008a360(uVar11,&local_108,1,(ulonglong)bVar7 << 10);
        cVar10 = FUN_1400c9c0a();
        if (cVar10 != '\0') {
          FUN_1400abfca(&DAT_140ecc0bd,0);
          FUN_1400c9e35();
        }
        if (bVar8 != 0) {
          FUN_140093a57(DAT_140f31bf0);
        }
        if (bVar9 != 0) {
          FUN_1400932a1(&local_108);
          FUN_140093a86(local_108._4_4_ + _DAT_140f1c3d8,(float)uVar19 * fVar22);
        }
        if (cVar5 != '\0') {
          iVar17 = 0;
          do {
            if ((DAT_140f1c3d4 == 1) && (iVar17 == DAT_140f1c3d0)) {
              local_108 = uVar12;
              uStack_100 = uVar14;
              FUN_1400ac0bb(&local_108,"Item %d",iVar17);
              FUN_140093b38((float)uVar19 * fVar22);
            }
            else {
              FUN_1400abfd5("Item %d",iVar17);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 != 100);
        }
        fVar23 = (float)FUN_1400939ce();
        fVar24 = (float)FUN_1400939fc();
        FUN_14008a651();
        FUN_1400abfd5(&DAT_140ec9854,(double)fVar23,(double)fVar24);
        FUN_1400927b2();
        uVar19 = uVar19 + 1;
      } while (uVar19 != 5);
      FUN_140091667();
      FUN_1400811b6("imgui_demo.cpp",0x13ea,"Layout/Scrolling/Horizontal");
      FUN_1400b06f5();
      FUN_14009cf92(
                   "Use SetScrollHereX() or SetScrollFromPosX() to scroll to a given horizontal position.\n\nBecause the clipping rectangle of most window hides half worth of WindowPadding on the left/right, using SetScrollFromPosX(+1) will usually result in clipped text whereas the equivalent SetScrollFromPosY(+1) wouldn\'t."
                   );
      FUN_1400912b0("##HorizontalScrolling");
      uVar1 = DAT_1401c86a4;
      uVar19 = 0;
      do {
        fVar24 = (float)FUN_14008ff20();
        fVar21 = *(float *)(lVar13 + 0x84);
        fVar23 = *(float *)(lVar13 + 0x18);
        uVar18 = (uint)DAT_140f31bec;
        uVar11 = FUN_1400916ae(uVar19);
        local_108 = CONCAT44(fVar23 + fVar23 + fVar24 + fVar21,0xc2c80000);
        cVar5 = FUN_14008a360(uVar11,&local_108,1,uVar18 << 0xe | 0x800);
        if (bVar8 != 0) {
          FUN_140093a41(DAT_140f31bf0);
        }
        if (bVar9 != 0) {
          FUN_1400932a1(&local_108);
          FUN_140093a6d((float)local_108 + _DAT_140f1c3d8,(float)uVar19 * fVar22);
        }
        if (cVar5 != '\0') {
          iVar17 = 0;
          do {
            if (iVar17 != 0) {
              FUN_140092bab(0,uVar1);
            }
            if ((DAT_140f1c3d4 == 1) && (iVar17 == DAT_140f1c3d0)) {
              local_108 = uVar12;
              uStack_100 = uVar14;
              FUN_1400ac0bb(&local_108,"Item %d",iVar17);
              FUN_140093a9f((float)uVar19 * fVar22);
            }
            else {
              FUN_1400abfd5("Item %d",iVar17);
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 != 100);
        }
        fVar21 = (float)FUN_1400939b7();
        fVar23 = (float)FUN_1400939e5();
        FUN_14008a651();
        FUN_140092bab(0,uVar1);
        FUN_1400abfd5(&DAT_140ec9851,(&PTR_s_Left_140ec3e0b_6_140e8cd00)[uVar19],(double)fVar21,
                      (double)fVar23);
        FUN_1400b06f5();
        uVar19 = uVar19 + 1;
      } while (uVar19 != 5);
      FUN_140091667();
      FUN_1400811b6("imgui_demo.cpp",0x1418,"Layout/Scrolling/Horizontal (more)");
      FUN_14009cf92(
                   "Horizontal scrolling for a window is enabled via the ImGuiWindowFlags_HorizontalScrollbar flag.\n\nYou may want to also explicitly specify content width by using SetNextWindowContentWidth() before Begin()."
                   );
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = "%d";
      FUN_1400ba55a("Lines",&DAT_140f1c3dc,1,0xf);
      FUN_14007ab2c(0xc,DAT_1402113b0);
      local_108 = DAT_140211250;
      FUN_14007ae77(0xb);
      fVar21 = (float)FUN_14009378a();
      local_118 = (ulonglong)(uint)(fVar21 * DAT_140e8d298 + DAT_140e8d290) << 0x20;
      FUN_14008a029("scrolling",&local_118,1,0x800);
      fVar23 = DAT_140e8c7d0;
      fVar22 = DAT_14021185c;
      uVar4 = DAT_1402114e8;
      uVar3 = DAT_140211150._4_4_;
      uVar2 = DAT_140210014;
      uVar11 = DAT_1401c86dc;
      fVar21 = DAT_1401c86d4;
      uVar1 = DAT_1401c86a4;
      local_148 = 0;
      if (0 < DAT_140f1c3dc) {
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
              FUN_140092bab(0,uVar1);
            }
            FUN_140091425((int)local_148 + iVar17);
            FUN_140104e1d(&local_108,&DAT_140ecbfd4,uVar19);
            puVar20 = (undefined8 *)&DAT_140ec268e;
            if ((((int)(uVar19 / 0xf) * 0xf != iVar17) &&
                (puVar20 = (undefined8 *)&DAT_140ec2697, (int)(uVar19 / 3) * 3 != iVar17)) &&
               (puVar20 = &local_108, (int)(uVar19 / 5) * 5 == iVar17)) {
              puVar20 = (undefined8 *)&DAT_140ec2692;
            }
            fVar24 = (float)iVar17 * fVar22;
            local_178 = (char *)&local_128;
            local_170 = (char *)&local_10c;
            FUN_140078844(fVar24,uVar2,uVar2,&local_138);
            local_138 = CONCAT44((float)local_128,(float)local_138);
            uStack_130 = CONCAT44(uVar3,local_10c);
            local_128 = CONCAT44((float)local_128,(float)local_138);
            uStack_120 = local_10c;
            uStack_11c = uVar3;
            FUN_14007a7b5(0x16,&local_128);
            local_178 = (char *)&local_128;
            local_170 = (char *)&local_10c;
            FUN_140078844(fVar24,uVar4,uVar4,&local_138);
            local_138 = CONCAT44((float)local_128,(float)local_138);
            uStack_130 = CONCAT44(uVar3,local_10c);
            local_128 = CONCAT44((float)local_128,(float)local_138);
            uStack_120 = local_10c;
            uStack_11c = uVar3;
            FUN_14007a7b5(0x17,&local_128);
            local_178 = (char *)&local_128;
            local_170 = (char *)&local_10c;
            FUN_140078844(fVar24,uVar11,uVar11,&local_138);
            local_138 = CONCAT44((float)local_128,(float)local_138);
            uStack_130 = CONCAT44(uVar3,local_10c);
            local_128 = CONCAT44((float)local_128,(float)local_138);
            uStack_120 = local_10c;
            uStack_11c = uVar3;
            FUN_14007a7b5(0x18,&local_128);
            fVar24 = (float)FUN_1401a86e0((float)(int)(uVar18 + iVar17));
            local_128 = (ulonglong)(uint)(fVar24 * fVar21 + fVar23);
            FUN_1400ad187(puVar20,&local_128);
            FUN_14007a8e1(3);
            FUN_140091667();
            uVar19 = (ulonglong)(iVar17 + 1U);
          } while ((uint)local_140 != iVar17 + 1U);
          uVar18 = uVar18 + 1;
          local_148 = (ulonglong)((int)local_148 + 1000);
        } while ((int)uVar18 < DAT_140f1c3dc);
      }
      fVar21 = (float)FUN_1400939b7();
      fVar22 = (float)FUN_1400939e5();
      FUN_14008a651();
      FUN_14007af87(2);
      FUN_1400ad18f(&DAT_140ecd74f);
      fVar23 = 0.0;
      cVar5 = FUN_140089e6e();
      if (cVar5 != '\0') {
        lVar13 = FUN_140081200();
        fVar23 = *(float *)(lVar13 + 0x18) * _DAT_140e8d500;
      }
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400abfd5("Scroll from code");
      FUN_140092bab(0,uVar1);
      FUN_1400ad18f(">>");
      cVar5 = FUN_140089e6e();
      if (cVar5 != '\0') {
        lVar13 = FUN_140081200();
        fVar23 = *(float *)(lVar13 + 0x18) * DAT_140211720;
      }
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400abfd5(&DAT_140ec9854,(double)fVar21,(double)fVar22);
      if ((fVar23 != 0.0) || (NAN(fVar23))) {
        local_108 = 0;
        FUN_14008a029("scrolling",&local_108,0,0);
        fVar21 = (float)FUN_1400939b7();
        FUN_140093a41(fVar21 + fVar23);
        FUN_14008a651();
      }
      FUN_1400b06f5();
      FUN_1400aeb6a("Show Horizontal contents size demo window",&DAT_140f31bf4);
      if (DAT_140f31bf4 == '\x01') {
        if (DAT_140f31bf7 == '\x01') {
          local_108 = (ulonglong)(uint)DAT_140f1c3e8;
          FUN_14008fe0a();
        }
        FUN_140085d7e("Horizontal contents size demo window",&DAT_140f31bf4,
                      (ulonglong)DAT_140f1c3e0 << 0xb);
        FUN_1400811b6("imgui_demo.cpp",0x1463,
                      "Layout/Scrolling/Horizontal contents size demo window");
        uVar18 = DAT_1402113a0;
        local_108 = (ulonglong)DAT_1402113a0;
        FUN_14007ae77(0xe,&local_108);
        local_108 = (ulonglong)uVar18;
        FUN_14007ae77(0xb,&local_108);
        FUN_14009cf92(
                     "Test how different widgets react and impact the work rectangle growing when horizontal scrolling is enabled.\n\nUse \'Metrics->Tools->Show windows rectangles\' to visualize rectangles."
                     );
        FUN_1400aeb6a("H-scrollbar",&DAT_140f1c3e0);
        FUN_1400aeb6a("Button",&DAT_140f1c3e1);
        FUN_1400aeb6a("Tree nodes",&DAT_140f1c3e2);
        FUN_1400aeb6a("Text wrapped",&DAT_140f31bf5);
        FUN_1400aeb6a("Columns",&DAT_140f1c3e3);
        FUN_1400aeb6a("Tab bar",&DAT_140f1c3e4);
        FUN_1400aeb6a(&DAT_140ecb180,&DAT_140f31bf6);
        FUN_1400aeb6a("Explicit content size",&DAT_140f31bf7);
        fVar21 = (float)FUN_1400939fc();
        fVar22 = (float)FUN_1400939ce();
        fVar23 = (float)FUN_1400939e5();
        fVar24 = (float)FUN_1400939b7();
        local_178 = (char *)(double)fVar21;
        FUN_1400abfd5("Scroll %.1f/%.1f %.1f/%.1f",(double)fVar24,SUB84((double)fVar23,0),
                      (double)fVar22);
        if (DAT_140f31bf7 == '\x01') {
          FUN_140092bab(0,DAT_1401c86a4);
          local_178._0_4_ = 0xbf800000;
          FUN_14007b686(&local_108,"123456",0,0);
          FUN_140079071((float)local_108);
          local_168 = local_168 & 0xffffffff00000000;
          local_170 = "%.3f";
          local_178._0_4_ = 0;
          FUN_1400b61f2("##csx",&DAT_140f1c3e8,DAT_1401c86c8,0);
          FUN_14009311d(&local_108);
          uVar12 = FUN_14008feed();
          local_128 = CONCAT44((float)(local_108 >> 0x20) + _UNK_1402116e4,
                               (float)local_108 + _DAT_1402116e0);
          local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
          local_178._0_4_ = 0;
          FUN_1400de294(uVar12,&local_108,&local_128,0xffffffff);
          uVar12 = FUN_14008feed();
          fVar21 = (float)(local_108 >> 0x20);
          fVar22 = DAT_140f1c3e8 + (float)local_108;
          local_128 = CONCAT44(DAT_140e8d510._4_4_ + fVar21,fVar22);
          local_138 = CONCAT44(fVar21,fVar22 + DAT_1401c86cc);
          local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
          local_178 = (char *)((ulonglong)local_178._4_4_ << 0x20);
          FUN_1400de294(uVar12,&local_138,&local_128,0xffffffff);
          local_128 = CONCAT44(DAT_140e8d510._4_4_,(undefined4)DAT_140e8d510);
          FUN_1400b076d(&local_128);
        }
        FUN_14007af87(2);
        FUN_1400b0bd1();
        if (DAT_140f1c3e1 == '\x01') {
          local_108 = (ulonglong)DAT_1401c8650;
          FUN_1400ad187("this is a 300-wide button");
        }
        if (DAT_140f1c3e2 == '\x01') {
          local_108 = CONCAT71(local_108._1_7_,1);
          cVar5 = FUN_1400c51fb("this is a tree node");
          if (cVar5 != '\0') {
            cVar5 = FUN_1400c51fb("another one of those tree node...");
            if (cVar5 != '\0') {
              FUN_1400abfd5("Some tree contents");
              FUN_1400c66d9();
            }
            FUN_1400c66d9();
          }
          FUN_1400c68a2("CollapsingHeader",&local_108,0);
        }
        if (DAT_140f31bf5 == '\x01') {
          FUN_1400ac1d0("This text should automatically wrap on the edge of the work rectangle.");
        }
        if (DAT_140f1c3e3 == '\x01') {
          FUN_1400abfd5("Tables:");
          local_108 = 0;
          local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
          iVar17 = 4;
          cVar5 = FUN_14010cbe8("table",4,0x780);
          if (cVar5 != '\0') {
            iVar16 = 4;
            do {
              FUN_140112b04();
              FUN_14008a381(&local_108);
              FUN_1400abfd5("Width %.2f",(double)(float)local_108);
              iVar16 = iVar16 + -1;
            } while (iVar16 != 0);
            FUN_140110400();
          }
          FUN_1400abfd5("Columns:");
          FUN_14011760d(4,0,1);
          do {
            fVar21 = (float)FUN_140116456(0xffffffff);
            FUN_1400abfd5("Width %.2f",(double)fVar21);
            FUN_140116ff2();
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
          FUN_14011760d(1,0,1);
        }
        if ((DAT_140f1c3e4 == '\x01') && (cVar5 = FUN_1400cb4d2("Hello",0), cVar5 != '\0')) {
          cVar5 = FUN_1400ccbf1("OneOneOne",0,0);
          if (cVar5 != '\0') {
            FUN_1400cdb4a();
          }
          cVar5 = FUN_1400ccbf1("TwoTwoTwo",0,0);
          if (cVar5 != '\0') {
            FUN_1400cdb4a();
          }
          cVar5 = FUN_1400ccbf1("ThreeThreeThree",0,0);
          if (cVar5 != '\0') {
            FUN_1400cdb4a();
          }
          cVar5 = FUN_1400ccbf1("FourFourFour",0,0);
          if (cVar5 != '\0') {
            FUN_1400cdb4a();
          }
          FUN_1400cb960();
        }
        if (DAT_140f31bf6 == '\x01') {
          local_108 = 0;
          FUN_14008a029("child",&local_108,1,0);
          FUN_14008a651();
        }
        FUN_140088c18();
      }
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Text Clipping");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x14be,"Layout/Text Clipping");
      local_170 = "%.0f";
      local_168 = local_168 & 0xffffffff00000000;
      local_178 = (char *)CONCAT44(local_178._4_4_,0x43480000);
      FUN_1400b6270("size",&DAT_140f1c3ec,DAT_1401c86a0,DAT_1401c86c8);
      FUN_1400ac1d0("(Click and drag to scroll)");
      FUN_14009cf92(
                   "(Left) Using ImGui::PushClipRect():\nWill alter ImGui hit-testing logic + ImDrawList rendering.\n(use this if you want your clipping rectangle to affect interactions)\n\n(Center) Using ImDrawList::PushClipRect():\nWill alter ImDrawList rendering only.\n(use this as a shortcut if you are only using ImDrawList calls)\n\n(Right) Using ImDrawList::AddText() with a fine ClipRect:\nWill alter only this specific ImDrawList::AddText() rendering.\nThis is often used internally to avoid altering the clipping rectangle and minimize draw calls."
                   );
      uVar1 = DAT_1401c86a4;
      iVar17 = 0;
      do {
        if (iVar17 != 0) {
          FUN_140092bab(0,uVar1);
        }
        FUN_140091425(iVar17);
        FUN_1400ad20d("##canvas",&DAT_140f1c3ec,0);
        cVar5 = FUN_140089e6e();
        if ((cVar5 != '\0') && (cVar5 = FUN_1400816f9(0,uVar1), cVar5 != '\0')) {
          lVar13 = FUN_140081200();
          DAT_140f1c3f4 = *(float *)(lVar13 + 0xd4) + DAT_140f1c3f4;
          lVar13 = FUN_140081200();
          DAT_140f1c3f8 = *(float *)(lVar13 + 0xd8) + DAT_140f1c3f8;
        }
        FUN_140091667();
        cVar5 = FUN_140089f8c();
        if (cVar5 != '\0') {
          FUN_140089fde(&local_128);
          FUN_140089ff3(&local_138);
          local_118 = CONCAT44(DAT_140f1c3f8 + (float)(local_128 >> 0x20),
                               DAT_140f1c3f4 + (float)local_128);
          uVar12 = FUN_14008feed();
          if (iVar17 == 2) {
            local_108 = local_128;
            uStack_100 = local_138;
            local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
            local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
            FUN_1400de294(uVar12,&local_128,&local_138,0xff785a5a);
            uVar11 = FUN_14008ff20();
            uVar14 = FUN_14008ff11();
            local_158 = &local_108;
            local_160 = local_160 & 0xffffffff00000000;
            local_170 = "Line 1 hello\nLine 2 clip me!";
            local_168 = 0;
            local_178 = (char *)CONCAT44(local_178._4_4_,0xffffffff);
            FUN_1400df1a0(uVar12,uVar14,uVar11,&local_118);
          }
          else if (iVar17 == 1) {
            FUN_1400dab18(uVar12,&local_128,&local_138,1);
            local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
            local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
            FUN_1400de294(uVar12,&local_128,&local_138,0xff785a5a);
            local_178 = (char *)0x0;
            FUN_1400dfb46(uVar12,&local_118,0xffffffff,"Line 1 hello\nLine 2 clip me!");
            FUN_1400dacc4(uVar12);
          }
          else {
            FUN_1400883a6(&local_128,&local_138,1);
            local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
            local_178 = (char *)((ulonglong)local_178 & 0xffffffff00000000);
            FUN_1400de294(uVar12,&local_128,&local_138,0xff785a5a);
            local_178 = (char *)0x0;
            FUN_1400dfb46(uVar12,&local_118,0xffffffff,"Line 1 hello\nLine 2 clip me!");
            FUN_140088407();
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 != 3);
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Overlap Mode");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x14ff,"Layout/Overlap Mode");
      FUN_14009cf92(
                   "Hit-testing is by default performed in item submission order, which generally is perceived as \'back-to-front\'.\n\nBy using SetNextItemAllowOverlap() you can notify that an item may be overlapped by another. Doing so alters the hovering logic: items using AllowOverlap mode requires an extra frame to accept hovered state."
                   );
      FUN_1400aeb6a("Enable AllowOverlap",&DAT_140f1c3fc);
      FUN_14009311d(&local_108);
      local_128 = CONCAT44((float)(local_108 >> 0x20) + DAT_140e8d330._4_4_,
                           (float)local_108 + (float)DAT_140e8d330);
      if (DAT_140f1c3fc == '\x01') {
        FUN_140089faf();
      }
      uVar12 = DAT_140e8d4f0;
      local_138 = DAT_140e8d4f0;
      FUN_1400ad187("Button 1",&local_138);
      FUN_140093139(&local_128);
      local_138 = uVar12;
      FUN_1400ad187("Button 2",&local_138);
      if (DAT_140f1c3fc == '\x01') {
        FUN_140089faf();
      }
      local_138 = 0;
      FUN_1400b2126("Some Selectable",0,0);
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400ad18f(&DAT_140ed704c);
      FUN_1400c66d9();
    }
  }
  if (DAT_140f17b40 == (local_e0 ^ (ulonglong)auStack_198)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_e0 ^ (ulonglong)auStack_198);
}

