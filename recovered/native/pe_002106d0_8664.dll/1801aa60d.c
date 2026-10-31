/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801aa60d */

void FUN_1801aa60d(void)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = FUN_180150cda();
  if (cVar2 != '\0') {
    cVar2 = FUN_180151e9c("Menu",1);
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x2e5,"Menu/File");
      FUN_1801b4483();
      FUN_180151ea6();
    }
    cVar2 = FUN_180151e9c("Examples",1);
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x2eb,"Menu/Examples");
      FUN_18015247e("Main menu bar",0,&DAT_18041f1e0,1);
      FUN_1801380f1("Mini apps");
      FUN_18015247e("Assets Browser",0,&DAT_18041f1e1,1);
      FUN_18015247e("Console",0,&DAT_18041f1e2,1);
      FUN_18015247e("Custom rendering",0,&DAT_18041f1e3,1);
      FUN_18015247e("Documents",0,&DAT_18041f1e4,1);
      FUN_18015247e("Dockspace",0,&DAT_18041f1e5,1);
      FUN_18015247e("Image Viewer",0,&DAT_18041f1e6,1);
      FUN_18015247e("Log",0,&DAT_18041f1e7,1);
      FUN_18015247e("Property editor",0,&DAT_18041f1e9,1);
      FUN_18015247e("Simple layout",0,&DAT_18041f1e8,1);
      FUN_18015247e("Simple overlay",0,&DAT_18041f1ea,1);
      FUN_1801380f1("Concepts");
      FUN_18015247e("Auto-resizing window",0,&DAT_18041f1eb,1);
      FUN_18015247e("Constrained-resizing window",0,&DAT_18041f1ec,1);
      FUN_18015247e("Fullscreen window",0,&DAT_18041f1ed,1);
      FUN_18015247e("Long text display",0,&DAT_18041f1ee,1);
      FUN_18015247e("Manipulating window titles",0,&DAT_18041f1ef,1);
      FUN_180151ea6();
    }
    cVar2 = FUN_180151e9c("Tools",1);
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x306,"Menu/Tools");
      lVar1 = FUN_180107ee8();
      FUN_18015247e("Metrics/Debugger",0,&DAT_18041f1f0,1);
      cVar2 = FUN_180151e9c("Debug Options",1);
      if (cVar2 != '\0') {
        FUN_180116580(0);
        FUN_180135c3a("Highlight ID Conflicts",lVar1 + 0x85);
        FUN_180116676();
        FUN_180135c3a("Assert on error recovery",lVar1 + 0x81);
        FUN_18013320f("(see Demo->Configuration for more)");
        FUN_180151ea6();
      }
      FUN_18015247e("Debug Log",0,&DAT_18041f1f1,1);
      FUN_18015247e("ID Stack Tool",0,&DAT_18041f1f2,1);
      cVar2 = *(char *)(lVar1 + 0x84);
      cVar3 = FUN_1801377a6("Item Picker",0,0,1);
      if (cVar3 != '\0') {
        FUN_18011993e();
      }
      if (cVar2 == '\0') {
        FUN_18011ab06(
                     "Requires io.ConfigDebugIsDebuggerPresent=true to be set.\n\nWe otherwise disable some extra features to avoid casual users crashing the application."
                     );
      }
      FUN_18015247e("Style Editor",0,&DAT_18041f1f3,1);
      FUN_18015247e("About Dear ImGui",0,&DAT_18041f1f4,1);
      FUN_180151ea6();
    }
    FUN_180150f05();
    return;
  }
  return;
}

