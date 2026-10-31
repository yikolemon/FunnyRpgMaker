/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ab0f5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ab0f5(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  float10 fVar13;
  double local_58;
  double local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  cVar1 = FUN_101494f9("Inputs & Focus",0);
  if (cVar1 != '\0') {
    iVar5 = FUN_1010330d();
    FUN_1014949d(1,2);
    cVar1 = FUN_10147d77();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    if (cVar1 != '\0') {
      FUN_101032c6();
      cVar1 = FUN_10103c30();
      if (cVar1 == '\0') {
        FUN_1012d08c();
      }
      else {
        FUN_1012d08c("Mouse pos: (%g, %g)",(double)*(float *)(iVar5 + 0xb4),
                     (double)*(float *)(iVar5 + 0xb8));
      }
      FUN_1012d08c("Mouse delta: (%g, %g)",(double)*(float *)(iVar5 + 0xa8),
                   (double)*(float *)(iVar5 + 0xac));
      FUN_1012d08c();
      iVar10 = 0;
      do {
        cVar1 = FUN_1010b10c();
        if (cVar1 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          FUN_1012d08c("b%d (%.02f secs)",iVar10,(double)*(float *)(iVar5 + 0xb44 + iVar10 * 4));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 5);
      FUN_1012d08c();
      FUN_1012d08c();
      iVar10 = 0;
      do {
        if (*(short *)(iVar5 + 0xaf2 + iVar10 * 2) != 0) {
          FUN_10114a0e(0,0xbf800000);
          FUN_1012d08c();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 5);
      FUN_1012d08c();
      iVar10 = 0x200;
      do {
        cVar1 = FUN_10113c70();
        if (cVar1 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          FUN_10113610();
          FUN_1012d08c();
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x29b);
      pcVar6 = "SUPER ";
      if (*(char *)(iVar5 + 0xd7) == '\0') {
        pcVar6 = "";
      }
      puVar9 = &DAT_1034baf0;
      if (*(char *)(iVar5 + 0xd6) == '\0') {
        puVar9 = &DAT_10356101;
      }
      pcVar11 = "SHIFT ";
      if (*(char *)(iVar5 + 0xd5) == '\0') {
        pcVar11 = "";
      }
      pcVar12 = "CTRL ";
      if (*(char *)(iVar5 + 0xd4) == '\0') {
        pcVar12 = "";
      }
      FUN_1012d08c("Keys mods: %s%s%s%s",pcVar12,pcVar11,puVar9,pcVar6);
      FUN_1012d08c();
      if (0 < *(int *)(iVar5 + 0xbb0)) {
        iVar10 = 0;
        do {
          FUN_10114a0e(0,0xbf800000);
          FUN_1012d08c();
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar5 + 0xbb0));
      }
      FUN_10149387();
    }
    FUN_1014949d(1,2);
    cVar1 = FUN_10147d77();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1012d08c("io.WantCaptureMouse: %d",*(undefined1 *)(iVar5 + 0x8c));
      FUN_1012d08c("io.WantCaptureMouseUnlessPopupClose: %d",*(undefined1 *)(iVar5 + 0xa8c));
      FUN_1012d08c("io.WantCaptureKeyboard: %d",*(undefined1 *)(iVar5 + 0x8d));
      FUN_1012d08c("io.WantTextInput: %d",*(undefined1 *)(iVar5 + 0x8e));
      FUN_1012d08c("io.WantSetMousePos: %d",*(undefined1 *)(iVar5 + 0x8f));
      FUN_1012d08c();
      FUN_101032c6();
      cVar1 = FUN_10147d77();
      if (cVar1 != '\0') {
        FUN_1011eaad();
        fVar13 = (float10)FUN_10111f20();
        local_40 = (float)fVar13;
        FUN_100fb68f();
        FUN_1013d499("SetNextFrameWantCaptureMouse() on hover",&DAT_1038ee88,0xffffffff,1,
                     (&PTR_s_Set_to_false_10302450)[DAT_1038ee88],0x600);
        fVar13 = (float10)FUN_10111f20();
        local_44 = (float)fVar13;
        FUN_100fb68f();
        FUN_1013d499("SetNextFrameWantCaptureKeyboard() on hover",&DAT_1038ee8c,0xffffffff,1,
                     (&PTR_s_Set_to_false_10302450)[DAT_1038ee8c],0x600);
        local_3c = DAT_10302870;
        local_34 = CONCAT44(_UNK_10302884,_DAT_10302880);
        uStack_2c = _UNK_10302888;
        uStack_28 = _UNK_1030288c;
        FUN_10144b9b("##panel",&local_34,0x240,&local_3c);
        bVar2 = FUN_10102a1a();
        if ((DAT_1038ee88 != -1 & bVar2) == 1) {
          FUN_10114137();
        }
        bVar2 = FUN_10102a1a();
        if ((DAT_1038ee8c != -1 & bVar2) == 1) {
          FUN_10114126();
        }
        FUN_10149387();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    local_50 = (double)CONCAT44(local_50._4_4_,iVar5);
    if (cVar1 != '\0') {
      FUN_101032c6();
      thunk_FUN_10130d81();
      FUN_10131233();
      FUN_10131233();
      FUN_10115158();
      FUN_10111871();
      thunk_FUN_10130d81();
      FUN_10111961();
      FUN_101151af();
      FUN_10131233();
      FUN_10115158();
      FUN_10111871();
      thunk_FUN_10130d81();
      thunk_FUN_10130d81();
      thunk_FUN_10130d81();
      FUN_10111961();
      FUN_101151af();
      FUN_10131233();
      uVar7 = (DAT_1038ee90 | DAT_1038ee94) & 0xfffe3fff;
      if (DAT_1038ee94 == 0x1000) {
        uVar7 = DAT_1038ee90 | DAT_1038ee94;
      }
      FUN_10132656();
      FUN_1012d08c();
      FUN_101145b7(0x1234,uVar7 | 0x40000);
      local_34 = 0;
      FUN_1012e1b7(&DAT_10338aad,&local_34);
      FUN_1012d08c();
      FUN_101145b7(0x4227,uVar7 | 0x40000);
      FUN_1013d285("Factor",&DAT_1038ee98,0,0x3f800000,"%.3f",0);
      FUN_10132656();
      fVar13 = (float10)FUN_101155d9();
      local_48 = (float)fVar13;
      local_58._0_4_ = local_48;
      FUN_1012d08c();
      FUN_10110653(0x1222,uVar7);
      FUN_10116f68();
      FUN_1012d08c();
      local_34 = CONCAT44(_UNK_10302894,_DAT_10302890);
      uStack_2c = _UNK_10302898;
      uStack_28 = _UNK_1030289c;
      FUN_100fcd80(3,&local_34);
      local_34 = CONCAT44(DAT_102b8ac8 * local_58._0_4_,0x80800000);
      FUN_1010c081("WindowA",&local_34,1,0);
      FUN_1012d08c();
      FUN_10132188();
      FUN_1012d08c();
      FUN_10110653(0x1222,uVar7);
      FUN_10116f68();
      FUN_1012d08c();
      local_58._0_4_ = local_58._0_4_ * DAT_102b8cb0;
      local_34 = CONCAT44(local_58._0_4_,0x80800000);
      FUN_1010c081("ChildD",&local_34,1,0);
      FUN_1012d08c();
      uVar3 = FUN_10116f68();
      FUN_1012d08c("IsWindowFocused: %d",uVar3);
      FUN_1010c644();
      local_34 = CONCAT44(local_58._0_4_,0x80800000);
      FUN_1010c081("ChildE",&local_34,1,0);
      FUN_1012d08c();
      FUN_10110653(0x1222,uVar7);
      FUN_10116f68();
      FUN_1012d08c();
      FUN_1010c644();
      local_34 = 0;
      cVar1 = FUN_1012e1b7("Open Popup",&local_34);
      if (cVar1 != '\0') {
        FUN_10115ea4("PopupF",0);
      }
      cVar1 = FUN_10116736("PopupF",0);
      if (cVar1 != '\0') {
        FUN_1012d08c();
        FUN_10110653(0x1222,uVar7);
        FUN_10116f68();
        FUN_1012d08c();
        FUN_101165cb();
      }
      FUN_1010c644();
      FUN_100fce8e();
      FUN_10149387();
      iVar5 = local_50._0_4_;
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_10114109();
      FUN_1012d08c();
      FUN_10111871();
      thunk_FUN_10130d81();
      FUN_10111961();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      iVar5 = 0;
      do {
        FUN_101b5fc7(&local_34,"Mouse cursor %d: %s",iVar5,
                     (&PTR_s_Arrow_10330aa0_0x19_10302458)[iVar5]);
        FUN_101316d8();
        local_3c = 0;
        FUN_10133727(&local_34,0,0);
        cVar1 = FUN_10102a1a();
        if (cVar1 != '\0') {
          FUN_10114115();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0xb);
      FUN_10149387();
      iVar5 = local_50._0_4_;
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1012d08c();
      FUN_10141729(&DAT_1033e8fa,s_hello_1038ee9c,DAT_10302814,0,0,0);
      FUN_10141729("2",s_hello_1038ee9c,DAT_10302814,0,0,0);
      FUN_10141729(&DAT_1033e2f8,s_hello_1038ee9c,DAT_10302814,0,0,0);
      FUN_1011177d(1,1);
      FUN_10141729("4 (tab skip)",s_hello_1038ee9c,DAT_10302814,0,0,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10111839();
      FUN_10141729(&DAT_1033deb5,s_hello_1038ee9c,DAT_10302814,0,0,0);
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      local_34 = 0;
      cVar1 = FUN_1012e1b7("Focus on 1",&local_34);
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      cVar4 = FUN_1012e1b7("Focus on 2",&local_34);
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      uVar3 = FUN_1012e1b7("Focus on 3",&local_34);
      local_58 = (double)CONCAT71(local_58._1_7_,uVar3);
      if (cVar1 != '\0') {
        FUN_10112577();
      }
      FUN_10141729(&DAT_1033e8fa,s_click_on_a_button_to_set_focus_1038eebc,DAT_103028a0,0,0,0);
      cVar1 = FUN_1010bee1();
      if (cVar4 != '\0') {
        FUN_10112577();
      }
      FUN_10141729("2",s_click_on_a_button_to_set_focus_1038eebc,DAT_103028a0,0,0,0);
      cVar4 = FUN_1010bee1();
      if (cVar4 != '\0') {
        cVar1 = '\x02';
      }
      FUN_1011177d(1,1);
      if (local_58._0_1_ != '\0') {
        FUN_10112577();
      }
      FUN_10141729("3 (tab skip)",s_click_on_a_button_to_set_focus_1038eebc,DAT_103028a0,0,0,0);
      cVar4 = FUN_1010bee1();
      if (cVar4 != '\0') {
        cVar1 = '\x03';
      }
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10111839();
      if (cVar1 == '\0') {
        FUN_1012d08c();
      }
      else {
        FUN_1012d08c("Item with focus: %d",cVar1);
      }
      local_34 = 0;
      uVar7 = FUN_1012e1b7("Focus on X",&local_34);
      iVar5 = (uVar7 & 0xff) - 1;
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      cVar1 = FUN_1012e1b7("Focus on Y",&local_34);
      if (cVar1 != '\0') {
        iVar5 = 1;
      }
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      cVar1 = FUN_1012e1b7("Focus on Z",&local_34);
      iVar10 = 2;
      if (cVar1 == '\0') {
        iVar10 = iVar5;
      }
      if (iVar10 != -1) {
        FUN_10112577();
      }
      FUN_1013d335("Float3",&DAT_103a4798,0,0x3f800000,"%.3f",0);
      FUN_1012d238();
      FUN_10149387();
      iVar5 = local_50._0_4_;
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1012d238();
      iVar10 = 0;
      do {
        FUN_1012d08c("IsMouseDragging(%d):",iVar10);
        FUN_1010378f(iVar10);
        FUN_1012d08c("  w/ default threshold: %d,");
        FUN_1010378f(iVar10);
        FUN_1012d08c("  w/ zero threshold: %d,");
        FUN_1010378f(iVar10);
        FUN_1012d08c();
        iVar10 = iVar10 + 1;
      } while (iVar10 != 3);
      local_34 = 0;
      FUN_1012e1b7("Drag Me",&local_34);
      cVar1 = FUN_1010bee1();
      if (cVar1 != '\0') {
        FUN_100fe900();
        uVar8 = FUN_100fcb39(0x16,0x3f800000);
        FUN_1018b2de(iVar5 + 0xa98,iVar5 + 0xb4,uVar8,0x40800000);
      }
      FUN_10114052();
      FUN_10114052();
      local_50 = (double)*(float *)(iVar5 + 0xac);
      local_58 = (double)*(float *)(iVar5 + 0xa8);
      FUN_1012d08c();
      FUN_1012d08c("  w/ default threshold: (%.1f, %.1f)",(double)(float)local_3c,
                   (double)local_3c._4_4_);
      FUN_1012d08c("  w/ zero threshold: (%.1f, %.1f)",(double)(float)local_34,
                   (double)local_34._4_4_);
      FUN_1012d08c("io.MouseDelta: (%.1f, %.1f)",local_58,local_50);
      FUN_10149387();
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

