/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b01a5 */

void FUN_101b01a5(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  undefined8 local_f0;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  double local_94;
  float local_8c;
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  undefined8 local_64;
  undefined *puStack_5c;
  undefined *puStack_58;
  undefined8 local_54;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *local_44;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *local_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *local_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_104;
  cVar1 = FUN_10147d77();
  if (cVar1 != '\0') {
    FUN_101032c6();
    local_24 = PTR_s_TreeNode_10339d8f_6_1030215c;
    puStack_20 = PTR_s_TreeNode__w__double_click__10302160;
    puStack_1c = PTR_s_Combo_10335a7f_6_10302164;
    puStack_18 = PTR_s_ListBox_10330977_6_10302168;
    local_34 = PTR_s_InputFloat3_1033e0fa_6_1030214c;
    puStack_30 = PTR_s_ColorEdit4_1033deee_0x1a_10302150;
    puStack_2c = PTR_s_Selectable_1033987c_6_10302154;
    puStack_28 = PTR_s_MenuItem_10336548_6_10302158;
    local_44 = PTR_s_SliderFloat_10332349_0x19_1030213c;
    puStack_40 = PTR_s_InputText_10331060_6_10302140;
    puStack_3c = PTR_s_InputTextMultiline_103391df_6_10302144;
    puStack_38 = PTR_s_InputFloat_10332314_0x18_10302148;
    local_54 = CONCAT44(PTR_s_Button_10335ccb_6_10302130,PTR_s_Text_103310c6_0x13_1030212c);
    puStack_4c = PTR_s_Button__w__repeat__10302134;
    puStack_48 = PTR_s_Checkbox_10330952_6_10302138;
    FUN_10133e14();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1012ff1a("Item Disabled",&DAT_103a402c);
    if (DAT_103a402c == '\x01') {
      FUN_10111871();
    }
    if (DAT_1038ab70 == 0) {
      FUN_1012d08c();
    }
    if (DAT_1038ab70 == 1) {
      local_64 = 0;
      cVar1 = FUN_1012e1b7("ITEM: Button",&local_64);
    }
    else {
      cVar1 = '\0';
    }
    if (DAT_1038ab70 == 2) {
      FUN_1011177d(8,1);
      local_64 = 0;
      cVar1 = FUN_1012e1b7("ITEM: Button",&local_64);
      FUN_10111839();
    }
    if (DAT_1038ab70 == 3) {
      cVar1 = FUN_1012ff1a("ITEM: Checkbox",&DAT_103a402d);
    }
    if (DAT_1038ab70 == 4) {
      cVar1 = FUN_1013d285("ITEM: SliderFloat",&DAT_1038ab74,0,0x3f800000,"%.3f",0);
    }
    if (DAT_1038ab70 == 5) {
      cVar1 = FUN_10141729("ITEM: InputText",&DAT_103a402e,DAT_1028f56c,0,0,0);
    }
    if (DAT_1038ab70 == 6) {
      local_64 = 0;
      cVar1 = FUN_10141afd();
    }
    if (DAT_1038ab70 == 7) {
      cVar1 = FUN_101418cb("ITEM: InputFloat",&DAT_1038ab74,0x3f800000,0,"%.3f",0);
    }
    if (DAT_1038ab70 == 8) {
      cVar1 = FUN_1014195e("ITEM: InputFloat3",&DAT_1038ab74,"%.3f",0);
    }
    if (DAT_1038ab70 == 9) {
      cVar1 = FUN_101438ec();
    }
    if (DAT_1038ab70 == 10) {
      local_64 = 0;
      cVar1 = FUN_10133727("ITEM: Selectable",0,0,&local_64);
    }
    if (DAT_1038ab70 == 0xb) {
      cVar1 = FUN_10131d08("ITEM: MenuItem",0,0,1);
    }
    if ((DAT_1038ab70 == 0xc) && (cVar1 = FUN_10147d77(), cVar1 != '\0')) {
      FUN_10149387();
    }
    if (DAT_1038ab70 == 0xd) {
      cVar1 = FUN_10148b8c("ITEM: TreeNode w/ ImGuiTreeNodeFlags_OpenOnDoubleClick",0x48);
    }
    if (DAT_1038ab70 == 0xe) {
      local_64 = CONCAT44(PTR_s_Banana_10302170,PTR_s_Apple_1030216c);
      puStack_5c = PTR_s_Cherry_10302174;
      puStack_58 = PTR_DAT_10302178;
      cVar1 = FUN_10133e14();
    }
    if (DAT_1038ab70 == 0xf) {
      local_64 = CONCAT44(PTR_s_Banana_10302170,PTR_s_Apple_1030216c);
      puStack_5c = PTR_s_Cherry_10302174;
      puStack_58 = PTR_DAT_10302178;
      cVar1 = FUN_1014b8fd();
    }
    uVar2 = FUN_10102a1a();
    local_f4 = CONCAT31(local_f4._1_3_,uVar2);
    uVar2 = FUN_10102a1a();
    local_f8 = CONCAT31(local_f8._1_3_,uVar2);
    uVar2 = FUN_10102a1a();
    local_fc = CONCAT31(local_fc._1_3_,uVar2);
    uVar2 = FUN_10102a1a();
    local_100 = CONCAT31(local_100._1_3_,uVar2);
    uVar2 = FUN_10102a1a();
    local_104 = CONCAT31(local_104._1_3_,uVar2);
    FUN_1010c060();
    local_f0 = (double)local_64._4_4_;
    FUN_1010c060();
    local_a0 = (double)local_6c;
    FUN_1010c049();
    local_a8 = (double)local_70;
    FUN_1010c049();
    local_b0 = (double)local_7c;
    FUN_1010c032();
    local_b8 = (double)local_80;
    FUN_1010c032();
    local_94 = (double)local_8c;
    local_bc = FUN_1010bf99();
    local_bc = local_bc & 0xff;
    local_c0 = FUN_1010bf79();
    local_c0 = local_c0 & 0xff;
    local_c4 = FUN_1010bfe8();
    local_c4 = local_c4 & 0xff;
    local_c8 = FUN_1010bf61();
    local_c8 = local_c8 & 0xff;
    local_cc = FUN_1010bf22();
    local_cc = local_cc & 0xff;
    local_d0 = FUN_1010befd();
    local_d0 = local_d0 & 0xff;
    local_d4 = FUN_1010bff6();
    local_d4 = local_d4 & 0xff;
    local_d8 = FUN_1010bee1();
    local_d8 = local_d8 & 0xff;
    local_dc = FUN_10102a1a();
    local_dc = local_dc & 0xff;
    local_e0 = FUN_10102a1a();
    local_e0 = local_e0 & 0xff;
    local_e4 = FUN_10102a1a();
    local_e4 = local_e4 & 0xff;
    local_e8 = FUN_10102a1a();
    local_e8 = local_e8 & 0xff;
    uVar2 = FUN_10102a1a();
    uVar3 = FUN_10102a1a();
    uVar4 = FUN_10102a1a();
    uVar5 = FUN_10102c44();
    FUN_1012d551("Return value = %d\nIsItemFocused() = %d\nIsItemHovered() = %d\nIsItemHovered(_AllowWhenBlockedByPopup) = %d\nIsItemHovered(_AllowWhenBlockedByActiveItem) = %d\nIsItemHovered(_AllowWhenOverlappedByItem) = %d\nIsItemHovered(_AllowWhenOverlappedByWindow) = %d\nIsItemHovered(_AllowWhenDisabled) = %d\nIsItemHovered(_RectOnly) = %d\nIsItemActive() = %d\nIsItemEdited() = %d\nIsItemActivated() = %d\nIsItemDeactivated() = %d\nIsItemDeactivatedAfterEdit() = %d\nIsItemVisible() = %d\nIsItemClicked() = %d\nIsItemToggledOpen() = %d\nGetItemRectMin() = (%.1f, %.1f)\nGetItemRectMax() = (%.1f, %.1f)\nGetItemRectSize() = (%.1f, %.1f)"
                 ,cVar1,uVar5,uVar4,uVar3,uVar2,local_e8,local_e4,local_e0,local_dc,local_d8,
                 local_d4,local_d0,local_cc,local_c8,local_c4,local_c0,local_bc,local_94,local_b8,
                 local_b0,local_a8,local_a0,local_f0);
    FUN_1012d551("with Hovering Delay or Stationary test:\nIsItemHovered() = %d\nIsItemHovered(_Stationary) = %d\nIsItemHovered(_DelayShort) = %d\nIsItemHovered(_DelayNormal) = %d\nIsItemHovered(_Tooltip) = %d"
                 ,local_f4 & 0xff,local_f8 & 0xff,local_fc & 0xff,local_100 & 0xff,local_104 & 0xff)
    ;
    if (DAT_103a402c == '\x01') {
      FUN_10111961();
    }
    local_64 = local_64 & 0xffffffffffffff00;
    FUN_10141729("unused",&local_64,(undefined4)DAT_10302980,DAT_10302980._4_4_,0,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10149387();
  }
  cVar1 = FUN_10147d77();
  if (cVar1 != '\0') {
    FUN_101032c6();
    FUN_1012ff1a("Embed everything inside a child window for testing _RootWindow flag.",
                 &DAT_103a403e);
    if (DAT_103a403e == '\x01') {
      fVar8 = (float10)FUN_10111f20();
      local_98 = (float)fVar8;
      local_54 = (ulonglong)(uint)(local_98 * DAT_102b7110) << 0x20;
      FUN_1010c081("outer_child",&local_54,1,0);
    }
    local_f4 = FUN_10116f68();
    local_f4 = local_f4 & 0xff;
    local_f8 = FUN_10116f68();
    local_f8 = local_f8 & 0xff;
    local_fc = FUN_10116f68();
    local_fc = local_fc & 0xff;
    local_100 = FUN_10116f68();
    local_100 = local_100 & 0xff;
    local_104 = FUN_10116f68();
    local_104 = local_104 & 0xff;
    uVar7 = FUN_10116f68();
    local_f0 = (double)(CONCAT44(local_f0._4_4_,uVar7) & 0xffffffff000000ff);
    uVar2 = FUN_10116f68();
    uVar3 = FUN_10116f68();
    uVar4 = FUN_10116f68();
    uVar5 = FUN_10116f68();
    uVar6 = FUN_10116f68();
    FUN_1012d551("IsWindowFocused() = %d\nIsWindowFocused(_ChildWindows) = %d\nIsWindowFocused(_ChildWindows|_NoPopupHierarchy) = %d\nIsWindowFocused(_ChildWindows|_DockHierarchy) = %d\nIsWindowFocused(_ChildWindows|_RootWindow) = %d\nIsWindowFocused(_ChildWindows|_RootWindow|_NoPopupHierarchy) = %d\nIsWindowFocused(_ChildWindows|_RootWindow|_DockHierarchy) = %d\nIsWindowFocused(_RootWindow) = %d\nIsWindowFocused(_RootWindow|_NoPopupHierarchy) = %d\nIsWindowFocused(_RootWindow|_DockHierarchy) = %d\nIsWindowFocused(_AnyWindow) = %d\n"
                 ,uVar6,uVar5,uVar4,uVar3,uVar2,(undefined4)local_f0,local_104,local_100,local_fc,
                 local_f8,local_f4);
    local_f4 = FUN_10111b70();
    local_f4 = local_f4 & 0xff;
    local_f8 = FUN_10111b70();
    local_f8 = local_f8 & 0xff;
    local_fc = FUN_10111b70();
    local_fc = local_fc & 0xff;
    local_100 = FUN_10111b70();
    local_100 = local_100 & 0xff;
    local_104 = FUN_10111b70();
    local_104 = local_104 & 0xff;
    uVar7 = FUN_10111b70();
    local_f0 = (double)(CONCAT44(local_f0._4_4_,uVar7) & 0xffffffff000000ff);
    uVar7 = FUN_10111b70();
    local_a0 = (double)(CONCAT44(local_a0._4_4_,uVar7) & 0xffffffff000000ff);
    uVar7 = FUN_10111b70();
    local_a8 = (double)(CONCAT44(local_a8._4_4_,uVar7) & 0xffffffff000000ff);
    uVar7 = FUN_10111b70();
    local_b0 = (double)(CONCAT44(local_b0._4_4_,uVar7) & 0xffffffff000000ff);
    uVar7 = FUN_10111b70();
    local_b8 = (double)(CONCAT44(local_b8._4_4_,uVar7) & 0xffffffff000000ff);
    uVar2 = FUN_10111b70();
    uVar3 = FUN_10111b70();
    uVar4 = FUN_10111b70();
    uVar5 = FUN_10111b70();
    uVar6 = FUN_10111b70();
    FUN_1012d551("IsWindowHovered() = %d\nIsWindowHovered(_AllowWhenBlockedByPopup) = %d\nIsWindowHovered(_AllowWhenBlockedByActiveItem) = %d\nIsWindowHovered(_ChildWindows) = %d\nIsWindowHovered(_ChildWindows|_NoPopupHierarchy) = %d\nIsWindowHovered(_ChildWindows|_DockHierarchy) = %d\nIsWindowHovered(_ChildWindows|_RootWindow) = %d\nIsWindowHovered(_ChildWindows|_RootWindow|_NoPopupHierarchy) = %d\nIsWindowHovered(_ChildWindows|_RootWindow|_DockHierarchy) = %d\nIsWindowHovered(_RootWindow) = %d\nIsWindowHovered(_RootWindow|_NoPopupHierarchy) = %d\nIsWindowHovered(_RootWindow|_DockHierarchy) = %d\nIsWindowHovered(_ChildWindows|_AllowWhenBlockedByPopup) = %d\nIsWindowHovered(_AnyWindow) = %d\nIsWindowHovered(_Stationary) = %d\n"
                 ,uVar6,uVar5,uVar4,uVar3,uVar2,(undefined4)local_b8,SUB84(local_b0,0),
                 (undefined4)local_a8,SUB84(local_a0,0),(undefined4)local_f0,local_104,local_100,
                 local_fc,local_f8,local_f4);
    local_54 = DAT_10302990;
    FUN_1010c081("child",&local_54,1,0);
    FUN_1012d08c();
    FUN_1010c644();
    if (DAT_103a403e == '\x01') {
      FUN_1010c644();
    }
    FUN_1012ff1a("Hovered/Active tests after Begin() for title bar testing",&DAT_103a403f);
    if (DAT_103a403f == '\x01') {
      FUN_10107d2b();
      cVar1 = FUN_10116a0f(0,0);
      if (cVar1 != '\0') {
        cVar1 = FUN_10131d08("Close",0,0,1);
        if (cVar1 != '\0') {
          DAT_103a403f = '\0';
        }
        FUN_101165cb();
      }
      FUN_1010bee1();
      FUN_10102a1a();
      FUN_1012d08c();
      FUN_1010ad44();
    }
    FUN_10149387();
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_104)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

