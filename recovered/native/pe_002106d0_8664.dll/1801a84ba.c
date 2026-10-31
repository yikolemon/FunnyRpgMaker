/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a84ba */

void FUN_1801a84ba(undefined8 param_1)

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
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  cVar2 = FUN_18010ca66("About Dear ImGui",param_1,0x40);
  if (cVar2 == '\0') {
    if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
      FUN_18010f900();
      return;
    }
  }
  else {
    FUN_180107e9e("imgui_demo.cpp",0x2072,"Tools/About Dear ImGui");
    FUN_1801330a5("Dear ImGui %s (%d)","1.92.9 WIP",0x4b51);
    FUN_1801376fe("Homepage","https://github.com/ocornut/imgui");
    uVar3 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_1801376fe(&DAT_18036c3fa,"https://github.com/ocornut/imgui/blob/master/docs/FAQ.md");
    FUN_180119893(0,uVar3);
    FUN_1801376fe(&DAT_18036709d,"https://github.com/ocornut/imgui/wiki");
    FUN_180119893(0,uVar3);
    FUN_1801376fe("Extensions","https://github.com/ocornut/imgui/wiki/Useful-Extensions");
    FUN_180119893(0,uVar3);
    FUN_1801376fe("Releases","https://github.com/ocornut/imgui/releases");
    FUN_180119893(0,uVar3);
    FUN_1801376fe("Funding","https://github.com/ocornut/imgui/wiki/Funding");
    FUN_180137ca1();
    FUN_1801330a5("(c) 2014-2026 Omar Cornut");
    FUN_1801330a5("Developed by Omar Cornut and all Dear ImGui contributors.");
    FUN_1801330a5("Dear ImGui is licensed under the MIT License, see LICENSE for more information.")
    ;
    FUN_1801330a5("If your company uses this, please consider funding the project.");
    FUN_180135c3a("Config/Build Information",&DAT_18041f210);
    if (DAT_18041f210 == '\x01') {
      puVar5 = (uint *)FUN_180107ee8();
      lVar6 = FUN_18010128e();
      local_48 = 0;
      cVar2 = FUN_180134257("Copy to clipboard",&local_48);
      fVar8 = (float)FUN_18011a43e();
      local_48 = (ulonglong)(uint)(fVar8 * DAT_1803290e4) << 0x20;
      uVar3 = FUN_18011837d("cfg_infos");
      FUN_180111048(uVar3,&local_48,0x80,0);
      if (cVar2 != '\0') {
        FUN_180115307(0xffffffff);
        FUN_1801157dd("// (Copy from the next line. Keep the ``` markers for formatting.)\n");
        FUN_1801157dd("```cpp\n");
      }
      FUN_1801330a5("Dear ImGui %s (%d)","1.92.9 WIP",0x4b51);
      FUN_180137ca1();
      FUN_1801330a5("sizeof(size_t): %d, sizeof(ImDrawIdx): %d, sizeof(ImDrawVert): %d",8,2,0x14);
      FUN_1801330a5("define: __cplusplus=%d",0x31512);
      FUN_1801330a5("define: _WIN32");
      FUN_1801330a5("define: _WIN64");
      FUN_1801330a5("define: _MSC_VER=%d",0x79f);
      FUN_1801330a5("define: _MSVC_LANG=%d",0x31512);
      FUN_1801330a5("define: __clang_version__=%s",
                    "22.1.7 (https://github.com/komimoe/Arkari.git 18cee9cad49a6629570cfd02522378ede46a8017)"
                   );
      FUN_1801330a5("define: IMGUI_HAS_VIEWPORT");
      FUN_1801330a5("define: IMGUI_HAS_DOCK");
      FUN_1801330a5("define: NDEBUG");
      FUN_1801330a5("IM_ASSERT: runs expression: %s. expand size: %s%s",&DAT_18036c44e,
                    &DAT_18036c44e," (MAYBE DISABLED?!)");
      FUN_180119893(0);
      FUN_180124063(
                   "IM_ASSERT() calls assert() by default. Compiling with NDEBUG will usually strip out assert() to nothing, which is NOT recommended because we use asserts to notify of programmer mistakes!"
                   );
      FUN_180137ca1();
      pcVar7 = *(char **)(puVar5 + 0x24);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "NULL";
      }
      FUN_1801330a5("io.BackendPlatformName: %s",pcVar7);
      pcVar7 = *(char **)(puVar5 + 0x26);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "NULL";
      }
      FUN_1801330a5("io.BackendRendererName: %s",pcVar7);
      FUN_1801330a5("io.ConfigFlags: 0x%08X",*puVar5);
      uVar4 = *puVar5;
      if ((uVar4 & 1) != 0) {
        FUN_1801330a5(" NavEnableKeyboard");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 2) != 0) {
        FUN_1801330a5(" NavEnableGamepad");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 0x10) != 0) {
        FUN_1801330a5(" NoMouse");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 0x20) != 0) {
        FUN_1801330a5(" NoMouseCursorChange");
        uVar4 = *puVar5;
      }
      if ((uVar4 & 0x40) != 0) {
        FUN_1801330a5(" NoKeyboard");
        uVar4 = *puVar5;
      }
      if ((char)uVar4 < '\0') {
        FUN_1801330a5(" DockingEnable");
        uVar4 = *puVar5;
      }
      if ((uVar4 >> 10 & 1) != 0) {
        FUN_1801330a5(" ViewportsEnable");
      }
      if ((char)puVar5[0x17] == '\x01') {
        FUN_1801330a5("io.MouseDrawCursor");
      }
      if (*(char *)((longlong)puVar5 + 0x5a) == '\x01') {
        FUN_1801330a5("io.ConfigDpiScaleFonts");
      }
      if (*(char *)((longlong)puVar5 + 0x5b) == '\x01') {
        FUN_1801330a5("io.ConfigDpiScaleViewports");
      }
      if (*(char *)((longlong)puVar5 + 0x55) == '\x01') {
        FUN_1801330a5("io.ConfigViewportsNoAutoMerge");
      }
      if (*(char *)((longlong)puVar5 + 0x56) == '\x01') {
        FUN_1801330a5("io.ConfigViewportsNoTaskBarIcon");
      }
      if (*(char *)((longlong)puVar5 + 0x57) == '\x01') {
        FUN_1801330a5("io.ConfigViewportsNoDecoration");
      }
      if ((char)puVar5[0x16] == '\x01') {
        FUN_1801330a5("io.ConfigViewportsNoDefaultParent");
      }
      if ((char)puVar5[0x14] == '\x01') {
        FUN_1801330a5("io.ConfigDockingNoSplit");
      }
      if (*(char *)((longlong)puVar5 + 0x51) == '\x01') {
        FUN_1801330a5("io.ConfigDockingNoDockingOver");
      }
      if (*(char *)((longlong)puVar5 + 0x52) == '\x01') {
        FUN_1801330a5("io.ConfigDockingWithShift");
      }
      if (*(char *)((longlong)puVar5 + 0x53) == '\x01') {
        FUN_1801330a5("io.ConfigDockingAlwaysTabBar");
      }
      if ((char)puVar5[0x15] == '\x01') {
        FUN_1801330a5("io.ConfigDockingTransparentPayload");
      }
      if (*(char *)((longlong)puVar5 + 0x5d) == '\x01') {
        FUN_1801330a5("io.ConfigMacOSXBehaviors");
      }
      if (*(char *)((longlong)puVar5 + 0x4a) == '\x01') {
        FUN_1801330a5("io.ConfigNavMoveSetMousePos");
      }
      if (*(char *)((longlong)puVar5 + 0x4b) == '\x01') {
        FUN_1801330a5("io.ConfigNavCaptureKeyboard");
      }
      if (*(char *)((longlong)puVar5 + 0x5f) == '\x01') {
        FUN_1801330a5("io.ConfigInputTextCursorBlink");
      }
      if (*(char *)((longlong)puVar5 + 0x62) == '\x01') {
        FUN_1801330a5("io.ConfigWindowsResizeFromEdges");
      }
      if (*(char *)((longlong)puVar5 + 99) == '\x01') {
        FUN_1801330a5("io.ConfigWindowsMoveFromTitleBarOnly");
      }
      if (0.0 <= (float)puVar5[0x1a]) {
        FUN_1801330a5("io.ConfigMemoryCompactTimer = %.1f",(double)(float)puVar5[0x1a]);
      }
      FUN_1801330a5("io.BackendFlags: 0x%08X",puVar5[1]);
      uVar4 = puVar5[1];
      if ((uVar4 & 1) != 0) {
        FUN_1801330a5(" HasGamepad");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 2) != 0) {
        FUN_1801330a5(" HasMouseCursors");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 4) != 0) {
        FUN_1801330a5(" HasSetMousePos");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 0xb & 1) != 0) {
        FUN_1801330a5(" PlatformHasViewports");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 0xc & 1) != 0) {
        FUN_1801330a5(" HasMouseHoveredViewport");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 0xd & 1) != 0) {
        FUN_1801330a5(" HasParentViewport");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 8) != 0) {
        FUN_1801330a5(" RendererHasVtxOffset");
        uVar4 = puVar5[1];
      }
      if ((uVar4 & 0x10) != 0) {
        FUN_1801330a5(" RendererHasTextures");
        uVar4 = puVar5[1];
      }
      if ((uVar4 >> 10 & 1) != 0) {
        FUN_1801330a5(" RendererHasViewports");
      }
      FUN_180137ca1();
      puVar1 = *(undefined4 **)(puVar5 + 0xe);
      local_58 = *(undefined4 *)(*(longlong *)(puVar1 + 0xe) + 0x20);
      FUN_1801330a5("io.Fonts: %d fonts, Flags: 0x%08X, TexSize: %d,%d",puVar1[0x1a],*puVar1,
                    *(undefined4 *)(*(longlong *)(puVar1 + 0xe) + 0x1c));
      pcVar7 = "NULL";
      if (*(char **)(*(longlong *)(puVar5 + 0xe) + 0x2c0) != (char *)0x0) {
        pcVar7 = *(char **)(*(longlong *)(puVar5 + 0xe) + 0x2c0);
      }
      FUN_1801330a5("io.Fonts->FontLoaderName: %s",pcVar7);
      FUN_1801330a5("io.DisplaySize: %.2f,%.2f",(double)(float)puVar5[2],(double)(float)puVar5[3]);
      FUN_1801330a5("io.DisplayFramebufferScale: %.2f,%.2f",(double)(float)puVar5[4],
                    (double)(float)puVar5[5]);
      FUN_180137ca1();
      FUN_1801330a5("style.WindowPadding: %.2f,%.2f",(double)*(float *)(lVar6 + 0x14),
                    (double)*(float *)(lVar6 + 0x18));
      FUN_1801330a5("style.WindowBorderSize: %.2f",(double)*(float *)(lVar6 + 0x20));
      FUN_1801330a5("style.FramePadding: %.2f,%.2f",(double)*(float *)(lVar6 + 0x4c),
                    (double)*(float *)(lVar6 + 0x50));
      FUN_1801330a5("style.FrameRounding: %.2f",(double)*(float *)(lVar6 + 0x54));
      FUN_1801330a5("style.FrameBorderSize: %.2f",(double)*(float *)(lVar6 + 0x58));
      FUN_1801330a5("style.ItemSpacing: %.2f,%.2f",(double)*(float *)(lVar6 + 0x5c),
                    (double)*(float *)(lVar6 + 0x60));
      FUN_1801330a5("style.ItemInnerSpacing: %.2f,%.2f",(double)*(float *)(lVar6 + 100),
                    (double)*(float *)(lVar6 + 0x68));
      if (cVar2 != '\0') {
        FUN_1801157dd("\n```\n");
        FUN_1801160c4();
      }
      FUN_180111339();
    }
    FUN_18010f900();
    if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

