/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a2ce2 */

void FUN_101a2ce2(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = FUN_1014c8c1();
  if (cVar1 != '\0') {
    cVar1 = FUN_1014db73("Menu",1);
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x2e5,"Menu/File");
      FUN_101ac3af();
      FUN_1014db88();
    }
    cVar1 = FUN_1014db73("Examples",1);
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x2eb,"Menu/Examples");
      FUN_1014e1b4("Main menu bar",0,&DAT_103a33d8,1);
      FUN_10132656("Mini apps");
      FUN_1014e1b4("Assets Browser",0,&DAT_103a33d9,1);
      FUN_1014e1b4("Console",0,&DAT_103a33da,1);
      FUN_1014e1b4("Custom rendering",0,&DAT_103a33db,1);
      FUN_1014e1b4("Documents",0,&DAT_103a33dc,1);
      FUN_1014e1b4("Dockspace",0,&DAT_103a33dd,1);
      FUN_1014e1b4("Image Viewer",0,&DAT_103a33de,1);
      FUN_1014e1b4("Log",0,&DAT_103a33df,1);
      FUN_1014e1b4("Property editor",0,&DAT_103a33e1,1);
      FUN_1014e1b4("Simple layout",0,&DAT_103a33e0,1);
      FUN_1014e1b4("Simple overlay",0,&DAT_103a33e2,1);
      FUN_10132656("Concepts");
      FUN_1014e1b4("Auto-resizing window",0,&DAT_103a33e3,1);
      FUN_1014e1b4("Constrained-resizing window",0,&DAT_103a33e4,1);
      FUN_1014e1b4("Fullscreen window",0,&DAT_103a33e5,1);
      FUN_1014e1b4("Long text display",0,&DAT_103a33e6,1);
      FUN_1014e1b4("Manipulating window titles",0,&DAT_103a33e7,1);
      FUN_1014db88();
    }
    cVar1 = FUN_1014db73("Tools",1);
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x306,"Menu/Tools");
      iVar3 = FUN_1010330d();
      FUN_1014e1b4("Metrics/Debugger",0,&DAT_103a33e8,1);
      cVar1 = FUN_1014db73("Debug Options",1);
      if (cVar1 != '\0') {
        FUN_10111871(0);
        FUN_1012ff1a("Highlight ID Conflicts",iVar3 + 0x71);
        FUN_10111961();
        FUN_1012ff1a("Assert on error recovery",iVar3 + 0x6d);
        FUN_1012d1be("(see Demo->Configuration for more)");
        FUN_1014db88();
      }
      FUN_1014e1b4("Debug Log",0,&DAT_103a33e9,1);
      FUN_1014e1b4("ID Stack Tool",0,&DAT_103a33ea,1);
      cVar1 = *(char *)(iVar3 + 0x70);
      cVar2 = FUN_10131d08("Item Picker",0,0,1);
      if (cVar2 != '\0') {
        FUN_10114acd();
      }
      if (cVar1 == '\0') {
        FUN_10115d65(
                    "Requires io.ConfigDebugIsDebuggerPresent=true to be set.\n\nWe otherwise disable some extra features to avoid casual users crashing the application."
                    );
      }
      FUN_1014e1b4("Style Editor",0,&DAT_103a33eb,1);
      FUN_1014e1b4("About Dear ImGui",0,&DAT_103a33ec,1);
      FUN_1014db88();
    }
    FUN_1014caf3();
    return;
  }
  return;
}

