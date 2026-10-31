/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019bb7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019bb7c(float param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  float fVar7;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcd10;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  FUN_101145d8("1.92.9 WIP",_DAT_10301bd0,_UNK_10301bd4,_UNK_10301bd8,_UNK_10301bdc,0x14,2);
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a33f4) &&
     (FUN_1022c0d0(&DAT_103a33f4), DAT_103a33f4 == -1)) {
    local_18 = 0;
    FUN_1022c3a0(&LAB_1019cc57);
    local_18 = 0xffffffff;
    FUN_1022c180(&DAT_103a33f4);
  }
  if (DAT_103a33d8 == '\x01') {
    FUN_1019cc66();
  }
  if (DAT_103a33dd == '\x01') {
    FUN_1019cd54();
  }
  if (DAT_103a33dc == '\x01') {
    FUN_1019cf6f();
  }
  if (DAT_103a33d9 == '\x01') {
    FUN_1019daad();
  }
  if (DAT_103a33da == '\x01') {
    FUN_1019db9a();
  }
  if (DAT_103a33db == '\x01') {
    FUN_1019dc70();
  }
  if (DAT_103a33de == '\x01') {
    FUN_1019f82e();
  }
  if (DAT_103a33df == '\x01') {
    FUN_1019f933();
  }
  if (DAT_103a33e0 == '\x01') {
    FUN_1019fb12();
  }
  if (DAT_103a33e1 == '\x01') {
    FUN_1019fd60();
  }
  if (DAT_103a33e2 == '\x01') {
    FUN_1019fe93();
  }
  if (DAT_103a33e3 == '\x01') {
    FUN_101a0190();
  }
  if (DAT_103a33e4 == '\x01') {
    FUN_101a021e();
  }
  if (DAT_103a33e5 == '\x01') {
    FUN_101a0739();
  }
  if (DAT_103a33e6 == '\x01') {
    FUN_101a08a4();
  }
  if (DAT_103a33e7 == '\x01') {
    FUN_101a0c01();
  }
  if (DAT_103a33e8 == '\x01') {
    FUN_1011f51a(&DAT_103a33e8);
  }
  if (DAT_103a33e9 == '\x01') {
    FUN_10121f9a(&DAT_103a33e9);
  }
  if (DAT_103a33ea == '\x01') {
    FUN_101223c6(&DAT_103a33ea);
  }
  if (DAT_103a33ec == '\x01') {
    FUN_101a0ddd(&DAT_103a33ec);
  }
  if (DAT_103a33eb == '\x01') {
    FUN_10107d2b();
    FUN_101a15dd(0);
    FUN_1010ad44();
  }
  if (DAT_103a33fe != '\0') {
    param_1 = 0.0;
  }
  local_50 = param_1;
  iVar4 = FUN_1010ad36();
  local_60 = 0;
  local_30 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar4 + 0x20) >> 0x20) + _UNK_10302564,
                      (float)*(undefined8 *)(iVar4 + 0x20) + _DAT_10302560);
  FUN_10111d56();
  local_60 = DAT_10302570;
  FUN_10107cf6(&local_60,4);
  cVar2 = FUN_10107d2b();
  if (cVar2 != '\0') {
    fVar6 = (float10)FUN_10111f20();
    local_54 = (float)fVar6;
    local_50 = local_54 * DAT_102b8f14;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    FUN_1010c3e4(&local_60);
    fVar7 = local_50;
    if ((float)local_60 * DAT_102b8e90 <= local_50) {
      fVar7 = (float)local_60 * DAT_102b8e90;
    }
    FUN_1011520a((uint)fVar7 ^ _DAT_1028f620);
    FUN_101a2ce2();
    FUN_1012d08c();
    FUN_10131d29();
    cVar2 = FUN_101494f9(&DAT_1033570b,0);
    if (cVar2 != '\0') {
      FUN_101032c6();
      FUN_10132656("ABOUT THIS DEMO:");
      FUN_1012d551("Sections below are demonstrating many aspects of the library.");
      FUN_1012d551("The \"Examples\" menu above leads to more demo contents.");
      FUN_1012d551(
                  "The \"Tools\" menu above gives access to: About Box, Style Editor,\nand Metrics/Debugger (general purpose Dear ImGui debugging tool)."
                  );
      FUN_1012d551("Web demo (w/ source code browser): ");
      FUN_10114a0e(0,0);
      FUN_10131c6c("https://pthom.github.io/imgui_explorer",0);
      FUN_10132656("PROGRAMMER GUIDE:");
      FUN_1012d551("See the ShowDemoWindow() code in imgui_demo.cpp. <- you are here!");
      FUN_1012d551("See comments in imgui.cpp.");
      FUN_1012d551("See example applications in the examples/ folder.");
      FUN_1012d551("Read the FAQ at ");
      FUN_10114a0e(0,0);
      FUN_10131c6c("https://www.dearimgui.com/faq/",0);
      FUN_1012d551("Set \'io.ConfigFlags |= NavEnableKeyboard\' for keyboard controls.");
      FUN_1012d551("Set \'io.ConfigFlags |= NavEnableGamepad\' for gamepad controls.");
      FUN_10132656("USER GUIDE:");
      FUN_101a2ffc();
    }
    cVar2 = FUN_101494f9("Configuration",0);
    if (cVar2 != '\0') {
      puVar5 = (uint *)FUN_1010330d();
      cVar2 = FUN_10147d77("Configuration##2");
      if (cVar2 != '\0') {
        FUN_101032c6();
        FUN_10132656("General");
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        if ((*puVar5 & 0x10) != 0) {
          fVar6 = (float10)FUN_10103354();
          local_58 = (float)fVar6;
          fVar6 = (float10)FUN_1026dec0((double)local_58,0xa0000000,0x3fd99999);
          local_38 = (double)fVar6;
          if (local_38 < DAT_10302580) {
            FUN_10114a0e(0,0xbf800000);
            FUN_1012d08c("<<PRESS SPACE TO DISABLE>>");
          }
          bVar3 = FUN_10113d4b(0x20c,1);
          if ((byte)((byte)((*puVar5 & 0x40) >> 6) | bVar3) == 1) {
            *puVar5 = *puVar5 & 0xffffffef;
          }
        }
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigInputTrickleEventQueue",(byte *)((int)puVar5 + 0x4a));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.MouseDrawCursor",puVar5 + 0x12);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10132656("Keyboard/Gamepad Navigation");
        FUN_1012ff1a("io.ConfigNavSwapGamepadButtons",(byte *)((int)puVar5 + 0x35));
        FUN_1012ff1a("io.ConfigNavMoveSetMousePos",(byte *)((int)puVar5 + 0x36));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigNavCaptureKeyboard",(byte *)((int)puVar5 + 0x37));
        FUN_1012ff1a("io.ConfigNavEscapeClearFocusItem",puVar5 + 0xe);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigNavEscapeClearFocusWindow",(byte *)((int)puVar5 + 0x39));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigNavCursorVisibleAuto",(byte *)((int)puVar5 + 0x3a));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigNavCursorVisibleAlways",(byte *)((int)puVar5 + 0x3b));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10132656("Docking");
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        if ((*puVar5 & 0x80) != 0) {
          FUN_10115158(0);
          FUN_1012ff1a("io.ConfigDockingNoSplit",puVar5 + 0xf);
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigDockingNoDockingOver",(byte *)((int)puVar5 + 0x3d));
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigDockingWithShift",(byte *)((int)puVar5 + 0x3e));
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigDockingAlwaysTabBar",(byte *)((int)puVar5 + 0x3f));
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigDockingTransparentPayload",puVar5 + 0x10);
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_101151af(0);
        }
        FUN_10132656("Multi-viewports");
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        if ((*puVar5 & 0x400) != 0) {
          FUN_10115158(0);
          FUN_1012ff1a("io.ConfigViewportsNoAutoMerge",(byte *)((int)puVar5 + 0x41));
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigViewportsNoTaskBarIcon",(byte *)((int)puVar5 + 0x42));
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigViewportsNoDecoration",(byte *)((int)puVar5 + 0x43));
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigViewportsNoDefaultParent",puVar5 + 0x11);
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_1012ff1a("io.ConfigViewportsPlatformFocusSetsImGuiFocus",(byte *)((int)puVar5 + 0x45))
          ;
          FUN_10114a0e(0,0xbf800000);
          FUN_1011eaad();
          FUN_101151af(0);
        }
        FUN_10132656("Windows");
        FUN_1012ff1a("io.ConfigWindowsResizeFromEdges",(byte *)((int)puVar5 + 0x4e));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigWindowsMoveFromTitleBarOnly",(byte *)((int)puVar5 + 0x4f));
        FUN_1012ff1a("io.ConfigWindowsCopyContentsWithCtrlC",puVar5 + 0x14);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigScrollbarScrollByPage",(byte *)((int)puVar5 + 0x51));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10132656("Widgets");
        FUN_1012ff1a("io.ConfigInputTextCursorBlink",(byte *)((int)puVar5 + 0x4b));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigInputTextEnterKeepActive",puVar5 + 0x13);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigDragClickToInputText",(byte *)((int)puVar5 + 0x4d));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigMacOSXBehaviors",(byte *)((int)puVar5 + 0x49));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012d08c("Also see Style->Rendering for rendering options.");
        FUN_10132656("Error Handling");
        FUN_1012ff1a("io.ConfigErrorRecovery",puVar5 + 0x1b);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigErrorRecoveryEnableAssert",(byte *)((int)puVar5 + 0x6d));
        pbVar1 = (byte *)((int)puVar5 + 0x6e);
        FUN_1012ff1a("io.ConfigErrorRecoveryEnableDebugLog",pbVar1);
        FUN_1012ff1a("io.ConfigErrorRecoveryEnableTooltip",(byte *)((int)puVar5 + 0x6f));
        if (((*(byte *)((int)puVar5 + 0x6d) == 0) && (*pbVar1 == 0)) &&
           (*(byte *)((int)puVar5 + 0x6f) == 0)) {
          *(byte *)((int)puVar5 + 0x6f) = 1;
          *pbVar1 = 1;
          *(byte *)((int)puVar5 + 0x6d) = 1;
        }
        FUN_10132656("Debug");
        FUN_1012ff1a("io.ConfigDebugIsDebuggerPresent",puVar5 + 0x1c);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigDebugHighlightIdConflicts",(byte *)((int)puVar5 + 0x71));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10111871(1);
        FUN_1012ff1a("io.ConfigDebugBeginReturnValueOnce",(byte *)((int)puVar5 + 0x73));
        FUN_10111961();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigDebugBeginReturnValueLoop",puVar5 + 0x1d);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigDebugIgnoreFocusLoss",(byte *)((int)puVar5 + 0x75));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("io.ConfigDebugIniSettings",(byte *)((int)puVar5 + 0x76));
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10149387();
        FUN_10131d29();
      }
      cVar2 = FUN_10147d77("Backend Flags");
      if (cVar2 != '\0') {
        FUN_101032c6();
        FUN_1011eaad();
        FUN_10111871(1);
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        FUN_10111961();
        FUN_10149387();
        FUN_10131d29();
      }
      cVar2 = FUN_10147d77("Style, Fonts");
      if (cVar2 != '\0') {
        FUN_101032c6();
        FUN_1012ff1a("Style Editor",&DAT_103a33eb);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10149387();
        FUN_10131d29();
      }
      cVar2 = FUN_10147d77("Capture/Logging");
      if (cVar2 != '\0') {
        FUN_101032c6();
        FUN_1011eaad();
        FUN_10118404();
        FUN_1011eaad();
        local_60 = 0;
        cVar2 = FUN_1012e1b7("Copy \"Hello, world!\" to clipboard",&local_60);
        if (cVar2 != '\0') {
          FUN_10110666(0xffffffff);
          FUN_10110bf6("Hello, world!");
          FUN_1011147d();
        }
        FUN_10149387();
      }
    }
    cVar2 = FUN_101494f9("Window options",0);
    if (cVar2 != '\0') {
      FUN_101032c6();
      local_60 = 0;
      cVar2 = FUN_1015f834("split",3,0,&local_60,0);
      if (cVar2 != '\0') {
        FUN_101657a1();
        FUN_1012ff1a("No titlebar",&DAT_103a33f8);
        FUN_101657a1();
        FUN_1012ff1a("No scrollbar",&DAT_103a33f9);
        FUN_101657a1();
        FUN_1012ff1a("No menu",&DAT_103a33fa);
        FUN_101657a1();
        FUN_1012ff1a("No move",&DAT_103a33fb);
        FUN_101657a1();
        FUN_1012ff1a("No resize",&DAT_103a33fc);
        FUN_101657a1();
        FUN_1012ff1a("No collapse",&DAT_103a33fd);
        FUN_101657a1();
        FUN_1012ff1a("No close",&DAT_103a33fe);
        FUN_101657a1();
        FUN_1012ff1a("No nav",&DAT_103a33ff);
        FUN_101657a1();
        FUN_1012ff1a("No background",&DAT_103a3400);
        FUN_101657a1();
        FUN_1012ff1a("No bring to front",&DAT_103a3401);
        FUN_101657a1();
        FUN_1012ff1a("No docking",&DAT_103a3402);
        FUN_101657a1();
        FUN_1012ff1a("Unsaved document",&DAT_103a3403);
        FUN_1016304e();
      }
    }
    FUN_101a31bb();
    FUN_101a32a8();
    FUN_101a5c66();
    FUN_101a65c8();
    FUN_101ab0f5();
    FUN_101154f4();
  }
  FUN_1010ad44();
  *unaff_FS_OFFSET = local_20;
  return;
}

