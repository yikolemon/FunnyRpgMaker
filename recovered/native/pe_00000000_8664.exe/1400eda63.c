/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400eda63 */

void FUN_1400eda63(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  lVar2 = FUN_140088c06();
  local_18 = 0;
  lVar3 = lVar2 + 8;
  if (DAT_140f1c610 != '\0') {
    lVar3 = lVar2 + 0x20;
  }
  FUN_14008fda3(lVar3,0);
  lVar3 = lVar2 + 0x28;
  if (DAT_140f1c610 == '\0') {
    lVar3 = lVar2 + 0x10;
  }
  FUN_140085d59(lVar3,0);
  cVar1 = FUN_140085d7e("Example: Fullscreen window",&DAT_140f3093d,DAT_140f1c614);
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x27d3,"Examples/Fullscreen window");
    FUN_1400aeb6a("Use work area instead of main area",&DAT_140f1c610);
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "Main Area = entire viewport,\nWork Area = entire viewport minus sections used by the main menu bars, task bars etc.\n\nEnable the main-menu bar in Examples menu to see the difference."
                 );
    thunk_FUN_1400af8bf("ImGuiWindowFlags_NoBackground",&DAT_140f1c614,0x80);
    thunk_FUN_1400af8bf("ImGuiWindowFlags_NoDecoration",&DAT_140f1c614,0x2b);
    FUN_1400932c6(0);
    thunk_FUN_1400af8bf("ImGuiWindowFlags_NoTitleBar",&DAT_140f1c614,1);
    thunk_FUN_1400af8bf("ImGuiWindowFlags_NoCollapse",&DAT_140f1c614,0x20);
    thunk_FUN_1400af8bf("ImGuiWindowFlags_NoScrollbar",&DAT_140f1c614,8);
    FUN_14009331a(0);
    local_18 = 0;
    cVar1 = FUN_1400ad187("Close this window");
    if (cVar1 != '\0') {
      DAT_140f3093d = 0;
    }
  }
  FUN_140088c18();
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

