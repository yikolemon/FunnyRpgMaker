/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400f8e8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f8e8a(void)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_d8 [32];
  char *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_70;
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  cVar3 = FUN_1400c6846("Inputs & Focus",0);
  if (cVar3 != '\0') {
    lVar10 = FUN_140081200();
    FUN_1400c67ef(1,2);
    cVar3 = FUN_1400c51fb("Inputs");
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "This is a simplified view. See more detailed input state:\n- in \'Tools->Metrics/Debugger->Inputs\'.\n- in \'Tools->Debug Log->IO\'."
                 );
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1f42,"Inputs & Focus/Inputs");
      cVar3 = FUN_140081bec(0);
      if (cVar3 == '\0') {
        FUN_1400abfd5("Mouse pos: <INVALID>");
      }
      else {
        FUN_1400abfd5("Mouse pos: (%g, %g)",(double)*(float *)(lVar10 + 0xe8),
                      (double)*(float *)(lVar10 + 0xec));
      }
      FUN_1400abfd5("Mouse delta: (%g, %g)",(double)*(float *)(lVar10 + 0xd4),
                    (double)*(float *)(lVar10 + 0xd8));
      FUN_1400abfd5("Mouse down:");
      uVar9 = DAT_1401c86a4;
      uVar15 = 0;
      do {
        cVar3 = FUN_140089065(uVar15 & 0xffffffff);
        if (cVar3 != '\0') {
          FUN_140092bab(0,uVar9);
          FUN_1400abfd5("b%d (%.02f secs)",uVar15 & 0xffffffff,
                        (double)*(float *)(lVar10 + 0xb7c + uVar15 * 4));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 5);
      FUN_1400abfd5("Mouse wheel: %.1f",(double)*(float *)(lVar10 + 0xf8));
      FUN_1400abfd5("Mouse clicked count:");
      uVar9 = DAT_1401c86a4;
      uVar15 = 0;
      do {
        if (*(short *)(lVar10 + 0xb2a + uVar15 * 2) != 0) {
          FUN_140092bab(0,uVar9);
          FUN_1400abfd5("b%d: %d",uVar15 & 0xffffffff,*(undefined2 *)(lVar10 + 0xb2a + uVar15 * 2));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 5);
      FUN_1400abfd5("Keys down:");
      uVar9 = DAT_1401c86a4;
      iVar14 = 0x200;
      do {
        cVar3 = FUN_140091d93(iVar14);
        if (cVar3 != '\0') {
          FUN_140092bab(0,uVar9);
          uVar11 = FUN_14009171d(iVar14);
          FUN_1400abfd5(&DAT_140ecbfcf,uVar11,iVar14);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 0x29b);
      local_b8 = "SUPER ";
      if (*(char *)(lVar10 + 0x10b) == '\0') {
        local_b8 = "";
      }
      puVar17 = &DAT_140edacfe;
      if (*(char *)(lVar10 + 0x10a) == '\0') {
        puVar17 = &DAT_140edcdbf;
      }
      pcVar16 = "SHIFT ";
      if (*(char *)(lVar10 + 0x109) == '\0') {
        pcVar16 = "";
      }
      pcVar13 = "CTRL ";
      if (*(char *)(lVar10 + 0x108) == '\0') {
        pcVar13 = "";
      }
      FUN_1400abfd5("Keys mods: %s%s%s%s",pcVar13,pcVar16,puVar17);
      FUN_1400abfd5("Chars queue:");
      uVar9 = DAT_1401c86a4;
      if (0 < *(int *)(lVar10 + 0xbe8)) {
        lVar19 = 0;
        do {
          sVar1 = *(short *)(*(longlong *)(lVar10 + 0xbf0) + lVar19 * 2);
          FUN_140092bab(0,uVar9);
          iVar14 = (int)(char)sVar1;
          if (0xde < (ushort)(sVar1 - 0x21U)) {
            iVar14 = 0x3f;
          }
          FUN_1400abfd5("\'%c\' (0x%04X)",iVar14,sVar1);
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(lVar10 + 0xbe8));
      }
      FUN_1400c66d9();
    }
    FUN_1400c67ef(1,2);
    cVar3 = FUN_1400c51fb("Outputs");
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "The value of io.WantCaptureMouse and io.WantCaptureKeyboard are normally set by Dear ImGui to instruct your application of how to route inputs. Typically, when a value is true, it means Dear ImGui wants the corresponding inputs and we expect the underlying application to ignore them.\n\nThe most typical case is: when hovering a window, Dear ImGui set io.WantCaptureMouse to true, and underlying application should ignore mouse inputs (in practice there are many and more subtle rules leading to how those flags are set)."
                 );
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1f68,"Inputs & Focus/Outputs");
      FUN_1400abfd5("io.WantCaptureMouse: %d",*(undefined1 *)(lVar10 + 0xb8));
      FUN_1400abfd5("io.WantCaptureMouseUnlessPopupClose: %d",*(undefined1 *)(lVar10 + 0xac0));
      FUN_1400abfd5("io.WantCaptureKeyboard: %d",*(undefined1 *)(lVar10 + 0xb9));
      FUN_1400abfd5("io.WantTextInput: %d",*(undefined1 *)(lVar10 + 0xba));
      FUN_1400abfd5("io.WantSetMousePos: %d",*(undefined1 *)(lVar10 + 0xbb));
      FUN_1400abfd5("io.NavActive: %d, io.NavVisible: %d",*(undefined1 *)(lVar10 + 0xbd),
                    *(undefined1 *)(lVar10 + 0xbe));
      FUN_1400811b6("imgui_demo.cpp",0x1f70,"Inputs & Focus/Outputs/WantCapture override");
      cVar3 = FUN_1400c51fb("WantCapture override");
      if (cVar3 != '\0') {
        FUN_14009cf92(
                     "Hovering the colored canvas will override io.WantCaptureXXX fields.\nNotice how normally (when set to none), the value of io.WantCaptureKeyboard would be false when hovering and true when clicking."
                     );
        fVar20 = (float)FUN_14008ff20();
        fVar21 = DAT_140e8c740;
        FUN_140079071(fVar20 * DAT_140e8c740);
        local_b8 = (&PTR_s_Set_to_false_140e8d098)[DAT_140f1c520];
        uStack_b0._0_4_ = 0x600;
        FUN_1400ba55a("SetNextFrameWantCaptureMouse() on hover",&DAT_140f1c520,0xffffffff,1);
        fVar20 = (float)FUN_14008ff20();
        FUN_140079071(fVar20 * fVar21);
        local_b8 = (&PTR_s_Set_to_false_140e8d098)[DAT_140f1c524];
        uStack_b0 = CONCAT44(uStack_b0._4_4_,0x600);
        FUN_1400ba55a("SetNextFrameWantCaptureKeyboard() on hover",&DAT_140f1c524,0xffffffff,1);
        local_a0 = DAT_140e8d560;
        local_98 = CONCAT44(_UNK_140e8d574,_DAT_140e8d570);
        uStack_90 = _UNK_140e8d578;
        uStack_8c = _UNK_140e8d57c;
        FUN_1400c2545("##panel",&local_98,0x240);
        bVar4 = FUN_1400808b4(0);
        if ((DAT_140f1c520 != -1 & bVar4) == 1) {
          FUN_14009226d(DAT_140f1c520 == 1);
        }
        bVar4 = FUN_1400808b4(0);
        if ((DAT_140f1c524 != -1 & bVar4) == 1) {
          FUN_14009225c(DAT_140f1c524 == 1);
        }
        FUN_1400c66d9();
      }
      FUN_1400c66d9();
    }
    cVar3 = FUN_1400c51fb("Shortcuts");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1f96,"Inputs & Focus/Shortcuts");
      thunk_FUN_1400af8bf("ImGuiInputFlags_Repeat",&DAT_140f1c528,1);
      FUN_1400afd2d("ImGuiInputFlags_RouteActive",&DAT_140f1c52c,0x400);
      FUN_1400afd2d("ImGuiInputFlags_RouteFocused (default)",&DAT_140f1c52c,0x800);
      FUN_1400932c6(0);
      FUN_14008f898(DAT_140f1c52c != 0x800);
      thunk_FUN_1400af8bf("ImGuiInputFlags_RouteOverActive##0",&DAT_140f1c528,0x8000);
      FUN_14008f98e();
      FUN_14009331a(0);
      FUN_1400afd2d("ImGuiInputFlags_RouteGlobal",&DAT_140f1c52c,0x1000);
      FUN_1400932c6(0);
      FUN_14008f898(DAT_140f1c52c != 0x1000);
      thunk_FUN_1400af8bf("ImGuiInputFlags_RouteOverFocused",&DAT_140f1c528,0x4000);
      thunk_FUN_1400af8bf("ImGuiInputFlags_RouteOverActive",&DAT_140f1c528,0x8000);
      thunk_FUN_1400af8bf("ImGuiInputFlags_RouteUnlessBgFocused",&DAT_140f1c528,0x10000);
      FUN_14008f98e();
      FUN_14009331a(0);
      FUN_1400afd2d("ImGuiInputFlags_RouteAlways",&DAT_140f1c52c,0x2000);
      uVar8 = (DAT_140f1c528 | DAT_140f1c52c) & 0xfffe3fff;
      if (DAT_140f1c52c == 0x1000) {
        uVar8 = DAT_140f1c528 | DAT_140f1c52c;
      }
      FUN_1400b1021("Using SetNextItemShortcut()");
      FUN_1400abfd5("Ctrl+S");
      FUN_140092718(0x1234,uVar8 | 0x40000);
      local_98 = 0;
      FUN_1400ad187(&DAT_140ec9c59,&local_98);
      FUN_1400abfd5(&DAT_140ecd160);
      FUN_140092718(0x4227,uVar8 | 0x40000);
      local_b8 = "%.3f";
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_1400ba2c0("Factor",&DAT_140f1c530,0,DAT_1401c86c8);
      FUN_1400b1021("Using Shortcut()");
      fVar21 = (float)FUN_140093756();
      FUN_1400abfd5("Ctrl+A");
      cVar3 = FUN_14008e617(0x1222,uVar8);
      pcVar16 = "...";
      pcVar13 = "...";
      if (cVar3 != '\0') {
        pcVar13 = "PRESSED";
      }
      uVar5 = FUN_140095090(0);
      FUN_1400abfd5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar13);
      local_98 = CONCAT44(_UNK_140e8d584,_DAT_140e8d580);
      uStack_90 = _UNK_140e8d588;
      uStack_8c = _UNK_140e8d58c;
      FUN_14007a7b5(3,&local_98);
      local_98 = CONCAT44(DAT_1402113ac * fVar21,0x80800000);
      FUN_14008a029("WindowA",&local_98,1,0);
      FUN_1400abfd5("Press Ctrl+A and see who receives it!");
      FUN_1400b0bd1();
      FUN_1400abfd5("(in WindowA)");
      cVar3 = FUN_14008e617(0x1222,uVar8);
      pcVar13 = "...";
      if (cVar3 != '\0') {
        pcVar13 = "PRESSED";
      }
      uVar5 = FUN_140095090(0);
      FUN_1400abfd5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar13);
      fVar21 = fVar21 * DAT_140211518;
      local_98 = CONCAT44(fVar21,0x80800000);
      FUN_14008a029("ChildD",&local_98,1,0);
      FUN_1400abfd5("(in ChildD: not using same Shortcut)");
      uVar5 = FUN_140095090(0);
      FUN_1400abfd5("IsWindowFocused: %d",uVar5);
      FUN_14008a651();
      local_98 = CONCAT44(fVar21,0x80800000);
      FUN_14008a029("ChildE",&local_98,1,0);
      FUN_1400abfd5("(in ChildE: using same Shortcut)");
      cVar3 = FUN_14008e617(0x1222,uVar8);
      pcVar13 = "...";
      if (cVar3 != '\0') {
        pcVar13 = "PRESSED";
      }
      uVar5 = FUN_140095090(0);
      FUN_1400abfd5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar13);
      FUN_14008a651();
      local_98 = 0;
      cVar3 = FUN_1400ad187("Open Popup",&local_98);
      if (cVar3 != '\0') {
        FUN_140093f4a("PopupF",0);
      }
      cVar3 = FUN_140094826("PopupF",0);
      if (cVar3 != '\0') {
        FUN_1400abfd5("(in PopupF)");
        cVar3 = FUN_14008e617(0x1222,uVar8);
        if (cVar3 != '\0') {
          pcVar16 = "PRESSED";
        }
        uVar5 = FUN_140095090(0);
        FUN_1400abfd5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar16);
        FUN_1400946ab();
      }
      FUN_14008a651();
      FUN_14007a8e1(1);
      FUN_1400c66d9();
    }
    cVar3 = FUN_1400c51fb("Mouse Cursors");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1ff2,"Inputs & Focus/Mouse Cursors");
      uVar8 = FUN_140092240();
      if (uVar8 < 0xb) {
        puVar17 = (&PTR_s_Arrow_140ec2d2f_0x19_140e8d0b0)[uVar8];
      }
      else {
        puVar17 = &DAT_140ecd5d9;
      }
      ppuVar18 = &PTR_s_Arrow_140ec2d2f_0x19_140e8d0b0;
      FUN_1400abfd5("Current mouse cursor = %d: %s",uVar8,puVar17);
      FUN_14008f898(1);
      thunk_FUN_1400af8bf("io.BackendFlags: HasMouseCursors",lVar10 + 4,2);
      FUN_14008f98e();
      FUN_1400abfd5("Hover to see mouse cursors:");
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92(
                   "Your application can render a different mouse cursor based on what ImGui::GetMouseCursor() returns. If software cursor rendering (io.MouseDrawCursor) is set ImGui will draw the right cursor for you, otherwise your backend needs to handle it."
                   );
      uVar15 = 0;
      do {
        FUN_140104e1d(&local_98,"Mouse cursor %d: %s",uVar15 & 0xffffffff,*ppuVar18);
        FUN_1400b0125();
        local_a0 = 0;
        FUN_1400b2126(&local_98,0,0,&local_a0);
        cVar3 = FUN_1400808b4(0);
        if (cVar3 != '\0') {
          FUN_14009224e(uVar15 & 0xffffffff);
        }
        uVar15 = uVar15 + 1;
        ppuVar18 = ppuVar18 + 1;
      } while (uVar15 != 0xb);
      FUN_1400c66d9();
    }
    cVar3 = FUN_1400c51fb("Tabbing");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x200f,"Inputs & Focus/Tabbing");
      FUN_1400abfd5("Use Tab/Shift+Tab to cycle through keyboard editable fields.");
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f(&DAT_140ecea34,s_hello_140f1c540,0x20,0);
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f("2",s_hello_140f1c540,0x20,0);
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f(&DAT_140ece45f,s_hello_140f1c540,0x20,0);
      FUN_14008f7a2(1,1);
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f("4 (tab skip)",s_hello_140f1c540,0x20,0);
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Item won\'t be cycled through when using TAB or Shift+Tab.");
      FUN_14008f860();
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f(&DAT_140ece096,s_hello_140f1c540,0x20,0);
      FUN_1400c66d9();
    }
    cVar3 = FUN_1400c51fb("Focus from code");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x201f,"Inputs & Focus/Focus from code");
      local_98 = 0;
      cVar3 = FUN_1400ad187("Focus on 1",&local_98);
      uVar9 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      local_98 = 0;
      cVar6 = FUN_1400ad187("Focus on 2",&local_98);
      FUN_140092bab(0,uVar9);
      local_98 = 0;
      cVar7 = FUN_1400ad187("Focus on 3",&local_98);
      if (cVar3 != '\0') {
        FUN_140090580(0);
      }
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f(&DAT_140ecea34,s_click_on_a_button_to_set_focus_140f1c560,0x80,0);
      cVar3 = FUN_140089e6e();
      if (cVar6 != '\0') {
        FUN_140090580(0);
      }
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f("2",s_click_on_a_button_to_set_focus_140f1c560,0x80,0);
      cVar6 = FUN_140089e6e();
      if (cVar6 != '\0') {
        cVar3 = '\x02';
      }
      FUN_14008f7a2(1,1);
      if (cVar7 != '\0') {
        FUN_140090580(0);
      }
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_1400bed4f("3 (tab skip)",s_click_on_a_button_to_set_focus_140f1c560,0x80,0);
      cVar6 = FUN_140089e6e();
      if (cVar6 != '\0') {
        cVar3 = '\x03';
      }
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Item won\'t be cycled through when using TAB or Shift+Tab.");
      FUN_14008f860();
      if (cVar3 == '\0') {
        FUN_1400abfd5("Item with focus: <none>");
      }
      else {
        FUN_1400abfd5("Item with focus: %d",cVar3);
      }
      local_98 = 0;
      bVar4 = FUN_1400ad187("Focus on X",&local_98);
      uVar9 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      local_98 = 0;
      cVar3 = FUN_1400ad187("Focus on Y",&local_98);
      iVar14 = 1;
      if (cVar3 == '\0') {
        iVar14 = bVar4 - 1;
      }
      FUN_140092bab(0,uVar9);
      local_98 = 0;
      cVar3 = FUN_1400ad187("Focus on Z",&local_98);
      iVar12 = 2;
      if (cVar3 == '\0') {
        iVar12 = iVar14;
      }
      if (iVar12 != -1) {
        FUN_140090580();
      }
      local_b8 = "%.3f";
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_1400ba3b5("Float3",&DAT_140f31e60,0,DAT_1401c86c8);
      FUN_1400ac1d0("NB: Cursor & selection are preserved when refocusing last used item in code.");
      FUN_1400c66d9();
    }
    cVar3 = FUN_1400c51fb("Dragging");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x2049,"Inputs & Focus/Dragging");
      FUN_1400ac1d0(
                   "You can use ImGui::GetMouseDragDelta(0) to query for the dragged amount on any widget."
                   );
      uVar2 = DAT_1401c86d4;
      uVar9 = DAT_1401c86a4;
      iVar14 = 0;
      do {
        FUN_1400abfd5("IsMouseDragging(%d):",iVar14);
        uVar5 = FUN_1400816f9(iVar14,uVar9);
        FUN_1400abfd5("  w/ default threshold: %d,",uVar5);
        uVar5 = FUN_1400816f9(iVar14,0);
        FUN_1400abfd5("  w/ zero threshold: %d,",uVar5);
        uVar5 = FUN_1400816f9(iVar14,uVar2);
        FUN_1400abfd5("  w/ large threshold: %d,",uVar5);
        iVar14 = iVar14 + 1;
      } while (iVar14 != 3);
      local_98 = 0;
      FUN_1400ad187("Drag Me");
      cVar3 = FUN_140089e6e();
      if (cVar3 != '\0') {
        uVar11 = FUN_14007c4e4(0);
        uVar9 = FUN_14007a557(0x16,DAT_1401c86c8);
        local_b8 = (char *)CONCAT44(local_b8._4_4_,0x40800000);
        FUN_1400ddd04(uVar11,lVar10 + 0xacc,lVar10 + 0xe8,uVar9);
      }
      FUN_140092182(&local_98,0,0);
      FUN_140092182(&local_a0,0,DAT_1401c86a4);
      fVar21 = *(float *)(lVar10 + 0xd8);
      fVar20 = *(float *)(lVar10 + 0xd4);
      FUN_1400abfd5("GetMouseDragDelta(0):");
      FUN_1400abfd5("  w/ default threshold: (%.1f, %.1f)",(double)(float)local_a0,
                    (double)local_a0._4_4_);
      FUN_1400abfd5("  w/ zero threshold: (%.1f, %.1f)",(double)(float)local_98,
                    (double)local_98._4_4_);
      FUN_1400abfd5("io.MouseDelta: (%.1f, %.1f)",(double)fVar20,SUB84((double)fVar21,0));
      FUN_1400c66d9();
    }
  }
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_d8);
}

