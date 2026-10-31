/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a7ddf */

void FUN_1801a7ddf(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  lVar2 = FUN_18010f8ee();
  local_18 = 0;
  lVar3 = lVar2 + 8;
  if (DAT_180408e70 != '\0') {
    lVar3 = lVar2 + 0x20;
  }
  FUN_180116a8b(lVar3,0);
  lVar3 = lVar2 + 0x28;
  if (DAT_180408e70 == '\0') {
    lVar3 = lVar2 + 0x10;
  }
  FUN_18010ca41(lVar3,0);
  cVar1 = FUN_18010ca66("Example: Fullscreen window",&DAT_18041f1ed,DAT_180408e74);
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x27d3,"Examples/Fullscreen window");
    FUN_180135c3a("Use work area instead of main area",&DAT_180408e70);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "Main Area = entire viewport,\nWork Area = entire viewport minus sections used by the main menu bars, task bars etc.\n\nEnable the main-menu bar in Examples menu to see the difference."
                 );
    thunk_FUN_18013698f("ImGuiWindowFlags_NoBackground",&DAT_180408e74,0x80);
    thunk_FUN_18013698f("ImGuiWindowFlags_NoDecoration",&DAT_180408e74,0x2b);
    FUN_180119fae(0);
    thunk_FUN_18013698f("ImGuiWindowFlags_NoTitleBar",&DAT_180408e74,1);
    thunk_FUN_18013698f("ImGuiWindowFlags_NoCollapse",&DAT_180408e74,0x20);
    thunk_FUN_18013698f("ImGuiWindowFlags_NoScrollbar",&DAT_180408e74,8);
    FUN_18011a002(0);
    local_18 = 0;
    cVar1 = FUN_180134257("Close this window");
    if (cVar1 != '\0') {
      DAT_18041f1ed = 0;
    }
  }
  FUN_18010f900();
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}

