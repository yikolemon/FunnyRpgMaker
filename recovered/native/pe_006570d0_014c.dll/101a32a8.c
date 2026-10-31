/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a32a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a32a8(void)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float10 fVar13;
  float fVar14;
  float fVar15;
  undefined1 local_cc [12];
  float10 local_c0;
  float local_b4;
  float10 local_b0;
  uint local_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_cc;
  cVar1 = FUN_101494f9("Layout & Scrolling",0);
  if (cVar1 != '\0') {
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_10132656();
      FUN_1011eaad();
      FUN_1012ff1a("Disable Mouse Wheel",&DAT_103a453c);
      FUN_1012ff1a("Disable Menu",&DAT_103a453d);
      uVar11 = (uint)DAT_103a453c;
      FUN_1010c3e4();
      local_34 = CONCAT44(0x43820000,(float)local_50 * DAT_102b70e0);
      FUN_1010c081("ChildL",&local_34,0,uVar11 << 4 | 0x800);
      iVar12 = 0;
      do {
        FUN_1012d08c("%04d: scrollable region",iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 != 100);
      FUN_1010c644();
      FUN_10114a0e(0,0xbf800000);
      iVar12 = (uint)DAT_103a453c * 0x10 + 0x400;
      if (DAT_103a453d != '\0') {
        iVar12 = (uint)DAT_103a453c * 0x10;
      }
      FUN_100fd0a3(7,0x40a00000);
      local_34 = DAT_103027a0;
      FUN_1010c081("ChildR",&local_34,1,iVar12);
      if ((DAT_103a453d == '\0') && (cVar1 = FUN_1014c8c1(), cVar1 != '\0')) {
        cVar1 = FUN_1014db73("Menu",1);
        if (cVar1 != '\0') {
          FUN_101ac3af();
          FUN_1014db88();
        }
        FUN_1014caf3();
      }
      local_34 = 0;
      cVar1 = FUN_1015f834();
      if (cVar1 != '\0') {
        iVar12 = 0;
        do {
          FUN_101b5fc7();
          FUN_101657a1();
          local_50 = (ulonglong)DAT_102b94bc;
          FUN_1012e1b7(&local_34,&local_50);
          iVar12 = iVar12 + 1;
        } while (iVar12 != 100);
        FUN_1016304e();
      }
      FUN_1010c644();
      FUN_100fd4c4();
      FUN_10132656();
      FUN_1011eaad();
      uVar7 = FUN_100fcbfd();
      FUN_100fcd80(3,uVar7);
      fVar13 = (float10)FUN_101155d9();
      local_64 = (float)fVar13;
      local_34 = CONCAT44(local_64 * DAT_102b8f18,0x80800000);
      cVar1 = FUN_1010c081("ResizableChild",&local_34,9,0);
      if (cVar1 != '\0') {
        iVar12 = 0;
        do {
          FUN_1012d08c("Line %04d",iVar12);
          iVar12 = iVar12 + 1;
        } while (iVar12 != 10);
      }
      FUN_100fce8e();
      FUN_1010c644();
      FUN_10132656();
      fVar13 = (float10)FUN_10111f20();
      local_68 = (float)fVar13;
      FUN_100fb68f();
      FUN_1013838a();
      fVar13 = (float10)FUN_10111f20();
      local_6c = (float)fVar13;
      FUN_100fb68f();
      FUN_1013838a();
      fVar13 = (float10)FUN_101155d9();
      local_70 = (float)fVar13;
      local_34 = CONCAT44((float)_DAT_1038ed20 * local_70,0x7f7fffff);
      fVar13 = (float10)FUN_101155d9();
      local_50 = (ulonglong)(uint)(float)fVar13 << 0x20;
      FUN_10111da2(&local_50,&local_34,0,0);
      local_34 = (ulonglong)DAT_102b94bc;
      cVar1 = FUN_1010c081("ConstrainedChild",&local_34,0x21,0);
      if ((cVar1 != '\0') && (0 < DAT_1038ed1c)) {
        iVar12 = 0;
        do {
          FUN_1012d08c("Line %04d",iVar12);
          iVar12 = iVar12 + 1;
        } while (iVar12 < DAT_1038ed1c);
      }
      FUN_1010c644();
      FUN_10132656();
      fVar13 = (float10)FUN_10111f20();
      local_74 = (float)fVar13;
      FUN_100fb68f();
      FUN_1013838a();
      FUN_1012ff1a("Override ChildBg color",&DAT_1038ed24);
      thunk_FUN_10130d81();
      thunk_FUN_10130d81();
      thunk_FUN_10130d81();
      thunk_FUN_10130d81();
      thunk_FUN_10130d81();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      if ((DAT_1038ed28 & 0x80) != 0) {
        DAT_1038ed24 = '\0';
      }
      fVar13 = (float10)FUN_10115023();
      local_78 = (float)fVar13;
      FUN_101150be();
      if (DAT_1038ed24 == '\x01') {
        FUN_100fcc65(3,0x640000ff);
      }
      local_34 = DAT_103027b0;
      FUN_1010c081(&DAT_1033a8b5,&local_34,DAT_1038ed28,0);
      if (DAT_1038ed24 != '\0') {
        FUN_100fce8e();
      }
      iVar12 = 0;
      do {
        FUN_1012d08c("Some test %d",iVar12);
        iVar12 = iVar12 + 1;
      } while (iVar12 != 0x32);
      FUN_1010c644();
      uVar2 = FUN_10102a1a();
      FUN_1010c032();
      FUN_1010c049();
      FUN_1012d08c("Hovered: %d",uVar2);
      FUN_1012d08c("Rect of child window is: (%.0f,%.0f) (%.0f,%.0f)",(double)(float)local_34,
                   (double)local_34._4_4_,(double)(float)local_50,(double)local_50._4_4_);
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1012ff1a("Show indented items",&DAT_1038ed2c);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1011520a();
      FUN_10137f3c();
      if (DAT_1038ed2c == '\x01') {
        FUN_10115158();
        FUN_10137f3c();
        FUN_101151af();
      }
      FUN_101154f4();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1011520a();
      FUN_10137f3c();
      if (DAT_1038ed2c == '\x01') {
        FUN_10115158();
        FUN_10137f3c();
        FUN_101151af();
      }
      FUN_101154f4();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1010c3e4();
      FUN_1011520a();
      FUN_10137f3c();
      if (DAT_1038ed2c == '\x01') {
        FUN_10115158();
        FUN_10137f3c();
        FUN_101151af();
      }
      FUN_101154f4();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1010c3e4();
      FUN_1011520a();
      FUN_10137f3c();
      if (DAT_1038ed2c == '\x01') {
        FUN_10115158();
        FUN_10137f3c();
        FUN_101151af();
      }
      FUN_101154f4();
      FUN_1012d08c();
      fVar13 = (float10)FUN_10111f20();
      local_7c = (float)fVar13;
      local_cc._0_4_ = local_7c * DAT_102b8f14;
      FUN_1010c3e4();
      if ((float)local_34 * DAT_102b8e90 <= (float)local_cc._0_4_) {
        FUN_1010c3e4();
      }
      else {
        fVar13 = (float10)FUN_10111f20();
        local_80 = (float)fVar13;
      }
      FUN_1011520a();
      FUN_10137f3c();
      if (DAT_1038ed2c == '\x01') {
        FUN_10115158();
        FUN_10137f3c();
        FUN_101151af();
      }
      FUN_101154f4();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1011520a();
      FUN_10137f3c();
      if (DAT_1038ed2c == '\x01') {
        FUN_10115158();
        FUN_10137f3c();
        FUN_101151af();
      }
      FUN_101154f4();
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1012d238();
      FUN_101032c6();
      FUN_1012d08c();
      iVar12 = 0;
      FUN_10114a0e(0,0xbf800000);
      local_34 = CONCAT44(_UNK_103027c4,_DAT_103027c0);
      puStack_2c = _UNK_103027c8;
      puStack_28 = _UNK_103027cc;
      FUN_1012d147(&local_34,"Sailor");
      FUN_1012d08c();
      FUN_10114a0e(0,0x41a00000);
      local_34 = CONCAT44(_UNK_103027c4,_DAT_103027c0);
      puStack_2c = _UNK_103027c8;
      puStack_28 = _UNK_103027cc;
      FUN_1012d147(&local_34,"Sailor");
      FUN_10131ed3();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Banana",&local_34);
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Apple",&local_34);
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Corniflower",&local_34);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1ca();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_101032c6();
      FUN_1012d08c();
      FUN_10114a0e(0x43160000,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0x43960000,0xbf800000);
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_10114a0e(0x43160000);
      FUN_1012e1ca();
      FUN_10114a0e(0x43960000,0xbf800000);
      FUN_1012e1ca();
      FUN_101032c6();
      FUN_1012ff1a(&DAT_1033079e,&DAT_103a4548);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a("Tailor",&DAT_103a4549);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a(&DAT_10334084,&DAT_103a454a);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a(&DAT_103373d3,&DAT_103a454b);
      FUN_100fdb2e();
      FUN_1011520a();
      local_34 = CONCAT44(PTR_DAT_10302248,PTR_DAT_10302244);
      puStack_2c = PTR_DAT_1030224c;
      puStack_28 = PTR_s_DDDD_1033cb7d_6_10302250;
      FUN_10133e14();
      FUN_10114a0e(0,0xbf800000);
      FUN_1013d285("X",&DAT_1038ed30,0,0x40a00000,"%.3f",0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1013d285("Y",&DAT_1038ed34,0,0x40a00000,"%.3f",0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1013d285("Z",&DAT_1038ed38,0,0x40a00000,"%.3f",0);
      FUN_1012d08c();
      do {
        if (iVar12 != 0) {
          FUN_10114a0e(0,0xbf800000);
        }
        FUN_10113358();
        FUN_1014b8fd();
        FUN_10113568();
        iVar12 = iVar12 + 1;
      } while (iVar12 != 4);
      FUN_101154f4();
      FUN_101032c6();
      local_50 = DAT_103027d0;
      FUN_1012e1b7("A",&local_50);
      iVar9 = 0;
      FUN_10114a0e(0,0xbf800000);
      FUN_10131d8e();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1b7("B",&local_50);
      FUN_101032c6();
      FUN_1012d08c();
      iVar12 = FUN_100fcb2d();
      FUN_10114f9f();
      local_cc._0_4_ = (float)local_60;
      FUN_1010c3e4();
      local_cc._0_4_ = (float)local_cc._0_4_ + (float)local_40;
      do {
        FUN_10113358();
        FUN_1012e1b7("Box",&local_50);
        FUN_1010c049();
        if (iVar9 == 0x13) {
          FUN_10113568();
          break;
        }
        if ((float)local_60 + *(float *)(iVar12 + 0x5c) + (float)local_50 < (float)local_cc._0_4_) {
          FUN_10114a0e(0);
        }
        iVar9 = iVar9 + 1;
        FUN_10113568();
      } while (iVar9 != 0x14);
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1011eaad();
      FUN_10115649();
      FUN_10115649();
      local_34 = 0;
      FUN_1012e1b7(&DAT_1033cd9e,&local_34);
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7(&DAT_1033cce4,&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_10115649();
      local_34 = 0;
      FUN_1012e1b7(&DAT_1033cc7d,&local_34);
      local_34 = 0;
      FUN_1012e1b7("DDD",&local_34);
      FUN_1011462f();
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7(&DAT_1033c9f3,&local_34);
      FUN_1011462f();
      FUN_10115d65();
      FUN_1010c060();
      local_34 = CONCAT44(_UNK_10302258,_DAT_10302254);
      puStack_2c = _UNK_1030225c;
      puStack_28 = _UNK_10302260;
      local_24 = 0x3e800000;
      FUN_1014c5ed("##values",&local_34,DAT_10302810,0,0,0,0x3f800000,(int)local_50,local_50._4_4_,4
                  );
      local_c0._0_4_ = (float)local_50;
      local_cc._0_4_ = local_50._4_4_;
      iVar12 = FUN_100fcb2d();
      local_60 = CONCAT44(local_cc._0_4_,(local_c0._0_4_ - *(float *)(iVar12 + 0x5c)) * DAT_102b70e0
                         );
      FUN_1012e1b7("ACTION",&local_60);
      FUN_10114a0e(0,0xbf800000);
      local_c0 = (float10)CONCAT64(local_c0._4_6_,(float)local_50);
      local_cc._0_4_ = local_50._4_4_;
      iVar12 = FUN_100fcb2d();
      local_60 = CONCAT44(local_cc._0_4_,(local_c0._0_4_ - *(float *)(iVar12 + 0x5c)) * DAT_102b70e0
                         );
      FUN_1012e1b7("REACTION",&local_60);
      FUN_1011462f();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1b7("LEVERAGE\nBUZZWORD",&local_50);
      FUN_10114a0e(0,0xbf800000);
      cVar1 = FUN_1014b5db("List",&local_50);
      if (cVar1 != '\0') {
        local_60 = 0;
        FUN_10133727("Selected",1,0,&local_60);
        local_60 = 0;
        FUN_10133727("Not Selected",0,0,&local_60);
        FUN_1014b8f3();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1012d551();
      iVar9 = 0;
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10115158();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Some framed item",&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10131ed3();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Some framed item##2",&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      local_34 = 0;
      FUN_1012e1b7("TEST##1",&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1ca();
      FUN_10131ed3();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Item##1",&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1ca();
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Item##3",&local_34);
      FUN_101151af();
      FUN_10131d29();
      FUN_1012d551();
      FUN_10115158();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      local_34 = 0;
      FUN_1012e1b7("HOP##1",&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      local_34 = 0;
      FUN_1012e1b7(&DAT_1033e596,&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_101151af();
      FUN_10131d29();
      FUN_1012d551();
      FUN_10115158();
      local_34 = DAT_103027e0;
      FUN_1012e1b7("80x80",&local_34);
      FUN_10114a0e(0,0xbf800000);
      local_34 = CONCAT44(DAT_10302640._4_4_,(float)DAT_10302640);
      FUN_1012e1b7("50x50",&local_34);
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      FUN_1012e1b7("Button()",&local_34);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1ca();
      iVar12 = FUN_100fcb2d();
      local_cc._0_4_ = *(undefined4 *)(iVar12 + 100);
      local_34 = 0;
      FUN_1012e1b7("Button##1",&local_34);
      FUN_10114a0e(0,local_cc._0_4_);
      cVar1 = FUN_10148b8c("Node##1",0x40000);
      if (cVar1 != '\0') {
        do {
          FUN_1012d551("Item %d..",iVar9);
          iVar9 = iVar9 + 1;
        } while (iVar9 != 6);
        FUN_10149387();
      }
      fVar13 = (float10)FUN_10111f20();
      local_84 = (float)fVar13;
      FUN_100fd2b4(0xb,(float)(int)(local_84 * DAT_102b8e98));
      local_34 = 0;
      FUN_1012e1b7("Button##2",&local_34);
      FUN_100fd4c4();
      FUN_10114a0e(0,local_cc._0_4_);
      cVar1 = FUN_10148b8c("Node##2",0x40000);
      if (cVar1 != '\0') {
        FUN_10149387();
      }
      FUN_10131ed3();
      cVar1 = FUN_10147d77();
      FUN_10114a0e(0,local_cc._0_4_);
      local_34 = 0;
      FUN_1012e1b7("Button##3",&local_34);
      if (cVar1 != '\0') {
        iVar12 = 0;
        do {
          FUN_1012d551("Item %d..",iVar12);
          iVar12 = iVar12 + 1;
        } while (iVar12 != 6);
        FUN_10149387();
      }
      local_34 = 0;
      FUN_1012e1b7("Button##4",&local_34);
      FUN_10114a0e(0,local_cc._0_4_);
      FUN_1012d551();
      FUN_10131ed3();
      FUN_1012d551();
      FUN_10114a0e(0,local_cc._0_4_);
      local_34 = 0;
      FUN_1012e1b7(&DAT_1033dead,&local_34);
      FUN_101151af();
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1011eaad();
      FUN_1012ff1a("Decoration",&DAT_103a454c);
      fVar13 = (float10)FUN_10111f20();
      local_88 = (float)fVar13;
      FUN_1011520a();
      iVar12 = 0;
      bVar3 = FUN_1013838a();
      DAT_1038ed54 = DAT_1038ed54 | bVar3;
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a("Track",&DAT_1038ed54);
      bVar3 = FUN_10137f3c();
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      bVar4 = FUN_1012e1b7("Scroll Offset",&local_34);
      uVar2 = FUN_10137f3c();
      local_cc[0] = uVar2;
      FUN_10114a0e(0,0xbf800000);
      local_34 = 0;
      bVar5 = FUN_1012e1b7("Scroll To Pos",&local_34);
      bVar5 = bVar5 | local_cc[0];
      FUN_101154f4();
      local_c0 = (float10)CONCAT91(local_c0._1_9_,bVar4 | bVar3);
      if ((byte)(bVar4 | bVar3 | bVar5) == 1) {
        DAT_1038ed54 = 0;
      }
      iVar9 = FUN_100fcb2d();
      FUN_1010c3e4();
      fVar14 = (*(float *)(iVar9 + 0x5c) * _DAT_102b9550 + (float)local_34) / DAT_102b7100;
      local_b4 = DAT_1028b430;
      if (DAT_1028b430 <= fVar14) {
        local_b4 = fVar14;
      }
      FUN_101131fa();
      do {
        if (iVar12 != 0) {
          FUN_10114a0e(0,0xbf800000);
        }
        FUN_10115649();
        FUN_1012d079((&PTR_DAT_10302268)[iVar12],0);
        bVar3 = DAT_103a454c;
        uVar7 = FUN_101135ab();
        local_34 = CONCAT44(0x43480000,local_b4);
        cVar1 = FUN_1010c3c7(uVar7,&local_34,1,(uint)bVar3 << 10);
        cVar6 = FUN_1014c8c1();
        if (cVar6 != '\0') {
          FUN_1012d079(&DAT_1033b484,0);
          FUN_1014caf3();
        }
        if (local_c0._0_1_ != '\0') {
          FUN_10115979();
        }
        if (bVar5 != 0) {
          local_cc._0_4_ = (float)iVar12 * DAT_102b9570;
          FUN_10115134();
          FUN_101159d1(local_34._4_4_ + _DAT_1038ed58,local_cc._0_4_);
        }
        if (cVar1 != '\0') {
          local_cc._0_4_ = (float)iVar12 * DAT_102b9570;
          iVar10 = 0;
          do {
            if ((DAT_1038ed54 == 1) && (iVar10 == DAT_1038ed50)) {
              local_34 = CONCAT44(_UNK_103027c4,_DAT_103027c0);
              puStack_2c = _UNK_103027c8;
              puStack_28 = _UNK_103027cc;
              FUN_1012d147();
              FUN_10115acd();
            }
            else {
              FUN_1012d08c("Item %d",iVar10);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != 100);
        }
        local_cc._0_10_ = FUN_101158db();
        local_b0 = (float10)FUN_101158ff();
        FUN_1010c644();
        FUN_1012d08c();
        FUN_1011462f();
        iVar12 = iVar12 + 1;
      } while (iVar12 != 5);
      FUN_10113568();
      FUN_101032c6();
      FUN_10131d29();
      FUN_1011eaad();
      FUN_101131fa();
      iVar12 = 0;
      do {
        fVar13 = (float10)FUN_10111f20();
        local_8c = (float)fVar13;
        local_cc._0_4_ =
             *(float *)(iVar9 + 0x18) + *(float *)(iVar9 + 0x18) +
             local_8c + *(float *)(iVar9 + 0x84);
        uVar11 = (uint)DAT_103a454c;
        uVar7 = FUN_101135ab();
        local_34 = CONCAT44(local_cc._0_4_,0xc2c80000);
        cVar1 = FUN_1010c3c7(uVar7,&local_34,1,uVar11 << 0xe | 0x800);
        if (local_c0._0_1_ != '\0') {
          FUN_10115953();
        }
        if (bVar5 != 0) {
          local_cc._0_4_ = (float)iVar12 * DAT_102b9570;
          FUN_10115134();
          FUN_1011599f((float)local_34 + _DAT_1038ed58,local_cc._0_4_);
        }
        if (cVar1 != '\0') {
          local_cc._0_4_ = (float)iVar12 * DAT_102b9570;
          iVar10 = 0;
          do {
            if (iVar10 != 0) {
              FUN_10114a0e(0,0xbf800000);
            }
            if ((DAT_1038ed54 == 1) && (iVar10 == DAT_1038ed50)) {
              local_34 = CONCAT44(_UNK_103027c4,_DAT_103027c0);
              puStack_2c = _UNK_103027c8;
              puStack_28 = _UNK_103027cc;
              FUN_1012d147();
              FUN_10115a03();
            }
            else {
              FUN_1012d08c();
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != 100);
        }
        local_cc._0_10_ = FUN_101158c9();
        local_b0 = (float10)FUN_101158ed();
        FUN_1010c644();
        FUN_10114a0e(0,0xbf800000);
        FUN_1012d08c(&DAT_1033864f,(&PTR_s_Left_10331e59_6_1030227c)[iVar12],
                     (double)(float10)local_cc._0_10_,(double)local_b0);
        FUN_10131d29();
        iVar12 = iVar12 + 1;
      } while (iVar12 != 5);
      FUN_10113568();
      FUN_101032c6();
      FUN_1011eaad();
      FUN_1013d499("Lines",&DAT_1038ed5c,1,0xf,&DAT_1033b386,0);
      FUN_100fd0a3(0xc,0x40400000);
      local_34 = DAT_102b8920;
      FUN_100fd3bc(0xb,&local_34);
      fVar13 = (float10)FUN_1011561d();
      local_90 = (float)fVar13;
      local_40 = (ulonglong)(uint)(local_90 * DAT_103025a4 + DAT_10302588) << 0x20;
      FUN_1010c081("scrolling",&local_40,1,0x800);
      local_b4 = 0.0;
      if (0 < DAT_1038ed5c) {
        uVar11 = 0;
        do {
          iVar12 = 9;
          if ((uVar11 & 1) == 0) {
            iVar12 = 3;
          }
          local_b0 = (float10)CONCAT64(local_b0._4_6_,uVar11);
          local_a4 = iVar12 * uVar11 + 10 + (uint)(iVar12 * uVar11 == -10);
          uVar11 = 0;
          do {
            if (uVar11 != 0) {
              FUN_10114a0e(0,0xbf800000);
            }
            FUN_10113358();
            FUN_101b5fc7();
            puVar8 = (undefined8 *)&DAT_10330350;
            if ((((uVar11 / 0xf) * 0xf != uVar11) &&
                (puVar8 = (undefined8 *)&DAT_10330359, (uVar11 / 3) * 3 != uVar11)) &&
               (puVar8 = &local_34, (uVar11 / 5) * 5 == uVar11)) {
              puVar8 = (undefined8 *)&DAT_10330354;
            }
            local_c0 = (float10)CONCAT64(local_c0._4_6_,puVar8);
            local_cc._0_4_ = (float)(int)uVar11 * _DAT_102b90ec;
            FUN_100faedd((float)(int)uVar11 * _DAT_102b90ec,0x3f19999a,0x3f19999a,&local_60,
                         &local_50,&local_38);
            local_60 = CONCAT44((float)local_50,(float)local_60);
            uStack_58 = CONCAT44(DAT_102b8820._4_4_,local_38);
            local_50 = CONCAT44((float)local_50,(float)local_60);
            uStack_48 = local_38;
            uStack_44 = DAT_102b8820._4_4_;
            FUN_100fcd80(0x16,&local_50);
            FUN_100faedd(local_cc._0_4_,0x3f333333,0x3f333333,&local_60,&local_50,&local_38);
            local_60 = CONCAT44((float)local_50,(float)local_60);
            uStack_58 = CONCAT44(DAT_102b8820._4_4_,local_38);
            local_50 = CONCAT44((float)local_50,(float)local_60);
            uStack_48 = local_38;
            uStack_44 = DAT_102b8820._4_4_;
            FUN_100fcd80(0x17,&local_50);
            FUN_100faedd(local_cc._0_4_,0x3f4ccccd,0x3f4ccccd,&local_60,&local_50,&local_38);
            local_60 = CONCAT44((float)local_50,(float)local_60);
            uStack_58 = CONCAT44(DAT_102b8820._4_4_,local_38);
            local_50 = CONCAT44((float)local_50,(float)local_60);
            uStack_48 = local_38;
            uStack_44 = DAT_102b8820._4_4_;
            FUN_100fcd80(0x18,&local_50);
            fVar13 = (float10)FUN_102704b0((double)(int)(local_b0._0_4_ + uVar11));
            fStack_94 = (float)fVar13;
            local_50 = (ulonglong)(uint)(fStack_94 * DAT_102b7110 + DAT_10301460);
            FUN_1012e1b7(local_c0._0_4_);
            FUN_100fce8e();
            FUN_10113568();
            uVar11 = uVar11 + 1;
          } while (local_a4 != uVar11);
          uVar11 = local_b0._0_4_ + 1;
          local_b4 = (float)((int)local_b4 + 1000);
        } while ((int)uVar11 < DAT_1038ed5c);
      }
      fVar13 = (float10)FUN_101158c9();
      local_98 = (float)fVar13;
      local_c0 = (float10)CONCAT64(local_c0._4_6_,local_98);
      fVar13 = (float10)FUN_101158ed();
      fStack_9c = (float)fVar13;
      local_b0 = (float10)CONCAT64(local_b0._4_6_,fStack_9c);
      FUN_1010c644();
      FUN_100fd4c4();
      FUN_1012e1ca();
      local_cc._0_10_ = (unkuint10)(uint6)local_cc._4_6_ << 0x20;
      cVar1 = FUN_1010bee1();
      if (cVar1 != '\0') {
        iVar12 = FUN_1010330d();
        local_cc._0_4_ = *(float *)(iVar12 + 0x18) * _DAT_103027f0;
      }
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1ca();
      cVar1 = FUN_1010bee1();
      if (cVar1 != '\0') {
        iVar12 = FUN_1010330d();
        local_cc._0_4_ = *(float *)(iVar12 + 0x18) * DAT_102b8f30;
      }
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      if (((float)local_cc._0_4_ != 0.0) || (NAN((float)local_cc._0_4_))) {
        local_34 = 0;
        FUN_1010c081("scrolling",&local_34,0,0);
        fVar13 = (float10)FUN_101158c9();
        fStack_a0 = (float)fVar13;
        FUN_10115953();
        FUN_1010c644();
      }
      FUN_10131d29();
      FUN_1012ff1a("Show Horizontal contents size demo window",&DAT_103a4554);
      if (DAT_103a4554 == '\x01') {
        if (DAT_103a4557 == '\x01') {
          local_34 = (ulonglong)(uint)DAT_1038ed68;
          FUN_10111df6();
        }
        FUN_10107d2b();
        FUN_101032c6();
        local_34 = (ulonglong)DAT_102b8ac0;
        FUN_100fd3bc(0xe,&local_34);
        local_34 = (ulonglong)DAT_102b8ac0;
        FUN_100fd3bc(0xb,&local_34);
        FUN_1011eaad();
        FUN_1012ff1a("H-scrollbar",&DAT_1038ed60);
        FUN_1012ff1a("Button",&DAT_1038ed61);
        FUN_1012ff1a("Tree nodes",&DAT_1038ed62);
        FUN_1012ff1a("Text wrapped",&DAT_103a4555);
        FUN_1012ff1a("Columns",&DAT_1038ed63);
        FUN_1012ff1a("Tab bar",&DAT_1038ed64);
        FUN_1012ff1a("Child",&DAT_103a4556);
        FUN_1012ff1a("Explicit content size",&DAT_103a4557);
        local_cc._0_10_ = FUN_101158ff();
        local_c0 = (float10)FUN_101158db();
        local_b0 = (float10)FUN_101158ed();
        fVar13 = (float10)FUN_101158c9();
        FUN_1012d08c("Scroll %.1f/%.1f %.1f/%.1f",(double)fVar13,(double)local_b0,(double)local_c0,
                     (double)(float10)local_cc._0_10_);
        if (DAT_103a4557 == '\x01') {
          FUN_10114a0e(0,0xbf800000);
          FUN_100fdb2e();
          FUN_100fb68f();
          FUN_10137f3c();
          FUN_10114f9f();
          FUN_10111ef5();
          local_50 = CONCAT44((float)(local_34 >> 0x20) + _UNK_102b8f04,
                              (float)local_34 + _DAT_102b8f00);
          FUN_1018b85a();
          FUN_10111ef5();
          fVar14 = (float)(local_34 >> 0x20);
          fVar15 = DAT_1038ed68 + (float)local_34;
          local_50 = CONCAT44(DAT_10302800._4_4_ + fVar14,fVar15);
          local_60 = CONCAT44(fVar14,fVar15 + DAT_102b7108);
          FUN_1018b85a();
          local_50 = CONCAT44(DAT_10302800._4_4_,(undefined4)DAT_10302800);
          FUN_10131d8e();
        }
        FUN_100fd4c4();
        FUN_10132188();
        if (DAT_1038ed61 == '\x01') {
          local_34 = (ulonglong)DAT_10302780;
          FUN_1012e1b7("this is a 300-wide button",&local_34);
        }
        if (DAT_1038ed62 == '\x01') {
          local_34 = CONCAT71(local_34._1_7_,1);
          cVar1 = FUN_10147d77();
          if (cVar1 != '\0') {
            cVar1 = FUN_10147d77();
            if (cVar1 != '\0') {
              FUN_1012d08c();
              FUN_10149387();
            }
            FUN_10149387();
          }
          FUN_10149544();
        }
        if (DAT_103a4555 == '\x01') {
          FUN_1012d238();
        }
        if (DAT_1038ed63 == '\x01') {
          FUN_1012d08c();
          local_34 = 0;
          cVar1 = FUN_1015f834();
          if (cVar1 != '\0') {
            iVar12 = 4;
            do {
              FUN_101657a1();
              FUN_1010c3e4();
              FUN_1012d08c();
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
            FUN_1016304e();
          }
          FUN_1012d08c();
          FUN_1016a3cf();
          iVar12 = 4;
          do {
            FUN_101690b7();
            FUN_1012d08c();
            FUN_10169d56();
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
          FUN_1016a3cf();
        }
        if ((DAT_1038ed64 == '\x01') && (cVar1 = FUN_1014e2f8("Hello",0), cVar1 != '\0')) {
          cVar1 = FUN_1014fafc();
          if (cVar1 != '\0') {
            FUN_10150ac8();
          }
          cVar1 = FUN_1014fafc();
          if (cVar1 != '\0') {
            FUN_10150ac8();
          }
          cVar1 = FUN_1014fafc();
          if (cVar1 != '\0') {
            FUN_10150ac8();
          }
          cVar1 = FUN_1014fafc();
          if (cVar1 != '\0') {
            FUN_10150ac8();
          }
          FUN_1014e72b();
        }
        if (DAT_103a4556 == '\x01') {
          local_34 = 0;
          FUN_1010c081("child",&local_34,1,0);
          FUN_1010c644();
        }
        FUN_1010ad44();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_10137fb6();
      FUN_1012d238();
      FUN_1011eaad();
      iVar12 = 0;
      do {
        if (iVar12 != 0) {
          FUN_10114a0e(0,0xbf800000);
        }
        FUN_10113358();
        FUN_1012e242();
        cVar1 = FUN_1010bee1();
        if ((cVar1 != '\0') && (cVar1 = FUN_1010378f(), cVar1 != '\0')) {
          iVar9 = FUN_1010330d();
          DAT_1038ed74 = *(float *)(iVar9 + 0xa8) + DAT_1038ed74;
          iVar9 = FUN_1010330d();
          DAT_1038ed78 = *(float *)(iVar9 + 0xac) + DAT_1038ed78;
        }
        FUN_10113568();
        cVar1 = FUN_1010bfe8();
        if (cVar1 != '\0') {
          FUN_1010c032();
          FUN_1010c049();
          local_40 = CONCAT44(DAT_1038ed78 + (float)(local_50 >> 0x20),
                              DAT_1038ed74 + (float)local_50);
          FUN_10111ef5();
          if (iVar12 == 2) {
            puStack_2c = (undefined *)local_60;
            puStack_28 = (undefined *)((ulonglong)local_60 >> 0x20);
            local_34 = local_50;
            FUN_1018b85a();
            local_cc._0_10_ = FUN_10111f20();
            uVar7 = FUN_10111f14();
            FUN_1018c69a(uVar7,(float)(float10)local_cc._0_10_,&local_40,0xffffffff,
                         "Line 1 hello\nLine 2 clip me!",0,0,&local_34);
          }
          else if (iVar12 == 1) {
            FUN_101881b4();
            FUN_1018b85a();
            FUN_1018d05c(&local_40,0xffffffff,"Line 1 hello\nLine 2 clip me!",0);
            FUN_10188384();
          }
          else {
            FUN_1010a52a();
            FUN_1018b85a();
            FUN_1018d05c(&local_40,0xffffffff,"Line 1 hello\nLine 2 clip me!",0);
            FUN_1010a588();
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != 3);
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6();
      FUN_1011eaad();
      FUN_1012ff1a("Enable AllowOverlap",&DAT_1038ed7c);
      FUN_10114f9f();
      local_50 = CONCAT44((float)(local_34 >> 0x20) + DAT_10302640._4_4_,
                          (float)local_34 + (float)DAT_10302640);
      if (DAT_1038ed7c == '\x01') {
        FUN_1010c007();
      }
      local_60 = DAT_103027e0;
      FUN_1012e1b7("Button 1",&local_60);
      FUN_10114fbc();
      local_60 = DAT_103027e0;
      FUN_1012e1b7("Button 2",&local_60);
      if (DAT_1038ed7c == '\x01') {
        FUN_1010c007();
      }
      local_60 = 0;
      FUN_10133727("Some Selectable",0,0,&local_60);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012e1ca();
      FUN_10149387();
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)local_cc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

