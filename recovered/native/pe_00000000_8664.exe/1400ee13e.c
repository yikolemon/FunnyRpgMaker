/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ee13e */

void FUN_1400ee13e(undefined8 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  longlong lVar6;
  char *pcVar7;
  float fVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  cVar2 = FUN_140085d7e("About Dear ImGui",param_1,0x40);
  if (cVar2 == '\0') {
    if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
      FUN_140088c18();
      return;
    }
  }
  else {
    FUN_1400811b6("imgui_demo.cpp",0x2072,"Tools/About Dear ImGui");
    FUN_1400abfd5("Dear ImGui %s (%d)","1.92.9 WIP",0x4b51);
    FUN_1400b062e("Homepage","https://github.com/ocornut/imgui");
    uVar3 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400b062e(&DAT_140eccca9,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md");
    FUN_140092bab(0,uVar3);
    FUN_1400b062e(&DAT_140ec8325,"https://github.com/ocornut/imgui/wiki");
    FUN_140092bab(0,uVar3);
    FUN_1400b062e("Extensions","https://github.com/ocornut/imgui/wiki/Useful-Extensions");
    FUN_140092bab(0,uVar3);
    FUN_1400b062e("Releases","https://github.com/ocornut/imgui/releases");
    FUN_140092bab(0,uVar3);
    FUN_1400b062e("Funding","https://github.com/ocornut/imgui/wiki/Funding");
    FUN_1400b0bd1();
    FUN_1400abfd5("(c) 2014-2026 Omar Cornut");
    FUN_1400abfd5("Developed by Omar Cornut and all Dear ImGui contributors.");
    FUN_1400abfd5("Dear ImGui is licensed under the MIT License, see LICENSE for more information.")
    ;
    FUN_1400abfd5("If your company uses this, please consider funding the project.");
    FUN_1400aeb6a("Config/Build Information",&DAT_140f30960);
    if (DAT_140f30960 == '\x01') {
      puVar5 = (uint *)FUN_140081200();
      lVar6 = FUN_14007a54a();
      local_48 = 0;
      cVar2 = FUN_1400ad187("Copy to clipboard",&local_48);
      fVar8 = (float)FUN_140093756();
      local_48 = (ulonglong)(uint)(fVar8 * DAT_140e8d480) << 0x20;
      uVar3 = FUN_140091695("cfg_infos");
      FUN_14008a360(uVar3,&local_48,0x80,0);
      if (cVar2 != '\0') {
        FUN_14008e61f(0xffffffff);
        FUN_14008eaf5("// (Copy from the next line. Keep the ``` markers for formatting.)\n");
        FUN_14008eaf5("```cpp\n");
      }
      FUN_1400abfd5("Dear ImGui %s (%d)","1.92.9 WIP",0x4b51);
      FUN_1400b0bd1();
      FUN_1400abfd5("sizeof(size_t): %d, sizeof(ImDrawIdx): %d, sizeof(ImDrawVert): %d",8,2,0x14);
      FUN_1400abfd5("define: __cplusplus=%d",0x31512);
      FUN_1400abfd5("define: _WIN32");
      FUN_1400abfd5("define: _WIN64");
      FUN_1400abfd5("define: _MSC_VER=%d",0x79f);
      FUN_1400abfd5("define: _MSVC_LANG=%d",0x31512);
      FUN_1400abfd5("define: __clang_version__=%s",
                    "22.1.7 (https://github.com/komimoe/Arkari.git 18cee9cad49a6629570cfd02522378ede46a8017)"
                   );
      FUN_1400abfd5("define: IMGUI_HAS_VIEWPORT");
      FUN_1400abfd5("define: IMGUI_HAS_DOCK");
      FUN_1400abfd5("define: NDEBUG");
      FUN_1400abfd5("IM_ASSERT: runs expression: %s. expand size: %s%s",&DAT_140ecccd2,
                    &DAT_140ecccd2," (MAYBE DISABLED?!)");
      FUN_140092bab(0);
      FUN_14009cf92(
                   "IM_ASSERT() calls assert() by default. Compiling with NDEBUG will usually strip out assert() to nothing, which is NOT recommended because we use asserts to notify of programmer mistakes!"
                   );
      FUN_1400b0bd1();
      pcVar7 = *(char **)(puVar5 + 0x24);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "NULL";
      }
      FUN_1400abfd5("io.BackendPlatformName: %s",pcVar7);
      pcVar7 = *(char **)(puVar5 + 0x26);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "NULL";
      }
      FUN_1400abfd5("io.BackendRendererName: %s",pcVar7);
      FUN_1400abfd5("io.ConfigFlags: 0x%08X",*puVar5);
      uVar4 = *puVar5;
      if ((uVar4 & 1) != 0) {
        FUN_1400abfd5(" NavEnableKeyboard");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 2) != 0) {
        FUN_1400abfd5(" NavEnableGamepad");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 0x10) != 0) {
        FUN_1400abfd5(" NoMouse");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 0x20) != 0) {
        FUN_1400abfd5(" NoMouseCursorChange");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 0x40) != 0) {
        FUN_1400abfd5(" NoKeyboard");
        uVar4 = *puVar5;
      }
      if ((char)uVar4 < '\0') {
        FUN_1400abfd5(" DockingEnable");
        uVar4 = *puVar5;
      }
      if ((uVar4 >> 10 & 1) != 0) {
        FUN_1400abfd5(" ViewportsEnable");
      }
      if ((char)puVar5[0x17] == '\x01') {
        FUN_1400abfd5("io.MouseDrawCursor");
      }
      if (*(char *)((longlong)puVar5 + 0x5a) == '\x01') {
        FUN_1400abfd5("io.ConfigDpiScaleFonts");
      }
      if (*(char *)((longlong)puVar5 + 0x5b) == '\x01') {
        FUN_1400abfd5("io.ConfigDpiScaleViewports");
      }
      if (*(char *)((longlong)puVar5 + 0x55) == '\x01') {
        FUN_1400abfd5("io.ConfigViewportsNoAutoMerge");
      }
      if (*(char *)((longlong)puVar5 + 0x56) == '\x01') {
        FUN_1400abfd5("io.ConfigViewportsNoTaskBarIcon");
      }
      if (*(char *)((longlong)puVar5 + 0x57) == '\x01') {
        FUN_1400abfd5("io.ConfigViewportsNoDecoration");
      }
      if ((char)puVar5[0x16] == '\x01') {
        FUN_1400abfd5("io.ConfigViewportsNoDefaultParent");
      }
      if ((char)puVar5[0x14] == '\x01') {
        FUN_1400abfd5("io.ConfigDockingNoSplit");
      }
      if (*(char *)((longlong)puVar5 + 0x51) == '\x01') {
        FUN_1400abfd5("io.ConfigDockingNoDockingOver");
      }
      if (*(char *)((longlong)puVar5 + 0x52) == '\x01') {
        FUN_1400abfd5("io.ConfigDockingWithShift");
      }
      if (*(char *)((longlong)puVar5 + 0x53) == '\x01') {
        FUN_1400abfd5("io.ConfigDockingAlwaysTabBar");
      }
      if ((char)puVar5[0x15] == '\x01') {
        FUN_1400abfd5("io.ConfigDockingTransparentPayload");
      }
      if (*(char *)((longlong)puVar5 + 0x5d) == '\x01') {
        FUN_1400abfd5("io.ConfigMacOSXBehaviors");
      }
      if (*(char *)((longlong)puVar5 + 0x4a) == '\x01') {
        FUN_1400abfd5("io.ConfigNavMoveSetMousePos");
      }
      if (*(char *)((longlong)puVar5 + 0x4b) == '\x01') {
        FUN_1400abfd5("io.ConfigNavCaptureKeyboard");
      }
      if (*(char *)((longlong)puVar5 + 0x5f) == '\x01') {
        FUN_1400abfd5("io.ConfigInputTextCursorBlink");
      }
      if (*(char *)((longlong)puVar5 + 0x62) == '\x01') {
        FUN_1400abfd5("io.ConfigWindowsResizeFromEdges");
      }
      if (*(char *)((longlong)puVar5 + 99) == '\x01') {
        FUN_1400abfd5("io.ConfigWindowsMoveFromTitleBarOnly");
      }
      if (0.0 <= (float)puVar5[0x1a]) {
        FUN_1400abfd5("io.ConfigMemoryCompactTimer = %.1f",(double)(float)puVar5[0x1a]);
      }
      FUN_1400abfd5("io.BackendFlags: 0x%08X",puVar5[1]);
      uVar4 = puVar5[1];
      if ((uVar4 & 1) != 0) {
        FUN_1400abfd5(" HasGamepad");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 2) != 0) {
        FUN_1400abfd5(" HasMouseCursors");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 4) != 0) {
        FUN_1400abfd5(" HasSetMousePos");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 0xb & 1) != 0) {
        FUN_1400abfd5(" PlatformHasViewports");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 0xc & 1) != 0) {
        FUN_1400abfd5(" HasMouseHoveredViewport");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 0xd & 1) != 0) {
        FUN_1400abfd5(" HasParentViewport");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 8) != 0) {
        FUN_1400abfd5(" RendererHasVtxOffset");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 0x10) != 0) {
        FUN_1400abfd5(" RendererHasTextures");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 10 & 1) != 0) {
        FUN_1400abfd5(" RendererHasViewports");
      }
      FUN_1400b0bd1();
      puVar1 = *(undefined4 **)(puVar5 + 0xe);
      local_58 = *(undefined4 *)(*(longlong *)(puVar1 + 0xe) + 0x20);
      FUN_1400abfd5("io.Fonts: %d fonts, Flags: 0x%08X, TexSize: %d,%d",puVar1[0x1a],*puVar1,
                    *(undefined4 *)(*(longlong *)(puVar1 + 0xe) + 0x1c));
      pcVar7 = "NULL";
      if (*(char **)(*(longlong *)(puVar5 + 0xe) + 0x2c0) != (char *)0x0) {
        pcVar7 = *(char **)(*(longlong *)(puVar5 + 0xe) + 0x2c0);
      }
      FUN_1400abfd5("io.Fonts->FontLoaderName: %s",pcVar7);
      FUN_1400abfd5("io.DisplaySize: %.2f,%.2f",(double)(float)puVar5[2],(double)(float)puVar5[3]);
      FUN_1400abfd5("io.DisplayFramebufferScale: %.2f,%.2f",(double)(float)puVar5[4],
                    (double)(float)puVar5[5]);
      FUN_1400b0bd1();
      FUN_1400abfd5("style.WindowPadding: %.2f,%.2f",(double)*(float *)(lVar6 + 0x14),
                    (double)*(float *)(lVar6 + 0x18));
      FUN_1400abfd5("style.WindowBorderSize: %.2f",(double)*(float *)(lVar6 + 0x20));
      FUN_1400abfd5("style.FramePadding: %.2f,%.2f",(double)*(float *)(lVar6 + 0x4c),
                    (double)*(float *)(lVar6 + 0x50));
      FUN_1400abfd5("style.FrameRounding: %.2f",(double)*(float *)(lVar6 + 0x54));
      FUN_1400abfd5("style.FrameBorderSize: %.2f",(double)*(float *)(lVar6 + 0x58));
      FUN_1400abfd5("style.ItemSpacing: %.2f,%.2f",(double)*(float *)(lVar6 + 0x5c),
                    (double)*(float *)(lVar6 + 0x60));
      FUN_1400abfd5("style.ItemInnerSpacing: %.2f,%.2f",(double)*(float *)(lVar6 + 100),
                    (double)*(float *)(lVar6 + 0x68));
      if (cVar2 != '\0') {
        FUN_14008eaf5("\n```\n");
        FUN_14008f3dc();
      }
      FUN_14008a651();
    }
    FUN_140088c18();
    if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
}

