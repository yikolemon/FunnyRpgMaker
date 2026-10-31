/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ea16e */

void FUN_1400ea16e(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (DAT_140f32398 == 0) {
    FUN_140109c02(DAT_140f1c644);
  }
  else {
    FUN_140109c11();
  }
  if (DAT_140f3239c == '\x01') {
    FUN_140095081();
  }
  FUN_140085d7e("Examples: Dockspace",&DAT_140f30935,0x400);
  DAT_140f3239c = 0;
  bVar1 = FUN_1400afd2d("Basic demo mode",&DAT_140f32398,0);
  DAT_140f3239c = DAT_140f3239c | bVar1;
  bVar1 = FUN_1400afd2d("Advanced demo mode",&DAT_140f32398,1);
  DAT_140f3239c = DAT_140f3239c | bVar1;
  FUN_1400b1021("Options");
  pbVar3 = (byte *)FUN_140081200();
  if ((*pbVar3 & 0x80) == 0) {
    FUN_140109d3d();
  }
  else {
    if (DAT_140f32398 == 1) {
      FUN_1400aeb6a("Fullscreen",&DAT_140f1c640);
      FUN_1400aeb6a("Keep Window Padding",&DAT_140f1c641);
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92(
                   "This is mostly exposed to facilitate understanding that a DockSpace() is _inside_ a window."
                   );
      FUN_14008f898(DAT_140f1c640 == '\0');
      thunk_FUN_1400af8bf("Flag: PassthruCentralNode",&DAT_140f1c644,8);
      FUN_14008f98e();
      thunk_FUN_1400af8bf("Flag: NoDockingOverCentralNode",&DAT_140f1c644,4);
      thunk_FUN_1400af8bf("Flag: NoDockingSplit",&DAT_140f1c644,0x10);
      thunk_FUN_1400af8bf("Flag: NoUndocking",&DAT_140f1c644,0x80);
      thunk_FUN_1400af8bf("Flag: NoResize",&DAT_140f1c644,0x20);
      pcVar4 = "Flag: AutoHideTabBar";
      uVar5 = 0x40;
    }
    else {
      if (DAT_140f32398 != 0) goto LAB_1400ea324;
      DAT_140f1c644 = DAT_140f1c644 & 8;
      pcVar4 = "Flag: PassthruCentralNode";
      uVar5 = 8;
    }
    thunk_FUN_1400af8bf(pcVar4,&DAT_140f1c644,uVar5);
  }
LAB_1400ea324:
  cVar2 = FUN_1400c9c0a();
  if (cVar2 != '\0') {
    cVar2 = FUN_1400cadcc(&DAT_140ec6c85,1);
    if (cVar2 != '\0') {
      FUN_1400abfca("This demonstrates the use of ImGui::DockSpace() which allows you to manually\ncreate a docking node _within_ another window.\nThe \"Basic\" version uses the ImGui::DockSpaceOverViewport() helper. Most applications can probably use this."
                    ,0);
      FUN_1400b0bd1();
      FUN_1400abfca("When docking is enabled, you can ALWAYS dock MOST window into another! Try it now!\n- Drag from window title bar or their tab to dock/undock.\n- Drag from window menu button (upper-left button) to undock an entire node (all windows).\n- Hold SHIFT to disable docking (if io.ConfigDockingWithShift == false, default)\n- Hold SHIFT to enable docking (if io.ConfigDockingWithShift == true)"
                    ,0);
      FUN_1400b0bd1();
      FUN_1400abfca("More details:",0);
      FUN_1400b0125();
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400b062e("Docking Wiki page","https://github.com/ocornut/imgui/wiki/Docking");
      FUN_1400ac536("Read comments in ShowExampleAppDockSpace()");
      FUN_1400cadd6();
    }
    FUN_1400c9e35();
  }
  FUN_140088c18();
  return;
}

