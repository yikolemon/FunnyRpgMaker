/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ae19d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ae19d(void)

{
  ulonglong uVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  undefined8 uVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  char *pcVar18;
  int *piVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined4 *puVar28;
  int *piVar29;
  undefined **ppuVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined8 in_stack_fffffffffffffe88;
  undefined *puVar38;
  char *pcVar39;
  undefined *in_stack_fffffffffffffe90;
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined *local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined *puStack_110;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int *local_c0;
  int local_b4;
  undefined8 local_b0;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  local_b0 = 0xfffffffffffffffe;
  cVar9 = FUN_18014d916("Tables & Columns",0);
  if (cVar9 == '\0') {
    return;
  }
  pcVar39 = (char *)CONCAT44(uVar12,0xbf800000);
  FUN_1801023ca(&local_f8,"A",0,0,pcVar39);
  fVar34 = (float)local_f8;
  fVar32 = (float)FUN_18011a43e();
  FUN_180117f98("Tables");
  local_f8 = 0;
  bVar10 = FUN_180134257("Expand all",&local_f8);
  uVar12 = DAT_1802bb8e0;
  FUN_180119893(0,DAT_1802bb8e0);
  local_f8 = 0;
  uVar11 = FUN_180134257("Collapse all",&local_f8);
  local_b4 = CONCAT31(local_b4._1_3_,uVar11);
  FUN_180119893(0,uVar12);
  FUN_180135c3a("Disable tree indentation",&DAT_1804204a9);
  FUN_180119893(0);
  pcVar18 = "Disable the indenting of tree nodes so demo tables can use the full window width.";
  FUN_180124063("Disable the indenting of tree nodes so demo tables can use the full window width.")
  ;
  FUN_180137ca1();
  if (DAT_1804204a9 == '\x01') {
    pcVar18 = (char *)0x0;
    FUN_180101870(0x10);
  }
  local_c0 = (int *)CONCAT71(local_c0._1_7_,bVar10 | (byte)local_b4);
  if ((bVar10 | (byte)local_b4) == 1) {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Basic";
  cVar9 = FUN_18014c2cb("Basic");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x171c,"Tables/Basic");
    FUN_180124063(
                 "Using TableNextRow() + calling TableSetColumnIndex() _before_ each cell, in a loop."
                 );
    local_f8 = 0;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    iVar23 = 0;
    cVar9 = FUN_180164c18("table1",3,0,&local_f8,uVar26);
    if (cVar9 != '\0') {
      do {
        iVar21 = 0;
        FUN_18016a67b(0);
        do {
          FUN_18016a960(iVar21);
          FUN_1801330a5("Row %d Column %d",iVar23,iVar21);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 4);
      FUN_180168430();
    }
    FUN_180124063("Using TableNextRow() + calling TableNextColumn() _before_ each cell, manually.");
    local_f8 = 0;
    uVar26 = uVar26 & 0xffffffff00000000;
    iVar23 = 0;
    cVar9 = FUN_180164c18("table2",3,0,&local_f8,uVar26);
    if (cVar9 != '\0') {
      do {
        FUN_18016a67b(0);
        FUN_18016ab34();
        FUN_1801330a5("Row %d",iVar23);
        FUN_18016ab34();
        FUN_1801330a5("Some contents");
        FUN_18016ab34();
        FUN_1801330a5();
        iVar23 = iVar23 + 1;
      } while (iVar23 != 4);
      FUN_180168430();
    }
    FUN_180124063(
                 "Only using TableNextColumn(), which tends to be convenient for tables where every cell contains the same type of contents.\n This is also more similar to the old NextColumn() function of the Columns API, and provided to facilitate the Columns->Tables API transition."
                 );
    local_f8 = 0;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table3";
    iVar23 = 0;
    cVar9 = FUN_180164c18("table3",3,0,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      do {
        FUN_18016ab34();
        pcVar18 = "Item %d";
        FUN_1801330a5("Item %d",iVar23);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 0xe);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Borders, background";
  cVar9 = FUN_18014c2cb("Borders, background");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x175b,"Tables/Borders, background");
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_RowBg",&DAT_180408cc0,0x40);
    thunk_FUN_18013698f("ImGuiTableFlags_Borders",&DAT_180408cc0,0x780);
    uVar12 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "ImGuiTableFlags_Borders\n = ImGuiTableFlags_BordersInnerV\n | ImGuiTableFlags_BordersOuterV\n | ImGuiTableFlags_BordersInnerH\n | ImGuiTableFlags_BordersOuterH"
                 );
    FUN_180119fae(0);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersH",&DAT_180408cc0,0x180);
    FUN_180119fae(0);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersOuterH",&DAT_180408cc0,0x100);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersInnerH",&DAT_180408cc0,0x80);
    FUN_18011a002(0);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersV",&DAT_180408cc0,0x600);
    FUN_180119fae(0);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersOuterV",&DAT_180408cc0,0x400);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersInnerV",&DAT_180408cc0,0x200);
    FUN_18011a002(0);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersOuter",&DAT_180408cc0,0x500);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersInner",&DAT_180408cc0,0x280);
    FUN_18011a002(0);
    FUN_18013799d();
    FUN_1801330a5("Cell contents:");
    FUN_180119893(0,uVar12);
    FUN_180136dfd("Text",&DAT_1804204ac,0);
    FUN_180119893(0,uVar12);
    FUN_180136dfd("FillButton",&DAT_1804204ac,1);
    FUN_180135c3a("Display headers",&DAT_1804204aa);
    thunk_FUN_18013698f("ImGuiTableFlags_NoBordersInBody",&DAT_180408cc0,0x800);
    FUN_180119893(0);
    FUN_180124063("Disable vertical borders in columns Body (borders will always appear in Headers)"
                 );
    FUN_1801c0c76();
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table1";
    cVar9 = FUN_180164c18("table1",3,DAT_180408cc0,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      if (DAT_1804204aa == '\x01') {
        FUN_18016a158("One",0,0,0);
        FUN_18016a158("Two",0,0,0);
        FUN_18016a158("Three",0,0,0);
        FUN_18016b3e4();
      }
      uVar22 = DAT_1802de9b4;
      iVar23 = 0;
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          pcVar18 = (char *)&local_f8;
          FUN_1801bf199(&local_f8,"Hello %d,%d",iVar21,iVar23);
          if (DAT_1804204ac == 1) {
            local_138 = (ulonglong)uVar22;
            pcVar18 = (char *)&local_f8;
            FUN_180134257(&local_f8,&local_138);
          }
          else if (DAT_1804204ac == 0) {
            pcVar18 = (char *)&local_f8;
            FUN_18013309a(&local_f8,0);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Resizable, stretch";
  cVar9 = FUN_18014c2cb("Resizable, stretch");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x17a2,"Tables/Resizable, stretch");
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408cc4,1);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersV",&DAT_180408cc4,0x600);
    FUN_180119893(0);
    FUN_180124063(
                 "Using the _Resizable flag automatically enables the _BordersInnerV flag as well, this is why the resize borders are still showing when unchecking this."
                 );
    FUN_1801c0c76();
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table1";
    cVar9 = FUN_180164c18("table1",3,DAT_180408cc4,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      iVar23 = 0;
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          pcVar18 = "Hello %d,%d";
          FUN_1801330a5("Hello %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Resizable, fixed";
  cVar9 = FUN_18014c2cb("Resizable, fixed");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x17c2,"Tables/Resizable, fixed");
    FUN_180124063(
                 "Using _Resizable + _SizingFixedFit flags.\nFixed-width columns generally makes more sense if you want to use horizontal scrolling.\n\nDouble-click a column border to auto-fit the column to its contents."
                 );
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_NoHostExtendX",&DAT_180408cc8,0x10000);
    FUN_1801c0c76();
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table1";
    cVar9 = FUN_180164c18("table1",3,DAT_180408cc8,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      iVar23 = 0;
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          pcVar18 = "Hello %d,%d";
          FUN_1801330a5("Hello %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Resizable, mixed";
  cVar9 = FUN_18014c2cb("Resizable, mixed");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x17e4,"Tables/Resizable, mixed");
    FUN_180124063(
                 "Using TableSetupColumn() to alter resizing policy on a per-column basis.\n\nWhen combining Fixed and Stretch columns, generally you only want one, maybe two trailing columns to use _WidthStretch."
                 );
    local_f8 = 0;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table1",3,0x27c7,&local_f8,uVar26);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158(&DAT_18036cebd,0x10,0,0);
      FUN_18016a158(&DAT_18036ce03,0x10,0,0);
      FUN_18016a158(&DAT_18036cd9c,8,0,0);
      FUN_18016b3e4();
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          pcVar18 = "_WidthFixed";
          if (iVar21 == 2) {
            pcVar18 = "_WidthStretch";
          }
          FUN_1801330a5("%s %d,%d",pcVar18 + 6,iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    local_f8 = 0;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table2";
    cVar9 = FUN_180164c18("table2",6,0x27c7,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158(&DAT_18036cebd,0x10,0,0);
      FUN_18016a158(&DAT_18036ce03,0x10,0,0);
      FUN_18016a158(&DAT_18036cd9c,0x12,0,0);
      FUN_18016a158("DDD",8,0,0);
      FUN_18016a158(&DAT_18036cb1d,8,0,0);
      FUN_18016a158("FFF",10,0,0);
      FUN_18016b3e4();
      do {
        FUN_18016a67b(0);
        uVar22 = 0;
        do {
          FUN_18016a960(uVar22);
          pcVar20 = "_WidthFixed";
          if (2 < uVar22) {
            pcVar20 = "_WidthStretch";
          }
          pcVar18 = "%s %d,%d";
          FUN_1801330a5("%s %d,%d",pcVar20 + 6,uVar22,iVar23);
          uVar22 = uVar22 + 1;
        } while (uVar22 != 6);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Reorderable, hideable, with headers";
  cVar9 = FUN_18014c2cb("Reorderable, hideable, with headers");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1816,"Tables/Reorderable, hideable, with headers");
    FUN_180124063(
                 "Click and drag column headers to reorder columns.\n\nRight-click on a header to open a context menu."
                 );
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408ccc,1);
    thunk_FUN_18013698f("ImGuiTableFlags_Reorderable",&DAT_180408ccc,2);
    thunk_FUN_18013698f("ImGuiTableFlags_Hideable",&DAT_180408ccc,4);
    thunk_FUN_18013698f("ImGuiTableFlags_NoBordersInBody",&DAT_180408ccc,0x800);
    thunk_FUN_18013698f("ImGuiTableFlags_NoBordersInBodyUntilResize",&DAT_180408ccc,0x1000);
    FUN_180119893(0);
    FUN_180124063(
                 "Disable vertical borders in columns Body until hovered for resize (borders will always appear in Headers)"
                 );
    thunk_FUN_18013698f("ImGuiTableFlags_HighlightHoveredColumn",&DAT_180408ccc,0x10000000);
    FUN_1801c0c76();
    local_f8 = 0;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table1",3,DAT_180408ccc,&local_f8,uVar26);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158("One",0,0,0);
      FUN_18016a158("Two",0,0,0);
      FUN_18016a158("Three",0,0,0);
      FUN_18016b3e4();
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          FUN_1801330a5("Hello %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 6);
      FUN_180168430();
    }
    local_f8 = 0;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table2";
    cVar9 = FUN_180164c18("table2",3,DAT_180408ccc | 0x2000,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158("One",0,0,0);
      FUN_18016a158("Two",0,0,0);
      FUN_18016a158("Three",0,0,0);
      FUN_18016b3e4();
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          pcVar18 = "Fixed %d,%d";
          FUN_1801330a5("Fixed %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 6);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Padding";
  cVar9 = FUN_18014c2cb("Padding");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1852,"Tables/Padding");
    FUN_180124063(
                 "We often want outer padding activated when any using features which makes the edges of a column visible:\ne.g.:\n- BorderOuterV\n- any form of row selection\nBecause of this, activating BorderOuterV sets the default to PadOuterX. Using PadOuterX or NoPadOuterX you can override the default.\n\nActual padding values are using style.CellPadding.\n\nIn this demo we don\'t show horizontal borders to emphasize how they don\'t affect default horizontal padding."
                 );
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_PadOuterX",&DAT_180408cd0,0x200000);
    uVar12 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063("Enable outer-most padding (default if ImGuiTableFlags_BordersOuterV is set)");
    thunk_FUN_18013698f("ImGuiTableFlags_NoPadOuterX",&DAT_180408cd0,0x400000);
    FUN_180119893(0,uVar12);
    FUN_180124063("Disable outer-most padding (default if ImGuiTableFlags_BordersOuterV is not set)"
                 );
    thunk_FUN_18013698f("ImGuiTableFlags_NoPadInnerX",&DAT_180408cd0,0x800000);
    FUN_180119893(0);
    FUN_180124063(
                 "Disable inner padding between columns (double inner padding if BordersOuterV is on, single inner padding if BordersOuterV is off)"
                 );
    thunk_FUN_18013698f("ImGuiTableFlags_BordersOuterV",&DAT_180408cd0,0x400);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersInnerV",&DAT_180408cd0,0x200);
    FUN_180135c3a("show_headers",&DAT_1804204b0);
    FUN_1801c0c76();
    local_f8 = 0;
    cVar9 = FUN_180164c18("table_padding",3,DAT_180408cd0,&local_f8,
                          (ulonglong)pcVar39 & 0xffffffff00000000);
    uVar22 = (uint)((ulonglong)in_stack_fffffffffffffe90 >> 0x20);
    if (cVar9 != '\0') {
      if (DAT_1804204b0 == '\x01') {
        FUN_18016a158("One",0,0,0);
        FUN_18016a158("Two",0,0,0);
        FUN_18016a158("Three",0,0,0);
        FUN_18016b3e4();
      }
      uVar17 = DAT_1802de9b4;
      iVar23 = 0;
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          if (iVar23 == 0) {
            FUN_180111069(&local_f8);
            FUN_1801330a5("Avail %.2f",(double)(float)local_f8);
          }
          else {
            FUN_1801bf199(&local_f8,"Hello %d,%d",iVar21,iVar23);
            local_138 = (ulonglong)uVar17;
            FUN_180134257(&local_f8,&local_138);
          }
          uVar22 = (uint)((ulonglong)in_stack_fffffffffffffe90 >> 0x20);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_180124063("Setting style.CellPadding to (0,0) or a custom value.");
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_Borders",&DAT_180408cd4,0x780);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersH",&DAT_180408cd4,0x180);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersV",&DAT_180408cd4,0x600);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersInner",&DAT_180408cd4,0x280);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersOuter",&DAT_180408cd4,0x500);
    thunk_FUN_18013698f("ImGuiTableFlags_RowBg",&DAT_180408cd4,0x40);
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408cd4,1);
    FUN_180135c3a("show_widget_frame_bg",&DAT_180408cd8);
    in_stack_fffffffffffffe90 = (undefined *)((ulonglong)uVar22 << 0x20);
    puVar38 = &DAT_180368758;
    FUN_180141402("CellPadding",&DAT_1804204b4,0,DAT_1802dc2dc,&DAT_180368758,
                  in_stack_fffffffffffffe90);
    FUN_1801c0c76();
    FUN_180101bbb(0x11,&DAT_1804204b4);
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)puVar38 & 0xffffffff00000000);
    cVar9 = FUN_180164c18("table_padding_2",3,DAT_180408cd4,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      if (DAT_180408cd8 != '\x01') {
        FUN_1801013be(7,0);
      }
      uVar22 = DAT_1802de9b4;
      puVar24 = &DAT_1804204c0;
      uVar26 = 0;
      do {
        FUN_18016ab34();
        if (DAT_1804205b0 == '\0') {
          *puVar24 = 0x656d2074696465;
        }
        FUN_1800ffdb5(uVar22);
        FUN_18011810d(uVar26 & 0xffffffff);
        pcVar39 = (char *)0x0;
        in_stack_fffffffffffffe90 = (undefined *)0x0;
        FUN_180145e1f("##cell",puVar24,0x10,0,0,0);
        FUN_18011834f();
        uVar26 = uVar26 + 1;
        puVar24 = puVar24 + 2;
      } while (uVar26 != 0xf);
      if (DAT_180408cd8 == '\0') {
        FUN_180101625(1);
      }
      DAT_1804205b0 = '\x01';
      FUN_180168430();
    }
    pcVar18 = (char *)0x0;
    FUN_180101ccb(1);
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Sizing policies";
  cVar9 = FUN_18014c2cb("Sizing policies");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x18c0,"Tables/Explicit widths");
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408cdc,1);
    thunk_FUN_18013698f("ImGuiTableFlags_NoHostExtendX",&DAT_180408cdc,0x10000);
    FUN_1801c0c76();
    fVar36 = DAT_1802dbb40 * fVar34;
    uVar26 = 0;
    do {
      FUN_18011810d(uVar26 & 0xffffffff);
      FUN_1800ffdb5(fVar36);
      puVar2 = &DAT_180408ce0 + uVar26;
      FUN_1801c0c80(puVar2);
      local_f8 = 0;
      uVar25 = (ulonglong)pcVar39 & 0xffffffff00000000;
      cVar9 = FUN_180164c18("table1",3,DAT_180408cdc | *puVar2,&local_f8,uVar25);
      if (cVar9 != '\0') {
        iVar23 = 3;
        do {
          FUN_18016a67b(0,0);
          FUN_18016ab34();
          FUN_1801330a5("Oh dear");
          FUN_18016ab34();
          FUN_1801330a5("Oh dear");
          FUN_18016ab34();
          FUN_1801330a5();
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        FUN_180168430();
      }
      local_f8 = 0;
      pcVar39 = (char *)(uVar25 & 0xffffffff00000000);
      cVar9 = FUN_180164c18("table2",3,DAT_180408cdc | *puVar2,&local_f8,pcVar39);
      if (cVar9 != '\0') {
        iVar23 = 3;
        do {
          FUN_18016a67b(0,0);
          FUN_18016ab34();
          FUN_1801330a5(&DAT_18036cebc);
          FUN_18016ab34();
          FUN_1801330a5(&DAT_18036cdfe);
          FUN_18016ab34();
          FUN_1801330a5();
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
        FUN_180168430();
      }
      FUN_18011834f();
      uVar12 = (undefined4)((ulonglong)pcVar39 >> 0x20);
      uVar26 = uVar26 + 1;
    } while (uVar26 != 4);
    FUN_1801377c5();
    FUN_18013309a("Advanced",0);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "This section allows you to interact and see the effect of various sizing policies depending on whether Scroll is enabled and the contents of your columns."
                 );
    FUN_1801c0c22();
    FUN_180117f98("Advanced");
    FUN_18011a05a(fVar36);
    FUN_1801c0c80(&DAT_180408cf0);
    FUN_180139992("Contents",&DAT_1804205b4,"Show width",0xffffffff);
    if (DAT_1804205b4 == 4) {
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Be mindful that using right-alignment (e.g. size.x = -FLT_MIN) creates a feedback loop where contents width can feed into auto-column width can feed into contents width."
                   );
    }
    in_stack_fffffffffffffe90 = &DAT_18036b4b0;
    uVar26 = CONCAT44(uVar12,0x40);
    FUN_18013d731("Columns",&DAT_180408cf4,DAT_1802dc268,1,uVar26,&DAT_18036b4b0,0x600);
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408cf0,1);
    thunk_FUN_18013698f("ImGuiTableFlags_PreciseWidths",&DAT_180408cf0,0x80000);
    FUN_180119893(0);
    FUN_180124063(
                 "Disable distributing remainder width to stretched columns (width allocation on a 100-wide table with 3 columns: Without this flag: 33,33,34. With this flag: 33,33,33). With larger number of columns, resizing will appear to be less smooth."
                 );
    thunk_FUN_18013698f("ImGuiTableFlags_ScrollX",&DAT_180408cf0,0x1000000);
    thunk_FUN_18013698f("ImGuiTableFlags_ScrollY",&DAT_180408cf0,0x2000000);
    thunk_FUN_18013698f("ImGuiTableFlags_NoClip",&DAT_180408cf0,0x100000);
    FUN_18011a356();
    FUN_18011834f();
    FUN_1801c0c76();
    local_f8 = (ulonglong)(uint)(DAT_180328f04 * fVar32) << 0x20;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table2";
    cVar9 = FUN_180164c18("table2",DAT_180408cf4,DAT_180408cf0,&local_f8,pcVar39);
    uVar22 = DAT_1802de9b4;
    if (cVar9 != '\0') {
      if (0 < DAT_180408cf4) {
        iVar23 = 0;
        do {
          FUN_18016ab34();
          iVar21 = FUN_18016a946();
          uVar12 = FUN_18016a661();
          FUN_18011810d(iVar23);
          pcVar18 = (char *)&local_f8;
          FUN_1801bf199(&local_f8,"Hello %d,%d",iVar21,uVar12);
          switch(DAT_1804205b4) {
          case 0:
            FUN_180111069(&local_138);
            pcVar18 = "W: %.1f";
            FUN_1801330a5(&DAT_180368738,(double)(float)local_138);
            break;
          case 1:
            pcVar18 = (char *)&local_f8;
            FUN_18013309a(&local_f8,0);
            break;
          case 2:
            pcVar20 = "longeeer";
            if (iVar21 == 0) {
              pcVar20 = "long";
            }
            pcVar18 = "Some %s text %d,%d\nOver two lines..";
            FUN_1801330a5("Some %s text %d,%d\nOver two lines..",pcVar20,iVar21,uVar12);
            break;
          case 3:
            local_138 = 0;
            pcVar18 = (char *)&local_f8;
            FUN_180134257(&local_f8,&local_138);
            break;
          case 4:
            local_138 = (ulonglong)uVar22;
            pcVar18 = (char *)&local_f8;
            FUN_180134257(&local_f8,&local_138);
            break;
          case 5:
            FUN_1800ffdb5(uVar22);
            pcVar39 = (char *)0x0;
            in_stack_fffffffffffffe90 = (undefined *)0x0;
            pcVar18 = "##";
            FUN_180145e1f(&DAT_18037a670,&DAT_1804205c0,0x20,0,0,0);
          }
          FUN_18011834f();
          iVar23 = iVar23 + 1;
        } while (iVar23 < DAT_180408cf4 * 10);
      }
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Vertical scrolling, with clipping";
  cVar9 = FUN_18014c2cb("Vertical scrolling, with clipping");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x192d,"Tables/Vertical scrolling, with clipping");
    FUN_180124063(
                 "Here we activate ScrollY, which will create a child window container to allow hosting scrollable contents.\n\nWe also demonstrate using ImGuiListClipper to virtualize the submission of many items."
                 );
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_ScrollY",&DAT_180408cf8,0x2000000);
    FUN_1801c0c76();
    local_138 = (ulonglong)(uint)(DAT_1802de98c * fVar32) << 0x20;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table_scrolly";
    cVar9 = FUN_180164c18("table_scrolly",3,DAT_180408cf8,&local_138,pcVar39);
    if (cVar9 != '\0') {
      FUN_18016a395(0,1);
      FUN_18016a158("One",0,0,0);
      FUN_18016a158("Two",0,0,0);
      FUN_18016a158("Three",0,0,0);
      FUN_18016b3e4();
      FUN_1801003f2(&local_f8);
      FUN_1801004b6(&local_f8,1000,DAT_1802bb8e0);
      while (cVar9 = FUN_180100a32(&local_f8), cVar9 != '\0') {
        for (iVar23 = (int)(float)local_f8; iVar23 < local_f8._4_4_; iVar23 = iVar23 + 1) {
          FUN_18016a67b(0);
          for (uVar22 = 0; uVar22 < 3; uVar22 = uVar22 + 1) {
            FUN_18016a960(uVar22);
            FUN_1801330a5("Hello %d,%d",uVar22,iVar23);
          }
        }
      }
      FUN_180168430();
      pcVar18 = (char *)&local_f8;
      thunk_FUN_180100412(pcVar18);
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Horizontal scrolling";
  cVar9 = FUN_18014c2cb("Horizontal scrolling");
  uVar12 = (undefined4)((ulonglong)pcVar39 >> 0x20);
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x195a,"Tables/Horizontal scrolling");
    FUN_180124063(
                 "When ScrollX is enabled, the default sizing policy becomes ImGuiTableFlags_SizingFixedFit, as automatically stretching columns doesn\'t make much sense with horizontal scrolling.\n\nAlso note that as of the current version, you will almost always want to enable ScrollY along with ScrollX, because the container window won\'t automatically extend vertically to fix contents (this may be improved in future versions)."
                 );
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408cfc,1);
    thunk_FUN_18013698f("ImGuiTableFlags_ScrollX",&DAT_180408cfc,0x1000000);
    thunk_FUN_18013698f("ImGuiTableFlags_ScrollY",&DAT_180408cfc,0x2000000);
    FUN_18011a456();
    FUN_1800ffdb5();
    fVar36 = DAT_1802de790;
    iVar23 = 0;
    uVar14 = CONCAT44(uVar12,9);
    FUN_18013d731("freeze_cols",&DAT_180408d00,DAT_1802de790,0,uVar14,0,0x80);
    uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
    FUN_18011a456();
    FUN_1800ffdb5();
    uVar26 = CONCAT44(uVar12,9);
    FUN_18013d731("freeze_rows",&DAT_180408d04,fVar36,0,uVar26,0,0x80);
    FUN_1801c0c76();
    local_f8 = (ulonglong)(uint)(DAT_1802de98c * fVar32) << 0x20;
    uVar26 = uVar26 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table_scrollx",7,DAT_180408cfc,&local_f8,uVar26);
    uVar12 = (undefined4)(uVar26 >> 0x20);
    if (cVar9 != '\0') {
      FUN_18016a395(DAT_180408d00,DAT_180408d04);
      FUN_18016a158("Line #",0x80,0,0);
      FUN_18016a158("One",0,0,0);
      FUN_18016a158("Two",0,0,0);
      FUN_18016a158("Three",0,0,0);
      FUN_18016a158("Four",0,0,0);
      FUN_18016a158("Five",0,0,0);
      FUN_18016a158(&DAT_180360ac3,0,0,0);
      FUN_18016b3e4();
      do {
        iVar21 = 0;
        FUN_18016a67b(0,0);
        do {
          bVar10 = FUN_18016a960(iVar21);
          if ((iVar21 != 0 & (bVar10 ^ 1)) == 0) {
            if (iVar21 == 0) {
              FUN_1801330a5("Line %d",iVar23);
            }
            else {
              FUN_1801330a5("Hello world %d,%d",iVar21,iVar23);
            }
          }
          uVar12 = (undefined4)(uVar26 >> 0x20);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 7);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 0x14);
      FUN_180168430();
    }
    FUN_1801377c5();
    FUN_18013309a("Stretch + ScrollX",0);
    FUN_180119893(0);
    FUN_180124063(
                 "Showcase using Stretch columns + ScrollX together: this is rather unusual and only makes sense when specifying an \'inner_width\' for the table!\nWithout an explicit value, inner_width is == outer_size.x and therefore using Stretch columns along with ScrollX doesn\'t make sense."
                 );
    FUN_1801c0c22();
    FUN_180117f98("flags3");
    FUN_18011a05a(DAT_1802dbb40 * fVar34);
    thunk_FUN_18013698f("ImGuiTableFlags_ScrollX",&DAT_180408d08,0x1000000);
    in_stack_fffffffffffffe90 = &DAT_18036873b;
    uVar14 = CONCAT44(uVar12,0x7f7fffff);
    FUN_18013d2c2("inner_width",&DAT_180408d0c,DAT_1802ac570,0,uVar14,&DAT_18036873b,0);
    uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
    FUN_18011a356();
    FUN_18011834f();
    FUN_1801c0c76();
    pcVar39 = (char *)CONCAT44(uVar12,DAT_180408d0c);
    pcVar18 = "table2";
    cVar9 = FUN_180164c18("table2",7,DAT_180408d08,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      iVar23 = 0x8c;
      do {
        FUN_18016ab34();
        uVar12 = FUN_18016a661();
        uVar13 = FUN_18016a946();
        pcVar18 = "Hello world %d,%d";
        FUN_1801330a5("Hello world %d,%d",uVar13,uVar12);
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Columns flags";
  cVar9 = FUN_18014c2cb("Columns flags");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x19b5,"Tables/Columns flags");
    local_f8 = 0;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table_columns_flags_checkboxes",3,0,&local_f8,uVar26);
    if (cVar9 != '\0') {
      FUN_1801c0c22();
      ppuVar30 = &PTR_s_One_180369554_5_180328cc0;
      uVar25 = 0;
      lVar27 = 0;
      do {
        FUN_18016ab34();
        FUN_18011810d(uVar25 & 0xffffffff);
        FUN_18013799d();
        FUN_1801330a5("\'%s\'",*ppuVar30);
        FUN_1801377c5();
        FUN_1801330a5("Input flags:");
        FUN_1801c0e37((longlong)&DAT_180408d10 + lVar27);
        FUN_1801377c5();
        FUN_1801330a5("Output flags:");
        FUN_180116580(1);
        FUN_1801c103d(*(undefined4 *)((longlong)&DAT_1804205e0 + lVar27));
        FUN_180116676();
        FUN_18011834f();
        uVar25 = uVar25 + 1;
        ppuVar30 = ppuVar30 + 1;
        lVar27 = lVar27 + 4;
      } while (uVar25 != 3);
      FUN_1801c0c76();
      FUN_180168430();
    }
    local_f8 = (ulonglong)(uint)(DAT_1802de950 * fVar32) << 0x20;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table_columns_flags";
    cVar9 = FUN_180164c18("table_columns_flags",3,0x300274f,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      ppuVar30 = &PTR_s_One_180369554_5_180328cc0;
      lVar27 = 0;
      uVar22 = 0;
      do {
        uVar22 = uVar22 | *(uint *)((longlong)&DAT_180408d10 + lVar27) >> 0x12 & 1;
        FUN_18016a158(*ppuVar30,*(uint *)((longlong)&DAT_180408d10 + lVar27),0,0);
        lVar27 = lVar27 + 4;
        ppuVar30 = ppuVar30 + 1;
      } while (lVar27 != 0xc);
      if (uVar22 != 0) {
        FUN_18016bd44();
      }
      FUN_18016b3e4();
      puVar28 = &DAT_1804205e0;
      uVar26 = 0;
      do {
        uVar12 = FUN_18016a4c2(uVar26 & 0xffffffff);
        *puVar28 = uVar12;
        uVar26 = uVar26 + 1;
        puVar28 = puVar28 + 1;
      } while (uVar26 != 3);
      iVar23 = 0;
      do {
        FUN_180119fae((float)((int)fVar34 / 2));
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          uVar14 = FUN_18016a45b(iVar21);
          pcVar20 = "Hello";
          if (iVar21 == 0) {
            pcVar20 = "Indented";
          }
          pcVar18 = "%s %s";
          FUN_1801330a5("%s %s",pcVar20,uVar14);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 8);
      FUN_18011a002((float)((int)fVar34 / 2) * DAT_1802de98c);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Columns widths";
  cVar9 = FUN_18014c2cb("Columns widths");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1a00,"Tables/Columns widths");
    FUN_180124063("Using TableSetupColumn() to setup default width.");
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408d1c,1);
    thunk_FUN_18013698f("ImGuiTableFlags_NoBordersInBodyUntilResize",&DAT_180408d1c,0x1000);
    FUN_1801c0c76();
    local_f8 = 0;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table1",3,DAT_180408d1c,&local_f8,uVar26);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158("one",0x10,DAT_1802dbb34,0);
      FUN_18016a158("two",0x10,DAT_1803290d0,0);
      FUN_18016a158("three",0x10,0,0);
      FUN_18016b3e4();
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          if (iVar23 == 0) {
            FUN_180111069(&local_f8);
            FUN_1801330a5("(w: %5.1f)",(double)(float)local_f8);
          }
          else {
            FUN_1801330a5("Hello %d,%d",iVar21,iVar23);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 4);
      FUN_180168430();
    }
    FUN_180124063(
                 "Using TableSetupColumn() to setup explicit width.\n\nUnless _NoKeepColumnsVisible is set, fixed columns with set width may still be shrunk down if there\'s not enough space in the host."
                 );
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_NoKeepColumnsVisible",&DAT_1804205ec,0x40000);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersInnerV",&DAT_1804205ec,0x200);
    thunk_FUN_18013698f("ImGuiTableFlags_BordersOuterV",&DAT_1804205ec,0x400);
    FUN_1801c0c76();
    local_f8 = 0;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table2";
    cVar9 = FUN_180164c18("table2",4,DAT_1804205ec,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158(&DAT_1803861e4,0x10,DAT_1802dbb34,0);
      fVar36 = DAT_180327370 * fVar34;
      FUN_18016a158(&DAT_1803861e4,0x10,fVar36,0);
      FUN_18016a158(&DAT_1803861e4,0x10,DAT_1802dbb40 * fVar34,0);
      FUN_18016a158(&DAT_1803861e4,0x10,fVar36,0);
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          if (iVar23 == 0) {
            FUN_180111069(&local_f8);
            pcVar18 = "(w: %5.1f)";
            FUN_1801330a5("(w: %5.1f)",(double)(float)local_f8);
          }
          else {
            pcVar18 = "Hello %d,%d";
            FUN_1801330a5("Hello %d,%d",iVar21,iVar23);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 != 4);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Nested tables";
  cVar9 = FUN_18014c2cb("Nested tables");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1a45,"Tables/Nested tables");
    FUN_180124063("This demonstrates embedding a table into another table cell.");
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table_nested1";
    cVar9 = FUN_180164c18("table_nested1",2,0x787,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      FUN_18016a158(&DAT_18036ea81,0,0,0);
      FUN_18016a158(&DAT_18036e7b5,0,0,0);
      FUN_18016b3e4();
      FUN_18016ab34();
      FUN_1801330a5("A0 Row 0");
      lVar27 = FUN_18010128e();
      fVar36 = *(float *)(lVar27 + 0x70);
      local_f8 = 0;
      pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
      cVar9 = FUN_180164c18("table_nested2",2,0x787,&local_f8,pcVar39);
      if (cVar9 != '\0') {
        FUN_18016a158(&DAT_18036ea7e,0,0,0);
        FUN_18016a158(&DAT_18036e7b2,0,0,0);
        FUN_18016b3e4();
        FUN_18016a67b(0,fVar32 + fVar32 + fVar36 + fVar36);
        FUN_18016ab34();
        FUN_1801330a5("B0 Row 0");
        FUN_18016ab34();
        FUN_1801330a5("B1 Row 0");
        FUN_18016a67b(0);
        FUN_18016ab34();
        FUN_1801330a5("B0 Row 1");
        FUN_18016ab34();
        FUN_1801330a5("B1 Row 1");
        FUN_180168430();
      }
      FUN_18016ab34();
      FUN_1801330a5("A1 Row 0");
      FUN_18016ab34();
      FUN_1801330a5("A0 Row 1");
      FUN_18016ab34();
      pcVar18 = "A1 Row 1";
      FUN_1801330a5("A1 Row 1");
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Row height";
  cVar9 = FUN_18014c2cb("Row height");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1a72,"Tables/Row height");
    FUN_180124063(
                 "You can pass a \'min_row_height\' to TableNextRow().\n\nRows are padded with \'style.CellPadding.y\' on top and bottom, so effectively the minimum row height will always be >= \'style.CellPadding.y * 2.0f\'.\n\nWe cannot honor a _maximum_ row height as that would require a unique clipping rectangle per row."
                 );
    local_f8 = 0;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table_row_height",1,0x780,&local_f8,uVar26);
    if (cVar9 != '\0') {
      fVar36 = DAT_1802dbb70 * fVar32;
      iVar23 = 0;
      do {
        lVar27 = FUN_18010128e();
        iVar21 = (int)(*(float *)(lVar27 + 0x70) + *(float *)(lVar27 + 0x70) +
                      (float)iVar23 * fVar36);
        FUN_18016a67b(0,(float)iVar21);
        FUN_18016ab34();
        FUN_1801330a5("min_row_height = %.2f",(double)iVar21);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 8);
      FUN_180168430();
    }
    FUN_180124063(
                 "Showcase using SameLine(0,0) to share Current Line Height between cells.\n\nPlease note that Tables Row Height is not the same thing as Current Line Height, as a table cell may contains multiple lines."
                 );
    local_f8 = 0;
    uVar26 = uVar26 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table_share_lineheight",2,0x780,&local_f8,uVar26);
    if (cVar9 != '\0') {
      FUN_18016a67b(0);
      FUN_18016ab34();
      uVar8 = _UNK_180329198;
      uVar14 = _DAT_180329190;
      uVar25 = DAT_180329150;
      local_138 = DAT_180329150;
      local_f8 = _DAT_180329190;
      uStack_f0 = _UNK_180329198;
      FUN_180149615("##1",&local_f8,0,&local_138);
      FUN_18016ab34();
      FUN_1801330a5("Line 1");
      FUN_1801330a5("Line 2");
      FUN_18016a67b(0);
      FUN_18016ab34();
      local_138 = uVar25;
      local_f8 = uVar14;
      uStack_f0 = uVar8;
      FUN_180149615(&DAT_18036e6c7,&local_f8,0,&local_138);
      FUN_18016ab34();
      FUN_180119893(0);
      FUN_1801330a5("Line 1, with SameLine(0,0)");
      FUN_1801330a5("Line 2");
      FUN_180168430();
    }
    FUN_180124063(
                 "Showcase altering CellPadding.y between rows. Note that CellPadding.x is locked for the entire table."
                 );
    local_f8 = 0;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table_changing_cellpadding_y";
    cVar9 = FUN_180164c18("table_changing_cellpadding_y",1,0x780,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      uVar26 = 0;
      lVar27 = FUN_18010128e();
      uVar12 = DAT_1802dbb4c;
      do {
        if ((char)((char)(uVar26 / 3) * '\x03' + '\x02') == (char)uVar26) {
          FUN_180101aa6(0x11,uVar12);
          FUN_18016a67b(0,0);
          FUN_18016ab34();
          FUN_1801330a5("CellPadding.y = %.2f",(double)*(float *)(lVar27 + 0x70));
          pcVar18 = (char *)0x0;
          FUN_180101ccb();
        }
        else {
          FUN_18016a67b(0,0);
          FUN_18016ab34();
          pcVar18 = "CellPadding.y = %.2f";
          FUN_1801330a5("CellPadding.y = %.2f",(double)*(float *)(lVar27 + 0x70));
        }
        uVar22 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar22;
      } while (uVar22 != 8);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Outer size";
  cVar9 = FUN_18014c2cb("Outer size");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1ab3,"Tables/Outer size");
    FUN_1801330a5("Using NoHostExtendX and NoHostExtendY:");
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_NoHostExtendX",&DAT_180408d20,0x10000);
    uVar12 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "Make outer width auto-fit to columns, overriding outer_size.x value.\n\nOnly available when ScrollX/ScrollY are disabled and Stretch columns are not used."
                 );
    thunk_FUN_18013698f("ImGuiTableFlags_NoHostExtendY",&DAT_180408d20,0x20000);
    FUN_180119893(0,uVar12);
    FUN_180124063(
                 "Make outer height stop exactly at outer_size.y (prevent auto-extending table past the limit).\n\nOnly available when ScrollX/ScrollY are disabled. Data below the limit will be clipped and not visible."
                 );
    FUN_1801c0c76();
    local_f8 = (ulonglong)(uint)(DAT_1803291a0 * fVar32) << 0x20;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table1",3,DAT_180408d20,&local_f8,uVar26);
    if (cVar9 != '\0') {
      iVar23 = 0;
      do {
        iVar21 = 0;
        FUN_18016a67b(0,0);
        do {
          FUN_18016ab34();
          FUN_1801330a5("Cell %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 10);
      FUN_180168430();
    }
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_1801330a5("Hello!");
    FUN_1801377c5();
    FUN_1801330a5("Using explicit size:");
    fVar36 = DAT_1802dbb40 * fVar34;
    local_138 = (ulonglong)(uint)fVar36;
    uVar26 = uVar26 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table2",3,0x7c0,&local_138,uVar26);
    if (cVar9 != '\0') {
      iVar23 = 0;
      do {
        FUN_18016a67b(0,0);
        iVar21 = 0;
        do {
          FUN_18016ab34();
          FUN_1801330a5("Cell %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_180119893(0);
    iVar23 = 0;
    local_138 = (ulonglong)(uint)fVar36;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table3";
    cVar9 = FUN_180164c18("table3",3,0x7c0,&local_138,pcVar39);
    if (cVar9 != '\0') {
      FUN_18010128e();
      do {
        iVar21 = 0;
        FUN_18016a67b(0);
        do {
          FUN_18016ab34();
          pcVar18 = "Cell %d,%d";
          FUN_1801330a5("Cell %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 3);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Background color";
  cVar9 = FUN_18014c2cb("Background color");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1af7,"Tables/Background color");
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_Borders",&DAT_180408d24,0x780);
    thunk_FUN_18013698f("ImGuiTableFlags_RowBg",&DAT_180408d24,0x40);
    uVar12 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "ImGuiTableFlags_RowBg automatically sets RowBg0 to alternative colors pulled from the Style."
                 );
    FUN_180139992("row bg type",&DAT_180408d28,&DAT_1803860a5,0xffffffff);
    FUN_180139992("row bg target",&DAT_180408d2c,"RowBg0",0xffffffff);
    FUN_180119893(0,uVar12);
    FUN_180124063(
                 "Target RowBg0 to override the alternating odd/even colors,\nTarget RowBg1 to blend with them."
                 );
    FUN_180139992("cell bg type",&DAT_180408d30,&DAT_18038611b,0xffffffff);
    FUN_180119893(0);
    FUN_180124063("We are colorizing cells to B1->C2 here.");
    FUN_1801c0c76();
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table1";
    cVar9 = FUN_180164c18("table1",5,DAT_180408d24,&local_f8,pcVar39);
    uVar14 = _UNK_1803291b8;
    lVar27 = _DAT_1803291b0;
    fVar7 = DAT_1802de790;
    fVar37 = DAT_1802dc414;
    fVar36 = DAT_1802dc268;
    if (cVar9 != '\0') {
      iVar23 = 0;
      do {
        FUN_18016a67b(0);
        if (DAT_180408d28 != 0) {
          fVar33 = fVar37;
          if (DAT_180408d28 != 1) {
            fVar33 = (float)iVar23 * fVar36 + fVar7;
          }
          local_f8 = CONCAT44(*(undefined4 *)(&DAT_1803291a8 + (ulonglong)(DAT_180408d28 == 1) * 4),
                              fVar33);
          uStack_f0 = CONCAT44(0x3f266666,
                               *(undefined4 *)(&DAT_1803291a8 + (ulonglong)(DAT_180408d28 == 1) * 4)
                              );
          uVar12 = FUN_18010130a(&local_f8);
          FUN_18016a5a7(DAT_180408d2c + 1,uVar12,0xffffffff);
        }
        uVar22 = 0;
        do {
          FUN_18016a960(uVar22);
          pcVar18 = "%c%c";
          FUN_1801330a5(&DAT_18036b618,iVar23 + 0x41,uVar22 + 0x30);
          if ((((iVar23 - 1U < 2) && (uVar22 != 0)) && (uVar22 < 3)) && (DAT_180408d30 == 1)) {
            local_f8 = lVar27;
            uStack_f0 = uVar14;
            uVar12 = FUN_18010130a(&local_f8);
            pcVar18 = (char *)0x0;
            FUN_18016a5a7(3,uVar12,0xffffffff);
          }
          uVar22 = uVar22 + 1;
        } while (uVar22 != 5);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 6);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Tree view";
  cVar9 = FUN_18014c2cb("Tree view");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1b31,"Tables/Tree view");
    thunk_FUN_18013698f("ImGuiTreeNodeFlags_SpanFullWidth",&DAT_180408d34,0x1000);
    thunk_FUN_18013698f("ImGuiTreeNodeFlags_SpanLabelWidth",&DAT_180408d34,0x2000);
    thunk_FUN_18013698f("ImGuiTreeNodeFlags_SpanAllColumns",&DAT_180408d34,0x4000);
    thunk_FUN_18013698f("ImGuiTreeNodeFlags_LabelSpanAllColumns",&DAT_180408d34,0x8000);
    FUN_180119893(0);
    FUN_180124063("Useful if you know that you aren\'t displaying contents in other columns");
    FUN_180124063(
                 "See \"Columns flags\" section to configure how indentation is applied to individual columns."
                 );
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "3ways";
    cVar9 = FUN_180164c18("3ways",3,0xf41,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      FUN_18016a158("Name",0x80,0,0);
      FUN_18016a158("Size",0x10,DAT_1802de988 * fVar34,0);
      FUN_18016a158("Type",0x10,DAT_1803290e4 * fVar34,0);
      FUN_18016b3e4();
      ppuVar30 = &PTR_s_Root_with_Long_Name_180328a00;
      FUN_1801c10d4(&PTR_s_Root_with_Long_Name_180328a00);
      FUN_180168430();
      pcVar18 = (char *)ppuVar30;
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Item width";
  cVar9 = FUN_18014c2cb("Item width");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1b89,"Tables/Item width");
    FUN_180124063(
                 "Showcase using PushItemWidth() and how it is preserved on a per-column basis.\n\nNote that on auto-resizing non-resizable fixed columns, querying the content width for e.g. right-alignment doesn\'t make sense."
                 );
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table_item_width";
    cVar9 = FUN_180164c18("table_item_width",3,0x780,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      FUN_18016a158("small",0,0,0);
      FUN_18016a158("half",0,0,0);
      FUN_18016a158("right-align",0,0,0);
      FUN_18016b3e4();
      uVar22 = DAT_1802de9b4;
      fVar36 = DAT_1802de848;
      uVar12 = DAT_1802ac570;
      fVar37 = DAT_1802dbb3c * fVar34;
      iVar23 = 0;
      do {
        FUN_18016a67b(0);
        if (iVar23 == 0) {
          FUN_18016a960(0);
          FUN_18011a05a(fVar37);
          FUN_18016a960(1);
          FUN_180111069(&local_f8);
          FUN_18011a05a((float)local_f8 * fVar36);
          FUN_18016a960(2);
          FUN_18011a05a(uVar22);
        }
        FUN_18011810d(iVar23);
        FUN_18016a960(0);
        uVar26 = (ulonglong)in_stack_fffffffffffffe90 & 0xffffffff00000000;
        FUN_180141390("float0",&DAT_1804205f0,0,uVar12,"%.3f",uVar26);
        FUN_18016a960(1);
        uVar26 = uVar26 & 0xffffffff00000000;
        FUN_180141390("float1",&DAT_1804205f0,0,uVar12,"%.3f",uVar26);
        FUN_18016a960(2);
        in_stack_fffffffffffffe90 = (undefined *)(uVar26 & 0xffffffff00000000);
        pcVar39 = "%.3f";
        pcVar18 = "##float2";
        FUN_180141390("##float2",&DAT_1804205f0,0,uVar12,"%.3f",in_stack_fffffffffffffe90);
        FUN_18011834f();
        iVar23 = iVar23 + 1;
      } while (iVar23 != 3);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Custom headers";
  cVar9 = FUN_18014c2cb("Custom headers");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1bb8,"Tables/Custom headers");
    local_f8 = 0;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table_custom_headers";
    cVar9 = FUN_180164c18("table_custom_headers",3,0x786,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      uVar26 = 0;
      FUN_18016a158("Apricot",0,0,0);
      FUN_18016a158("Banana",0,0,0);
      FUN_18016a158("Cherry",0,0,0);
      FUN_18016a67b(1,0);
      do {
        FUN_18016a960(uVar26 & 0xffffffff);
        uVar14 = FUN_18016a45b(uVar26 & 0xffffffff);
        FUN_18011810d(uVar26 & 0xffffffff);
        local_f8 = 0;
        FUN_180101bbb(0xb,&local_f8);
        FUN_180135c3a("##checkall",&DAT_1804205f4 + uVar26);
        FUN_180101ccb(1);
        FUN_18010128e();
        FUN_180119893(0);
        FUN_18016b569(uVar14);
        FUN_18011834f();
        uVar26 = uVar26 + 1;
      } while (uVar26 != 3);
      iVar23 = 0;
      do {
        FUN_18016a67b(0);
        uVar26 = 0;
        do {
          FUN_1801bf199(&local_f8,"Cell %d,%d",uVar26 & 0xffffffff,iVar23);
          FUN_18016a960(uVar26 & 0xffffffff);
          local_138 = 0;
          pcVar18 = (char *)&local_f8;
          FUN_1801391f6(&local_f8,(&DAT_1804205f4)[uVar26],0,&local_138);
          uVar26 = uVar26 + 1;
        } while (uVar26 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 5);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Angled headers";
  cVar9 = FUN_18014c2cb("Angled headers");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1bed,"Tables/Angled headers");
    thunk_FUN_18013698f("_ScrollX",&DAT_180408d38,0x1000000);
    thunk_FUN_18013698f("_ScrollY",&DAT_180408d38,0x2000000);
    thunk_FUN_18013698f("_Resizable",&DAT_180408d38,1);
    thunk_FUN_18013698f("_Sortable",&DAT_180408d38,8);
    thunk_FUN_18013698f("_NoBordersInBody",&DAT_180408d38,0x800);
    thunk_FUN_18013698f("_HighlightHoveredColumn",&DAT_180408d38,0x10000000);
    fVar37 = (float)FUN_180116c08();
    fVar36 = DAT_1802de98c;
    FUN_1800ffdb5(fVar37 * DAT_1802de98c);
    uVar26 = (ulonglong)in_stack_fffffffffffffe90 & 0xffffffff00000000;
    FUN_18014162a("Frozen columns",&DAT_180408d40,0,2,&DAT_18036b4b0,uVar26);
    fVar37 = (float)FUN_180116c08();
    FUN_1800ffdb5(fVar37 * fVar36);
    uVar26 = uVar26 & 0xffffffff00000000;
    pcVar39 = "%d";
    FUN_18014162a("Frozen rows",&DAT_180408d44,0,2,&DAT_18036b4b0,uVar26);
    thunk_FUN_18013698f("Disable header contributing to column width",&DAT_180408d3c,0x2000);
    cVar9 = FUN_18014c2cb("Style settings");
    if (cVar9 != '\0') {
      FUN_180119893(0);
      FUN_180124063("Giving access to some ImGuiStyle value in this demo for convenience.");
      fVar37 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar37 * fVar36);
      lVar27 = FUN_18010128e();
      uVar26 = uVar26 & 0xffffffff00000000;
      FUN_18014158b("style.TableAngledHeadersAngle",lVar27 + 0xc4,DAT_1803290e8,DAT_1802dbb44,
                    "%.0f deg",uVar26);
      fVar37 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar37 * fVar36);
      lVar27 = FUN_18010128e();
      pcVar39 = "%.2f";
      FUN_180141402("style.TableAngledHeadersTextAlign",lVar27 + 200,0,DAT_1802ac570,"%.2f",
                    uVar26 & 0xffffffff00000000);
      FUN_18014d7a9();
    }
    local_f8 = (ulonglong)(uint)(DAT_1802de988 * fVar32) << 0x20;
    pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
    pcVar18 = "table_angled_headers";
    cVar9 = FUN_180164c18("table_angled_headers",0xe,DAT_180408d38,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      FUN_18016a158("Track",0xc0,0,0);
      lVar27 = 1;
      do {
        FUN_18016a158((&PTR_s_Track_180328b20)[lVar27],DAT_180408d3c,0,0);
        lVar27 = lVar27 + 1;
      } while (lVar27 != 0xe);
      FUN_18016a395(DAT_180408d40,DAT_180408d44);
      FUN_18016bd44();
      FUN_18016b3e4();
      puVar38 = &DAT_180420600;
      uVar26 = 0;
      do {
        FUN_18011810d(uVar26 & 0xffffffff);
        FUN_18016a67b(0);
        FUN_18016a960(0);
        FUN_18013799d();
        FUN_1801330a5("Track %d",uVar26 & 0xffffffff);
        uVar25 = 1;
        do {
          pcVar18 = (char *)(uVar25 & 0xffffffff);
          cVar9 = FUN_18016a960(pcVar18);
          if (cVar9 != '\0') {
            FUN_18011810d(uVar25 & 0xffffffff);
            pcVar18 = "";
            FUN_180135c3a(&DAT_1803861e4,puVar38 + uVar25);
            FUN_18011834f();
          }
          uVar25 = uVar25 + 1;
        } while (uVar25 != 0xe);
        FUN_18011834f();
        uVar26 = uVar26 + 1;
        puVar38 = puVar38 + 0xe;
      } while (uVar26 != 0xc);
      FUN_180168430();
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Context menus";
  cVar9 = FUN_18014c2cb("Context menus");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1c32,"Tables/Context menus");
    FUN_180124063(
                 "By default, right-clicking over a TableHeadersRow()/TableHeader() line will open the default context-menu.\nUsing ImGuiTableFlags_ContextMenuInBody we also allow right-clicking over columns body."
                 );
    FUN_1801c0c22();
    thunk_FUN_18013698f("ImGuiTableFlags_ContextMenuInBody",&DAT_180408d48,0x20);
    FUN_1801c0c76();
    local_f8 = 0;
    uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
    cVar9 = FUN_180164c18("table_context_menu",3,DAT_180408d48,&local_f8,uVar26);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158("One",0,0,0);
      FUN_18016a158("Two",0,0,0);
      FUN_18016a158("Three",0,0,0);
      FUN_18016b3e4();
      do {
        FUN_18016a67b(0);
        iVar21 = 0;
        do {
          FUN_18016a960(iVar21);
          FUN_1801330a5("Cell %d,%d",iVar21,iVar23);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 3);
        iVar23 = iVar23 + 1;
      } while (iVar23 != 4);
      FUN_180168430();
    }
    FUN_180124063(
                 "Demonstrate mixing table context menu (over header), item context button (over button) and custom per-column context menu (over column body)."
                 );
    local_f8 = 0;
    pcVar39 = (char *)(uVar26 & 0xffffffff00000000);
    pcVar18 = "table_context_menu_2";
    cVar9 = FUN_180164c18("table_context_menu_2",3,0x2787,&local_f8,pcVar39);
    if (cVar9 != '\0') {
      iVar23 = 0;
      FUN_18016a158("One",0,0,0);
      FUN_18016a158("Two",0,0,0);
      FUN_18016a158("Three",0,0,0);
      FUN_18016b3e4();
      iVar21 = 0;
      do {
        FUN_18016a67b(0,0);
        iVar31 = 0;
        do {
          FUN_18016a960(iVar31);
          FUN_1801330a5("Cell %d,%d",iVar31,iVar23);
          FUN_180119893(0);
          FUN_18011810d(iVar21 + iVar31);
          FUN_18013425f();
          cVar9 = FUN_18011b87b(0,0);
          if (cVar9 != '\0') {
            FUN_1801330a5("This is the popup for Button(\"..\") in Cell %d,%d",iVar31,iVar23);
            local_f8 = 0;
            cVar9 = FUN_180134257("Close",&local_f8);
            if (cVar9 != '\0') {
              FUN_18011b292();
            }
            FUN_18011b3ef();
          }
          FUN_18011834f();
          iVar31 = iVar31 + 1;
        } while (iVar31 != 3);
        iVar23 = iVar23 + 1;
        iVar21 = iVar21 + 3;
      } while (iVar23 != 4);
      iVar23 = -1;
      iVar21 = 0;
      do {
        FUN_18011810d(iVar21);
        uVar22 = FUN_18016a4c2(iVar21);
        if ((uVar22 >> 0x1b & 1) != 0) {
          iVar23 = iVar21;
        }
        if (((iVar21 == iVar23) && (cVar9 = FUN_180110c44(), cVar9 == '\0')) &&
           (cVar9 = FUN_180118d71(1), cVar9 != '\0')) {
          FUN_18011ac8e("MyPopup",0);
        }
        cVar9 = FUN_18011b56a("MyPopup");
        if (cVar9 != '\0') {
          if (iVar21 == 3) {
            FUN_1801330a5("This is a custom popup for unused space after the last column.");
          }
          else {
            FUN_1801330a5("This is a custom popup for Column %d",iVar21);
          }
          local_f8 = 0;
          cVar9 = FUN_180134257("Close");
          if (cVar9 != '\0') {
            FUN_18011b292();
          }
          FUN_18011b3ef();
        }
        FUN_18011834f();
        iVar21 = iVar21 + 1;
      } while (iVar21 != 4);
      FUN_180168430();
      pcVar18 = "Hovered column: %d";
      FUN_1801330a5("Hovered column: %d",iVar23);
    }
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Synced instances";
  cVar9 = FUN_18014c2cb("Synced instances");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1ca1,"Tables/Synced instances");
    FUN_180124063(
                 "Multiple tables with the same identifier will share their settings, width, visibility, order etc."
                 );
    thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408d4c,1);
    thunk_FUN_18013698f("ImGuiTableFlags_ScrollY",&DAT_180408d4c,0x2000000);
    thunk_FUN_18013698f("ImGuiTableFlags_SizingFixedFit",&DAT_180408d4c,0x2000);
    thunk_FUN_18013698f("ImGuiTableFlags_HighlightHoveredColumn",&DAT_180408d4c,0x10000000);
    fVar36 = DAT_1802dc2d0;
    iVar23 = 0;
    do {
      FUN_1801bf199(&local_f8,"Synced Table %d",iVar23);
      pcVar18 = (char *)&local_f8;
      cVar9 = FUN_18014d916(&local_f8,0x20);
      if (cVar9 != '\0') {
        fVar37 = (float)FUN_18011a43e();
        local_138 = (ulonglong)(uint)(fVar37 * fVar36) << 0x20;
        pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
        pcVar18 = "Table";
        cVar9 = FUN_180164c18("Table",3,DAT_180408d4c,&local_138,pcVar39);
        if (cVar9 != '\0') {
          iVar31 = 0;
          FUN_18016a158("One",0,0,0);
          FUN_18016a158("Two",0,0,0);
          FUN_18016a158("Three",0,0,0);
          FUN_18016b3e4();
          iVar21 = 9;
          if (iVar23 == 1) {
            iVar21 = 0x1b;
          }
          do {
            FUN_18016ab34();
            pcVar18 = "this cell %d";
            FUN_1801330a5("this cell %d",iVar31);
            iVar31 = iVar31 + 1;
          } while (iVar21 != iVar31);
          FUN_180168430();
        }
      }
      iVar23 = iVar23 + 1;
    } while (iVar23 != 3);
    FUN_18014d7a9();
  }
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  pcVar18 = "Sorting";
  cVar9 = FUN_18014c2cb("Sorting");
  if (cVar9 == '\0') goto LAB_1801b1ca9;
  FUN_180107e9e("imgui_demo.cpp",0x1ccc,"Tables/Sorting");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_1804206b8) && (FUN_18023d500(), DAT_1804206b8 == -1)) {
    _DAT_1804206a8 = 0;
    DAT_1804206b0 = 0;
    FUN_18023d710(&LAB_1801c11be);
    _Init_thread_footer();
  }
  if (DAT_1804206a8 == 0) {
    iVar23 = 0;
    if ((int)DAT_1804206ac < 0x32) {
      if (DAT_1804206ac == 0) {
        uVar22 = 0x32;
      }
      else {
        uVar17 = (int)DAT_1804206ac / 2 + DAT_1804206ac;
        uVar22 = 0x32;
        if (0x32 < (int)uVar17) {
          uVar22 = uVar17;
        }
      }
      lVar27 = FUN_1800fe7f8((ulonglong)uVar22 * 0x18);
      if (DAT_1804206b0 != 0) {
        FUN_1802a82f0(lVar27,DAT_1804206b0,(longlong)DAT_1804206a8 * 0x18);
        FUN_1800fe8d4(DAT_1804206b0);
      }
      _DAT_1804206a8 = CONCAT44(uVar22,DAT_1804206a8);
      iVar23 = DAT_1804206a8;
      DAT_1804206b0 = lVar27;
      if (DAT_1804206a8 < 0x32) goto LAB_1801b1984;
    }
    else {
LAB_1801b1984:
      lVar27 = (longlong)iVar23 + -0x32;
      puVar24 = (undefined8 *)((longlong)iVar23 * 0x18 + DAT_1804206b0);
      do {
        *puVar24 = 0;
        puVar24[1] = 0;
        puVar24[2] = 0;
        puVar24 = puVar24 + 3;
        lVar27 = lVar27 + 1;
        uVar22 = DAT_1804206ac;
      } while (lVar27 != 0);
    }
    DAT_1804206ac = uVar22;
    _DAT_1804206a8 = CONCAT44(DAT_1804206ac,0x32);
    piVar29 = (int *)(DAT_1804206b0 + 0x10);
    uVar25 = 0;
    uVar26 = 0xffffffffffffffff;
    do {
      uVar1 = uVar26 + 1;
      piVar29[-4] = (int)uVar1;
      *(undefined **)(piVar29 + -2) = (&PTR_s_Apple_180328b98)[(uVar25 / 0xf) * -0xf + uVar26];
      *piVar29 = ((int)uVar26 * (int)uVar1) % 0x14;
      uVar25 = uVar25 + 1;
      piVar29 = piVar29 + 6;
      uVar26 = uVar1;
    } while (uVar1 < 0x31);
  }
  FUN_1801c0c22();
  thunk_FUN_18013698f("ImGuiTableFlags_SortMulti",&DAT_180408d50,0x4000000);
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_180124063(
               "When sorting is enabled: hold shift when clicking headers to sort on multiple column. TableGetSortSpecs() may return specs where (SpecsCount > 1)."
               );
  thunk_FUN_18013698f("ImGuiTableFlags_SortTristate",&DAT_180408d50,0x8000000);
  FUN_180119893(0);
  FUN_180124063(
               "When sorting is enabled: allow no sorting, disable default sorting. TableGetSortSpecs() may return specs where (SpecsCount == 0)."
               );
  FUN_1801c0c76();
  local_f8 = (ulonglong)(uint)(DAT_180327370 * fVar32) << 0x20;
  pcVar39 = (char *)((ulonglong)pcVar39 & 0xffffffff00000000);
  pcVar18 = "table_sorting";
  cVar9 = FUN_180164c18("table_sorting",4,DAT_180408d50,&local_f8,pcVar39);
  if (cVar9 != '\0') {
    FUN_18016a158(&DAT_18036cc91,0x14,0,0);
    FUN_18016a158("Name",0x10,0,1);
    FUN_18016a158("Action",0x210,0,2);
    FUN_18016a158("Quantity",0x8008,0,3);
    FUN_18016a395(0,1);
    FUN_18016b3e4();
    lVar27 = FUN_18016ae4c();
    if ((lVar27 != 0) && (*(char *)(lVar27 + 0xc) == '\x01')) {
      if (1 < (longlong)DAT_1804206a8) {
        DAT_180420708 = lVar27;
        FUN_180289570(DAT_1804206b0,(longlong)DAT_1804206a8,0x18,FUN_1801c1aee);
      }
      DAT_180420708 = 0;
      *(undefined1 *)(lVar27 + 0xc) = 0;
    }
    FUN_1801003f2(&local_f8);
    FUN_1801004b6(&local_f8,_DAT_1804206a8 & 0xffffffff,DAT_1802bb8e0);
    while (cVar9 = FUN_180100a32(&local_f8), cVar9 != '\0') {
      for (iVar23 = (int)(float)local_f8; lVar27 = DAT_1804206b0, iVar23 < local_f8._4_4_;
          iVar23 = iVar23 + 1) {
        FUN_18011810d(*(undefined4 *)(DAT_1804206b0 + (longlong)iVar23 * 0x18));
        FUN_18016a67b(0);
        FUN_18016ab34();
        puVar28 = (undefined4 *)(lVar27 + (longlong)iVar23 * 0x18);
        FUN_1801330a5("%04d",*puVar28);
        FUN_18016ab34();
        FUN_18013309a(*(undefined8 *)(puVar28 + 2),0);
        FUN_18016ab34();
        FUN_18013425f("None");
        FUN_18016ab34();
        FUN_1801330a5(&DAT_18036b4b0);
        FUN_18011834f();
      }
    }
    FUN_180168430();
    pcVar18 = (char *)&local_f8;
    thunk_FUN_180100412(pcVar18);
  }
  FUN_18014d7a9();
LAB_1801b1ca9:
  if ((char)local_c0 != '\0') {
    FUN_18014d8bf(CONCAT71((int7)((ulonglong)pcVar18 >> 8),(byte)local_b4) ^ 1,0);
  }
  cVar9 = FUN_18014c2cb("Advanced");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1d21,"Tables/Advanced");
    local_118 = PTR_s_Selectable_1803699a6_6_180328c30;
    puStack_110 = PTR_s_Selectable__span_row__180328c38;
    local_128 = PTR_s_SmallButton_180328c20;
    puStack_120 = PTR_s_FillButton_180328c28;
    local_138 = CONCAT44(PTR_s_Text_1803611e2_0x13_180328c10._4_4_,
                         PTR_s_Text_1803611e2_0x13_180328c10._0_4_);
    uStack_130 = PTR_s_Button_180365dcc_6_180328c18._0_4_;
    uStack_12c = PTR_s_Button_180365dcc_6_180328c18._4_4_;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_1804206c8) && (FUN_18023d500(&DAT_1804206c8), DAT_1804206c8 == -1)) {
      DAT_1804206c0._4_4_ = fVar32 * DAT_1802de988;
      DAT_1804206c0._0_4_ = 0;
      _Init_thread_footer(&DAT_1804206c8);
    }
    cVar9 = FUN_18014c2cb("Options");
    uVar12 = (undefined4)((ulonglong)pcVar39 >> 0x20);
    if (cVar9 != '\0') {
      FUN_1801c0c22();
      FUN_18011a05a(fVar34 * _DAT_1803291c0);
      cVar9 = FUN_18014cfb6("Features:",0x20);
      if (cVar9 != '\0') {
        thunk_FUN_18013698f("ImGuiTableFlags_Resizable",&DAT_180408d54,1);
        thunk_FUN_18013698f("ImGuiTableFlags_Reorderable",&DAT_180408d54,2);
        thunk_FUN_18013698f("ImGuiTableFlags_Hideable",&DAT_180408d54,4);
        thunk_FUN_18013698f("ImGuiTableFlags_Sortable",&DAT_180408d54,8);
        thunk_FUN_18013698f("ImGuiTableFlags_NoSavedSettings",&DAT_180408d54,0x10);
        thunk_FUN_18013698f("ImGuiTableFlags_ContextMenuInBody",&DAT_180408d54,0x20);
        FUN_18014d7a9();
      }
      cVar9 = FUN_18014cfb6("Decorations:",0x20);
      if (cVar9 != '\0') {
        thunk_FUN_18013698f("ImGuiTableFlags_RowBg",&DAT_180408d54,0x40);
        thunk_FUN_18013698f("ImGuiTableFlags_BordersV",&DAT_180408d54,0x600);
        thunk_FUN_18013698f("ImGuiTableFlags_BordersOuterV",&DAT_180408d54,0x400);
        thunk_FUN_18013698f("ImGuiTableFlags_BordersInnerV",&DAT_180408d54,0x200);
        thunk_FUN_18013698f("ImGuiTableFlags_BordersH",&DAT_180408d54,0x180);
        thunk_FUN_18013698f("ImGuiTableFlags_BordersOuterH",&DAT_180408d54,0x100);
        thunk_FUN_18013698f("ImGuiTableFlags_BordersInnerH",&DAT_180408d54,0x80);
        thunk_FUN_18013698f("ImGuiTableFlags_NoBordersInBody",&DAT_180408d54,0x800);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "Disable vertical borders in columns Body (borders will always appear in Headers)"
                     );
        thunk_FUN_18013698f("ImGuiTableFlags_NoBordersInBodyUntilResize",&DAT_180408d54,0x1000);
        FUN_180119893(0);
        FUN_180124063(
                     "Disable vertical borders in columns Body until hovered for resize (borders will always appear in Headers)"
                     );
        FUN_18014d7a9();
      }
      cVar9 = FUN_18014cfb6("Sizing:",0x20);
      if (cVar9 != '\0') {
        FUN_1801c0c80(&DAT_180408d54);
        uVar12 = DAT_1802bb8e0;
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "In the Advanced demo we override the policy of each column so those table-wide settings have less effect that typical."
                     );
        thunk_FUN_18013698f("ImGuiTableFlags_NoHostExtendX",&DAT_180408d54,0x10000);
        FUN_180119893(0,uVar12);
        FUN_180124063(
                     "Make outer width auto-fit to columns, overriding outer_size.x value.\n\nOnly available when ScrollX/ScrollY are disabled and Stretch columns are not used."
                     );
        thunk_FUN_18013698f("ImGuiTableFlags_NoHostExtendY",&DAT_180408d54,0x20000);
        FUN_180119893(0,uVar12);
        FUN_180124063(
                     "Make outer height stop exactly at outer_size.y (prevent auto-extending table past the limit).\n\nOnly available when ScrollX/ScrollY are disabled. Data below the limit will be clipped and not visible."
                     );
        thunk_FUN_18013698f("ImGuiTableFlags_NoKeepColumnsVisible",&DAT_180408d54,0x40000);
        FUN_180119893(0,uVar12);
        FUN_180124063("Only available if ScrollX is disabled.");
        thunk_FUN_18013698f("ImGuiTableFlags_PreciseWidths",&DAT_180408d54,0x80000);
        FUN_180119893(0,uVar12);
        FUN_180124063(
                     "Disable distributing remainder width to stretched columns (width allocation on a 100-wide table with 3 columns: Without this flag: 33,33,34. With this flag: 33,33,33). With larger number of columns, resizing will appear to be less smooth."
                     );
        thunk_FUN_18013698f("ImGuiTableFlags_NoClip",&DAT_180408d54,0x100000);
        FUN_180119893(0);
        FUN_180124063(
                     "Disable clipping rectangle for every individual columns (reduce draw command count, items will be able to overflow into other columns). Generally incompatible with ScrollFreeze options."
                     );
        FUN_18014d7a9();
      }
      cVar9 = FUN_18014cfb6("Padding:",0x20);
      if (cVar9 != '\0') {
        thunk_FUN_18013698f("ImGuiTableFlags_PadOuterX",&DAT_180408d54,0x200000);
        thunk_FUN_18013698f("ImGuiTableFlags_NoPadOuterX",&DAT_180408d54,0x400000);
        thunk_FUN_18013698f("ImGuiTableFlags_NoPadInnerX",&DAT_180408d54,0x800000);
        FUN_18014d7a9();
      }
      cVar9 = FUN_18014cfb6("Scrolling:",0x20);
      uVar12 = (undefined4)((ulonglong)pcVar39 >> 0x20);
      if (cVar9 != '\0') {
        thunk_FUN_18013698f("ImGuiTableFlags_ScrollX",&DAT_180408d54,0x1000000);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_18011a456();
        FUN_1800ffdb5();
        fVar34 = DAT_1802de790;
        uVar14 = CONCAT44(uVar12,9);
        FUN_18013d731("freeze_cols",&DAT_180408d5c,DAT_1802de790,0,uVar14,0,0x80);
        uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
        thunk_FUN_18013698f("ImGuiTableFlags_ScrollY",&DAT_180408d54,0x2000000);
        FUN_180119893(0);
        FUN_18011a456();
        FUN_1800ffdb5();
        pcVar39 = (char *)CONCAT44(uVar12,9);
        FUN_18013d731("freeze_rows",&DAT_180408d60,fVar34,0,pcVar39,0,0x80);
        FUN_18014d7a9();
      }
      cVar9 = FUN_18014cfb6("Sorting:",0x20);
      if (cVar9 != '\0') {
        thunk_FUN_18013698f("ImGuiTableFlags_SortMulti",&DAT_180408d54,0x4000000);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "When sorting is enabled: hold shift when clicking headers to sort on multiple column. TableGetSortSpecs() may return specs where (SpecsCount > 1)."
                     );
        thunk_FUN_18013698f("ImGuiTableFlags_SortTristate",&DAT_180408d54,0x8000000);
        FUN_180119893(0);
        FUN_180124063(
                     "When sorting is enabled: allow no sorting, disable default sorting. TableGetSortSpecs() may return specs where (SpecsCount == 0)."
                     );
        FUN_18014d7a9();
      }
      cVar9 = FUN_18014cfb6("Headers:",0x20);
      if (cVar9 != '\0') {
        FUN_180135c3a("show_headers",&DAT_180408d69);
        thunk_FUN_18013698f("ImGuiTableFlags_HighlightHoveredColumn",&DAT_180408d54,0x10000000);
        thunk_FUN_18013698f("ImGuiTableColumnFlags_AngledHeader",&DAT_1804206bc,0x40000);
        FUN_180119893(0);
        FUN_180124063(
                     "Enable AngledHeader on all columns. Best enabled on selected narrow columns (see \"Angled headers\" section of the demo)."
                     );
        FUN_18014d7a9();
      }
      cVar9 = FUN_18014cfb6("Other:",0x20);
      uVar12 = (undefined4)((ulonglong)pcVar39 >> 0x20);
      if (cVar9 != '\0') {
        FUN_180135c3a("show_wrapped_text",&DAT_1804206d4);
        uVar12 = DAT_1802ac570;
        uVar26 = (ulonglong)pcVar39 & 0xffffffff00000000;
        FUN_18013d340("##OuterSize",&DAT_1804206c0,DAT_1802ac570,0,uVar26,"%.3f",0);
        uVar13 = (undefined4)(uVar26 >> 0x20);
        lVar27 = FUN_18010128e();
        FUN_180119893(0,*(undefined4 *)(lVar27 + 100));
        FUN_180135c3a("outer_size",&DAT_180408d68);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "If scrolling is disabled (ScrollX and ScrollY not set):\n- The table is output directly in the parent window.\n- OuterSize.x < 0.0f will right-align the table.\n- OuterSize.x = 0.0f will narrow fit the table unless there are any Stretch columns.\n- OuterSize.y then becomes the minimum size for the table, which will extend vertically if there are more rows (unless NoHostExtendY is set)."
                     );
        uVar14 = CONCAT44(uVar13,0x7f7fffff);
        FUN_18013d2c2("inner_width (when ScrollX active)",&DAT_1804206d0,uVar12,0,uVar14,"%.3f",0);
        uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),0x7f7fffff);
        FUN_18013d2c2("row_min_height",&DAT_1804206cc,uVar12,0,uVar14,"%.3f",0);
        uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
        FUN_180119893(0);
        FUN_180124063("Specify height of the Selectable item.");
        uVar14 = CONCAT44(uVar12,9999);
        FUN_18013d731("items_count",&DAT_180408d64,DAT_1802dc268,0,uVar14,&DAT_18036b4b0,0);
        uVar14 = CONCAT44((int)((ulonglong)uVar14 >> 0x20),0xffffffff);
        FUN_18013995e("items_type (first column)",&DAT_180408d58,&local_138,6,uVar14);
        uVar12 = (undefined4)((ulonglong)uVar14 >> 0x20);
        FUN_18014d7a9();
      }
      FUN_18011a356();
      FUN_1801c0c76();
      FUN_1801377c5();
      FUN_18014d7a9();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_1804206e8) && (FUN_18023d500(&DAT_1804206e8), DAT_1804206e8 == -1)) {
      _DAT_1804206d8 = 0;
      DAT_1804206e0 = 0;
      FUN_18023d710(&LAB_1801c11cf);
      _Init_thread_footer(&DAT_1804206e8);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2c) < DAT_180420700) && (FUN_18023d500(&DAT_180420700), DAT_180420700 == -1)) {
      _DAT_1804206f0 = 0;
      DAT_1804206f8 = (int *)0x0;
      FUN_18023d710(&LAB_1801c11e0);
      _Init_thread_footer(&DAT_180420700);
    }
    uVar22 = DAT_180408d64;
    if (DAT_1804206d8 != DAT_180408d64) {
      uVar17 = DAT_1804206d8;
      if (DAT_1804206dc < (int)DAT_180408d64) {
        if (DAT_1804206dc == 0) {
          uVar17 = 8;
        }
        else {
          uVar17 = DAT_1804206dc / 2 + DAT_1804206dc;
        }
        if ((int)uVar17 <= (int)DAT_180408d64) {
          uVar17 = DAT_180408d64;
        }
        lVar27 = FUN_1800fe7f8((longlong)(int)uVar17 * 0x18);
        if (DAT_1804206e0 != 0) {
          FUN_1802a82f0(lVar27,DAT_1804206e0,(longlong)(int)DAT_1804206d8 * 0x18);
          FUN_1800fe8d4(DAT_1804206e0);
        }
        uVar26 = _DAT_1804206d8;
        _DAT_1804206d8 = (ulonglong)uVar17 << 0x20;
        uVar17 = (uint)uVar26;
        DAT_1804206e0 = lVar27;
      }
      if ((int)uVar17 < (int)uVar22) {
        lVar27 = (longlong)(int)uVar22 - (longlong)(int)uVar17;
        puVar24 = (undefined8 *)((longlong)(int)uVar17 * 0x18 + DAT_1804206e0);
        do {
          *puVar24 = 0;
          puVar24[1] = 0;
          puVar24[2] = 0;
          puVar24 = puVar24 + 3;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
      }
      _DAT_1804206d8 = CONCAT44(DAT_1804206dc,uVar22);
      if (0 < (int)DAT_180408d64) {
        puVar28 = (undefined4 *)(DAT_1804206e0 + 0x10);
        uVar26 = 0;
        do {
          iVar23 = (int)((uVar26 & 0xffffffff) / 0xf) * -0xf + (int)uVar26;
          uVar13 = 0;
          if (iVar23 == 4) {
            uVar13 = 0x14;
          }
          if (iVar23 == 3) {
            uVar13 = 10;
          }
          puVar28[-4] = (int)uVar26;
          *(undefined **)(puVar28 + -2) = (&PTR_s_Banana_180328b90)[uVar26 % 0xf];
          *puVar28 = uVar13;
          uVar26 = uVar26 + 1;
          puVar28 = puVar28 + 6;
        } while ((longlong)uVar26 < (longlong)(int)DAT_180408d64);
      }
    }
    local_c0 = (int *)FUN_180116bd5();
    uVar13 = 0;
    if ((DAT_180408d54 >> 0x18 & 1) != 0) {
      uVar13 = DAT_1804206d0;
    }
    uVar35 = (undefined4)DAT_1804206c0;
    fVar34 = DAT_1804206c0._4_4_;
    if (DAT_180408d68 == '\0') {
      uVar35 = 0;
      fVar34 = 0.0;
    }
    local_b4 = *local_c0;
    local_f8 = CONCAT44(fVar34,uVar35);
    cVar9 = FUN_180164c18("table_advanced",6,DAT_180408d54,&local_f8,CONCAT44(uVar12,uVar13));
    if (cVar9 == '\0') {
      dVar3 = 0.0;
      piVar29 = (int *)0x0;
      dVar5 = 0.0;
      dVar4 = 0.0;
      dVar6 = 0.0;
    }
    else {
      FUN_18016a158(&DAT_18036cc91,DAT_1804206bc | 0x94,0,0);
      FUN_18016a158("Name",DAT_1804206bc | 0x10,0,1);
      FUN_18016a158("Action",DAT_1804206bc | 0x210,0,2);
      FUN_18016a158("Quantity",DAT_1804206bc | 0x8000,0,3);
      FUN_18016a158("Description",~DAT_180408d54 >> 0xd & 8 | DAT_1804206bc,0,4);
      FUN_18016a158("Hidden",DAT_1804206bc | 0x202,0,0);
      FUN_18016a395(DAT_180408d5c,DAT_180408d60);
      lVar27 = FUN_18016ae4c();
      if (lVar27 != 0) {
        if (*(char *)(lVar27 + 0xc) != '\0') {
          DAT_180420704 = 1;
        }
        if ((1 < (int)DAT_1804206d8 & DAT_180420704) == 1) {
          DAT_180420708 = lVar27;
          FUN_180289570(DAT_1804206e0,_DAT_1804206d8 & 0xffffffff,0x18,FUN_1801c1aee);
          DAT_180420708 = 0;
          *(undefined1 *)(lVar27 + 0xc) = 0;
        }
      }
      DAT_180420704 = 0;
      uVar22 = FUN_18016a4c2(3);
      if ((DAT_180408d69 == '\x01') &&
         (((DAT_1804206bc & 0x40000) == 0 || (FUN_18016bd44(), DAT_180408d69 == '\x01')))) {
        FUN_18016b3e4();
      }
      FUN_1801003f2(&local_f8);
      FUN_1801004b6(&local_f8,_DAT_1804206d8 & 0xffffffff,DAT_1802bb8e0);
      uVar17 = DAT_1802de9b4;
      uVar12 = DAT_1802bb8e0;
      while (cVar9 = FUN_180100a32(&local_f8), cVar9 != '\0') {
        for (iVar23 = (int)(float)local_f8; iVar23 < local_f8._4_4_; iVar23 = iVar23 + 1) {
          piVar29 = (int *)(DAT_1804206e0 + (longlong)iVar23 * 0x18);
          piVar16 = DAT_1804206f8 + DAT_1804206f0;
          piVar19 = DAT_1804206f8;
          do {
            piVar15 = piVar19;
            if (piVar16 <= piVar15) break;
            piVar19 = piVar15 + 1;
          } while (*piVar15 != *piVar29);
          FUN_18011810d();
          FUN_18016a67b(0);
          FUN_18016a960(0);
          FUN_1801bf199(local_158,"%04d",*piVar29);
          switch(DAT_180408d58) {
          case 0:
            FUN_18013309a(local_158,0);
            break;
          case 1:
            local_100 = 0;
            FUN_180134257(local_158,&local_100);
            break;
          case 2:
            FUN_18013425f(local_158);
            break;
          case 3:
            local_100 = (ulonglong)uVar17;
            FUN_180134257(local_158,&local_100);
            break;
          default:
            if ((DAT_180408d58 & 0xfffffffe) == 4) {
              uVar14 = 0;
              if (DAT_180408d58 == 5) {
                uVar14 = 0x12;
              }
              local_100 = (ulonglong)DAT_1804206cc << 0x20;
              cVar9 = FUN_1801391f6(local_158,piVar15 < piVar16,uVar14,&local_100);
              if (cVar9 != '\0') {
                lVar27 = FUN_180107ee8();
                if (*(char *)(lVar27 + 0x108) == '\x01') {
                  if (piVar15 < piVar16) {
                    piVar16 = DAT_1804206f8 + DAT_1804206f0;
                    piVar19 = DAT_1804206f8;
                    if (0 < (longlong)DAT_1804206f0) {
                      do {
                        if (*piVar19 == *piVar29) break;
                        piVar19 = piVar19 + 1;
                      } while (piVar19 < piVar16);
                    }
                    if (piVar19 < piVar16) {
                      if (piVar19 < piVar16 + -1) {
                        *piVar19 = piVar16[-1];
                      }
                      _DAT_1804206f0 = CONCAT44(DAT_1804206f4,DAT_1804206f0 + -1);
                    }
                  }
                  else {
                    iVar21 = DAT_1804206f0;
                    if (DAT_1804206f0 == DAT_1804206f4) {
                      if (DAT_1804206f0 == 0) {
                        iVar21 = 8;
                      }
                      else {
                        iVar21 = DAT_1804206f0 / 2 + DAT_1804206f0;
                      }
                      iVar31 = DAT_1804206f0 + 1;
                      if (DAT_1804206f0 + 1 < iVar21) {
                        iVar31 = iVar21;
                      }
                      piVar16 = (int *)FUN_1800fe7f8((longlong)iVar31 << 2);
                      if (DAT_1804206f8 != (int *)0x0) {
                        FUN_1802a82f0(piVar16,DAT_1804206f8,(longlong)DAT_1804206f0 << 2);
                        FUN_1800fe8d4(DAT_1804206f8);
                      }
                      _DAT_1804206f0 = CONCAT44(iVar31,DAT_1804206f0);
                      iVar21 = DAT_1804206f0;
                      DAT_1804206f8 = piVar16;
                    }
                    DAT_1804206f8[iVar21] = *piVar29;
                    DAT_1804206f0 = DAT_1804206f0 + 1;
                  }
                }
                else {
                  if (DAT_1804206f8 != (int *)0x0) {
                    _DAT_1804206f0 = 0;
                    FUN_1800fe8d4();
                    DAT_1804206f8 = (int *)0x0;
                  }
                  if (DAT_1804206f0 == 0) {
                    iVar21 = 8;
                  }
                  else {
                    iVar21 = DAT_1804206f0 / 2 + DAT_1804206f0;
                  }
                  iVar31 = DAT_1804206f0 + 1;
                  if (DAT_1804206f0 + 1 < iVar21) {
                    iVar31 = iVar21;
                  }
                  piVar16 = (int *)FUN_1800fe7f8((longlong)iVar31 << 2);
                  if (DAT_1804206f8 != (int *)0x0) {
                    FUN_1802a82f0(piVar16,DAT_1804206f8,(longlong)DAT_1804206f0 << 2);
                    FUN_1800fe8d4(DAT_1804206f8);
                  }
                  DAT_1804206f8 = piVar16;
                  DAT_1804206f4 = iVar31;
                  piVar16[DAT_1804206f0] = *piVar29;
                  _DAT_1804206f0 = CONCAT44(DAT_1804206f4,DAT_1804206f0 + 1);
                }
              }
            }
          }
          cVar9 = FUN_18016a960(1);
          if (cVar9 != '\0') {
            FUN_18013309a(*(undefined8 *)(piVar29 + 2),0);
          }
          cVar9 = FUN_18016a960(2);
          if (cVar9 != '\0') {
            cVar9 = FUN_18013425f(&DAT_1803657de);
            if (cVar9 != '\0') {
              piVar29[4] = piVar29[4] + 1;
            }
            if (((uVar22 >> 0x1a & 1) != 0) && (cVar9 = FUN_180110b9a(), cVar9 != '\0')) {
              DAT_180420704 = 1;
            }
            FUN_180119893(0,uVar12);
            cVar9 = FUN_18013425f(&DAT_18036255f);
            if (cVar9 != '\0') {
              piVar29[4] = piVar29[4] + -1;
            }
            if (((uVar22 >> 0x1a & 1) != 0) && (cVar9 = FUN_180110b9a(), cVar9 != '\0')) {
              DAT_180420704 = 1;
            }
          }
          cVar9 = FUN_18016a960(3);
          if (cVar9 != '\0') {
            FUN_1801330a5(&DAT_18036b4b0,piVar29[4]);
          }
          FUN_18016a960(4);
          if (DAT_1804206d4 == '\x01') {
            FUN_1801332a0("Lorem ipsum dolor sit amet");
          }
          else {
            FUN_1801330a5("Lorem ipsum dolor sit amet");
          }
          cVar9 = FUN_18016a960(5);
          if (cVar9 != '\0') {
            FUN_1801330a5(&DAT_18036e0bc);
          }
          FUN_18011834f();
        }
      }
      fVar34 = (float)FUN_18011a712();
      fVar32 = (float)FUN_18011a6fb();
      fVar36 = (float)FUN_18011a740();
      fVar37 = (float)FUN_18011a729();
      piVar29 = (int *)FUN_180116bd5();
      FUN_180168430();
      thunk_FUN_180100412(&local_f8);
      dVar5 = (double)fVar36;
      dVar6 = (double)fVar34;
      dVar3 = (double)fVar37;
      dVar4 = (double)fVar32;
    }
    FUN_180135c3a("Debug details",&DAT_180420705);
    if ((piVar29 != (int *)0x0) && (DAT_180420705 != '\0')) {
      FUN_180119893(0,0);
      if (piVar29 == local_c0) {
        FUN_1801330a5(": DrawCmd: +%d (in same window)",*piVar29 - local_b4);
      }
      else {
        FUN_1801330a5(": DrawCmd: +%d (in child window), Scroll: (%.f/%.f) (%.f/%.f)",*piVar29 + -1,
                      SUB84(dVar4,0),SUB84(dVar3,0),dVar6,dVar5);
      }
    }
    FUN_18014d7a9();
  }
  FUN_18011834f();
  FUN_1801c11f1();
  if (DAT_1804204a9 == '\x01') {
    FUN_180101ccb(1);
  }
  return;
}

