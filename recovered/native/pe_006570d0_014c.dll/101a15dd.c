/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a15dd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a15dd(char *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 *puVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *_Str;
  size_t sVar13;
  float *pfVar14;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  double local_5c;
  undefined8 local_54;
  double local_4c;
  char *local_44;
  undefined8 local_40;
  float fStack_38;
  float fStack_34;
  char *local_30;
  ulonglong local_2c;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_88;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcd90;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_101032c6("imgui_demo.cpp",0x2170,"Tools/Style Editor");
  local_24 = (undefined4 *)FUN_100fcb2d();
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a3954) &&
     (FUN_1022c0d0(&DAT_103a3954), DAT_103a3954 == -1)) {
    local_14 = 0;
    FUN_100f89cc();
    local_14 = 0xffffffff;
    FUN_1022c180(&DAT_103a3954);
  }
  if ((param_1 == (char *)0x0) && ((DAT_103a3958 & 1) == 0)) {
    FUN_1025b2d0(&DAT_103a3408,local_24,0x54c);
  }
  DAT_103a3958 = 1;
  local_30 = &DAT_103a3408;
  if (param_1 != (char *)0x0) {
    local_30 = param_1;
  }
  local_40 = (double)(ulonglong)(uint)local_24[0x151];
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  fVar16 = (float10)FUN_10111c69();
  local_78 = (float)fVar16;
  FUN_1011520a(local_78 * DAT_102b70e0);
  FUN_10132656("General");
  iVar10 = FUN_1010330d();
  if ((*(byte *)(iVar10 + 4) & 0x10) == 0) {
    FUN_1012d551(
                "Warning: Font scaling will NOT be smooth, because\nImGuiBackendFlags_RendererHasTextures is not set!"
                );
    FUN_1012d551("For instructions, see:");
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c("docs/BACKENDS.md","https://github.com/ocornut/imgui/blob/master/docs/BACKENDS.md")
    ;
  }
  fStack_38 = (float)(int)fStack_38;
  fStack_34 = (float)(int)fStack_34;
  local_40 = (double)CONCAT44((int)local_40._4_4_,(int)(float)local_40);
  cVar9 = FUN_101ac0ab("Colors##Selector");
  if (cVar9 != '\0') {
    FUN_1025b2d0(&DAT_103a3408,local_24,0x54c);
  }
  fStack_38 = (float)(int)fStack_38;
  fStack_34 = (float)(int)fStack_34;
  local_40 = (double)CONCAT44((float)(int)local_40._4_4_,(float)(int)(float)local_40);
  FUN_1011e997("Fonts##Selector");
  puVar15 = local_24;
  cVar9 = FUN_10137f3c();
  if (cVar9 != '\0') {
    puVar15[0x152] = *puVar15;
  }
  FUN_10114a0e(0,0);
  fVar16 = (float10)FUN_10111f20();
  FUN_1012d08c(" (out %.2f)",(double)fVar16);
  FUN_10137f3c();
  iVar10 = FUN_1010330d();
  FUN_10111871(*(undefined1 *)(iVar10 + 0x46));
  FUN_10137f3c();
  FUN_10115d65("When io.ConfigDpiScaleFonts is set, this value is automatically overwritten.");
  FUN_10111961();
  local_5c = (double)CONCAT44(local_5c._4_4_,puVar15 + 0x15);
  cVar9 = FUN_1013d285("FrameRounding",puVar15 + 0x15,0,0x41400000,&DAT_10338657,0);
  if (cVar9 != '\0') {
    puVar15[0x25] = puVar15[0x15];
  }
  local_2c._0_1_ = 0.0 < (float)puVar15[8];
  cVar9 = FUN_1012ff1a("WindowBorder",&local_2c);
  if (cVar9 != '\0') {
    uVar11 = (float)local_40;
    if ((char)local_2c == '\0') {
      uVar11 = 0;
    }
    puVar15[8] = uVar11;
  }
  FUN_10114a0e(0,0xbf800000);
  local_88 = (double)CONCAT44(local_88._4_4_,local_24 + 0x16);
  local_2c._0_1_ = 0.0 < (float)local_24[0x16];
  cVar9 = FUN_1012ff1a("FrameBorder",&local_2c);
  if (cVar9 != '\0') {
    uVar11 = (float)local_40;
    if ((char)local_2c == '\0') {
      uVar11 = 0;
    }
    *local_88._0_4_ = uVar11;
  }
  FUN_10114a0e(0,0xbf800000);
  local_4c = (double)CONCAT44(local_4c._4_4_,local_24 + 0x12);
  local_2c = CONCAT71(local_2c._1_7_,0.0 < (float)local_24[0x12]);
  cVar9 = FUN_1012ff1a("PopupBorder",&local_2c);
  if (cVar9 != '\0') {
    uVar11 = (float)local_40;
    if ((char)local_2c == '\0') {
      uVar11 = 0;
    }
    *local_4c._0_4_ = uVar11;
  }
  local_2c = 0;
  cVar9 = FUN_1012e1b7("Save Ref",&local_2c);
  puVar7 = local_24;
  if (cVar9 != '\0') {
    FUN_1025b2d0(&DAT_103a3408,local_24,0x54c);
    FUN_1025b2d0(local_30,puVar7,0x54c);
  }
  FUN_10114a0e(0,0xbf800000);
  local_2c = 0;
  cVar9 = FUN_1012e1b7("Revert Ref",&local_2c);
  if (cVar9 != '\0') {
    FUN_1025b2d0(local_24,local_30,0x54c);
  }
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  FUN_10132656("Details");
  cVar9 = FUN_1014e2f8("##tabs",0);
  if (cVar9 != '\0') {
    cVar9 = FUN_1014fafc("Sizes",0,0);
    if (cVar9 != '\0') {
      if ((float)local_40 <= DAT_102b8ac0) {
        local_40._0_4_ = DAT_102b8ac0;
      }
      FUN_10132656("Main");
      puVar7 = local_24;
      local_44 = (char *)(puVar15 + 8);
      FUN_1013d2dc("WindowPadding",local_24 + 5,0,0x41a00000,&DAT_10338657,0);
      FUN_1013d2dc("FramePadding",puVar7 + 0x13,0,0x41a00000,&DAT_10338657,0);
      FUN_1013d2dc("ItemSpacing",puVar7 + 0x17,0,0x41a00000,&DAT_10338657,0);
      FUN_1013d2dc("ItemInnerSpacing",puVar7 + 0x19,0,0x41a00000,&DAT_10338657,0);
      FUN_1013d2dc("TouchExtraPadding",puVar7 + 0x1d,0,0x41200000,&DAT_10338657,0);
      FUN_1013d285("IndentSpacing",puVar7 + 0x1f,0,0x41f00000,&DAT_10338657,0);
      FUN_1013d285("GrabMinSize",puVar7 + 0x24,0x3f800000,0x41a00000,&DAT_10338657,0);
      FUN_10132656("Borders");
      FUN_1013d285("WindowBorderSize",local_44,0,(float)local_40,&DAT_10338657,0);
      FUN_1013d285("ChildBorderSize",puVar7 + 0x10,0,(float)local_40,&DAT_10338657,0);
      FUN_1013d285("PopupBorderSize",SUB84(local_4c,0),0,(float)local_40,&DAT_10338657,0);
      FUN_1013d285("FrameBorderSize",SUB84(local_88,0),0,(float)local_40,&DAT_10338657,0);
      FUN_10132656("Rounding");
      FUN_1013d285("WindowRounding",puVar7 + 7,0,0x41400000,&DAT_10338657,0);
      FUN_1013d285("ChildRounding",puVar7 + 0xf,0,0x41400000,&DAT_10338657,0);
      FUN_1013d285("FrameRounding",SUB84(local_5c,0),0,0x41400000,&DAT_10338657,0);
      FUN_1013d285("PopupRounding",puVar7 + 0x11,0,0x41400000,&DAT_10338657,0);
      FUN_1013d285("GrabRounding",puVar7 + 0x25,0,0x41400000,&DAT_10338657,0);
      FUN_10132656("Scrollbar");
      FUN_1013d285("ScrollbarSize",puVar7 + 0x21,0x3f800000,0x41a00000,&DAT_10338657,0);
      FUN_1013d285("ScrollbarRounding",puVar7 + 0x22,0,0x41400000,&DAT_10338657,0);
      FUN_1013d285("ScrollbarPadding",puVar7 + 0x23,0,0x41200000,&DAT_10338657,0);
      FUN_10132656("Tabs");
      FUN_1013d285("TabBorderSize",puVar7 + 0x2a,0,(float)local_40,&DAT_10338657,0);
      FUN_1013d285("TabBarBorderSize",puVar7 + 0x2f,0,(float)local_40,&DAT_10338657,0);
      fVar3 = DAT_102b6c58;
      if (DAT_102b6c58 <= (float)local_40) {
        fVar3 = (float)local_40;
      }
      FUN_1013d285("TabBarOverlineSize",puVar7 + 0x30,0,fVar3,&DAT_10338657,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10137f3c();
      FUN_10137f3c();
      FUN_10137f3c();
      FUN_10137f3c();
      FUN_1013d285("TabRounding",puVar7 + 0x29,0,0x41400000,&DAT_10338657,0);
      FUN_10132656("Tables");
      FUN_1013d2dc("CellPadding",puVar7 + 0x1b,0,0x41a00000,&DAT_10338657,0);
      FUN_1013d3e7("TableAngledHeadersAngle",puVar7 + 0x31,0xc2480000,0x42480000,"%.0f deg",0);
      FUN_1013d2dc("TableAngledHeadersTextAlign",puVar7 + 0x32,0,0x3f800000,"%.2f",0);
      FUN_10132656("Trees");
      uVar11 = FUN_101ac19f();
      cVar9 = FUN_10132c48("TreeLinesFlags",uVar11,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      if (cVar9 != '\0') {
        iVar10 = -0xc;
        do {
          iVar1 = *(int *)((int)&PTR_DAT_10302094 + iVar10);
          local_2c = 0;
          iVar2 = local_24[0x34];
          uVar11 = FUN_101ac19f();
          cVar9 = FUN_10133727(uVar11,iVar2 == iVar1,0,&local_2c);
          if (cVar9 != '\0') {
            local_24[0x34] = iVar1;
          }
          iVar10 = iVar10 + 4;
        } while (iVar10 != 0);
        FUN_101334a7();
      }
      puVar15 = local_24;
      FUN_1013d285("TreeLinesSize",local_24 + 0x35,0,(float)local_40,&DAT_10338657,0);
      FUN_1013d285("TreeLinesRounding",puVar15 + 0x36,0,0x41400000,&DAT_10338657,0);
      FUN_10132656("Windows");
      FUN_1013d2dc("WindowTitleAlign",puVar15 + 0xc,0,0x3f800000,"%.2f",0);
      FUN_1013d285("WindowBorderHoverPadding",puVar15 + 9,0x3f800000,0x41a00000,&DAT_10338657,0);
      local_2c = CONCAT44(local_2c._4_4_,puVar15[0xe] + 1);
      cVar9 = FUN_10133e42("WindowMenuButtonPosition",&local_2c,&DAT_10355fd5,0xffffffff);
      if (cVar9 != '\0') {
        puVar15[0xe] = (int)local_2c + -1;
      }
      FUN_10132656("Widgets");
      FUN_1013d285("ColorMarkerSize",puVar15 + 0x3a,0,0x41000000,&DAT_10338657,0);
      FUN_10133e42("ColorButtonPosition",puVar15 + 0x3b,&DAT_10355fda,0xffffffff);
      FUN_1013d2dc("ButtonTextAlign",puVar15 + 0x3c,0,0x3f800000,"%.2f",0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1013d2dc("SelectableTextAlign",puVar15 + 0x3e,0,0x3f800000,"%.2f",0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1013d285("SeparatorSize",puVar15 + 0x40,0,0x41200000,&DAT_10338657,0);
      FUN_1013d285("SeparatorTextBorderSize",puVar15 + 0x41,0,0x41200000,&DAT_10338657,0);
      FUN_1013d2dc("SeparatorTextAlign",puVar15 + 0x42,0,0x3f800000,"%.2f",0);
      FUN_1013d2dc("SeparatorTextPadding",puVar15 + 0x44,0,0x42200000,&DAT_10338657,0);
      FUN_1013d285("LogSliderDeadzone",puVar15 + 0x26,0,0x41400000,&DAT_10338657,0);
      FUN_1013d285("ImageRounding",puVar15 + 0x27,0,0x41400000,&DAT_10338657,0);
      FUN_1013d285("ImageBorderSize",puVar15 + 0x28,0,(float)local_40,&DAT_10338657,0);
      FUN_10132656("Docking");
      FUN_1012ff1a("DockingNodeHasCloseButton",puVar15 + 0x4a);
      FUN_1013d285("DockingSeparatorSize",puVar15 + 0x4b,0,0x41400000,&DAT_10338657,0);
      FUN_10132656("Tooltips");
      bVar8 = true;
      do {
        bVar6 = bVar8;
        pcVar12 = "HoverFlagsForTooltipNav";
        if (bVar6) {
          pcVar12 = "HoverFlagsForTooltipMouse";
        }
        cVar9 = FUN_10148b8c(pcVar12,0);
        if (cVar9 != '\0') {
          puVar15 = local_24 + (byte)~bVar6 + 0x14f;
          thunk_FUN_10130d81("ImGuiHoveredFlags_DelayNone",puVar15,0x4000);
          thunk_FUN_10130d81("ImGuiHoveredFlags_DelayShort",puVar15,0x8000);
          thunk_FUN_10130d81("ImGuiHoveredFlags_DelayNormal",puVar15,0x10000);
          thunk_FUN_10130d81("ImGuiHoveredFlags_Stationary",puVar15,0x2000);
          thunk_FUN_10130d81("ImGuiHoveredFlags_NoSharedDelay",puVar15,0x20000);
          FUN_10149387();
        }
        bVar8 = false;
      } while (bVar6);
      FUN_10132656(&DAT_1033b389);
      puVar15 = local_24;
      FUN_1013d2dc("DisplayWindowPadding",local_24 + 0x46,0,0x41f00000,&DAT_10338657,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1013d2dc("DisplaySafeAreaPadding",puVar15 + 0x48,0,0x41f00000,&DAT_10338657,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10150ac8();
    }
    cVar9 = FUN_1014fafc("Colors",0,0);
    if (cVar9 != '\0') {
      local_2c = 0;
      cVar9 = FUN_1012e1b7("Export",&local_2c);
      if (cVar9 != '\0') {
        if (DAT_103a395c == 0) {
          FUN_10110666(0xffffffff);
        }
        else {
          FUN_10118381(0xffffffff);
        }
        FUN_10110bf6("ImVec4* colors = GetStyle().Colors;\r\n");
        pfVar14 = (float *)(local_24 + 0x50);
        pcVar12 = local_30 + 0x140;
        iVar10 = 0;
        do {
          _Str = (char *)FUN_100fd567(iVar10);
          if ((DAT_1038a924 != '\x01') ||
             (auVar18[0] = -(*pcVar12 == *(char *)pfVar14),
             auVar18[1] = -(pcVar12[1] == *(char *)((int)pfVar14 + 1)),
             auVar18[2] = -(pcVar12[2] == *(char *)((int)pfVar14 + 2)),
             auVar18[3] = -(pcVar12[3] == *(char *)((int)pfVar14 + 3)),
             auVar18[4] = -(pcVar12[4] == *(char *)(pfVar14 + 1)),
             auVar18[5] = -(pcVar12[5] == *(char *)((int)pfVar14 + 5)),
             auVar18[6] = -(pcVar12[6] == *(char *)((int)pfVar14 + 6)),
             auVar18[7] = -(pcVar12[7] == *(char *)((int)pfVar14 + 7)),
             auVar18[8] = -(pcVar12[8] == *(char *)(pfVar14 + 2)),
             auVar18[9] = -(pcVar12[9] == *(char *)((int)pfVar14 + 9)),
             auVar18[10] = -(pcVar12[10] == *(char *)((int)pfVar14 + 10)),
             auVar18[0xb] = -(pcVar12[0xb] == *(char *)((int)pfVar14 + 0xb)),
             auVar18[0xc] = -(pcVar12[0xc] == *(char *)(pfVar14 + 3)),
             auVar18[0xd] = -(pcVar12[0xd] == *(char *)((int)pfVar14 + 0xd)),
             auVar18[0xe] = -(pcVar12[0xe] == *(char *)((int)pfVar14 + 0xe)),
             auVar18[0xf] = -(pcVar12[0xf] == *(char *)((int)pfVar14 + 0xf)),
             (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar18[0xf] >> 7) << 0xf) != 0xffff)) {
            local_40 = (double)pfVar14[3];
            local_88 = (double)pfVar14[2];
            local_4c = (double)pfVar14[1];
            local_5c = (double)*pfVar14;
            local_44 = _Str;
            sVar13 = _strlen(_Str);
            FUN_10110bf6("colors[ImGuiCol_%s]%*s= ImVec4(%.2ff, %.2ff, %.2ff, %.2ff);\r\n",local_44,
                         0x17 - sVar13,&DAT_10356101,local_5c,local_4c,SUB84(local_88,0),
                         (int)((ulonglong)local_88 >> 0x20),SUB84(local_40,0),
                         (int)((ulonglong)local_40 >> 0x20));
          }
          iVar10 = iVar10 + 1;
          pfVar14 = pfVar14 + 4;
          pcVar12 = pcVar12 + 0x10;
        } while (iVar10 != 0x3f);
        FUN_1011147d();
      }
      FUN_10114a0e(0,0xbf800000);
      fVar16 = (float10)FUN_10111f20();
      local_74 = (float)fVar16;
      FUN_100fb68f(local_74 * DAT_102b710c);
      FUN_10133e42("##output_type",&DAT_103a395c,"To Clipboard",0xffffffff);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a("Only Modified Colors",&DAT_1038a924);
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a3a70) &&
         (FUN_1022c0d0(&DAT_103a3a70), DAT_103a3a70 == -1)) {
        local_14 = 1;
        FUN_100fb460(&DAT_10356101);
        FUN_1022c3a0(&LAB_101ac260);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_103a3a70);
      }
      fVar16 = (float10)FUN_10111f20();
      local_70 = (float)fVar16;
      FUN_100fb638("Filter colors",local_70 * DAT_102b8c90);
      cVar9 = FUN_10130e0c("Opaque",DAT_103a3a74 == 0x1000);
      if (cVar9 != '\0') {
        DAT_103a3a74 = 0x1000;
      }
      FUN_10114a0e(0,0xbf800000);
      cVar9 = FUN_10130e0c("Alpha",DAT_103a3a74 == 0);
      if (cVar9 != '\0') {
        DAT_103a3a74 = 0;
      }
      FUN_10114a0e(0,0xbf800000);
      cVar9 = FUN_10130e0c(&DAT_1033700c,DAT_103a3a74 == 0x4000);
      if (cVar9 != '\0') {
        DAT_103a3a74 = 0x4000;
      }
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      local_2c = DAT_102b8950;
      fVar16 = (float10)FUN_101155d9();
      local_6c = (float)fVar16;
      local_54 = (ulonglong)(uint)(local_6c * DAT_102b710c) << 0x20;
      FUN_10111da2(&local_54,&local_2c,0,0);
      local_2c = 0;
      FUN_1010c081("##colors",&local_2c,0x101,0xc000);
      fVar16 = (float10)FUN_10111f20();
      local_68 = (float)fVar16;
      FUN_1011520a(local_68 * _DAT_10302788);
      pcVar12 = (char *)(local_24 + 0x50);
      local_30 = local_30 + 0x140;
      iVar10 = 0;
      do {
        uVar11 = FUN_100fd567(iVar10);
        cVar9 = FUN_100fb858(uVar11,0);
        if (cVar9 != '\0') {
          FUN_10113358(iVar10);
          local_2c = 0;
          cVar9 = FUN_1012e1b7("?",&local_2c);
          if (cVar9 != '\0') {
            FUN_1011e0ea(iVar10);
          }
          local_40 = (double)CONCAT44(local_40._4_4_,uVar11);
          FUN_10115d65("Flash given color to identify places where it is used.");
          FUN_10114a0e(0,0xbf800000);
          FUN_101438ec("##color",pcVar12,DAT_103a3a74 | 0x40000);
          auVar19[0] = -(*local_30 == *pcVar12);
          auVar19[1] = -(local_30[1] == pcVar12[1]);
          auVar19[2] = -(local_30[2] == pcVar12[2]);
          auVar19[3] = -(local_30[3] == pcVar12[3]);
          auVar19[4] = -(local_30[4] == pcVar12[4]);
          auVar19[5] = -(local_30[5] == pcVar12[5]);
          auVar19[6] = -(local_30[6] == pcVar12[6]);
          auVar19[7] = -(local_30[7] == pcVar12[7]);
          auVar19[8] = -(local_30[8] == pcVar12[8]);
          auVar19[9] = -(local_30[9] == pcVar12[9]);
          auVar19[10] = -(local_30[10] == pcVar12[10]);
          auVar19[0xb] = -(local_30[0xb] == pcVar12[0xb]);
          auVar19[0xc] = -(local_30[0xc] == pcVar12[0xc]);
          auVar19[0xd] = -(local_30[0xd] == pcVar12[0xd]);
          auVar19[0xe] = -(local_30[0xe] == pcVar12[0xe]);
          auVar19[0xf] = -(local_30[0xf] == pcVar12[0xf]);
          if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar19[0xf] >> 7) << 0xf) != 0xffff) {
            FUN_10114a0e(0,local_24[0x19]);
            local_2c = 0;
            cVar9 = FUN_1012e1b7(&DAT_10338aad,&local_2c);
            if (cVar9 != '\0') {
              uVar11 = *(undefined4 *)(pcVar12 + 4);
              uVar4 = *(undefined4 *)(pcVar12 + 8);
              uVar5 = *(undefined4 *)(pcVar12 + 0xc);
              *(undefined4 *)local_30 = *(undefined4 *)pcVar12;
              *(undefined4 *)(local_30 + 4) = uVar11;
              *(undefined4 *)(local_30 + 8) = uVar4;
              *(undefined4 *)(local_30 + 0xc) = uVar5;
            }
            FUN_10114a0e(0,local_24[0x19]);
            local_2c = 0;
            cVar9 = FUN_1012e1b7("Revert",&local_2c);
            if (cVar9 != '\0') {
              uVar11 = *(undefined4 *)(local_30 + 4);
              uVar4 = *(undefined4 *)(local_30 + 8);
              uVar5 = *(undefined4 *)(local_30 + 0xc);
              *(undefined4 *)pcVar12 = *(undefined4 *)local_30;
              *(undefined4 *)(pcVar12 + 4) = uVar11;
              *(undefined4 *)(pcVar12 + 8) = uVar4;
              *(undefined4 *)(pcVar12 + 0xc) = uVar5;
            }
          }
          FUN_10114a0e(0,local_24[0x19]);
          FUN_1012d079((float)local_40,0);
          FUN_10113568();
        }
        iVar10 = iVar10 + 1;
        pcVar12 = pcVar12 + 0x10;
        local_30 = local_30 + 0x10;
      } while (iVar10 != 0x3f);
      FUN_101154f4();
      FUN_1010c644();
      FUN_10150ac8();
    }
    cVar9 = FUN_1014fafc("Fonts",0,0);
    if (cVar9 != '\0') {
      iVar10 = FUN_1010330d();
      FUN_1011e1cb(*(undefined4 *)(iVar10 + 0x2c));
      FUN_10150ac8();
    }
    cVar9 = FUN_1014fafc("Rendering",0,0);
    puVar15 = local_24;
    if (cVar9 != '\0') {
      FUN_1012ff1a("Anti-aliased lines",local_24 + 0x4d);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1012ff1a("Anti-aliased lines use texture",(int)puVar15 + 0x135);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1012ff1a("Anti-aliased fill",(int)puVar15 + 0x136);
      fVar16 = (float10)FUN_10111f20();
      local_64 = (float)fVar16;
      FUN_1011520a(local_64 * DAT_102b8f18);
      FUN_10137f3c();
      if ((float)puVar15[0x4e] <= DAT_102b71b8 && DAT_102b71b8 != (float)puVar15[0x4e]) {
        puVar15[0x4e] = 0x3dcccccd;
      }
      FUN_10137f3c();
      cVar9 = FUN_1010bee1();
      if (cVar9 != '\0') {
        local_2c = 0;
        FUN_10114f9f(&local_54);
        FUN_10111d56(&local_54,0,&local_2c);
        cVar9 = FUN_10115b98();
        if (cVar9 != '\0') {
          FUN_1012d079("(R = radius, N = approx number of segments)",0);
          FUN_10131d29();
          uVar11 = FUN_10111ef5();
          local_4c = (double)CONCAT44(local_4c._4_4_,uVar11);
          FUN_100fdb2e();
          local_88 = (double)(local_2c & 0xffffffff);
          uStack_80 = 0;
          uStack_7c = 0;
          iVar10 = 0;
          do {
            local_30 = (char *)(((float)iVar10 * _DAT_1030278c) / DAT_103025a4 + DAT_102b7100);
            FUN_10115649();
            uVar11 = FUN_101880ee(local_30);
            FUN_1012d08c("R: %.f\nN: %d",(double)(float)local_30,uVar11);
            uVar17 = -(uint)((float)local_30 + (float)local_30 <= (float)local_88._0_4_);
            fVar3 = (float)(~uVar17 & (uint)((float)local_30 + (float)local_30) |
                           uVar17 & (uint)local_88._0_4_);
            local_40 = (double)(ulonglong)(uint)fVar3;
            fStack_38 = 0.0;
            fStack_34 = 0.0;
            fVar16 = (float10)FUN_1026dde0((double)(fVar3 * DAT_102b70e0));
            local_60 = (float)fVar16;
            FUN_10114f9f(&local_2c);
            FUN_100fcb39(0,0x3f800000);
            local_54 = CONCAT44(_UNK_10302794 + (float)(local_2c >> 0x20),local_60 + (float)local_2c
                               );
            FUN_1018bfde();
            local_54 = CONCAT44(0x430c0000,SUB84(local_40,0));
            FUN_10131d8e(&local_54);
            FUN_1011462f();
            FUN_10114a0e(0,0xbf800000);
            iVar10 = iVar10 + 1;
          } while (iVar10 != 8);
          thunk_FUN_1010ad44();
        }
      }
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10137f3c();
      FUN_10137f3c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_101154f4();
      FUN_10150ac8();
    }
    FUN_1014e72b();
  }
  FUN_101154f4();
  *unaff_FS_OFFSET = local_1c;
  return;
}

