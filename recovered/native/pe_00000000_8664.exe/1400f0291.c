/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400f0291 */

void FUN_1400f0291(void)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = FUN_1400c9c0a();
  if (cVar2 != '\0') {
    cVar2 = FUN_1400cadcc("Menu",1);
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x2e5,"Menu/File");
      FUN_1400fa107();
      FUN_1400cadd6();
    }
    cVar2 = FUN_1400cadcc("Examples",1);
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x2eb,"Menu/Examples");
      FUN_1400cb3ae("Main menu bar",0,&DAT_140f30930,1);
      FUN_1400b1021("Mini apps");
      FUN_1400cb3ae("Assets Browser",0,&DAT_140f30931,1);
      FUN_1400cb3ae("Console",0,&DAT_140f30932,1);
      FUN_1400cb3ae("Custom rendering",0,&DAT_140f30933,1);
      FUN_1400cb3ae("Documents",0,&DAT_140f30934,1);
      FUN_1400cb3ae("Dockspace",0,&DAT_140f30935,1);
      FUN_1400cb3ae("Image Viewer",0,&DAT_140f30936,1);
      FUN_1400cb3ae("Log",0,&DAT_140f30937,1);
      FUN_1400cb3ae("Property editor",0,&DAT_140f30939,1);
      FUN_1400cb3ae("Simple layout",0,&DAT_140f30938,1);
      FUN_1400cb3ae("Simple overlay",0,&DAT_140f3093a,1);
      FUN_1400b1021("Concepts");
      FUN_1400cb3ae("Auto-resizing window",0,&DAT_140f3093b,1);
      FUN_1400cb3ae("Constrained-resizing window",0,&DAT_140f3093c,1);
      FUN_1400cb3ae("Fullscreen window",0,&DAT_140f3093d,1);
      FUN_1400cb3ae("Long text display",0,&DAT_140f3093e,1);
      FUN_1400cb3ae("Manipulating window titles",0,&DAT_140f3093f,1);
      FUN_1400cadd6();
    }
    cVar2 = FUN_1400cadcc("Tools",1);
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x306,"Menu/Tools");
      lVar1 = FUN_140081200();
      FUN_1400cb3ae("Metrics/Debugger",0,&DAT_140f30940,1);
      cVar2 = FUN_1400cadcc("Debug Options",1);
      if (cVar2 != '\0') {
        FUN_14008f898(0);
        FUN_1400aeb6a("Highlight ID Conflicts",lVar1 + 0x85);
        FUN_14008f98e();
        FUN_1400aeb6a("Assert on error recovery",lVar1 + 0x81);
        FUN_1400ac13f("(see Demo->Configuration for more)");
        FUN_1400cadd6();
      }
      FUN_1400cb3ae("Debug Log",0,&DAT_140f30941,1);
      FUN_1400cb3ae("ID Stack Tool",0,&DAT_140f30942,1);
      cVar2 = *(char *)(lVar1 + 0x84);
      cVar3 = FUN_1400b06d6("Item Picker",0,0,1);
      if (cVar3 != '\0') {
        FUN_140092c56();
      }
      if (cVar2 == '\0') {
        FUN_140093dc2(
                     "Requires io.ConfigDebugIsDebuggerPresent=true to be set.\n\nWe otherwise disable some extra features to avoid casual users crashing the application."
                     );
      }
      FUN_1400cb3ae("Style Editor",0,&DAT_140f30943,1);
      FUN_1400cb3ae("About Dear ImGui",0,&DAT_140f30944,1);
      FUN_1400cadd6();
    }
    FUN_1400c9e35();
    return;
  }
  return;
}

