/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b3206 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b3206(void)

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
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_d8;
  cVar3 = FUN_18014d916("Inputs & Focus",0);
  if (cVar3 != '\0') {
    lVar10 = FUN_180107ee8();
    FUN_18014d8bf(1,2);
    cVar3 = FUN_18014c2cb("Inputs");
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "This is a simplified view. See more detailed input state:\n- in \'Tools->Metrics/Debugger->Inputs\'.\n- in \'Tools->Debug Log->IO\'."
                 );
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1f42,"Inputs & Focus/Inputs");
      cVar3 = FUN_1801088d4(0);
      if (cVar3 == '\0') {
        FUN_1801330a5("Mouse pos: <INVALID>");
      }
      else {
        FUN_1801330a5("Mouse pos: (%g, %g)",(double)*(float *)(lVar10 + 0xe8),
                      (double)*(float *)(lVar10 + 0xec));
      }
      FUN_1801330a5("Mouse delta: (%g, %g)",(double)*(float *)(lVar10 + 0xd4),
                    (double)*(float *)(lVar10 + 0xd8));
      FUN_1801330a5("Mouse down:");
      uVar9 = DAT_1802bb8e0;
      uVar15 = 0;
      do {
        cVar3 = FUN_18010fd4d(uVar15 & 0xffffffff);
        if (cVar3 != '\0') {
          FUN_180119893(0,uVar9);
          FUN_1801330a5("b%d (%.02f secs)",uVar15 & 0xffffffff,
                        (double)*(float *)(lVar10 + 0xb7c + uVar15 * 4));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 5);
      FUN_1801330a5("Mouse wheel: %.1f",(double)*(float *)(lVar10 + 0xf8));
      FUN_1801330a5("Mouse clicked count:");
      uVar9 = DAT_1802bb8e0;
      uVar15 = 0;
      do {
        if (*(short *)(lVar10 + 0xb2a + uVar15 * 2) != 0) {
          FUN_180119893(0,uVar9);
          FUN_1801330a5("b%d: %d",uVar15 & 0xffffffff,*(undefined2 *)(lVar10 + 0xb2a + uVar15 * 2));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 5);
      FUN_1801330a5("Keys down:");
      uVar9 = DAT_1802bb8e0;
      iVar14 = 0x200;
      do {
        cVar3 = FUN_180118a7b(iVar14);
        if (cVar3 != '\0') {
          FUN_180119893(0,uVar9);
          uVar11 = FUN_180118405(iVar14);
          FUN_1801330a5(&DAT_18036b4ab,uVar11,iVar14);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 0x29b);
      local_b8 = "SUPER ";
      if (*(char *)(lVar10 + 0x10b) == '\0') {
        local_b8 = "";
      }
      puVar17 = &DAT_18037bbd3;
      if (*(char *)(lVar10 + 0x10a) == '\0') {
        puVar17 = &DAT_1803861e4;
      }
      pcVar16 = "SHIFT ";
      if (*(char *)(lVar10 + 0x109) == '\0') {
        pcVar16 = "";
      }
      pcVar13 = "CTRL ";
      if (*(char *)(lVar10 + 0x108) == '\0') {
        pcVar13 = "";
      }
      FUN_1801330a5("Keys mods: %s%s%s%s",pcVar13,pcVar16,puVar17);
      FUN_1801330a5("Chars queue:");
      uVar9 = DAT_1802bb8e0;
      if (0 < *(int *)(lVar10 + 0xbe8)) {
        lVar19 = 0;
        do {
          sVar1 = *(short *)(*(longlong *)(lVar10 + 0xbf0) + lVar19 * 2);
          FUN_180119893(0,uVar9);
          iVar14 = (int)(char)sVar1;
          if (0xde < (ushort)(sVar1 - 0x21U)) {
            iVar14 = 0x3f;
          }
          FUN_1801330a5("\'%c\' (0x%04X)",iVar14,sVar1);
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(lVar10 + 0xbe8));
      }
      FUN_18014d7a9();
    }
    FUN_18014d8bf(1,2);
    cVar3 = FUN_18014c2cb("Outputs");
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "The value of io.WantCaptureMouse and io.WantCaptureKeyboard are normally set by Dear ImGui to instruct your application of how to route inputs. Typically, when a value is true, it means Dear ImGui wants the corresponding inputs and we expect the underlying application to ignore them.\n\nThe most typical case is: when hovering a window, Dear ImGui set io.WantCaptureMouse to true, and underlying application should ignore mouse inputs (in practice there are many and more subtle rules leading to how those flags are set)."
                 );
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1f68,"Inputs & Focus/Outputs");
      FUN_1801330a5("io.WantCaptureMouse: %d",*(undefined1 *)(lVar10 + 0xb8));
      FUN_1801330a5("io.WantCaptureMouseUnlessPopupClose: %d",*(undefined1 *)(lVar10 + 0xac0));
      FUN_1801330a5("io.WantCaptureKeyboard: %d",*(undefined1 *)(lVar10 + 0xb9));
      FUN_1801330a5("io.WantTextInput: %d",*(undefined1 *)(lVar10 + 0xba));
      FUN_1801330a5("io.WantSetMousePos: %d",*(undefined1 *)(lVar10 + 0xbb));
      FUN_1801330a5("io.NavActive: %d, io.NavVisible: %d",*(undefined1 *)(lVar10 + 0xbd),
                    *(undefined1 *)(lVar10 + 0xbe));
      FUN_180107e9e("imgui_demo.cpp",0x1f70,"Inputs & Focus/Outputs/WantCapture override");
      cVar3 = FUN_18014c2cb("WantCapture override");
      if (cVar3 != '\0') {
        FUN_180124063(
                     "Hovering the colored canvas will override io.WantCaptureXXX fields.\nNotice how normally (when set to none), the value of io.WantCaptureKeyboard would be false when hovering and true when clicking."
                     );
        fVar20 = (float)FUN_180116c08();
        fVar21 = DAT_180327370;
        FUN_1800ffdb5(fVar20 * DAT_180327370);
        local_b8 = (&PTR_s_Set_to_false_180328d08)[DAT_180408d80];
        uStack_b0._0_4_ = 0x600;
        FUN_18014162a("SetNextFrameWantCaptureMouse() on hover",&DAT_180408d80,0xffffffff,1);
        fVar20 = (float)FUN_180116c08();
        FUN_1800ffdb5(fVar20 * fVar21);
        local_b8 = (&PTR_s_Set_to_false_180328d08)[DAT_180408d84];
        uStack_b0 = CONCAT44(uStack_b0._4_4_,0x600);
        FUN_18014162a("SetNextFrameWantCaptureKeyboard() on hover",&DAT_180408d84,0xffffffff,1);
        local_a0 = DAT_1803291d0;
        local_98 = CONCAT44(_UNK_1803291e4,_DAT_1803291e0);
        uStack_90 = _UNK_1803291e8;
        uStack_8c = _UNK_1803291ec;
        FUN_180149615("##panel",&local_98,0x240);
        bVar4 = FUN_18010759c(0);
        if ((DAT_180408d80 != -1 & bVar4) == 1) {
          FUN_180118f55(DAT_180408d80 == 1);
        }
        bVar4 = FUN_18010759c(0);
        if ((DAT_180408d84 != -1 & bVar4) == 1) {
          FUN_180118f44(DAT_180408d84 == 1);
        }
        FUN_18014d7a9();
      }
      FUN_18014d7a9();
    }
    cVar3 = FUN_18014c2cb("Shortcuts");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1f96,"Inputs & Focus/Shortcuts");
      thunk_FUN_18013698f("ImGuiInputFlags_Repeat",&DAT_180408d88,1);
      FUN_180136dfd("ImGuiInputFlags_RouteActive",&DAT_180408d8c,0x400);
      FUN_180136dfd("ImGuiInputFlags_RouteFocused (default)",&DAT_180408d8c,0x800);
      FUN_180119fae(0);
      FUN_180116580(DAT_180408d8c != 0x800);
      thunk_FUN_18013698f("ImGuiInputFlags_RouteOverActive##0",&DAT_180408d88,0x8000);
      FUN_180116676();
      FUN_18011a002(0);
      FUN_180136dfd("ImGuiInputFlags_RouteGlobal",&DAT_180408d8c,0x1000);
      FUN_180119fae(0);
      FUN_180116580(DAT_180408d8c != 0x1000);
      thunk_FUN_18013698f("ImGuiInputFlags_RouteOverFocused",&DAT_180408d88,0x4000);
      thunk_FUN_18013698f("ImGuiInputFlags_RouteOverActive",&DAT_180408d88,0x8000);
      thunk_FUN_18013698f("ImGuiInputFlags_RouteUnlessBgFocused",&DAT_180408d88,0x10000);
      FUN_180116676();
      FUN_18011a002(0);
      FUN_180136dfd("ImGuiInputFlags_RouteAlways",&DAT_180408d8c,0x2000);
      uVar8 = (DAT_180408d88 | DAT_180408d8c) & 0xfffe3fff;
      if (DAT_180408d8c == 0x1000) {
        uVar8 = DAT_180408d88 | DAT_180408d8c;
      }
      FUN_1801380f1("Using SetNextItemShortcut()");
      FUN_1801330a5("Ctrl+S");
      FUN_180119400(0x1234,uVar8 | 0x40000);
      local_98 = 0;
      FUN_180134257(&DAT_180368bae,&local_98);
      FUN_1801330a5(&DAT_18036c98a);
      FUN_180119400(0x4227,uVar8 | 0x40000);
      local_b8 = "%.3f";
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_180141390("Factor",&DAT_180408d90,0,DAT_1802ac570);
      FUN_1801380f1("Using Shortcut()");
      fVar21 = (float)FUN_18011a43e();
      FUN_1801330a5("Ctrl+A");
      cVar3 = FUN_1801152ff(0x1222,uVar8);
      pcVar16 = "...";
      pcVar13 = "...";
      if (cVar3 != '\0') {
        pcVar13 = "PRESSED";
      }
      uVar5 = FUN_18011bdd4(0);
      FUN_1801330a5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar13);
      local_98 = CONCAT44(_UNK_1803291f4,_DAT_1803291f0);
      uStack_90 = _UNK_1803291f8;
      uStack_8c = _UNK_1803291fc;
      FUN_1801014f9(3,&local_98);
      local_98 = CONCAT44(DAT_1802de65c * fVar21,0x80800000);
      FUN_180110d11("WindowA",&local_98,1,0);
      FUN_1801330a5("Press Ctrl+A and see who receives it!");
      FUN_180137ca1();
      FUN_1801330a5("(in WindowA)");
      cVar3 = FUN_1801152ff(0x1222,uVar8);
      pcVar13 = "...";
      if (cVar3 != '\0') {
        pcVar13 = "PRESSED";
      }
      uVar5 = FUN_18011bdd4(0);
      FUN_1801330a5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar13);
      fVar21 = fVar21 * DAT_1802dbb50;
      local_98 = CONCAT44(fVar21,0x80800000);
      FUN_180110d11("ChildD",&local_98,1,0);
      FUN_1801330a5("(in ChildD: not using same Shortcut)");
      uVar5 = FUN_18011bdd4(0);
      FUN_1801330a5("IsWindowFocused: %d",uVar5);
      FUN_180111339();
      local_98 = CONCAT44(fVar21,0x80800000);
      FUN_180110d11("ChildE",&local_98,1,0);
      FUN_1801330a5("(in ChildE: using same Shortcut)");
      cVar3 = FUN_1801152ff(0x1222,uVar8);
      pcVar13 = "...";
      if (cVar3 != '\0') {
        pcVar13 = "PRESSED";
      }
      uVar5 = FUN_18011bdd4(0);
      FUN_1801330a5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar13);
      FUN_180111339();
      local_98 = 0;
      cVar3 = FUN_180134257("Open Popup",&local_98);
      if (cVar3 != '\0') {
        FUN_18011ac8e("PopupF",0);
      }
      cVar3 = FUN_18011b56a("PopupF",0);
      if (cVar3 != '\0') {
        FUN_1801330a5("(in PopupF)");
        cVar3 = FUN_1801152ff(0x1222,uVar8);
        if (cVar3 != '\0') {
          pcVar16 = "PRESSED";
        }
        uVar5 = FUN_18011bdd4(0);
        FUN_1801330a5("IsWindowFocused: %d, Shortcut: %s",uVar5,pcVar16);
        FUN_18011b3ef();
      }
      FUN_180111339();
      FUN_180101625(1);
      FUN_18014d7a9();
    }
    cVar3 = FUN_18014c2cb("Mouse Cursors");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1ff2,"Inputs & Focus/Mouse Cursors");
      uVar8 = FUN_180118f28();
      if (uVar8 < 0xb) {
        puVar17 = (&PTR_s_Arrow_180360bbc_0x19_180328d20)[uVar8];
      }
      else {
        puVar17 = &DAT_18036cf1c;
      }
      ppuVar18 = &PTR_s_Arrow_180360bbc_0x19_180328d20;
      FUN_1801330a5("Current mouse cursor = %d: %s",uVar8,puVar17);
      FUN_180116580(1);
      thunk_FUN_18013698f("io.BackendFlags: HasMouseCursors",lVar10 + 4,2);
      FUN_180116676();
      FUN_1801330a5("Hover to see mouse cursors:");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Your application can render a different mouse cursor based on what ImGui::GetMouseCursor() returns. If software cursor rendering (io.MouseDrawCursor) is set ImGui will draw the right cursor for you, otherwise your backend needs to handle it."
                   );
      uVar15 = 0;
      do {
        FUN_1801bf199(&local_98,"Mouse cursor %d: %s",uVar15 & 0xffffffff,*ppuVar18);
        FUN_1801371f5();
        local_a0 = 0;
        FUN_1801391f6(&local_98,0,0,&local_a0);
        cVar3 = FUN_18010759c(0);
        if (cVar3 != '\0') {
          FUN_180118f36(uVar15 & 0xffffffff);
        }
        uVar15 = uVar15 + 1;
        ppuVar18 = ppuVar18 + 1;
      } while (uVar15 != 0xb);
      FUN_18014d7a9();
    }
    cVar3 = FUN_18014c2cb("Tabbing");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x200f,"Inputs & Focus/Tabbing");
      FUN_1801330a5("Use Tab/Shift+Tab to cycle through keyboard editable fields.");
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f(&DAT_18036ea28,s_hello_180408da0,0x20,0);
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f("2",s_hello_180408da0,0x20,0);
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f(&DAT_18036e426,s_hello_180408da0,0x20,0);
      FUN_18011648a(1,1);
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f("4 (tab skip)",s_hello_180408da0,0x20,0);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Item won\'t be cycled through when using TAB or Shift+Tab.");
      FUN_180116548();
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f(&DAT_18036dfd4,s_hello_180408da0,0x20,0);
      FUN_18014d7a9();
    }
    cVar3 = FUN_18014c2cb("Focus from code");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x201f,"Inputs & Focus/Focus from code");
      local_98 = 0;
      cVar3 = FUN_180134257("Focus on 1",&local_98);
      uVar9 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      local_98 = 0;
      cVar6 = FUN_180134257("Focus on 2",&local_98);
      FUN_180119893(0,uVar9);
      local_98 = 0;
      cVar7 = FUN_180134257("Focus on 3",&local_98);
      if (cVar3 != '\0') {
        FUN_180117268(0);
      }
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f(&DAT_18036ea28,s_click_on_a_button_to_set_focus_180408dc0,0x80,0);
      cVar3 = FUN_180110b56();
      if (cVar6 != '\0') {
        FUN_180117268(0);
      }
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f("2",s_click_on_a_button_to_set_focus_180408dc0,0x80,0);
      cVar6 = FUN_180110b56();
      if (cVar6 != '\0') {
        cVar3 = '\x02';
      }
      FUN_18011648a(1,1);
      if (cVar7 != '\0') {
        FUN_180117268(0);
      }
      local_b8 = (char *)0x0;
      uStack_b0 = 0;
      FUN_180145e1f("3 (tab skip)",s_click_on_a_button_to_set_focus_180408dc0,0x80,0);
      cVar6 = FUN_180110b56();
      if (cVar6 != '\0') {
        cVar3 = '\x03';
      }
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Item won\'t be cycled through when using TAB or Shift+Tab.");
      FUN_180116548();
      if (cVar3 == '\0') {
        FUN_1801330a5("Item with focus: <none>");
      }
      else {
        FUN_1801330a5("Item with focus: %d",cVar3);
      }
      local_98 = 0;
      bVar4 = FUN_180134257("Focus on X",&local_98);
      uVar9 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      local_98 = 0;
      cVar3 = FUN_180134257("Focus on Y",&local_98);
      iVar14 = 1;
      if (cVar3 == '\0') {
        iVar14 = bVar4 - 1;
      }
      FUN_180119893(0,uVar9);
      local_98 = 0;
      cVar3 = FUN_180134257("Focus on Z",&local_98);
      iVar12 = 2;
      if (cVar3 == '\0') {
        iVar12 = iVar14;
      }
      if (iVar12 != -1) {
        FUN_180117268();
      }
      local_b8 = "%.3f";
      uStack_b0 = uStack_b0 & 0xffffffff00000000;
      FUN_180141485("Float3",&DAT_180420710,0,DAT_1802ac570);
      FUN_1801332a0("NB: Cursor & selection are preserved when refocusing last used item in code.");
      FUN_18014d7a9();
    }
    cVar3 = FUN_18014c2cb("Dragging");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x2049,"Inputs & Focus/Dragging");
      FUN_1801332a0(
                   "You can use ImGui::GetMouseDragDelta(0) to query for the dragged amount on any widget."
                   );
      uVar2 = DAT_1802dbb4c;
      uVar9 = DAT_1802bb8e0;
      iVar14 = 0;
      do {
        FUN_1801330a5("IsMouseDragging(%d):",iVar14);
        uVar5 = FUN_1801083e1(iVar14,uVar9);
        FUN_1801330a5("  w/ default threshold: %d,",uVar5);
        uVar5 = FUN_1801083e1(iVar14,0);
        FUN_1801330a5("  w/ zero threshold: %d,",uVar5);
        uVar5 = FUN_1801083e1(iVar14,uVar2);
        FUN_1801330a5("  w/ large threshold: %d,",uVar5);
        iVar14 = iVar14 + 1;
      } while (iVar14 != 3);
      local_98 = 0;
      FUN_180134257("Drag Me");
      cVar3 = FUN_180110b56();
      if (cVar3 != '\0') {
        uVar11 = FUN_180103228(0);
        uVar9 = FUN_18010129b(0x16,DAT_1802ac570);
        local_b8 = (char *)CONCAT44(local_b8._4_4_,0x40800000);
        FUN_180192790(uVar11,lVar10 + 0xacc,lVar10 + 0xe8,uVar9);
      }
      FUN_180118e6a(&local_98,0,0);
      FUN_180118e6a(&local_a0,0,DAT_1802bb8e0);
      fVar21 = *(float *)(lVar10 + 0xd8);
      fVar20 = *(float *)(lVar10 + 0xd4);
      FUN_1801330a5("GetMouseDragDelta(0):");
      FUN_1801330a5("  w/ default threshold: (%.1f, %.1f)",(double)(float)local_a0,
                    (double)local_a0._4_4_);
      FUN_1801330a5("  w/ zero threshold: (%.1f, %.1f)",(double)(float)local_98,
                    (double)local_98._4_4_);
      FUN_1801330a5("io.MouseDelta: (%.1f, %.1f)",(double)fVar20,SUB84((double)fVar21,0));
      FUN_18014d7a9();
    }
  }
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_d8);
}

