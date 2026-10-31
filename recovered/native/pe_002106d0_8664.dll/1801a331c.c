/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a331c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a331c(undefined8 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  double dVar16;
  float fVar17;
  ulonglong uVar18;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar18 = 0;
  FUN_18011941b("1.92.9 WIP",0xc18,0x54c,8,0x10,0x14,2);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_18041f200) {
    FUN_18023d500(&DAT_18041f200);
    if (DAT_18041f200 == -1) {
      FUN_18023d710(&LAB_1801a43d0);
      _Init_thread_footer(&DAT_18041f200);
    }
  }
  if (DAT_18041f1e0 == '\x01') {
    FUN_1801a43e1();
  }
  if (DAT_18041f1e5 == '\x01') {
    FUN_1801a44ea();
  }
  if (DAT_18041f1e4 == '\x01') {
    FUN_1801a473c();
  }
  if (DAT_18041f1e1 == '\x01') {
    FUN_1801a524d();
  }
  if (DAT_18041f1e2 == '\x01') {
    FUN_1801a5316();
  }
  if (DAT_18041f1e3 == '\x01') {
    FUN_1801a53c8();
  }
  if (DAT_18041f1e6 == '\x01') {
    FUN_1801a6e12();
  }
  if (DAT_18041f1e7 == '\x01') {
    FUN_1801a6f37();
  }
  if (DAT_18041f1e8 == '\x01') {
    FUN_1801a714f();
  }
  if (DAT_18041f1e9 == '\x01') {
    FUN_1801a73c5();
  }
  if (DAT_18041f1ea == '\x01') {
    FUN_1801a74d9();
  }
  if (DAT_18041f1eb == '\x01') {
    FUN_1801a77da();
  }
  if (DAT_18041f1ec == '\x01') {
    FUN_1801a78a1();
  }
  if (DAT_18041f1ed == '\x01') {
    FUN_1801a7ddf();
  }
  if (DAT_18041f1ee == '\x01') {
    FUN_1801a7f77();
  }
  if (DAT_18041f1ef == '\x01') {
    FUN_1801a82d0();
  }
  if (DAT_18041f1f0 == '\x01') {
    FUN_180124b8f(&DAT_18041f1f0);
  }
  if (DAT_18041f1f1 == '\x01') {
    FUN_180127852(&DAT_18041f1f1);
  }
  if (DAT_18041f1f2 == '\x01') {
    FUN_180127c81(&DAT_18041f1f2);
  }
  if (DAT_18041f1f4 == '\x01') {
    FUN_1801a84ba(&DAT_18041f1f4);
  }
  if (DAT_18041f1f3 == '\x01') {
    FUN_18010ca66("Dear ImGui Style Editor",&DAT_18041f1f3,0);
    FUN_1801a8c9b(0);
    FUN_18010f900();
  }
  iVar7 = (uint)DAT_18041f204 + (uint)DAT_18041f205 * 8 + 0x400;
  if (DAT_18041f206 != '\0') {
    iVar7 = (uint)DAT_18041f204 + (uint)DAT_18041f205 * 8;
  }
  uVar10 = (uint)DAT_18041f209 << 5 | iVar7 + (uint)DAT_18041f207 * 4 + (uint)DAT_18041f208 * 2;
  uVar3 = uVar10 | 0x30000;
  if (DAT_18041f20b == '\0') {
    uVar3 = uVar10;
  }
  uVar10 = (uint)DAT_18041f20c;
  uVar13 = (uint)DAT_18041f20d;
  uVar11 = (uint)DAT_18041f20e;
  uVar14 = (uint)DAT_18041f20f;
  if (DAT_18041f20a != '\0') {
    param_1 = 0;
  }
  lVar8 = FUN_18010f8ee();
  local_48 = 0;
  local_50 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar8 + 0x20) >> 0x20) + _UNK_180328ee4,
                      (float)*(undefined8 *)(lVar8 + 0x20) + _DAT_180328ee0);
  FUN_180116a8b(&local_50,4,&local_48);
  local_48 = DAT_180328ef0;
  FUN_18010ca41(&local_48,4);
  cVar5 = FUN_18010ca66("Dear ImGui Demo",param_1,
                        uVar14 << 0x12 | uVar11 << 0x13 | uVar13 << 0xd | uVar10 << 7 | uVar3);
  if (cVar5 != '\0') {
    uVar15 = FUN_180116c08();
    fVar17 = (float)uVar15 * DAT_1802de988;
    FUN_180111069(&local_48);
    if ((float)local_48 * DAT_1802bb8d8 <= fVar17) {
      fVar17 = (float)local_48 * DAT_1802bb8d8;
    }
    FUN_18011a05a(CONCAT44((uint)((ulonglong)uVar15 >> 0x20) ^ _UNK_1802b0ce4,
                           (uint)fVar17 ^ _DAT_1802b0ce0));
    FUN_1801aa60d();
    FUN_1801330a5("dear imgui says hello! (%s) (%d)","1.92.9 WIP",0x4b51);
    FUN_1801377c5();
    cVar5 = FUN_18014d916(&DAT_18036580c,0);
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1cd,&DAT_18036580c);
      FUN_1801380f1("ABOUT THIS DEMO:");
      FUN_180133606("Sections below are demonstrating many aspects of the library.");
      FUN_180133606("The \"Examples\" menu above leads to more demo contents.");
      FUN_180133606(
                   "The \"Tools\" menu above gives access to: About Box, Style Editor,\nand Metrics/Debugger (general purpose Dear ImGui debugging tool)."
                   );
      FUN_180133606("Web demo (w/ source code browser): ");
      FUN_180119893(0,0);
      FUN_1801376fe("https://pthom.github.io/imgui_explorer",0);
      FUN_1801380f1("PROGRAMMER GUIDE:");
      FUN_180133606("See the ShowDemoWindow() code in imgui_demo.cpp. <- you are here!");
      FUN_180133606("See comments in imgui.cpp.");
      FUN_180133606("See example applications in the examples/ folder.");
      FUN_180133606("Read the FAQ at ");
      FUN_180119893(0,0);
      FUN_1801376fe("https://www.dearimgui.com/faq/",0);
      FUN_180133606("Set \'io.ConfigFlags |= NavEnableKeyboard\' for keyboard controls.");
      FUN_180133606("Set \'io.ConfigFlags |= NavEnableGamepad\' for gamepad controls.");
      FUN_1801380f1("USER GUIDE:");
      FUN_1801aa970();
    }
    cVar5 = FUN_18014d916("Configuration",0);
    if (cVar5 != '\0') {
      puVar9 = (uint *)FUN_180107ee8();
      cVar5 = FUN_18014c2cb("Configuration##2");
      if (cVar5 != '\0') {
        FUN_180107e9e("imgui_demo.cpp",0x1eb,"Configuration");
        FUN_1801380f1("General");
        thunk_FUN_18013698f("io.ConfigFlags: NavEnableKeyboard",puVar9,1);
        uVar4 = DAT_1802bb8e0;
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063("Enable keyboard controls.");
        thunk_FUN_18013698f("io.ConfigFlags: NavEnableGamepad",puVar9,2);
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Enable gamepad controls. Require backend to set io.BackendFlags |= ImGuiBackendFlags_HasGamepad.\n\nRead instructions in imgui.cpp for details."
                     );
        thunk_FUN_18013698f("io.ConfigFlags: NoMouse",puVar9,0x10);
        FUN_180119893(0,uVar4);
        FUN_180124063("Instruct dear imgui to disable mouse inputs and interactions.");
        if ((*puVar9 & 0x10) != 0) {
          dVar16 = (double)FUN_180107f34();
          fVar17 = (float)FUN_180285540((float)dVar16,DAT_1802bb8d8);
          if (fVar17 < DAT_1802de790) {
            FUN_180119893(0,DAT_1802bb8e0);
            FUN_1801330a5("<<PRESS SPACE TO DISABLE>>");
          }
          bVar6 = FUN_180118b7f(0x20c,1);
          if ((byte)((byte)((*puVar9 & 0x40) >> 6) | bVar6) == 1) {
            *puVar9 = *puVar9 & 0xffffffef;
          }
        }
        thunk_FUN_18013698f("io.ConfigFlags: NoMouseCursorChange",puVar9,0x20);
        uVar4 = DAT_1802bb8e0;
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063("Instruct backend to not alter mouse cursor shape and visibility.");
        thunk_FUN_18013698f("io.ConfigFlags: NoKeyboard",puVar9,0x40);
        FUN_180119893(0,uVar4);
        FUN_180124063("Instruct dear imgui to disable keyboard inputs and interactions.");
        FUN_180135c3a("io.ConfigInputTrickleEventQueue",(byte *)((longlong)puVar9 + 0x5e));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Enable input queue trickling: some types of events submitted during the same frame (e.g. button down + up) will be spread over multiple frames, improving interactions with low framerates."
                     );
        FUN_180135c3a("io.MouseDrawCursor",puVar9 + 0x17);
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Instruct Dear ImGui to render a mouse cursor itself. Note that a mouse cursor rendered via your application GPU rendering path will feel more laggy than hardware cursor, but will be more in sync with your other visuals.\n\nSome desktop applications may use both kinds of cursors (e.g. enable software cursor only when resizing/dragging something)."
                     );
        FUN_1801380f1("Keyboard/Gamepad Navigation");
        FUN_180135c3a("io.ConfigNavSwapGamepadButtons",(byte *)((longlong)puVar9 + 0x49));
        FUN_180135c3a("io.ConfigNavMoveSetMousePos",(byte *)((longlong)puVar9 + 0x4a));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Directional/tabbing navigation teleports the mouse cursor. May be useful on TV/console systems where moving a virtual mouse is difficult"
                     );
        FUN_180135c3a("io.ConfigNavCaptureKeyboard",(byte *)((longlong)puVar9 + 0x4b));
        FUN_180135c3a("io.ConfigNavEscapeClearFocusItem",puVar9 + 0x13);
        FUN_180119893(0,uVar4);
        FUN_180124063("Pressing Escape clears focused item.");
        FUN_180135c3a("io.ConfigNavEscapeClearFocusWindow",(byte *)((longlong)puVar9 + 0x4d));
        FUN_180119893(0,uVar4);
        FUN_180124063("Pressing Escape clears focused window.");
        FUN_180135c3a("io.ConfigNavCursorVisibleAuto",(byte *)((longlong)puVar9 + 0x4e));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Using directional navigation key makes the cursor visible. Mouse click hides the cursor."
                     );
        FUN_180135c3a("io.ConfigNavCursorVisibleAlways",(byte *)((longlong)puVar9 + 0x4f));
        FUN_180119893(0,uVar4);
        FUN_180124063("Navigation cursor is always visible.");
        FUN_1801380f1("Docking");
        thunk_FUN_18013698f("io.ConfigFlags: DockingEnable",puVar9,0x80);
        FUN_180119893(0,uVar4);
        pcVar12 = 
        "Drag from window title bar or their tab to dock/undock. Hold SHIFT to disable docking.\n\nDrag from window menu button (upper-left button) to undock an entire node (all windows)."
        ;
        if (*(byte *)((longlong)puVar9 + 0x52) != 0) {
          pcVar12 = 
          "Drag from window title bar or their tab to dock/undock. Hold SHIFT to enable docking.\n\nDrag from window menu button (upper-left button) to undock an entire node (all windows)."
          ;
        }
        FUN_180124063(pcVar12);
        if ((*puVar9 & 0x80) != 0) {
          FUN_180119fae(0);
          FUN_180135c3a("io.ConfigDockingNoSplit",puVar9 + 0x14);
          uVar4 = DAT_1802bb8e0;
          FUN_180119893(0,DAT_1802bb8e0);
          FUN_180124063(
                       "Simplified docking mode: disable window splitting, so docking is limited to merging multiple windows together into tab-bars."
                       );
          FUN_180135c3a("io.ConfigDockingNoDockingOver",(byte *)((longlong)puVar9 + 0x51));
          FUN_180119893(0,uVar4);
          FUN_180124063(
                       "Simplified docking mode: disable window merging into a same tab-bar, so docking is limited to splitting windows."
                       );
          FUN_180135c3a("io.ConfigDockingWithShift",(byte *)((longlong)puVar9 + 0x52));
          FUN_180119893(0,uVar4);
          FUN_180124063(
                       "Enable docking when holding Shift only (allow to drop in wider space, reduce visual noise)"
                       );
          FUN_180135c3a("io.ConfigDockingAlwaysTabBar",(byte *)((longlong)puVar9 + 0x53));
          FUN_180119893(0,uVar4);
          FUN_180124063("Create a docking node and tab-bar on single floating windows.");
          FUN_180135c3a("io.ConfigDockingTransparentPayload",puVar9 + 0x15);
          FUN_180119893(0,uVar4);
          FUN_180124063(
                       "Make window or viewport transparent when docking and only display docking boxes on the target viewport. Useful if rendering of multiple viewport cannot be synced. Best used with ConfigViewportsNoAutoMerge."
                       );
          FUN_18011a002(0);
        }
        FUN_1801380f1("Multi-viewports");
        thunk_FUN_18013698f("io.ConfigFlags: ViewportsEnable",puVar9,0x400);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063("[beta] Enable beta multi-viewports support. See ImGuiPlatformIO for details."
                     );
        if ((*puVar9 & 0x400) != 0) {
          FUN_180119fae(0);
          FUN_180135c3a("io.ConfigViewportsNoAutoMerge",(byte *)((longlong)puVar9 + 0x55));
          uVar4 = DAT_1802bb8e0;
          FUN_180119893(0,DAT_1802bb8e0);
          FUN_180124063(
                       "Set to make all floating imgui windows always create their own viewport. Otherwise, they are merged into the main host viewports when overlapping it."
                       );
          FUN_180135c3a("io.ConfigViewportsNoTaskBarIcon",(byte *)((longlong)puVar9 + 0x56));
          FUN_180119893(0,uVar4);
          FUN_180124063(
                       "(note: some platform backends may not reflect a change of this value for existing viewports, and may need the viewport to be recreated)"
                       );
          FUN_180135c3a("io.ConfigViewportsNoDecoration",(byte *)((longlong)puVar9 + 0x57));
          FUN_180119893(0,uVar4);
          FUN_180124063(
                       "(note: some platform backends may not reflect a change of this value for existing viewports, and may need the viewport to be recreated)"
                       );
          FUN_180135c3a("io.ConfigViewportsNoDefaultParent",puVar9 + 0x16);
          FUN_180119893(0,uVar4);
          FUN_180124063(
                       "(note: some platform backends may not reflect a change of this value for existing viewports, and may need the viewport to be recreated)"
                       );
          FUN_180135c3a("io.ConfigViewportsPlatformFocusSetsImGuiFocus",
                        (byte *)((longlong)puVar9 + 0x59));
          FUN_180119893(0,uVar4);
          FUN_180124063(
                       "When a platform window is focused (e.g. using Alt+Tab, clicking Platform Title Bar), apply corresponding focus on imgui windows (may clear focus/active id from imgui windows location in other platform windows). In principle this is better enabled but we provide an opt-out, because some Linux window managers tend to eagerly focus windows (e.g. on mouse hover, or even a simple window pos/size change)."
                       );
          FUN_18011a002(0);
        }
        FUN_1801380f1("Windows");
        FUN_180135c3a("io.ConfigWindowsResizeFromEdges",(byte *)((longlong)puVar9 + 0x62));
        uVar4 = DAT_1802bb8e0;
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "Enable resizing of windows from their edges and from the lower-left corner.\nThis requires ImGuiBackendFlags_HasMouseCursors for better mouse cursor feedback."
                     );
        FUN_180135c3a("io.ConfigWindowsMoveFromTitleBarOnly",(byte *)((longlong)puVar9 + 99));
        FUN_180135c3a("io.ConfigWindowsCopyContentsWithCtrlC",puVar9 + 0x19);
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "*EXPERIMENTAL* Ctrl+C copy the contents of focused window into the clipboard.\n\nExperimental because:\n- (1) has known issues with nested Begin/End pairs.\n- (2) text output quality varies.\n- (3) text output is in submission order rather than spatial order."
                     );
        FUN_180135c3a("io.ConfigScrollbarScrollByPage",(byte *)((longlong)puVar9 + 0x65));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Enable scrolling page by page when clicking outside the scrollbar grab.\nWhen disabled, always scroll to clicked location.\nWhen enabled, Shift+Click scrolls to clicked location."
                     );
        FUN_1801380f1("Widgets");
        FUN_180135c3a("io.ConfigInputTextCursorBlink",(byte *)((longlong)puVar9 + 0x5f));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Enable blinking cursor (optional as some users consider it to be distracting)."
                     );
        FUN_180135c3a("io.ConfigInputTextEnterKeepActive",puVar9 + 0x18);
        FUN_180119893(0,uVar4);
        FUN_180124063("Pressing Enter will reactivate item and select all text (single-line only).")
        ;
        FUN_180135c3a("io.ConfigDragClickToInputText",(byte *)((longlong)puVar9 + 0x61));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Enable turning DragXXX widgets into text input with a simple mouse click-release (without moving)."
                     );
        FUN_180135c3a("io.ConfigMacOSXBehaviors",(byte *)((longlong)puVar9 + 0x5d));
        FUN_180119893(0,uVar4);
        FUN_180124063("Swap Cmd<>Ctrl keys, enable various MacOS style behaviors.");
        FUN_1801330a5("Also see Style->Rendering for rendering options.");
        FUN_1801380f1("Error Handling");
        FUN_180135c3a("io.ConfigErrorRecovery",puVar9 + 0x20);
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Options to configure how we handle recoverable errors.\n- Error recovery is not perfect nor guaranteed! It is a feature to ease development.\n- You not are not supposed to rely on it in the course of a normal application run.\n- Possible usage: facilitate recovery from errors triggered from a scripting language or after specific exceptions handlers.\n- Always ensure that on programmers seat you have at minimum Asserts or Tooltips enabled when making direct imgui API call! Otherwise it would severely hinder your ability to catch and correct mistakes!"
                     );
        FUN_180135c3a("io.ConfigErrorRecoveryEnableAssert",(byte *)((longlong)puVar9 + 0x81));
        pbVar1 = (byte *)((longlong)puVar9 + 0x82);
        FUN_180135c3a("io.ConfigErrorRecoveryEnableDebugLog",pbVar1);
        pbVar2 = (byte *)((longlong)puVar9 + 0x83);
        FUN_180135c3a("io.ConfigErrorRecoveryEnableTooltip",pbVar2);
        if (((*(byte *)((longlong)puVar9 + 0x81) == 0) && (*pbVar1 == 0)) && (*pbVar2 == 0)) {
          *pbVar2 = 1;
          *pbVar1 = 1;
          *(byte *)((longlong)puVar9 + 0x81) = 1;
        }
        FUN_1801380f1("Debug");
        FUN_180135c3a("io.ConfigDebugIsDebuggerPresent",puVar9 + 0x21);
        uVar4 = DAT_1802bb8e0;
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "Enable various tools calling IM_DEBUG_BREAK().\n\nRequires a debugger being attached, otherwise IM_DEBUG_BREAK() options will appear to crash your application."
                     );
        FUN_180135c3a("io.ConfigDebugHighlightIdConflicts",(byte *)((longlong)puVar9 + 0x85));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Highlight and show an error message when multiple items have conflicting identifiers."
                     );
        FUN_180116580(1);
        FUN_180135c3a("io.ConfigDebugBeginReturnValueOnce",(byte *)((longlong)puVar9 + 0x87));
        FUN_180116676();
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "First calls to Begin()/BeginChild() will return false.\n\nTHIS OPTION IS DISABLED because it needs to be set at application boot-time to make sense. Showing the disabled option is a way to make this feature easier to discover."
                     );
        FUN_180135c3a("io.ConfigDebugBeginReturnValueLoop",puVar9 + 0x22);
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Some calls to Begin()/BeginChild() will return false.\n\nWill cycle through window depths then repeat. Windows should be flickering while running."
                     );
        FUN_180135c3a("io.ConfigDebugIgnoreFocusLoss",(byte *)((longlong)puVar9 + 0x89));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Option to deactivate io.AddFocusEvent(false) handling. May facilitate interactions with a debugger when focus loss leads to clearing inputs data."
                     );
        FUN_180135c3a("io.ConfigDebugIniSettings",(byte *)((longlong)puVar9 + 0x8a));
        FUN_180119893(0,uVar4);
        FUN_180124063(
                     "Option to save .ini data with extra comments (particularly helpful for Docking, but makes saving slower)."
                     );
        FUN_18014d7a9();
        FUN_1801377c5();
      }
      cVar5 = FUN_18014c2cb("Backend Flags");
      if (cVar5 != '\0') {
        FUN_180107e9e("imgui_demo.cpp",0x285,"Configuration/Backend Flags");
        FUN_180124063(
                     "Those flags are set by the backends (imgui_impl_xxx files) to specify their capabilities.\nHere we expose them as read-only fields to avoid breaking interactions with your backend."
                     );
        FUN_180116580(1);
        puVar9 = puVar9 + 1;
        thunk_FUN_18013698f("io.BackendFlags: HasGamepad",puVar9,1);
        thunk_FUN_18013698f("io.BackendFlags: HasMouseCursors",puVar9,2);
        thunk_FUN_18013698f("io.BackendFlags: HasSetMousePos",puVar9,4);
        thunk_FUN_18013698f("io.BackendFlags: PlatformHasViewports",puVar9,0x800);
        thunk_FUN_18013698f("io.BackendFlags: HasMouseHoveredViewport",puVar9,0x1000);
        thunk_FUN_18013698f("io.BackendFlags: HasParentViewport",puVar9,0x2000);
        thunk_FUN_18013698f("io.BackendFlags: RendererHasVtxOffset",puVar9,8);
        thunk_FUN_18013698f("io.BackendFlags: RendererHasTextures",puVar9,0x10);
        thunk_FUN_18013698f("io.BackendFlags: RendererHasViewports",puVar9,0x400);
        FUN_180116676();
        FUN_18014d7a9();
        FUN_1801377c5();
      }
      cVar5 = FUN_18014c2cb("Style, Fonts");
      if (cVar5 != '\0') {
        FUN_180107e9e("imgui_demo.cpp",0x29e,"Configuration/Style, Fonts");
        FUN_180135c3a("Style Editor",&DAT_18041f1f3);
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "The same contents can be accessed in \'Tools->Style Editor\' or by calling the ShowStyleEditor() function."
                     );
        FUN_18014d7a9();
        FUN_1801377c5();
      }
      cVar5 = FUN_18014c2cb("Capture/Logging");
      if (cVar5 != '\0') {
        FUN_180107e9e("imgui_demo.cpp",0x2a8,"Configuration/Capture, Logging");
        FUN_180124063(
                     "The logging API redirects all text output so you can easily capture the content of a window or a block. Tree nodes can be automatically expanded.\nTry opening any of the contents below in this window and then click one of the \"Log To\" button."
                     );
        FUN_18011d35a();
        FUN_180124063(
                     "You can also call ImGui::LogText() to output directly to the log without a visual output."
                     );
        local_48 = 0;
        cVar5 = FUN_180134257("Copy \"Hello, world!\" to clipboard");
        if (cVar5 != '\0') {
          FUN_180115307(0xffffffff);
          FUN_1801157dd("Hello, world!");
          FUN_1801160c4();
        }
        FUN_18014d7a9();
      }
    }
    cVar5 = FUN_18014d916("Window options",0);
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",700,"Window options");
      local_48 = 0;
      cVar5 = FUN_180164c18("split",3,0,&local_48,uVar18 & 0xffffffff00000000);
      if (cVar5 != '\0') {
        FUN_18016ab34();
        FUN_180135c3a("No titlebar",&DAT_18041f204);
        FUN_18016ab34();
        FUN_180135c3a("No scrollbar",&DAT_18041f205);
        FUN_18016ab34();
        FUN_180135c3a("No menu",&DAT_18041f206);
        FUN_18016ab34();
        FUN_180135c3a("No move",&DAT_18041f207);
        FUN_18016ab34();
        FUN_180135c3a("No resize",&DAT_18041f208);
        FUN_18016ab34();
        FUN_180135c3a("No collapse",&DAT_18041f209);
        FUN_18016ab34();
        FUN_180135c3a("No close",&DAT_18041f20a);
        FUN_18016ab34();
        FUN_180135c3a("No nav",&DAT_18041f20b);
        FUN_18016ab34();
        FUN_180135c3a("No background",&DAT_18041f20c);
        FUN_18016ab34();
        FUN_180135c3a("No bring to front",&DAT_18041f20d);
        FUN_18016ab34();
        FUN_180135c3a("No docking",&DAT_18041f20e);
        FUN_18016ab34();
        FUN_180135c3a("Unsaved document",&DAT_18041f20f);
        FUN_180168430();
      }
    }
    FUN_1801aab18();
    FUN_1801aac06();
    FUN_1801ad79c();
    FUN_1801ae19d();
    FUN_1801b3206();
    FUN_18011a356();
  }
  FUN_18010f900();
  return;
}

