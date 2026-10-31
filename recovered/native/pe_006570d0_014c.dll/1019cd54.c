/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019cd54 */

void FUN_1019cd54(void)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (DAT_103a4c78 == 0) {
    FUN_101bab75();
  }
  else {
    FUN_101bab84();
  }
  if (DAT_103a4c7c == '\x01') {
    FUN_10116f5b();
  }
  FUN_10107d2b("Examples: Dockspace",&DAT_103a33dd,0x400);
  DAT_103a4c7c = 0;
  bVar1 = FUN_10131233("Basic demo mode",&DAT_103a4c78,0);
  DAT_103a4c7c = DAT_103a4c7c | bVar1;
  bVar1 = FUN_10131233("Advanced demo mode",&DAT_103a4c78,1);
  DAT_103a4c7c = DAT_103a4c7c | bVar1;
  FUN_10132656("Options");
  pbVar3 = (byte *)FUN_1010330d();
  if ((*pbVar3 & 0x80) == 0) {
    FUN_101baca0();
  }
  else {
    if (DAT_103a4c78 == 1) {
      FUN_1012ff1a("Fullscreen",&DAT_1038ef9c);
      FUN_1012ff1a("Keep Window Padding",&DAT_1038ef9d);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10111871(DAT_1038ef9c == '\0');
      thunk_FUN_10130d81("Flag: PassthruCentralNode",&DAT_1038efa0,8);
      FUN_10111961();
      thunk_FUN_10130d81("Flag: NoDockingOverCentralNode",&DAT_1038efa0,4);
      thunk_FUN_10130d81("Flag: NoDockingSplit",&DAT_1038efa0,0x10);
      thunk_FUN_10130d81("Flag: NoUndocking",&DAT_1038efa0,0x80);
      thunk_FUN_10130d81("Flag: NoResize",&DAT_1038efa0,0x20);
      uVar5 = 0x40;
      pcVar4 = "Flag: AutoHideTabBar";
    }
    else {
      if (DAT_103a4c78 != 0) goto LAB_1019ced7;
      DAT_1038efa0 = DAT_1038efa0 & 8;
      uVar5 = 8;
      pcVar4 = "Flag: PassthruCentralNode";
    }
    thunk_FUN_10130d81(pcVar4,&DAT_1038efa0,uVar5);
  }
LAB_1019ced7:
  cVar2 = FUN_1014c8c1();
  if (cVar2 != '\0') {
    cVar2 = FUN_1014db73(&DAT_1033570b,1);
    if (cVar2 != '\0') {
      FUN_1012d079("This demonstrates the use of ImGui::DockSpace() which allows you to manually\ncreate a docking node _within_ another window.\nThe \"Basic\" version uses the ImGui::DockSpaceOverViewport() helper. Most applications can probably use this."
                   ,0);
      FUN_10132188();
      FUN_1012d079("When docking is enabled, you can ALWAYS dock MOST window into another! Try it now!\n- Drag from window title bar or their tab to dock/undock.\n- Drag from window menu button (upper-left button) to undock an entire node (all windows).\n- Hold SHIFT to disable docking (if io.ConfigDockingWithShift == false, default)\n- Hold SHIFT to enable docking (if io.ConfigDockingWithShift == true)"
                   ,0);
      FUN_10132188();
      FUN_1012d079("More details:",0);
      FUN_101316d8();
      FUN_10114a0e(0,0xbf800000);
      FUN_10131c6c("Docking Wiki page","https://github.com/ocornut/imgui/wiki/Docking");
      FUN_1012d551("Read comments in ShowExampleAppDockSpace()");
      FUN_1014db88();
    }
    FUN_1014caf3();
  }
  FUN_1010ad44();
  return;
}

