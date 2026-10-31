/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a8c9b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a8c9b(undefined *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar11;
  bool bVar12;
  char cVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  size_t sVar17;
  char *pcVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  undefined *puVar21;
  int iVar22;
  undefined1 (*pauVar23) [16];
  undefined *puVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  undefined8 in_stack_fffffffffffffec8;
  undefined *puVar40;
  undefined4 uVar42;
  ulonglong uVar41;
  char *pcVar43;
  undefined4 uVar44;
  undefined8 in_stack_fffffffffffffed8;
  double dVar45;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  uVar25 = (uint)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_f0 = 0xfffffffffffffffe;
  FUN_180107e9e("imgui_demo.cpp",0x2170,"Tools/Style Editor");
  local_f8 = (undefined4 *)FUN_18010128e();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_18041f760) {
    FUN_18023d500(&DAT_18041f760);
    if (DAT_18041f760 == -1) {
      FUN_1800fcf7c(&DAT_18041f214);
      _Init_thread_footer(&DAT_18041f760);
    }
  }
  if ((param_1 == (undefined *)0x0) && ((DAT_18041f764 & 1) == 0)) {
    FUN_1802a82f0(&DAT_18041f214,local_f8,0x54c);
  }
  DAT_18041f764 = 1;
  puVar21 = &DAT_18041f214;
  if (param_1 != (undefined *)0x0) {
    puVar21 = param_1;
  }
  fVar38 = (float)local_f8[0x151];
  auVar28._0_8_ = FUN_1801169a3();
  auVar28._8_8_ = extraout_XMM0_Qb;
  auVar29._4_12_ = auVar28._4_12_;
  auVar29._0_4_ = (float)auVar28._0_8_ * DAT_1802dbb2c;
  FUN_18011a05a(auVar29._0_8_);
  FUN_1801380f1("General");
  lVar15 = FUN_180107ee8();
  if ((*(byte *)(lVar15 + 4) & 0x10) == 0) {
    FUN_180133606(
                 "Warning: Font scaling will NOT be smooth, because\nImGuiBackendFlags_RendererHasTextures is not set!"
                 );
    FUN_180133606("For instructions, see:");
    FUN_180119893();
    FUN_1801376fe("docs/BACKENDS.md","https://github.com/ocornut/imgui/blob/master/docs/BACKENDS.md"
                 );
  }
  cVar13 = FUN_1801b41da("Colors##Selector");
  if (cVar13 != '\0') {
    FUN_1802a82f0(&DAT_18041f214,local_f8,0x54c);
  }
  fVar38 = (float)(int)fVar38;
  FUN_180123f27("Fonts##Selector");
  puVar20 = local_f8;
  puVar24 = &DAT_180368758;
  uVar19 = (ulonglong)uVar25 << 0x20;
  uVar16 = CONCAT44(uVar14,0x42c80000);
  cVar13 = FUN_18013d2c2("FontSizeBase",local_f8,DAT_1802de790,DAT_1802dc2d0,uVar16,&DAT_180368758,
                         uVar19);
  uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
  if (cVar13 != '\0') {
    puVar20[0x152] = *puVar20;
  }
  FUN_180119893();
  fVar26 = (float)FUN_180116c08();
  FUN_1801330a5(" (out %.2f)",(double)fVar26);
  uVar44 = DAT_1802de984;
  fVar26 = DAT_1802dbb2c;
  uVar19 = uVar19 & 0xffffffff00000000;
  uVar16 = CONCAT44(uVar14,0x40800000);
  FUN_18013d2c2("FontScaleMain",puVar20 + 1,DAT_1802de984,DAT_1802dbb2c,uVar16,"%.3f",uVar19);
  uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
  lVar15 = FUN_180107ee8();
  FUN_180116580(*(undefined1 *)(lVar15 + 0x5a));
  dVar45 = (double)(uVar19 & 0xffffffff00000000);
  pcVar43 = "%.3f";
  FUN_18013d2c2("FontScaleDpi",puVar20 + 2,uVar44,fVar26,CONCAT44(uVar14,0x40800000),"%.3f",dVar45);
  FUN_18011ab06("When io.ConfigDpiScaleFonts is set, this value is automatically overwritten.");
  FUN_180116676();
  uVar19 = (ulonglong)pcVar43 & 0xffffffff00000000;
  puVar40 = &DAT_180368758;
  cVar13 = FUN_180141390("FrameRounding",puVar20 + 0x15,0,DAT_1802de988,&DAT_180368758,uVar19);
  if (cVar13 != '\0') {
    puVar20[0x25] = puVar20[0x15];
  }
  local_100._0_1_ = 0.0 < (float)puVar20[8];
  cVar13 = FUN_180135c3a("WindowBorder");
  if (cVar13 != '\0') {
    fVar26 = fVar38;
    if ((char)local_100 == '\0') {
      fVar26 = 0.0;
    }
    puVar20[8] = fVar26;
  }
  FUN_180119893();
  pfVar1 = (float *)(local_f8 + 0x16);
  local_100._0_1_ = 0.0 < (float)local_f8[0x16];
  cVar13 = FUN_180135c3a("FrameBorder");
  if (cVar13 != '\0') {
    fVar26 = fVar38;
    if ((char)local_100 == '\0') {
      fVar26 = 0.0;
    }
    *pfVar1 = fVar26;
  }
  FUN_180119893();
  pfVar2 = (float *)(local_f8 + 0x12);
  local_100 = CONCAT71(local_100._1_7_,0.0 < (float)local_f8[0x12]);
  cVar13 = FUN_180135c3a("PopupBorder");
  if (cVar13 != '\0') {
    fVar26 = fVar38;
    if ((char)local_100 == '\0') {
      fVar26 = 0.0;
    }
    *pfVar2 = fVar26;
  }
  local_100 = 0;
  cVar13 = FUN_180134257("Save Ref");
  puVar11 = local_f8;
  if (cVar13 != '\0') {
    FUN_1802a82f0(&DAT_18041f214,local_f8,0x54c);
    FUN_1802a82f0(puVar21,puVar11,0x54c);
  }
  FUN_180119893();
  local_100 = 0;
  cVar13 = FUN_180134257("Revert Ref");
  if (cVar13 != '\0') {
    FUN_1802a82f0(local_f8,puVar21,0x54c);
  }
  FUN_180119893();
  FUN_180124063(
               "Save/Revert in local non-persistent storage. Default Colors definition are not affected. Use \"Export\" below to save them somewhere."
               );
  FUN_1801380f1("Details");
  cVar13 = FUN_1801525a2("##tabs",0);
  if (cVar13 != '\0') {
    cVar13 = FUN_180153cc1("Sizes",0,0);
    if (cVar13 != '\0') {
      if (fVar38 <= DAT_1802de650) {
        fVar38 = DAT_1802de650;
      }
      FUN_1801380f1("Main");
      puVar11 = local_f8;
      uVar44 = DAT_1802dbb4c;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("WindowPadding",local_f8 + 5,0,DAT_1802dbb4c,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("FramePadding",puVar11 + 0x13,0,uVar44,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("ItemSpacing",puVar11 + 0x17,0,uVar44,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("ItemInnerSpacing",puVar11 + 0x19,0,uVar44,&DAT_180368758,uVar19);
      fVar26 = DAT_1802dc2dc;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("TouchExtraPadding",puVar11 + 0x1d,0,DAT_1802dc2dc,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("IndentSpacing",puVar11 + 0x1f,0,DAT_1802dbb40,&DAT_180368758,uVar19);
      uVar14 = DAT_1802ac570;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("GrabMinSize",puVar11 + 0x24,DAT_1802ac570,uVar44,&DAT_180368758,uVar19);
      FUN_1801380f1("Borders");
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("WindowBorderSize",puVar20 + 8,0,fVar38,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ChildBorderSize",puVar11 + 0x10,0,fVar38,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("PopupBorderSize",pfVar2,0,fVar38,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("FrameBorderSize",pfVar1,0,fVar38,&DAT_180368758,uVar19);
      FUN_1801380f1("Rounding");
      uVar7 = DAT_1802de988;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("WindowRounding",puVar11 + 7,0,DAT_1802de988,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ChildRounding",puVar11 + 0xf,0,uVar7,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("FrameRounding",puVar20 + 0x15,0,uVar7,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("PopupRounding",puVar11 + 0x11,0,uVar7,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("GrabRounding",puVar11 + 0x25,0,uVar7,&DAT_180368758,uVar19);
      FUN_1801380f1("Scrollbar");
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ScrollbarSize",puVar11 + 0x21,uVar14,uVar44,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ScrollbarRounding",puVar11 + 0x22,0,uVar7,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ScrollbarPadding",puVar11 + 0x23,0,fVar26,&DAT_180368758,uVar19);
      FUN_1801380f1("Tabs");
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("TabBorderSize",puVar11 + 0x2a,0,fVar38,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("TabBarBorderSize",puVar11 + 0x2f,0,fVar38,&DAT_180368758,uVar19);
      fVar26 = DAT_1802dbb3c;
      if (DAT_1802dbb3c <= fVar38) {
        fVar26 = fVar38;
      }
      uVar42 = 1;
      FUN_180141390("TabBarOverlineSize",puVar11 + 0x30,0,fVar26,&DAT_180368758,
                    uVar19 & 0xffffffff00000000);
      uVar6 = DAT_1802bb8e0;
      FUN_180119893();
      FUN_180124063(
                   "Overline is only drawn over the selected tab when ImGuiTabBarFlags_DrawSelectedOverline is set."
                   );
      fVar26 = DAT_1802dbb2c;
      uVar19 = (ulonglong)dVar45 & 0xffffffff00000000;
      FUN_18013d2c2("TabMinWidthBase",puVar11 + 0x2b,DAT_1802dbb2c,uVar14,
                    CONCAT44(uVar42,0x43fa0000),&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_18013d2c2("TabMinWidthShrink",puVar11 + 0x2c,fVar26,uVar14,0x43fa0000,&DAT_18036875d,
                    uVar19);
      pcVar18 = "%.0f (Always)";
      pcVar43 = "%.0f";
      if ((float)puVar11[0x2d] <= 0.0 && (float)puVar11[0x2d] != 0.0) {
        pcVar43 = "%.0f (Always)";
      }
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_18013d2c2("TabCloseButtonMinWidthSelected",puVar11 + 0x2d,fVar26,uVar6,0x42c80000,pcVar43,
                    uVar19);
      if (0.0 < (float)puVar11[0x2e] || (float)puVar11[0x2e] == 0.0) {
        pcVar18 = "%.0f";
      }
      dVar45 = (double)(uVar19 & 0xffffffff00000000);
      FUN_18013d2c2("TabCloseButtonMinWidthUnselected",puVar11 + 0x2e,fVar26,uVar6,0x42c80000,
                    pcVar18,dVar45);
      uVar19 = (ulonglong)pcVar18 & 0xffffffff00000000;
      FUN_180141390("TabRounding",puVar11 + 0x29,0,uVar7,&DAT_180368758,uVar19);
      FUN_1801380f1("Tables");
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("CellPadding",puVar11 + 0x1b,0,uVar44,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_18014158b("TableAngledHeadersAngle",puVar11 + 0x31,DAT_1803290e8,DAT_1802dbb44,"%.0f deg",
                    uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("TableAngledHeadersTextAlign",puVar11 + 0x32,0,uVar14,"%.2f",uVar19);
      FUN_1801380f1("Trees");
      uVar16 = FUN_1801b42e0(puVar11[0x34]);
      cVar13 = FUN_180138722("TreeLinesFlags",uVar16,0);
      FUN_180119893();
      FUN_180124063(
                   "[Experimental] Tree lines may not work in all situations (e.g. using a clipper) and may incurs slight traversal overhead.\n\nImGuiTreeNodeFlags_DrawLinesFull is faster than ImGuiTreeNodeFlags_DrawLinesToNode."
                   );
      if (cVar13 != '\0') {
        lVar15 = 0;
        do {
          iVar22 = *(int *)((longlong)&DAT_180328578 + lVar15);
          local_100 = 0;
          puVar24 = (undefined *)CONCAT71((int7)((ulonglong)puVar24 >> 8),local_f8[0x34] == iVar22);
          uVar16 = FUN_1801b42e0(iVar22);
          cVar13 = FUN_1801391f6(uVar16,(ulonglong)puVar24 & 0xffffffff,0,&local_100);
          if (cVar13 != '\0') {
            local_f8[0x34] = iVar22;
          }
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0xc);
        FUN_180138f6c();
      }
      puVar20 = local_f8;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("TreeLinesSize",local_f8 + 0x35,0,fVar38,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("TreeLinesRounding",puVar20 + 0x36,0,DAT_1802de988,&DAT_180368758,uVar19);
      FUN_1801380f1("Windows");
      uVar14 = DAT_1802ac570;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("WindowTitleAlign",puVar20 + 0xc,0,DAT_1802ac570,"%.2f",uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("WindowBorderHoverPadding",puVar20 + 9,uVar14,DAT_1802dbb4c,&DAT_180368758,
                    uVar19);
      local_100 = CONCAT44(local_100._4_4_,puVar20[0xe] + 1);
      cVar13 = FUN_180139992("WindowMenuButtonPosition",&local_100,&DAT_1803860b8,0xffffffff);
      if (cVar13 != '\0') {
        puVar20[0xe] = (int)(float)local_100 + -1;
      }
      FUN_1801380f1("Widgets");
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ColorMarkerSize",puVar20 + 0x3a,0,DAT_1802de98c,&DAT_180368758,uVar19);
      FUN_180139992("ColorButtonPosition",puVar20 + 0x3b,&DAT_1803860bd,0xffffffff);
      uVar14 = DAT_1802ac570;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("ButtonTextAlign",puVar20 + 0x3c,0,DAT_1802ac570,"%.2f",uVar19);
      FUN_180119893();
      FUN_180124063("Alignment applies when a button is larger than its text content.");
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("SelectableTextAlign",puVar20 + 0x3e,0,uVar14,"%.2f",uVar19);
      FUN_180119893();
      FUN_180124063("Alignment applies when a selectable is larger than its text content.");
      fVar26 = DAT_1802dc2dc;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("SeparatorSize",puVar20 + 0x40,0,DAT_1802dc2dc,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("SeparatorTextBorderSize",puVar20 + 0x41,0,fVar26,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("SeparatorTextAlign",puVar20 + 0x42,0,uVar14,"%.2f",uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("SeparatorTextPadding",puVar20 + 0x44,0,DAT_180327400,&DAT_180368758,uVar19);
      uVar14 = DAT_1802de988;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("LogSliderDeadzone",puVar20 + 0x26,0,DAT_1802de988,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ImageRounding",puVar20 + 0x27,0,uVar14,&DAT_180368758,uVar19);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("ImageBorderSize",puVar20 + 0x28,0,fVar38,&DAT_180368758,uVar19);
      FUN_1801380f1("Docking");
      FUN_180135c3a("DockingNodeHasCloseButton",puVar20 + 0x4a);
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141390("DockingSeparatorSize",puVar20 + 0x4b,0,uVar14,&DAT_180368758,uVar19);
      FUN_1801380f1("Tooltips");
      bVar12 = true;
      do {
        bVar5 = bVar12;
        pcVar43 = "HoverFlagsForTooltipNav";
        if (bVar5) {
          pcVar43 = "HoverFlagsForTooltipMouse";
        }
        cVar13 = FUN_18014cfb6(pcVar43,0);
        if (cVar13 != '\0') {
          puVar20 = local_f8 + (ulonglong)(byte)~bVar5 + 0x14f;
          thunk_FUN_18013698f("ImGuiHoveredFlags_DelayNone",puVar20,0x4000);
          thunk_FUN_18013698f("ImGuiHoveredFlags_DelayShort",puVar20,0x8000);
          thunk_FUN_18013698f("ImGuiHoveredFlags_DelayNormal",puVar20,0x10000);
          thunk_FUN_18013698f("ImGuiHoveredFlags_Stationary",puVar20,0x2000);
          thunk_FUN_18013698f("ImGuiHoveredFlags_NoSharedDelay",puVar20,0x20000);
          FUN_18014d7a9();
        }
        bVar12 = false;
      } while (bVar5);
      FUN_1801380f1(&DAT_18036b4b3);
      puVar20 = local_f8;
      uVar14 = DAT_1802dbb40;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_180141402("DisplayWindowPadding",local_f8 + 0x46,0,DAT_1802dbb40,&DAT_180368758,uVar19);
      FUN_180119893();
      FUN_180124063(
                   "Apply to regular windows: amount which we enforce to keep visible when moving near edges of your screen."
                   );
      puVar40 = &DAT_180368758;
      FUN_180141402("DisplaySafeAreaPadding",puVar20 + 0x48,0,uVar14,&DAT_180368758,
                    uVar19 & 0xffffffff00000000);
      FUN_180119893();
      FUN_180124063(
                   "Apply to every windows, menus, popups, tooltips: amount where we avoid displaying contents. Adjust if you cannot see the edges of your screen (e.g. on a TV where scaling has not been configured)."
                   );
      FUN_180154c1a();
    }
    cVar13 = FUN_180153cc1("Colors",0,0);
    uVar14 = (undefined4)((ulonglong)puVar40 >> 0x20);
    if (cVar13 != '\0') {
      local_100 = 0;
      cVar13 = FUN_180134257("Export");
      if (cVar13 != '\0') {
        if (DAT_18041f768 == 0) {
          FUN_180115307(0xffffffff);
        }
        else {
          FUN_18011d2c1(0xffffffff);
        }
        FUN_1801157dd("ImVec4* colors = GetStyle().Colors;\r\n");
        pauVar23 = (undefined1 (*) [16])(local_f8 + 0x50);
        pcVar43 = puVar21 + 0x140;
        uVar19 = 0;
        do {
          pcVar18 = (char *)FUN_180101d79(uVar19 & 0xffffffff);
          if (DAT_180404754 == '\x01') {
            auVar28 = *pauVar23;
            auVar36[0] = -(*pcVar43 == auVar28[0]);
            auVar36[1] = -(pcVar43[1] == auVar28[1]);
            auVar36[2] = -(pcVar43[2] == auVar28[2]);
            auVar36[3] = -(pcVar43[3] == auVar28[3]);
            auVar36[4] = -(pcVar43[4] == auVar28[4]);
            auVar36[5] = -(pcVar43[5] == auVar28[5]);
            auVar36[6] = -(pcVar43[6] == auVar28[6]);
            auVar36[7] = -(pcVar43[7] == auVar28[7]);
            auVar36[8] = -(pcVar43[8] == auVar28[8]);
            auVar36[9] = -(pcVar43[9] == auVar28[9]);
            auVar36[10] = -(pcVar43[10] == auVar28[10]);
            auVar36[0xb] = -(pcVar43[0xb] == auVar28[0xb]);
            auVar36[0xc] = -(pcVar43[0xc] == auVar28[0xc]);
            auVar36[0xd] = -(pcVar43[0xd] == auVar28[0xd]);
            auVar36[0xe] = -(pcVar43[0xe] == auVar28[0xe]);
            auVar36[0xf] = -(pcVar43[0xf] == auVar28[0xf]);
            if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar36[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1801a9c06;
          }
          else {
LAB_1801a9c06:
            fVar38 = *(float *)((longlong)*pauVar23 + 0xc);
            dVar45 = (double)*(float *)((longlong)*pauVar23 + 8);
            fVar26 = *(float *)((longlong)*pauVar23 + 4);
            puVar40 = (undefined *)(double)*(float *)*pauVar23;
            sVar17 = strlen(pcVar18);
            FUN_1801157dd("colors[ImGuiCol_%s]%*s= ImVec4(%.2ff, %.2ff, %.2ff, %.2ff);\r\n",pcVar18,
                          0x17 - (int)sVar17,&DAT_1803861e4,puVar40,(double)fVar26,dVar45,
                          (double)fVar38);
          }
          uVar19 = uVar19 + 1;
          pauVar23 = pauVar23 + 1;
          pcVar43 = pcVar43 + 0x10;
        } while (uVar19 != 0x3f);
        FUN_1801160c4();
      }
      FUN_180119893();
      auVar30._0_8_ = FUN_180116c08();
      auVar30._8_8_ = extraout_XMM0_Qb_00;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = (float)auVar30._0_8_ * DAT_1802dc2dc;
      FUN_1800ffdb5(auVar31._0_8_);
      FUN_180139992("##output_type",&DAT_18041f768,"To Clipboard",0xffffffff);
      FUN_180119893();
      FUN_180135c3a("Only Modified Colors",&DAT_180404754);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_18041f888) {
        FUN_18023d500(&DAT_18041f888);
        if (DAT_18041f888 == -1) {
          FUN_1800ffb82(&DAT_18041f770,&DAT_1803861e4);
          FUN_18023d710(FUN_1801b437b);
          _Init_thread_footer(&DAT_18041f888);
        }
      }
      fVar38 = (float)FUN_180116c08();
      FUN_1800ffd62(&DAT_18041f770,"Filter colors",fVar38 * DAT_1802de7b0);
      cVar13 = FUN_180136a21("Opaque",DAT_18041f88c == 0x1000);
      if (cVar13 != '\0') {
        DAT_18041f88c = 0x1000;
      }
      FUN_180119893();
      cVar13 = FUN_180136a21("Alpha",DAT_18041f88c == 0);
      if (cVar13 != '\0') {
        DAT_18041f88c = 0;
      }
      FUN_180119893();
      cVar13 = FUN_180136a21(&DAT_18036710d,DAT_18041f88c == 0x4000);
      if (cVar13 != '\0') {
        DAT_18041f88c = 0x4000;
      }
      FUN_180119893();
      FUN_180124063(
                   "In the color list:\nLeft-click on color square to open color picker,\nRight-click to open edit options menu."
                   );
      local_100 = DAT_1802de500;
      fVar38 = (float)FUN_18011a43e();
      local_108 = (ulonglong)(uint)(fVar38 * DAT_1802dc2dc) << 0x20;
      uVar19 = 0;
      FUN_180116ac1(&local_108,&local_100,0,0);
      local_100 = 0;
      FUN_180110d11("##colors",&local_100,0x101,0xc000);
      auVar32._0_8_ = FUN_180116c08();
      auVar32._8_8_ = extraout_XMM0_Qb_01;
      auVar33._4_12_ = auVar32._4_12_;
      auVar33._0_4_ = (float)auVar32._0_8_ * _DAT_1803290ec;
      FUN_18011a05a(auVar33._0_8_);
      pcVar43 = (char *)(local_f8 + 0x50);
      pcVar18 = puVar21 + 0x140;
      do {
        uVar16 = FUN_180101d79(uVar19 & 0xffffffff);
        cVar13 = FUN_1800fff6e(&DAT_18041f770,uVar16,0);
        if (cVar13 != '\0') {
          FUN_18011810d(uVar19 & 0xffffffff);
          local_100 = 0;
          cVar13 = FUN_180134257("?",&local_100);
          if (cVar13 != '\0') {
            FUN_18012365b(uVar19 & 0xffffffff);
          }
          FUN_18011ab06("Flash given color to identify places where it is used.");
          FUN_180119893();
          FUN_180148378("##color",pcVar43);
          auVar37[0] = -(*pcVar18 == *pcVar43);
          auVar37[1] = -(pcVar18[1] == pcVar43[1]);
          auVar37[2] = -(pcVar18[2] == pcVar43[2]);
          auVar37[3] = -(pcVar18[3] == pcVar43[3]);
          auVar37[4] = -(pcVar18[4] == pcVar43[4]);
          auVar37[5] = -(pcVar18[5] == pcVar43[5]);
          auVar37[6] = -(pcVar18[6] == pcVar43[6]);
          auVar37[7] = -(pcVar18[7] == pcVar43[7]);
          auVar37[8] = -(pcVar18[8] == pcVar43[8]);
          auVar37[9] = -(pcVar18[9] == pcVar43[9]);
          auVar37[10] = -(pcVar18[10] == pcVar43[10]);
          auVar37[0xb] = -(pcVar18[0xb] == pcVar43[0xb]);
          auVar37[0xc] = -(pcVar18[0xc] == pcVar43[0xc]);
          auVar37[0xd] = -(pcVar18[0xd] == pcVar43[0xd]);
          auVar37[0xe] = -(pcVar18[0xe] == pcVar43[0xe]);
          auVar37[0xf] = -(pcVar18[0xf] == pcVar43[0xf]);
          if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar37[0xf] >> 7) << 0xf) != 0xffff) {
            FUN_180119893(0);
            local_100 = 0;
            cVar13 = FUN_180134257(&DAT_180368bae,&local_100);
            if (cVar13 != '\0') {
              uVar4 = *(undefined8 *)(pcVar43 + 8);
              *(undefined8 *)pcVar18 = *(undefined8 *)pcVar43;
              *(undefined8 *)(pcVar18 + 8) = uVar4;
            }
            FUN_180119893(0,local_f8[0x19]);
            local_100 = 0;
            cVar13 = FUN_180134257("Revert",&local_100);
            if (cVar13 != '\0') {
              uVar4 = *(undefined8 *)(pcVar18 + 8);
              *(undefined8 *)pcVar43 = *(undefined8 *)pcVar18;
              *(undefined8 *)(pcVar43 + 8) = uVar4;
            }
          }
          FUN_180119893(0);
          FUN_18013309a(uVar16,0);
          FUN_18011834f();
        }
        uVar14 = (undefined4)((ulonglong)puVar40 >> 0x20);
        uVar19 = uVar19 + 1;
        pcVar43 = pcVar43 + 0x10;
        pcVar18 = pcVar18 + 0x10;
      } while (uVar19 != 0x3f);
      FUN_18011a356();
      FUN_180111339();
      FUN_180154c1a();
    }
    cVar13 = FUN_180153cc1("Fonts",0,0);
    if (cVar13 != '\0') {
      lVar15 = FUN_180107ee8();
      FUN_18012374b(*(undefined8 *)(lVar15 + 0x38));
      FUN_180154c1a();
    }
    cVar13 = FUN_180153cc1("Rendering",0,0);
    puVar20 = local_f8;
    if (cVar13 != '\0') {
      FUN_180135c3a("Anti-aliased lines",local_f8 + 0x4d);
      FUN_180119893();
      FUN_180124063(
                   "When disabling anti-aliasing lines, you\'ll probably want to disable borders in your style as well."
                   );
      FUN_180135c3a("Anti-aliased lines use texture",(longlong)puVar20 + 0x135);
      FUN_180119893();
      FUN_180124063(
                   "Faster lines using texture data. Require backend to render with bilinear filtering (not point/nearest filtering)."
                   );
      FUN_180135c3a("Anti-aliased fill",(longlong)puVar20 + 0x136);
      auVar34._0_8_ = FUN_180116c08();
      auVar34._8_8_ = extraout_XMM0_Qb_02;
      auVar35._4_12_ = auVar34._4_12_;
      auVar35._0_4_ = (float)auVar34._0_8_ * DAT_1802de98c;
      FUN_18011a05a(auVar35._0_8_);
      fVar38 = DAT_1802dc268;
      uVar19 = (ulonglong)dVar45 & 0xffffffff00000000;
      uVar16 = CONCAT44(uVar14,0x41200000);
      FUN_18013d2c2("Curve Tessellation Tolerance",puVar20 + 0x4e,DAT_1802de984,DAT_1802dc268,uVar16
                    ,"%.2f",uVar19);
      if ((float)puVar20[0x4e] <= fVar38 && fVar38 != (float)puVar20[0x4e]) {
        puVar20[0x4e] = 0x3dcccccd;
      }
      pcVar43 = "%.2f";
      uVar19 = CONCAT44((int)(uVar19 >> 0x20),0x600);
      uVar16 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),0x40a00000);
      FUN_18013d2c2("Circle Tessellation Max Error",local_f8 + 0x4f,DAT_1802de990,DAT_1802dc268,
                    uVar16,"%.2f",uVar19);
      uVar14 = (undefined4)((ulonglong)uVar16 >> 0x20);
      cVar13 = FUN_180110b56();
      if (cVar13 != '\0') {
        local_100 = 0;
        FUN_180119e05(&local_108);
        iVar22 = 0;
        FUN_180116a8b(&local_108,0,&local_100);
        cVar13 = FUN_18011a917();
        if (cVar13 != '\0') {
          FUN_18013309a("(R = radius, N = approx number of segments)",0);
          FUN_1801377c5();
          uVar16 = FUN_180116bd5();
          uVar41 = CONCAT44(uVar14,0xbf800000);
          FUN_1801023ca(&local_100,"R: MMM\nN: MMM",0,0,uVar41);
          fVar9 = _UNK_180329104;
          fVar8 = DAT_180328f04;
          fVar26 = DAT_1802dc2d0;
          fVar38 = DAT_1802dbb2c;
          fVar10 = (float)local_100;
          do {
            uVar44 = (undefined4)((ulonglong)pcVar43 >> 0x20);
            fVar39 = ((float)iVar22 * _DAT_1803290f0) / fVar8 + fVar26;
            FUN_18011a496();
            uVar14 = FUN_18018f50a(uVar16);
            FUN_1801330a5("R: %.f\nN: %d",(double)fVar39,uVar14);
            uVar25 = -(uint)(fVar39 + fVar39 <= fVar10);
            fVar3 = (float)(~uVar25 & (uint)(fVar39 + fVar39) | uVar25 & (uint)fVar10);
            fVar27 = (float)FUN_1802851f0(fVar3 * fVar38);
            FUN_180119e05(&local_100);
            uVar14 = FUN_18010129b(0);
            local_108 = CONCAT44(fVar9 + (float)((ulonglong)local_100 >> 0x20),
                                 fVar27 + (float)local_100);
            pcVar43 = (char *)CONCAT44(uVar44,0x3f800000);
            uVar41 = uVar41 & 0xffffffff00000000;
            FUN_18019355a(uVar16,&local_108,fVar39,uVar14,uVar41,pcVar43);
            local_108 = CONCAT44(0x430c0000,fVar3);
            FUN_18013783d(&local_108);
            FUN_18011949a();
            FUN_180119893();
            uVar14 = (undefined4)(uVar41 >> 0x20);
            iVar22 = iVar22 + 1;
          } while (iVar22 != 8);
          thunk_FUN_18010f900();
        }
      }
      FUN_180119893();
      FUN_180124063(
                   "When drawing circle primitives with \"num_segments == 0\" tessellation will be calculated automatically."
                   );
      puVar20 = local_f8;
      uVar44 = DAT_1802de990;
      uVar19 = uVar19 & 0xffffffff00000000;
      FUN_18013d2c2("Global Alpha",local_f8 + 3,DAT_1802de990,DAT_1802de790,
                    CONCAT44(uVar14,0x3f800000),"%.2f",uVar19);
      FUN_18013d2c2("Disabled Alpha",puVar20 + 4,uVar44,0,0x3f800000,"%.2f",
                    uVar19 & 0xffffffff00000000);
      FUN_180119893();
      FUN_180124063(
                   "Additional alpha multiplier for disabled items (multiply over current value of Alpha)."
                   );
      FUN_18011a356();
      FUN_180154c1a();
    }
    FUN_180152a30();
  }
  FUN_18011a356();
  return;
}

