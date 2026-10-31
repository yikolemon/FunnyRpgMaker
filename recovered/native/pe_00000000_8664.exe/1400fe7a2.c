/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fe7a2 */

void FUN_1400fe7a2(void)

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
  
  local_b0 = DAT_140f17b40 ^ (ulonglong)auStack_278;
  cVar2 = FUN_1400c51fb("Querying Item Status (Edited/Active/Hovered etc.)");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x8ca,"Widgets/Querying Item Status (Edited,Active,Hovered etc.)"
                 );
    ppuVar13 = &PTR_s_Text_140ec3312_0x13_140e8ca60;
    plVar14 = local_138;
    for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
      *plVar14 = (longlong)*ppuVar13;
      ppuVar13 = ppuVar13 + 1;
      plVar14 = plVar14 + 1;
    }
    local_258 = (char *)CONCAT44(local_258._4_4_,0x10);
    FUN_1400b288e("Item Type",&DAT_140f181b4,local_138,0x10);
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "Testing how various types of items are interacting with the IsItemXXX functions. Note that the bool return value of most ImGui function is generally equivalent to calling ImGui::IsItemHovered()."
                 );
    FUN_1400aeb6a("Item Disabled",&DAT_140f315b4);
    if (DAT_140f315b4 == '\x01') {
      FUN_14008f898(1);
    }
    if (DAT_140f181b4 == 0) {
      FUN_1400abfd5("ITEM: Text");
    }
    if (DAT_140f181b4 == 1) {
      local_158 = 0;
      cVar2 = FUN_1400ad187("ITEM: Button");
    }
    else {
      cVar2 = '\0';
    }
    if (DAT_140f181b4 == 2) {
      FUN_14008f7a2(8,1);
      local_158 = 0;
      cVar2 = FUN_1400ad187("ITEM: Button");
      FUN_14008f860();
    }
    if (DAT_140f181b4 == 3) {
      cVar2 = FUN_1400aeb6a("ITEM: Checkbox",&DAT_140f315b5);
    }
    if (DAT_140f181b4 == 4) {
      local_258 = "%.3f";
      uStack_250 = uStack_250 & 0xffffffff00000000;
      cVar2 = FUN_1400ba2c0("ITEM: SliderFloat",&DAT_140f181c0,0,DAT_1401c86c8);
    }
    if (DAT_140f181b4 == 5) {
      local_258 = (char *)0x0;
      uStack_250 = 0;
      cVar2 = FUN_1400bed4f("ITEM: InputText",&DAT_140f315c0,0x10,0);
    }
    if (DAT_140f181b4 == 6) {
      local_158 = 0;
      uStack_250 = 0;
      local_248 = 0;
      local_258 = (char *)((ulonglong)local_258 & 0xffffffff00000000);
      cVar2 = FUN_1400bf207("ITEM: InputTextMultiline",&DAT_140f315c0,0x10);
    }
    if (DAT_140f181b4 == 7) {
      local_258 = "%.3f";
      uStack_250 = uStack_250 & 0xffffffff00000000;
      cVar2 = FUN_1400bef13("ITEM: InputFloat",&DAT_140f181c0,DAT_1401c86c8,0);
    }
    if (DAT_140f181b4 == 8) {
      cVar2 = FUN_1400befcc("ITEM: InputFloat3",&DAT_140f181c0,"%.3f",0);
    }
    if (DAT_140f181b4 == 9) {
      cVar2 = FUN_1400c12a8("ITEM: ColorEdit4",&DAT_140f181c0,0);
    }
    if (DAT_140f181b4 == 10) {
      local_158 = 0;
      cVar2 = FUN_1400b2126("ITEM: Selectable",0,0);
    }
    if (DAT_140f181b4 == 0xb) {
      cVar2 = FUN_1400b06d6("ITEM: MenuItem",0,0,1);
    }
    if ((DAT_140f181b4 == 0xc) && (cVar2 = FUN_1400c51fb("ITEM: TreeNode"), cVar2 != '\0')) {
      FUN_1400c66d9();
    }
    if (DAT_140f181b4 == 0xd) {
      cVar2 = FUN_1400c5ee6("ITEM: TreeNode w/ ImGuiTreeNodeFlags_OpenOnDoubleClick",0x48);
    }
    if (DAT_140f181b4 == 0xe) {
      local_148 = PTR_s_Cherry_140e8caf0;
      puStack_140 = PTR_DAT_140e8caf8;
      local_158 = CONCAT44(PTR_s_Apple_140e8cae0._4_4_,PTR_s_Apple_140e8cae0._0_4_);
      uStack_150 = PTR_s_Banana_140e8cae8._0_4_;
      uStack_14c = PTR_s_Banana_140e8cae8._4_4_;
      local_258 = (char *)CONCAT44(local_258._4_4_,0xffffffff);
      cVar2 = FUN_1400b288e("ITEM: Combo",&DAT_140f181d0,&local_158,4);
    }
    if (DAT_140f181b4 == 0xf) {
      local_148 = PTR_s_Cherry_140e8caf0;
      puStack_140 = PTR_DAT_140e8caf8;
      local_158 = CONCAT44(PTR_s_Apple_140e8cae0._4_4_,PTR_s_Apple_140e8cae0._0_4_);
      uStack_150 = PTR_s_Banana_140e8cae8._0_4_;
      uStack_14c = PTR_s_Banana_140e8cae8._4_4_;
      local_258 = (char *)CONCAT44(local_258._4_4_,4);
      cVar2 = FUN_1400c8d60("ITEM: ListBox",&DAT_140f181d4,&local_158,4);
    }
    uVar3 = FUN_1400808b4(0);
    local_1b0 = CONCAT31(local_1b0._1_3_,uVar3);
    uVar3 = FUN_1400808b4(0x2000);
    local_1b4 = CONCAT31(local_1b4._1_3_,uVar3);
    uVar3 = FUN_1400808b4(0x8000);
    local_1a0 = CONCAT31(local_1a0._1_3_,uVar3);
    uVar3 = FUN_1400808b4(0x10000);
    local_1a4 = CONCAT31(local_1a4._1_3_,uVar3);
    uVar3 = FUN_1400808b4(0x1000);
    local_1a8 = CONCAT31(local_1a8._1_3_,uVar3);
    FUN_14008a008(&local_158);
    dVar1 = (double)local_158._4_4_;
    FUN_14008a008(local_160);
    FUN_140089ff3(local_168);
    FUN_140089ff3(local_170);
    FUN_140089fde(local_178);
    FUN_140089fde(local_180);
    bVar4 = FUN_140089f36();
    local_1ac = (uint)bVar4;
    bVar4 = FUN_140089f15(0);
    local_184 = (uint)bVar4;
    bVar4 = FUN_140089f8c();
    local_188 = (uint)bVar4;
    bVar4 = FUN_140089ef2();
    local_18c = (uint)bVar4;
    bVar4 = FUN_140089eb2();
    local_190 = (uint)bVar4;
    bVar4 = FUN_140089e8c();
    local_194 = (uint)bVar4;
    bVar4 = FUN_140089f9c();
    local_198 = (uint)bVar4;
    bVar4 = FUN_140089e6e();
    local_19c = (uint)bVar4;
    bVar4 = FUN_1400808b4(0x3a0);
    bVar5 = FUN_1400808b4(0x400);
    bVar6 = FUN_1400808b4(0x200);
    bVar7 = FUN_1400808b4(0x100);
    bVar8 = FUN_1400808b4(0x80);
    bVar9 = FUN_1400808b4(0x20);
    uVar3 = FUN_1400808b4(0);
    uVar10 = FUN_140080ad1();
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
    FUN_1400ac536("Return value = %d\nIsItemFocused() = %d\nIsItemHovered() = %d\nIsItemHovered(_AllowWhenBlockedByPopup) = %d\nIsItemHovered(_AllowWhenBlockedByActiveItem) = %d\nIsItemHovered(_AllowWhenOverlappedByItem) = %d\nIsItemHovered(_AllowWhenOverlappedByWindow) = %d\nIsItemHovered(_AllowWhenDisabled) = %d\nIsItemHovered(_RectOnly) = %d\nIsItemActive() = %d\nIsItemEdited() = %d\nIsItemActivated() = %d\nIsItemDeactivated() = %d\nIsItemDeactivatedAfterEdit() = %d\nIsItemVisible() = %d\nIsItemClicked() = %d\nIsItemToggledOpen() = %d\nGetItemRectMin() = (%.1f, %.1f)\nGetItemRectMax() = (%.1f, %.1f)\nGetItemRectSize() = (%.1f, %.1f)"
                  ,cVar2,uVar10,uVar3);
    uStack_250 = CONCAT44(uStack_250._4_4_,local_1a8) & 0xffffffff000000ff;
    local_258 = (char *)(CONCAT44(local_258._4_4_,local_1a4) & 0xffffffff000000ff);
    FUN_1400ac536("with Hovering Delay or Stationary test:\nIsItemHovered() = %d\nIsItemHovered(_Stationary) = %d\nIsItemHovered(_DelayShort) = %d\nIsItemHovered(_DelayNormal) = %d\nIsItemHovered(_Tooltip) = %d"
                  ,(undefined1)local_1b0,(undefined1)local_1b4,(undefined1)local_1a0);
    if (DAT_140f315b4 == '\x01') {
      FUN_14008f98e();
    }
    local_158 = local_158 & 0xffffffffffffff00;
    local_258 = (char *)0x0;
    uStack_250 = 0;
    FUN_1400bed4f("unused",&local_158,1,0x200);
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "This widget is only here to be able to tab-out of the widgets above and see e.g. Deactivated() status."
                 );
    FUN_1400c66d9();
  }
  cVar2 = FUN_1400c51fb("Querying Window Status (Focused/Hovered etc.)");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x93a,"Widgets/Querying Window Status (Focused,Hovered etc.)");
    FUN_1400aeb6a("Embed everything inside a child window for testing _RootWindow flag.",
                  &DAT_140f315d0);
    if (DAT_140f315d0 == '\x01') {
      fVar15 = (float)FUN_14008ff20();
      local_138[0] = (ulonglong)(uint)(fVar15 * DAT_1401c86d4) << 0x20;
      FUN_14008a029("outer_child",local_138,1,0);
    }
    bVar4 = FUN_140095090(4);
    local_1b0 = (uint)bVar4;
    bVar4 = FUN_140095090(0x12);
    local_1b4 = (uint)bVar4;
    bVar4 = FUN_140095090(10);
    bVar5 = FUN_140095090(2);
    bVar6 = FUN_140095090(0x13);
    bVar7 = FUN_140095090(0xb);
    bVar8 = FUN_140095090(3);
    bVar9 = FUN_140095090(0x11);
    uVar3 = FUN_140095090(9);
    uVar10 = FUN_140095090(1);
    uVar11 = FUN_140095090(0);
    local_220 = local_1b0;
    local_228 = local_1b4;
    local_230 = (uint)bVar4;
    local_238 = (uint)bVar5;
    local_240 = (uint)bVar6;
    local_248._0_4_ = (uint)bVar7;
    uStack_250._0_4_ = (uint)bVar8;
    local_258._0_4_ = (uint)bVar9;
    FUN_1400ac536("IsWindowFocused() = %d\nIsWindowFocused(_ChildWindows) = %d\nIsWindowFocused(_ChildWindows|_NoPopupHierarchy) = %d\nIsWindowFocused(_ChildWindows|_DockHierarchy) = %d\nIsWindowFocused(_ChildWindows|_RootWindow) = %d\nIsWindowFocused(_ChildWindows|_RootWindow|_NoPopupHierarchy) = %d\nIsWindowFocused(_ChildWindows|_RootWindow|_DockHierarchy) = %d\nIsWindowFocused(_RootWindow) = %d\nIsWindowFocused(_RootWindow|_NoPopupHierarchy) = %d\nIsWindowFocused(_RootWindow|_DockHierarchy) = %d\nIsWindowFocused(_AnyWindow) = %d\n"
                  ,uVar11,uVar10,uVar3);
    bVar4 = FUN_14008fbb2(0x2000);
    local_1b0 = (uint)bVar4;
    bVar4 = FUN_14008fbb2(4);
    local_1b4 = (uint)bVar4;
    bVar4 = FUN_14008fbb2(0x21);
    local_1a0 = (uint)bVar4;
    bVar4 = FUN_14008fbb2(0x12);
    local_1a4 = (uint)bVar4;
    bVar4 = FUN_14008fbb2(10);
    local_1a8 = (uint)bVar4;
    bVar4 = FUN_14008fbb2(2);
    local_1ac = (uint)bVar4;
    bVar4 = FUN_14008fbb2(0x13);
    bVar5 = FUN_14008fbb2(0xb);
    bVar6 = FUN_14008fbb2(3);
    bVar7 = FUN_14008fbb2(0x11);
    bVar8 = FUN_14008fbb2(9);
    bVar9 = FUN_14008fbb2(1);
    uVar3 = FUN_14008fbb2(0x80);
    uVar10 = FUN_14008fbb2(0x20);
    uVar11 = FUN_14008fbb2(0);
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
    FUN_1400ac536("IsWindowHovered() = %d\nIsWindowHovered(_AllowWhenBlockedByPopup) = %d\nIsWindowHovered(_AllowWhenBlockedByActiveItem) = %d\nIsWindowHovered(_ChildWindows) = %d\nIsWindowHovered(_ChildWindows|_NoPopupHierarchy) = %d\nIsWindowHovered(_ChildWindows|_DockHierarchy) = %d\nIsWindowHovered(_ChildWindows|_RootWindow) = %d\nIsWindowHovered(_ChildWindows|_RootWindow|_NoPopupHierarchy) = %d\nIsWindowHovered(_ChildWindows|_RootWindow|_DockHierarchy) = %d\nIsWindowHovered(_RootWindow) = %d\nIsWindowHovered(_RootWindow|_NoPopupHierarchy) = %d\nIsWindowHovered(_RootWindow|_DockHierarchy) = %d\nIsWindowHovered(_ChildWindows|_AllowWhenBlockedByPopup) = %d\nIsWindowHovered(_AnyWindow) = %d\nIsWindowHovered(_Stationary) = %d\n"
                  ,uVar11,uVar10,uVar3);
    local_138[0] = DAT_140e8d600;
    FUN_14008a029("child",local_138,1,0);
    FUN_1400abfd5("This is another child window for testing the _ChildWindows flag.");
    FUN_14008a651();
    if (DAT_140f315d0 == '\x01') {
      FUN_14008a651();
    }
    FUN_1400aeb6a("Hovered/Active tests after Begin() for title bar testing",&DAT_140f315d1);
    if (DAT_140f315d1 == '\x01') {
      FUN_140085d7e("Title bar Hovered/Active tests",&DAT_140f315d1,0);
      cVar2 = FUN_140094b37(0,0);
      if (cVar2 != '\0') {
        cVar2 = FUN_1400b06d6("Close",0,0,1);
        if (cVar2 != '\0') {
          DAT_140f315d1 = '\0';
        }
        FUN_1400946ab();
      }
      uVar3 = FUN_140089e6e();
      uVar10 = FUN_1400808b4(0);
      FUN_1400abfd5("IsItemHovered() after begin = %d (== is title bar hovered)\nIsItemActive() after begin = %d (== is window being clicked/moved)\n"
                    ,uVar10,uVar3);
      FUN_140088c18();
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 != (local_b0 ^ (ulonglong)auStack_278)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_b0 ^ (ulonglong)auStack_278);
  }
  return;
}

