/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a0739 */

void FUN_101a0739(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  iVar2 = FUN_1010ad36();
  local_18 = 0;
  iVar3 = iVar2 + 8;
  if (DAT_1038ef6c != '\0') {
    iVar3 = iVar2 + 0x20;
  }
  FUN_10111d56(iVar3,0,&local_18);
  iVar3 = iVar2 + 0x28;
  if (DAT_1038ef6c == '\0') {
    iVar3 = iVar2 + 0x10;
  }
  FUN_10107cf6(iVar3,0);
  cVar1 = FUN_10107d2b("Example: Fullscreen window",&DAT_103a33e5,DAT_1038ef70);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x27d3,"Examples/Fullscreen window");
    FUN_1012ff1a("Use work area instead of main area",&DAT_1038ef6c);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiWindowFlags_NoBackground",&DAT_1038ef70,0x80);
    thunk_FUN_10130d81("ImGuiWindowFlags_NoDecoration",&DAT_1038ef70,0x2b);
    FUN_10115158(0);
    thunk_FUN_10130d81("ImGuiWindowFlags_NoTitleBar",&DAT_1038ef70,1);
    thunk_FUN_10130d81("ImGuiWindowFlags_NoCollapse",&DAT_1038ef70,0x20);
    thunk_FUN_10130d81("ImGuiWindowFlags_NoScrollbar",&DAT_1038ef70,8);
    FUN_101151af(0);
    local_18 = 0;
    cVar1 = FUN_1012e1b7("Close this window",&local_18);
    if (cVar1 != '\0') {
      DAT_103a33e5 = 0;
    }
  }
  FUN_1010ad44();
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

