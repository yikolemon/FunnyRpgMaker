/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a44ea */

void FUN_1801a44ea(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (DAT_180420c48 == 0) {
    FUN_1801c3efe(DAT_180408ea4);
  }
  else {
    FUN_1801c3f0d();
  }
  if (DAT_180420c4c == '\x01') {
    FUN_18011bdc5();
  }
  FUN_18010ca66("Examples: Dockspace",&DAT_18041f1e5,0x400);
  DAT_180420c4c = 0;
  bVar1 = FUN_180136dfd("Basic demo mode",&DAT_180420c48,0);
  DAT_180420c4c = DAT_180420c4c | bVar1;
  bVar1 = FUN_180136dfd("Advanced demo mode",&DAT_180420c48,1);
  DAT_180420c4c = DAT_180420c4c | bVar1;
  FUN_1801380f1("Options");
  pbVar3 = (byte *)FUN_180107ee8();
  if ((*pbVar3 & 0x80) == 0) {
    FUN_1801c4039();
  }
  else {
    if (DAT_180420c48 == 1) {
      FUN_180135c3a("Fullscreen",&DAT_180408ea0);
      FUN_180135c3a("Keep Window Padding",&DAT_180408ea1);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "This is mostly exposed to facilitate understanding that a DockSpace() is _inside_ a window."
                   );
      FUN_180116580(DAT_180408ea0 == '\0');
      thunk_FUN_18013698f("Flag: PassthruCentralNode",&DAT_180408ea4,8);
      FUN_180116676();
      thunk_FUN_18013698f("Flag: NoDockingOverCentralNode",&DAT_180408ea4,4);
      thunk_FUN_18013698f("Flag: NoDockingSplit",&DAT_180408ea4,0x10);
      thunk_FUN_18013698f("Flag: NoUndocking",&DAT_180408ea4,0x80);
      thunk_FUN_18013698f("Flag: NoResize",&DAT_180408ea4,0x20);
      pcVar4 = "Flag: AutoHideTabBar";
      uVar5 = 0x40;
    }
    else {
      if (DAT_180420c48 != 0) goto LAB_1801a46a0;
      DAT_180408ea4 = DAT_180408ea4 & 8;
      pcVar4 = "Flag: PassthruCentralNode";
      uVar5 = 8;
    }
    thunk_FUN_18013698f(pcVar4,&DAT_180408ea4,uVar5);
  }
LAB_1801a46a0:
  cVar2 = FUN_180150cda();
  if (cVar2 != '\0') {
    cVar2 = FUN_180151e9c(&DAT_18036580c,1);
    if (cVar2 != '\0') {
      FUN_18013309a("This demonstrates the use of ImGui::DockSpace() which allows you to manually\ncreate a docking node _within_ another window.\nThe \"Basic\" version uses the ImGui::DockSpaceOverViewport() helper. Most applications can probably use this."
                    ,0);
      FUN_180137ca1();
      FUN_18013309a("When docking is enabled, you can ALWAYS dock MOST window into another! Try it now!\n- Drag from window title bar or their tab to dock/undock.\n- Drag from window menu button (upper-left button) to undock an entire node (all windows).\n- Hold SHIFT to disable docking (if io.ConfigDockingWithShift == false, default)\n- Hold SHIFT to enable docking (if io.ConfigDockingWithShift == true)"
                    ,0);
      FUN_180137ca1();
      FUN_18013309a("More details:",0);
      FUN_1801371f5();
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_1801376fe("Docking Wiki page","https://github.com/ocornut/imgui/wiki/Docking");
      FUN_180133606("Read comments in ShowExampleAppDockSpace()");
      FUN_180151ea6();
    }
    FUN_180150f05();
  }
  FUN_18010f900();
  return;
}

