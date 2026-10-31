/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b8b1e */

void FUN_1801b8b1e(void)

{
  double dVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  uint local_240;
  uint local_238;
  uint local_230;
  uint local_228;
  uint local_220;
  uint local_218;
  uint local_210;
  uint local_208;
  uint local_200;
  uint local_1f8;
  uint local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  float local_180 [2];
  undefined1 local_178 [4];
  float local_174;
  float local_170 [2];
  undefined1 local_168 [4];
  float local_164;
  float local_160 [2];
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined *local_148;
  undefined *puStack_140;
  longlong local_138 [17];
  ulonglong local_b0;
  
  local_b0 = DAT_180402640 ^ (ulonglong)auStack_278;
  cVar2 = FUN_18014c2cb("Querying Item Status (Edited/Active/Hovered etc.)");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x8ca,"Widgets/Querying Item Status (Edited,Active,Hovered etc.)"
                 );
    ppuVar13 = &PTR_s_Text_1803611e2_0x13_1803286d0;
    plVar14 = local_138;
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
      *plVar14 = (longlong)*ppuVar13;
      ppuVar13 = ppuVar13 + 1;
      plVar14 = plVar14 + 1;
    }
    local_258 = (char *)CONCAT44(local_258._4_4_,0x10);
    FUN_18013995e("Item Type",&DAT_180404a14,local_138,0x10);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "Testing how various types of items are interacting with the IsItemXXX functions. Note that the bool return value of most ImGui function is generally equivalent to calling ImGui::IsItemHovered()."
                 );
    FUN_180135c3a("Item Disabled",&DAT_18041fe64);
    if (DAT_18041fe64 == '\x01') {
      FUN_180116580(1);
    }
    if (DAT_180404a14 == 0) {
      FUN_1801330a5("ITEM: Text");
    }
    if (DAT_180404a14 == 1) {
      local_158 = 0;
      cVar2 = FUN_180134257("ITEM: Button");
    }
    else {
      cVar2 = '\0';
    }
    if (DAT_180404a14 == 2) {
      FUN_18011648a(8,1);
      local_158 = 0;
      cVar2 = FUN_180134257("ITEM: Button");
      FUN_180116548();
    }
    if (DAT_180404a14 == 3) {
      cVar2 = FUN_180135c3a("ITEM: Checkbox",&DAT_18041fe65);
    }
    if (DAT_180404a14 == 4) {
      local_258 = "%.3f";
      uStack_250 = uStack_250 & 0xffffffff00000000;
      cVar2 = FUN_180141390("ITEM: SliderFloat",&DAT_180404a20,0,DAT_1802ac570);
    }
    if (DAT_180404a14 == 5) {
      local_258 = (char *)0x0;
      uStack_250 = 0;
      cVar2 = FUN_180145e1f("ITEM: InputText",&DAT_18041fe70,0x10,0);
    }
    if (DAT_180404a14 == 6) {
      local_158 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_258 = (char *)((ulonglong)local_258 & 0xffffffff00000000);
      cVar2 = FUN_1801462d7("ITEM: InputTextMultiline",&DAT_18041fe70,0x10);
    }
    if (DAT_180404a14 == 7) {
      local_258 = "%.3f";
      uStack_250 = uStack_250 & 0xffffffff00000000;
      cVar2 = FUN_180145fe3("ITEM: InputFloat",&DAT_180404a20,DAT_1802ac570,0);
    }
    if (DAT_180404a14 == 8) {
      cVar2 = FUN_18014609c("ITEM: InputFloat3",&DAT_180404a20,"%.3f",0);
    }
    if (DAT_180404a14 == 9) {
      cVar2 = FUN_180148378("ITEM: ColorEdit4",&DAT_180404a20,0);
    }
    if (DAT_180404a14 == 10) {
      local_158 = 0;
      cVar2 = FUN_1801391f6("ITEM: Selectable",0,0);
    }
    if (DAT_180404a14 == 0xb) {
      cVar2 = FUN_1801377a6("ITEM: MenuItem",0,0,1);
    }
    if ((DAT_180404a14 == 0xc) && (cVar2 = FUN_18014c2cb("ITEM: TreeNode"), cVar2 != '\0')) {
      FUN_18014d7a9();
    }
    if (DAT_180404a14 == 0xd) {
      cVar2 = FUN_18014cfb6("ITEM: TreeNode w/ ImGuiTreeNodeFlags_OpenOnDoubleClick",0x48);
    }
    if (DAT_180404a14 == 0xe) {
      local_148 = PTR_s_Cherry_180328760;
      puStack_140 = PTR_DAT_180328768;
      local_158 = CONCAT44(PTR_s_Apple_180328750._4_4_,PTR_s_Apple_180328750._0_4_);
      uStack_150 = PTR_s_Banana_180328758._0_4_;
      uStack_14c = PTR_s_Banana_180328758._4_4_;
      local_258 = (char *)CONCAT44(local_258._4_4_,0xffffffff);
      cVar2 = FUN_18013995e("ITEM: Combo",&DAT_180404a30,&local_158,4);
    }
    if (DAT_180404a14 == 0xf) {
      local_148 = PTR_s_Cherry_180328760;
      puStack_140 = PTR_DAT_180328768;
      local_158 = CONCAT44(PTR_s_Apple_180328750._4_4_,PTR_s_Apple_180328750._0_4_);
      uStack_150 = PTR_s_Banana_180328758._0_4_;
      uStack_14c = PTR_s_Banana_180328758._4_4_;
      local_258 = (char *)CONCAT44(local_258._4_4_,4);
      cVar2 = FUN_18014fe30("ITEM: ListBox",&DAT_180404a34,&local_158,4);
    }
    uVar3 = FUN_18010759c(0);
    local_1b0 = CONCAT31(local_1b0._1_3_,uVar3);
    uVar3 = FUN_18010759c(0x2000);
    local_1b4 = CONCAT31(local_1b4._1_3_,uVar3);
    uVar3 = FUN_18010759c(0x8000);
    local_1a0 = CONCAT31(local_1a0._1_3_,uVar3);
    uVar3 = FUN_18010759c(0x10000);
    local_1a4 = CONCAT31(local_1a4._1_3_,uVar3);
    uVar3 = FUN_18010759c(0x1000);
    local_1a8 = CONCAT31(local_1a8._1_3_,uVar3);
    FUN_180110cf0(&local_158);
    dVar1 = (double)local_158._4_4_;
    FUN_180110cf0(local_160);
    FUN_180110cdb(local_168);
    FUN_180110cdb(local_170);
    FUN_180110cc6(local_178);
    FUN_180110cc6(local_180);
    bVar4 = FUN_180110c1e();
    local_1ac = (uint)bVar4;
    bVar4 = FUN_180110bfd(0);
    local_184 = (uint)bVar4;
    bVar4 = FUN_180110c74();
    local_188 = (uint)bVar4;
    bVar4 = FUN_180110bda();
    local_18c = (uint)bVar4;
    bVar4 = FUN_180110b9a();
    local_190 = (uint)bVar4;
    bVar4 = FUN_180110b74();
    local_194 = (uint)bVar4;
    bVar4 = FUN_180110c84();
    local_198 = (uint)bVar4;
    bVar4 = FUN_180110b56();
    local_19c = (uint)bVar4;
    bVar4 = FUN_18010759c(0x3a0);
    bVar5 = FUN_18010759c(0x400);
    bVar6 = FUN_18010759c(0x200);
    bVar7 = FUN_18010759c(0x100);
    bVar8 = FUN_18010759c(0x80);
    bVar9 = FUN_18010759c(0x20);
    uVar3 = FUN_18010759c(0);
    uVar10 = FUN_1801077b9();
    local_1f0 = local_1ac;
    local_1f8 = local_184;
    local_200 = local_188;
    local_208 = local_18c;
    local_210 = local_190;
    local_218 = local_194;
    local_220 = local_198;
    local_228 = local_19c;
    local_230 = (uint)bVar4;
    local_238 = (uint)bVar5;
    local_240 = (uint)bVar6;
    local_248 = CONCAT44(local_248._4_4_,(uint)bVar7);
    local_1e8 = (double)local_180[0];
    local_1e0 = (double)local_174;
    local_1d8 = (double)local_170[0];
    local_1d0 = (double)local_164;
    local_1c8 = (double)local_160[0];
    local_1c0 = dVar1;
    uStack_250._0_4_ = (uint)bVar8;
    local_258._0_4_ = (uint)bVar9;
    FUN_180133606("Return value = %d\nIsItemFocused() = %d\nIsItemHovered() = %d\nIsItemHovered(_AllowWhenBlockedByPopup) = %d\nIsItemHovered(_AllowWhenBlockedByActiveItem) = %d\nIsItemHovered(_AllowWhenOverlappedByItem) = %d\nIsItemHovered(_AllowWhenOverlappedByWindow) = %d\nIsItemHovered(_AllowWhenDisabled) = %d\nIsItemHovered(_RectOnly) = %d\nIsItemActive() = %d\nIsItemEdited() = %d\nIsItemActivated() = %d\nIsItemDeactivated() = %d\nIsItemDeactivatedAfterEdit() = %d\nIsItemVisible() = %d\nIsItemClicked() = %d\nIsItemToggledOpen() = %d\nGetItemRectMin() = (%.1f, %.1f)\nGetItemRectMax() = (%.1f, %.1f)\nGetItemRectSize() = (%.1f, %.1f)"
                  ,cVar2,uVar10,uVar3);
    uStack_250 = CONCAT44(uStack_250._4_4_,local_1a8) & 0xffffffff000000ff;
    local_258 = (char *)(CONCAT44(local_258._4_4_,local_1a4) & 0xffffffff000000ff);
    FUN_180133606("with Hovering Delay or Stationary test:\nIsItemHovered() = %d\nIsItemHovered(_Stationary) = %d\nIsItemHovered(_DelayShort) = %d\nIsItemHovered(_DelayNormal) = %d\nIsItemHovered(_Tooltip) = %d"
                  ,(undefined1)local_1b0,(undefined1)local_1b4,(undefined1)local_1a0);
    if (DAT_18041fe64 == '\x01') {
      FUN_180116676();
    }
    local_158 = local_158 & 0xffffffffffffff00;
    local_258 = (char *)0x0;
    uStack_250 = 0;
    FUN_180145e1f("unused",&local_158,1,0x200);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "This widget is only here to be able to tab-out of the widgets above and see e.g. Deactivated() status."
                 );
    FUN_18014d7a9();
  }
  cVar2 = FUN_18014c2cb("Querying Window Status (Focused/Hovered etc.)");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x93a,"Widgets/Querying Window Status (Focused,Hovered etc.)");
    FUN_180135c3a("Embed everything inside a child window for testing _RootWindow flag.",
                  &DAT_18041fe80);
    if (DAT_18041fe80 == '\x01') {
      fVar15 = (float)FUN_180116c08();
      local_138[0] = (ulonglong)(uint)(fVar15 * DAT_1802dbb4c) << 0x20;
      FUN_180110d11("outer_child",local_138,1,0);
    }
    bVar4 = FUN_18011bdd4(4);
    local_1b0 = (uint)bVar4;
    bVar4 = FUN_18011bdd4(0x12);
    local_1b4 = (uint)bVar4;
    bVar4 = FUN_18011bdd4(10);
    bVar5 = FUN_18011bdd4(2);
    bVar6 = FUN_18011bdd4(0x13);
    bVar7 = FUN_18011bdd4(0xb);
    bVar8 = FUN_18011bdd4(3);
    bVar9 = FUN_18011bdd4(0x11);
    uVar3 = FUN_18011bdd4(9);
    uVar10 = FUN_18011bdd4(1);
    uVar11 = FUN_18011bdd4(0);
    local_220 = local_1b0;
    local_228 = local_1b4;
    local_230 = (uint)bVar4;
    local_238 = (uint)bVar5;
    local_240 = (uint)bVar6;
    local_248._0_4_ = (uint)bVar7;
    uStack_250._0_4_ = (uint)bVar8;
    local_258._0_4_ = (uint)bVar9;
    FUN_180133606("IsWindowFocused() = %d\nIsWindowFocused(_ChildWindows) = %d\nIsWindowFocused(_ChildWindows|_NoPopupHierarchy) = %d\nIsWindowFocused(_ChildWindows|_DockHierarchy) = %d\nIsWindowFocused(_ChildWindows|_RootWindow) = %d\nIsWindowFocused(_ChildWindows|_RootWindow|_NoPopupHierarchy) = %d\nIsWindowFocused(_ChildWindows|_RootWindow|_DockHierarchy) = %d\nIsWindowFocused(_RootWindow) = %d\nIsWindowFocused(_RootWindow|_NoPopupHierarchy) = %d\nIsWindowFocused(_RootWindow|_DockHierarchy) = %d\nIsWindowFocused(_AnyWindow) = %d\n"
                  ,uVar11,uVar10,uVar3);
    bVar4 = FUN_18011689a(0x2000);
    local_1b0 = (uint)bVar4;
    bVar4 = FUN_18011689a(4);
    local_1b4 = (uint)bVar4;
    bVar4 = FUN_18011689a(0x21);
    local_1a0 = (uint)bVar4;
    bVar4 = FUN_18011689a(0x12);
    local_1a4 = (uint)bVar4;
    bVar4 = FUN_18011689a(10);
    local_1a8 = (uint)bVar4;
    bVar4 = FUN_18011689a(2);
    local_1ac = (uint)bVar4;
    bVar4 = FUN_18011689a(0x13);
    bVar5 = FUN_18011689a(0xb);
    bVar6 = FUN_18011689a(3);
    bVar7 = FUN_18011689a(0x11);
    bVar8 = FUN_18011689a(9);
    bVar9 = FUN_18011689a(1);
    uVar3 = FUN_18011689a(0x80);
    uVar10 = FUN_18011689a(0x20);
    uVar11 = FUN_18011689a(0);
    local_200 = local_1b0;
    local_208 = local_1b4;
    local_210 = local_1a0;
    local_218 = local_1a4;
    local_220 = local_1a8;
    local_228 = local_1ac;
    local_230 = (uint)bVar4;
    local_238 = (uint)bVar5;
    local_240 = (uint)bVar6;
    local_248 = CONCAT44(local_248._4_4_,(uint)bVar7);
    uStack_250 = CONCAT44(uStack_250._4_4_,(uint)bVar8);
    local_258 = (char *)CONCAT44(local_258._4_4_,(uint)bVar9);
    FUN_180133606("IsWindowHovered() = %d\nIsWindowHovered(_AllowWhenBlockedByPopup) = %d\nIsWindowHovered(_AllowWhenBlockedByActiveItem) = %d\nIsWindowHovered(_ChildWindows) = %d\nIsWindowHovered(_ChildWindows|_NoPopupHierarchy) = %d\nIsWindowHovered(_ChildWindows|_DockHierarchy) = %d\nIsWindowHovered(_ChildWindows|_RootWindow) = %d\nIsWindowHovered(_ChildWindows|_RootWindow|_NoPopupHierarchy) = %d\nIsWindowHovered(_ChildWindows|_RootWindow|_DockHierarchy) = %d\nIsWindowHovered(_RootWindow) = %d\nIsWindowHovered(_RootWindow|_NoPopupHierarchy) = %d\nIsWindowHovered(_RootWindow|_DockHierarchy) = %d\nIsWindowHovered(_ChildWindows|_AllowWhenBlockedByPopup) = %d\nIsWindowHovered(_AnyWindow) = %d\nIsWindowHovered(_Stationary) = %d\n"
                  ,uVar11,uVar10,uVar3);
    local_138[0] = DAT_180329270;
    FUN_180110d11("child",local_138,1,0);
    FUN_1801330a5("This is another child window for testing the _ChildWindows flag.");
    FUN_180111339();
    if (DAT_18041fe80 == '\x01') {
      FUN_180111339();
    }
    FUN_180135c3a("Hovered/Active tests after Begin() for title bar testing",&DAT_18041fe81);
    if (DAT_18041fe81 == '\x01') {
      FUN_18010ca66("Title bar Hovered/Active tests",&DAT_18041fe81,0);
      cVar2 = FUN_18011b87b(0,0);
      if (cVar2 != '\0') {
        cVar2 = FUN_1801377a6("Close",0,0,1);
        if (cVar2 != '\0') {
          DAT_18041fe81 = '\0';
        }
        FUN_18011b3ef();
      }
      uVar3 = FUN_180110b56();
      uVar10 = FUN_18010759c(0);
      FUN_1801330a5("IsItemHovered() after begin = %d (== is title bar hovered)\nIsItemActive() after begin = %d (== is window being clicked/moved)\n"
                    ,uVar10,uVar3);
      FUN_18010f900();
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 != (local_b0 ^ (ulonglong)auStack_278)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_b0 ^ (ulonglong)auStack_278);
  }
  return;
}

