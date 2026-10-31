/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e8fa0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e8fa0(undefined8 param_1)

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
  FUN_140092733("1.92.9 WIP",0xc18,0x54c,8,0x10,0x14,2);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c
              ) < DAT_140f30950) {
    FUN_140188840(&DAT_140f30950);
    if (DAT_140f30950 == -1) {
      FUN_140188b50(&LAB_1400ea054);
      _Init_thread_footer(&DAT_140f30950);
    }
  }
  if (DAT_140f30930 == '\x01') {
    FUN_1400ea065();
  }
  if (DAT_140f30935 == '\x01') {
    FUN_1400ea16e();
  }
  if (DAT_140f30934 == '\x01') {
    FUN_1400ea3c0();
  }
  if (DAT_140f30931 == '\x01') {
    FUN_1400eaed1();
  }
  if (DAT_140f30932 == '\x01') {
    FUN_1400eaf9a();
  }
  if (DAT_140f30933 == '\x01') {
    FUN_1400eb04c();
  }
  if (DAT_140f30936 == '\x01') {
    FUN_1400eca96();
  }
  if (DAT_140f30937 == '\x01') {
    FUN_1400ecbbb();
  }
  if (DAT_140f30938 == '\x01') {
    FUN_1400ecdd3();
  }
  if (DAT_140f30939 == '\x01') {
    FUN_1400ed049();
  }
  if (DAT_140f3093a == '\x01') {
    FUN_1400ed15d();
  }
  if (DAT_140f3093b == '\x01') {
    FUN_1400ed45e();
  }
  if (DAT_140f3093c == '\x01') {
    FUN_1400ed525();
  }
  if (DAT_140f3093d == '\x01') {
    FUN_1400eda63();
  }
  if (DAT_140f3093e == '\x01') {
    FUN_1400edbfb();
  }
  if (DAT_140f3093f == '\x01') {
    FUN_1400edf54();
  }
  if (DAT_140f30940 == '\x01') {
    FUN_14009dabe(&DAT_140f30940);
  }
  if (DAT_140f30941 == '\x01') {
    FUN_1400a0781(&DAT_140f30941);
  }
  if (DAT_140f30942 == '\x01') {
    FUN_1400a0bb0(&DAT_140f30942);
  }
  if (DAT_140f30944 == '\x01') {
    FUN_1400ee13e(&DAT_140f30944);
  }
  if (DAT_140f30943 == '\x01') {
    FUN_140085d7e("Dear ImGui Style Editor",&DAT_140f30943,0);
    FUN_1400ee91f(0);
    FUN_140088c18();
  }
  iVar7 = (uint)DAT_140f30954 + (uint)DAT_140f30955 * 8 + 0x400;
  if (DAT_140f30956 != '\0') {
    iVar7 = (uint)DAT_140f30954 + (uint)DAT_140f30955 * 8;
  }
  uVar10 = (uint)DAT_140f30959 << 5 | iVar7 + (uint)DAT_140f30957 * 4 + (uint)DAT_140f30958 * 2;
  uVar3 = uVar10 | 0x30000;
  if (DAT_140f3095b == '\0') {
    uVar3 = uVar10;
  }
  uVar10 = (uint)DAT_140f3095c;
  uVar13 = (uint)DAT_140f3095d;
  uVar11 = (uint)DAT_140f3095e;
  uVar14 = (uint)DAT_140f3095f;
  if (DAT_140f3095a != '\0') {
    param_1 = 0;
  }
  lVar8 = FUN_140088c06();
  local_48 = 0;
  local_50 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar8 + 0x20) >> 0x20) + _UNK_140e8d274,
                      (float)*(undefined8 *)(lVar8 + 0x20) + _DAT_140e8d270);
  FUN_14008fda3(&local_50,4,&local_48);
  local_48 = DAT_140e8d280;
  FUN_140085d59(&local_48,4);
  cVar5 = FUN_140085d7e("Dear ImGui Demo",param_1,
                        uVar14 << 0x12 | uVar11 << 0x13 | uVar13 << 0xd | uVar10 << 7 | uVar3);
  if (cVar5 != '\0') {
    uVar15 = FUN_14008ff20();
    fVar17 = (float)uVar15 * DAT_1402116f8;
    FUN_14008a381(&local_48);
    if ((float)local_48 * DAT_140210024 <= fVar17) {
      fVar17 = (float)local_48 * DAT_140210024;
    }
    FUN_140093372(CONCAT44((uint)((ulonglong)uVar15 >> 0x20) ^ _UNK_1401c8594,
                           (uint)fVar17 ^ _DAT_1401c8590));
    FUN_1400f0291();
    FUN_1400abfd5("dear imgui says hello! (%s) (%d)","1.92.9 WIP",0x4b51);
    FUN_1400b06f5();
    cVar5 = FUN_1400c6846(&DAT_140ec6c85,0);
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1cd,&DAT_140ec6c85);
      FUN_1400b1021("ABOUT THIS DEMO:");
      FUN_1400ac536("Sections below are demonstrating many aspects of the library.");
      FUN_1400ac536("The \"Examples\" menu above leads to more demo contents.");
      FUN_1400ac536(
                   "The \"Tools\" menu above gives access to: About Box, Style Editor,\nand Metrics/Debugger (general purpose Dear ImGui debugging tool)."
                   );
      FUN_1400ac536("Web demo (w/ source code browser): ");
      FUN_140092bab(0,0);
      FUN_1400b062e("https://pthom.github.io/imgui_explorer",0);
      FUN_1400b1021("PROGRAMMER GUIDE:");
      FUN_1400ac536("See the ShowDemoWindow() code in imgui_demo.cpp. <- you are here!");
      FUN_1400ac536("See comments in imgui.cpp.");
      FUN_1400ac536("See example applications in the examples/ folder.");
      FUN_1400ac536("Read the FAQ at ");
      FUN_140092bab(0,0);
      FUN_1400b062e("https://www.dearimgui.com/faq/",0);
      FUN_1400ac536("Set \'io.ConfigFlags |= NavEnableKeyboard\' for keyboard controls.");
      FUN_1400ac536("Set \'io.ConfigFlags |= NavEnableGamepad\' for gamepad controls.");
      FUN_1400b1021("USER GUIDE:");
      FUN_1400f05f4();
    }
    cVar5 = FUN_1400c6846("Configuration",0);
    if (cVar5 != '\0') {
      puVar9 = (uint *)FUN_140081200();
      cVar5 = FUN_1400c51fb("Configuration##2");
      if (cVar5 != '\0') {
        FUN_1400811b6("imgui_demo.cpp",0x1eb,"Configuration");
        FUN_1400b1021("General");
        thunk_FUN_1400af8bf("io.ConfigFlags: NavEnableKeyboard",puVar9,1);
        uVar4 = DAT_1401c86a4;
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92("Enable keyboard controls.");
        thunk_FUN_1400af8bf("io.ConfigFlags: NavEnableGamepad",puVar9,2);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Enable gamepad controls. Require backend to set io.BackendFlags |= ImGuiBackendFlags_HasGamepad.\n\nRead instructions in imgui.cpp for details."
                     );
        thunk_FUN_1400af8bf("io.ConfigFlags: NoMouse",puVar9,0x10);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92("Instruct dear imgui to disable mouse inputs and interactions.");
        if ((*puVar9 & 0x10) != 0) {
          dVar16 = (double)FUN_14008124c();
          fVar17 = (float)FUN_1401a3780((float)dVar16,DAT_140210024);
          if (fVar17 < DAT_14021001c) {
            FUN_140092bab(0,DAT_1401c86a4);
            FUN_1400abfd5("<<PRESS SPACE TO DISABLE>>");
          }
          bVar6 = FUN_140091e97(0x20c,1);
          if ((byte)((byte)((*puVar9 & 0x40) >> 6) | bVar6) == 1) {
            *puVar9 = *puVar9 & 0xffffffef;
          }
        }
        thunk_FUN_1400af8bf("io.ConfigFlags: NoMouseCursorChange",puVar9,0x20);
        uVar4 = DAT_1401c86a4;
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92("Instruct backend to not alter mouse cursor shape and visibility.");
        thunk_FUN_1400af8bf("io.ConfigFlags: NoKeyboard",puVar9,0x40);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92("Instruct dear imgui to disable keyboard inputs and interactions.");
        FUN_1400aeb6a("io.ConfigInputTrickleEventQueue",(byte *)((longlong)puVar9 + 0x5e));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Enable input queue trickling: some types of events submitted during the same frame (e.g. button down + up) will be spread over multiple frames, improving interactions with low framerates."
                     );
        FUN_1400aeb6a("io.MouseDrawCursor",puVar9 + 0x17);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Instruct Dear ImGui to render a mouse cursor itself. Note that a mouse cursor rendered via your application GPU rendering path will feel more laggy than hardware cursor, but will be more in sync with your other visuals.\n\nSome desktop applications may use both kinds of cursors (e.g. enable software cursor only when resizing/dragging something)."
                     );
        FUN_1400b1021("Keyboard/Gamepad Navigation");
        FUN_1400aeb6a("io.ConfigNavSwapGamepadButtons",(byte *)((longlong)puVar9 + 0x49));
        FUN_1400aeb6a("io.ConfigNavMoveSetMousePos",(byte *)((longlong)puVar9 + 0x4a));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Directional/tabbing navigation teleports the mouse cursor. May be useful on TV/console systems where moving a virtual mouse is difficult"
                     );
        FUN_1400aeb6a("io.ConfigNavCaptureKeyboard",(byte *)((longlong)puVar9 + 0x4b));
        FUN_1400aeb6a("io.ConfigNavEscapeClearFocusItem",puVar9 + 0x13);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92("Pressing Escape clears focused item.");
        FUN_1400aeb6a("io.ConfigNavEscapeClearFocusWindow",(byte *)((longlong)puVar9 + 0x4d));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92("Pressing Escape clears focused window.");
        FUN_1400aeb6a("io.ConfigNavCursorVisibleAuto",(byte *)((longlong)puVar9 + 0x4e));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Using directional navigation key makes the cursor visible. Mouse click hides the cursor."
                     );
        FUN_1400aeb6a("io.ConfigNavCursorVisibleAlways",(byte *)((longlong)puVar9 + 0x4f));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92("Navigation cursor is always visible.");
        FUN_1400b1021("Docking");
        thunk_FUN_1400af8bf("io.ConfigFlags: DockingEnable",puVar9,0x80);
        FUN_140092bab(0,uVar4);
        pcVar12 = 
        "Drag from window title bar or their tab to dock/undock. Hold SHIFT to disable docking.\n\nDrag from window menu button (upper-left button) to undock an entire node (all windows)."
        ;
        if (*(byte *)((longlong)puVar9 + 0x52) != 0) {
          pcVar12 = 
          "Drag from window title bar or their tab to dock/undock. Hold SHIFT to enable docking.\n\nDrag from window menu button (upper-left button) to undock an entire node (all windows)."
          ;
        }
        FUN_14009cf92(pcVar12);
        if ((*puVar9 & 0x80) != 0) {
          FUN_1400932c6(0);
          FUN_1400aeb6a("io.ConfigDockingNoSplit",puVar9 + 0x14);
          uVar4 = DAT_1401c86a4;
          FUN_140092bab(0,DAT_1401c86a4);
          FUN_14009cf92(
                       "Simplified docking mode: disable window splitting, so docking is limited to merging multiple windows together into tab-bars."
                       );
          FUN_1400aeb6a("io.ConfigDockingNoDockingOver",(byte *)((longlong)puVar9 + 0x51));
          FUN_140092bab(0,uVar4);
          FUN_14009cf92(
                       "Simplified docking mode: disable window merging into a same tab-bar, so docking is limited to splitting windows."
                       );
          FUN_1400aeb6a("io.ConfigDockingWithShift",(byte *)((longlong)puVar9 + 0x52));
          FUN_140092bab(0,uVar4);
          FUN_14009cf92(
                       "Enable docking when holding Shift only (allow to drop in wider space, reduce visual noise)"
                       );
          FUN_1400aeb6a("io.ConfigDockingAlwaysTabBar",(byte *)((longlong)puVar9 + 0x53));
          FUN_140092bab(0,uVar4);
          FUN_14009cf92("Create a docking node and tab-bar on single floating windows.");
          FUN_1400aeb6a("io.ConfigDockingTransparentPayload",puVar9 + 0x15);
          FUN_140092bab(0,uVar4);
          FUN_14009cf92(
                       "Make window or viewport transparent when docking and only display docking boxes on the target viewport. Useful if rendering of multiple viewport cannot be synced. Best used with ConfigViewportsNoAutoMerge."
                       );
          FUN_14009331a(0);
        }
        FUN_1400b1021("Multi-viewports");
        thunk_FUN_1400af8bf("io.ConfigFlags: ViewportsEnable",puVar9,0x400);
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92("[beta] Enable beta multi-viewports support. See ImGuiPlatformIO for details."
                     );
        if ((*puVar9 & 0x400) != 0) {
          FUN_1400932c6(0);
          FUN_1400aeb6a("io.ConfigViewportsNoAutoMerge",(byte *)((longlong)puVar9 + 0x55));
          uVar4 = DAT_1401c86a4;
          FUN_140092bab(0,DAT_1401c86a4);
          FUN_14009cf92(
                       "Set to make all floating imgui windows always create their own viewport. Otherwise, they are merged into the main host viewports when overlapping it."
                       );
          FUN_1400aeb6a("io.ConfigViewportsNoTaskBarIcon",(byte *)((longlong)puVar9 + 0x56));
          FUN_140092bab(0,uVar4);
          FUN_14009cf92(
                       "(note: some platform backends may not reflect a change of this value for existing viewports, and may need the viewport to be recreated)"
                       );
          FUN_1400aeb6a("io.ConfigViewportsNoDecoration",(byte *)((longlong)puVar9 + 0x57));
          FUN_140092bab(0,uVar4);
          FUN_14009cf92(
                       "(note: some platform backends may not reflect a change of this value for existing viewports, and may need the viewport to be recreated)"
                       );
          FUN_1400aeb6a("io.ConfigViewportsNoDefaultParent",puVar9 + 0x16);
          FUN_140092bab(0,uVar4);
          FUN_14009cf92(
                       "(note: some platform backends may not reflect a change of this value for existing viewports, and may need the viewport to be recreated)"
                       );
          FUN_1400aeb6a("io.ConfigViewportsPlatformFocusSetsImGuiFocus",
                        (byte *)((longlong)puVar9 + 0x59));
          FUN_140092bab(0,uVar4);
          FUN_14009cf92(
                       "When a platform window is focused (e.g. using Alt+Tab, clicking Platform Title Bar), apply corresponding focus on imgui windows (may clear focus/active id from imgui windows location in other platform windows). In principle this is better enabled but we provide an opt-out, because some Linux window managers tend to eagerly focus windows (e.g. on mouse hover, or even a simple window pos/size change)."
                       );
          FUN_14009331a(0);
        }
        FUN_1400b1021("Windows");
        FUN_1400aeb6a("io.ConfigWindowsResizeFromEdges",(byte *)((longlong)puVar9 + 0x62));
        uVar4 = DAT_1401c86a4;
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92(
                     "Enable resizing of windows from their edges and from the lower-left corner.\nThis requires ImGuiBackendFlags_HasMouseCursors for better mouse cursor feedback."
                     );
        FUN_1400aeb6a("io.ConfigWindowsMoveFromTitleBarOnly",(byte *)((longlong)puVar9 + 99));
        FUN_1400aeb6a("io.ConfigWindowsCopyContentsWithCtrlC",puVar9 + 0x19);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "*EXPERIMENTAL* Ctrl+C copy the contents of focused window into the clipboard.\n\nExperimental because:\n- (1) has known issues with nested Begin/End pairs.\n- (2) text output quality varies.\n- (3) text output is in submission order rather than spatial order."
                     );
        FUN_1400aeb6a("io.ConfigScrollbarScrollByPage",(byte *)((longlong)puVar9 + 0x65));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Enable scrolling page by page when clicking outside the scrollbar grab.\nWhen disabled, always scroll to clicked location.\nWhen enabled, Shift+Click scrolls to clicked location."
                     );
        FUN_1400b1021("Widgets");
        FUN_1400aeb6a("io.ConfigInputTextCursorBlink",(byte *)((longlong)puVar9 + 0x5f));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Enable blinking cursor (optional as some users consider it to be distracting)."
                     );
        FUN_1400aeb6a("io.ConfigInputTextEnterKeepActive",puVar9 + 0x18);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92("Pressing Enter will reactivate item and select all text (single-line only).")
        ;
        FUN_1400aeb6a("io.ConfigDragClickToInputText",(byte *)((longlong)puVar9 + 0x61));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Enable turning DragXXX widgets into text input with a simple mouse click-release (without moving)."
                     );
        FUN_1400aeb6a("io.ConfigMacOSXBehaviors",(byte *)((longlong)puVar9 + 0x5d));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92("Swap Cmd<>Ctrl keys, enable various MacOS style behaviors.");
        FUN_1400abfd5("Also see Style->Rendering for rendering options.");
        FUN_1400b1021("Error Handling");
        FUN_1400aeb6a("io.ConfigErrorRecovery",puVar9 + 0x20);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Options to configure how we handle recoverable errors.\n- Error recovery is not perfect nor guaranteed! It is a feature to ease development.\n- You not are not supposed to rely on it in the course of a normal application run.\n- Possible usage: facilitate recovery from errors triggered from a scripting language or after specific exceptions handlers.\n- Always ensure that on programmers seat you have at minimum Asserts or Tooltips enabled when making direct imgui API call! Otherwise it would severely hinder your ability to catch and correct mistakes!"
                     );
        FUN_1400aeb6a("io.ConfigErrorRecoveryEnableAssert",(byte *)((longlong)puVar9 + 0x81));
        pbVar1 = (byte *)((longlong)puVar9 + 0x82);
        FUN_1400aeb6a("io.ConfigErrorRecoveryEnableDebugLog",pbVar1);
        pbVar2 = (byte *)((longlong)puVar9 + 0x83);
        FUN_1400aeb6a("io.ConfigErrorRecoveryEnableTooltip",pbVar2);
        if (((*(byte *)((longlong)puVar9 + 0x81) == 0) && (*pbVar1 == 0)) && (*pbVar2 == 0)) {
          *pbVar2 = 1;
          *pbVar1 = 1;
          *(byte *)((longlong)puVar9 + 0x81) = 1;
        }
        FUN_1400b1021("Debug");
        FUN_1400aeb6a("io.ConfigDebugIsDebuggerPresent",puVar9 + 0x21);
        uVar4 = DAT_1401c86a4;
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92(
                     "Enable various tools calling IM_DEBUG_BREAK().\n\nRequires a debugger being attached, otherwise IM_DEBUG_BREAK() options will appear to crash your application."
                     );
        FUN_1400aeb6a("io.ConfigDebugHighlightIdConflicts",(byte *)((longlong)puVar9 + 0x85));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Highlight and show an error message when multiple items have conflicting identifiers."
                     );
        FUN_14008f898(1);
        FUN_1400aeb6a("io.ConfigDebugBeginReturnValueOnce",(byte *)((longlong)puVar9 + 0x87));
        FUN_14008f98e();
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "First calls to Begin()/BeginChild() will return false.\n\nTHIS OPTION IS DISABLED because it needs to be set at application boot-time to make sense. Showing the disabled option is a way to make this feature easier to discover."
                     );
        FUN_1400aeb6a("io.ConfigDebugBeginReturnValueLoop",puVar9 + 0x22);
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Some calls to Begin()/BeginChild() will return false.\n\nWill cycle through window depths then repeat. Windows should be flickering while running."
                     );
        FUN_1400aeb6a("io.ConfigDebugIgnoreFocusLoss",(byte *)((longlong)puVar9 + 0x89));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Option to deactivate io.AddFocusEvent(false) handling. May facilitate interactions with a debugger when focus loss leads to clearing inputs data."
                     );
        FUN_1400aeb6a("io.ConfigDebugIniSettings",(byte *)((longlong)puVar9 + 0x8a));
        FUN_140092bab(0,uVar4);
        FUN_14009cf92(
                     "Option to save .ini data with extra comments (particularly helpful for Docking, but makes saving slower)."
                     );
        FUN_1400c66d9();
        FUN_1400b06f5();
      }
      cVar5 = FUN_1400c51fb("Backend Flags");
      if (cVar5 != '\0') {
        FUN_1400811b6("imgui_demo.cpp",0x285,"Configuration/Backend Flags");
        FUN_14009cf92(
                     "Those flags are set by the backends (imgui_impl_xxx files) to specify their capabilities.\nHere we expose them as read-only fields to avoid breaking interactions with your backend."
                     );
        FUN_14008f898(1);
        puVar9 = puVar9 + 1;
        thunk_FUN_1400af8bf("io.BackendFlags: HasGamepad",puVar9,1);
        thunk_FUN_1400af8bf("io.BackendFlags: HasMouseCursors",puVar9,2);
        thunk_FUN_1400af8bf("io.BackendFlags: HasSetMousePos",puVar9,4);
        thunk_FUN_1400af8bf("io.BackendFlags: PlatformHasViewports",puVar9,0x800);
        thunk_FUN_1400af8bf("io.BackendFlags: HasMouseHoveredViewport",puVar9,0x1000);
        thunk_FUN_1400af8bf("io.BackendFlags: HasParentViewport",puVar9,0x2000);
        thunk_FUN_1400af8bf("io.BackendFlags: RendererHasVtxOffset",puVar9,8);
        thunk_FUN_1400af8bf("io.BackendFlags: RendererHasTextures",puVar9,0x10);
        thunk_FUN_1400af8bf("io.BackendFlags: RendererHasViewports",puVar9,0x400);
        FUN_14008f98e();
        FUN_1400c66d9();
        FUN_1400b06f5();
      }
      cVar5 = FUN_1400c51fb("Style, Fonts");
      if (cVar5 != '\0') {
        FUN_1400811b6("imgui_demo.cpp",0x29e,"Configuration/Style, Fonts");
        FUN_1400aeb6a("Style Editor",&DAT_140f30943);
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92(
                     "The same contents can be accessed in \'Tools->Style Editor\' or by calling the ShowStyleEditor() function."
                     );
        FUN_1400c66d9();
        FUN_1400b06f5();
      }
      cVar5 = FUN_1400c51fb("Capture/Logging");
      if (cVar5 != '\0') {
        FUN_1400811b6("imgui_demo.cpp",0x2a8,"Configuration/Capture, Logging");
        FUN_14009cf92(
                     "The logging API redirects all text output so you can easily capture the content of a window or a block. Tree nodes can be automatically expanded.\nTry opening any of the contents below in this window and then click one of the \"Log To\" button."
                     );
        FUN_140096616();
        FUN_14009cf92(
                     "You can also call ImGui::LogText() to output directly to the log without a visual output."
                     );
        local_48 = 0;
        cVar5 = FUN_1400ad187("Copy \"Hello, world!\" to clipboard");
        if (cVar5 != '\0') {
          FUN_14008e61f(0xffffffff);
          FUN_14008eaf5("Hello, world!");
          FUN_14008f3dc();
        }
        FUN_1400c66d9();
      }
    }
    cVar5 = FUN_1400c6846("Window options",0);
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",700,"Window options");
      local_48 = 0;
      cVar5 = FUN_14010cbe8("split",3,0,&local_48,uVar18 & 0xffffffff00000000);
      if (cVar5 != '\0') {
        FUN_140112b04();
        FUN_1400aeb6a("No titlebar",&DAT_140f30954);
        FUN_140112b04();
        FUN_1400aeb6a("No scrollbar",&DAT_140f30955);
        FUN_140112b04();
        FUN_1400aeb6a("No menu",&DAT_140f30956);
        FUN_140112b04();
        FUN_1400aeb6a("No move",&DAT_140f30957);
        FUN_140112b04();
        FUN_1400aeb6a("No resize",&DAT_140f30958);
        FUN_140112b04();
        FUN_1400aeb6a("No collapse",&DAT_140f30959);
        FUN_140112b04();
        FUN_1400aeb6a("No close",&DAT_140f3095a);
        FUN_140112b04();
        FUN_1400aeb6a("No nav",&DAT_140f3095b);
        FUN_140112b04();
        FUN_1400aeb6a("No background",&DAT_140f3095c);
        FUN_140112b04();
        FUN_1400aeb6a("No bring to front",&DAT_140f3095d);
        FUN_140112b04();
        FUN_1400aeb6a("No docking",&DAT_140f3095e);
        FUN_140112b04();
        FUN_1400aeb6a("Unsaved document",&DAT_140f3095f);
        FUN_140110400();
      }
    }
    FUN_1400f079c();
    FUN_1400f088a();
    FUN_1400f3420();
    FUN_1400f3e21();
    FUN_1400f8e8a();
    FUN_14009366e();
  }
  FUN_140088c18();
  return;
}

