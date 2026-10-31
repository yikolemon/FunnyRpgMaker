/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a65c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a65c8(void)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  int *unaff_FS_OFFSET;
  bool bVar18;
  float10 fVar19;
  undefined1 auStack_110 [12];
  float *local_104;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float *local_d8;
  float local_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_a0;
  ulonglong local_94;
  ulonglong local_8c [4];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float *local_44;
  undefined *local_40;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_110;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcda0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  cVar2 = FUN_101494f9("Tables & Columns",0);
  if (cVar2 == '\0') goto code_r0x101aae76;
  FUN_100fdb2e();
  local_d4 = (float)local_d0;
  fVar19 = (float10)FUN_101155d9();
  local_d8 = (float *)(float)fVar19;
  local_44 = local_d8;
  FUN_101131fa();
  local_d0 = 0;
  uVar3 = FUN_1012e1b7("Expand all",&local_d0);
  local_100 = (double)CONCAT71(local_100._1_7_,uVar3);
  FUN_10114a0e(0,0xbf800000);
  local_d0 = 0;
  uVar3 = FUN_1012e1b7("Collapse all",&local_d0);
  local_104 = (float *)CONCAT31(local_104._1_3_,uVar3);
  FUN_10114a0e(0,0xbf800000);
  FUN_1012ff1a("Disable tree indentation",&DAT_103a4559);
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  FUN_10132188();
  if (DAT_103a4559 == '\x01') {
    FUN_100fd0a3(0x10,0);
  }
  bVar4 = local_100._0_1_ | (byte)local_104;
  local_100 = (double)CONCAT71(local_100._1_7_,bVar4);
  if (bVar4 == 1) {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0;
      do {
        iVar15 = 0;
        FUN_10165364(0,0);
        do {
          FUN_10165606();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
      FUN_1016304e();
    }
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        FUN_101657a1();
        FUN_1012d08c("Row %d");
        FUN_101657a1();
        FUN_1012d08c();
        FUN_101657a1();
        FUN_1012d08c();
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
      FUN_1016304e();
    }
    FUN_1011eaad();
    local_d0 = 0;
    iVar11 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      do {
        FUN_101657a1();
        FUN_1012d08c("Item %d",iVar11);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0xe);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10115158();
    thunk_FUN_10130d81();
    FUN_10115158();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101151af();
    thunk_FUN_10130d81();
    FUN_10115158();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101151af();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101151af();
    FUN_10131ed3();
    FUN_1012d08c();
    FUN_10114a0e(0,0xbf800000);
    FUN_10131233();
    FUN_10114a0e(0,0xbf800000);
    FUN_10131233();
    FUN_1012ff1a("Display headers",&DAT_103a455a);
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      if (DAT_103a455a == '\x01') {
        FUN_10164e8b("One",0,0,0);
        FUN_10164e8b("Two",0,0,0);
        FUN_10164e8b("Three",0,0,0);
        FUN_1016601f();
      }
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          FUN_101b5fc7(&local_d0,"Hello %d,%d");
          if (DAT_103a455c == 1) {
            local_8c[0] = (ulonglong)DAT_102b94bc;
            FUN_1012e1b7();
          }
          else if (DAT_103a455c == 0) {
            FUN_1012d079();
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    iVar11 = 0;
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      do {
        iVar15 = 0;
        FUN_10165364(0,0);
        do {
          FUN_10165606();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b(&DAT_1033cd9e,0x10,0,0);
      FUN_10164e8b(&DAT_1033cce4,0x10,0,0);
      FUN_10164e8b(&DAT_1033cc7d,8,0,0);
      FUN_1016601f();
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          pcVar7 = "_WidthFixed";
          if (iVar15 == 2) {
            pcVar7 = "_WidthStretch";
          }
          FUN_1012d08c("%s %d,%d",pcVar7 + 6);
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b(&DAT_1033cd9e,0x10,0,0);
      FUN_10164e8b(&DAT_1033cce4,0x10,0,0);
      FUN_10164e8b(&DAT_1033cc7d,0x12,0,0);
      FUN_10164e8b("DDD",8,0,0);
      FUN_10164e8b(&DAT_1033c9f3,8,0,0);
      FUN_10164e8b("FFF",10,0,0);
      FUN_1016601f();
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        uVar12 = 0;
        do {
          FUN_10165606();
          pcVar7 = "_WidthFixed";
          if (2 < uVar12) {
            pcVar7 = "_WidthStretch";
          }
          FUN_1012d08c("%s %d,%d",pcVar7 + 6);
          uVar12 = uVar12 + 1;
        } while (uVar12 != 6);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    iVar11 = 0;
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("One",0,0,0);
      FUN_10164e8b("Two",0,0,0);
      FUN_10164e8b("Three",0,0,0);
      FUN_1016601f();
      do {
        iVar15 = 0;
        FUN_10165364(0,0);
        do {
          FUN_10165606();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 6);
      FUN_1016304e();
    }
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("One",0,0,0);
      FUN_10164e8b("Two",0,0,0);
      FUN_10164e8b("Three",0,0,0);
      FUN_1016601f();
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 6);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_1012ff1a("show_headers",&DAT_103a4560);
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      if (DAT_103a4560 == '\x01') {
        FUN_10164e8b("One",0,0,0);
        FUN_10164e8b("Two",0,0,0);
        FUN_10164e8b("Three",0,0,0);
        FUN_1016601f();
      }
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          if (iVar11 == 0) {
            FUN_1010c3e4();
            FUN_1012d08c();
          }
          else {
            FUN_101b5fc7(&local_d0,"Hello %d,%d",iVar15);
            local_8c[0] = (ulonglong)DAT_102b94bc;
            FUN_1012e1b7();
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_1012ff1a("show_widget_frame_bg",&DAT_1038ede0);
    FUN_1013d2dc("CellPadding",&DAT_103a4564,0,0x41200000,&DAT_10338657,0);
    FUN_101b7a45();
    FUN_100fd3bc(0x11,&DAT_103a4564);
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      if (DAT_1038ede0 != '\x01') {
        FUN_100fcc65(7,0);
      }
      iVar11 = 0;
      puVar13 = &DAT_103a456c;
      do {
        FUN_101657a1();
        if (DAT_103a465c == '\0') {
          puVar13[1] = 0x656d20;
          *puVar13 = 0x74696465;
        }
        FUN_100fb68f();
        FUN_10113358();
        FUN_10141729("##cell",puVar13,DAT_1028f56c,0,0);
        FUN_10113568();
        iVar11 = iVar11 + 1;
        puVar13 = puVar13 + 4;
      } while (iVar11 != 0xf);
      if (DAT_1038ede0 == '\0') {
        FUN_100fce8e();
      }
      DAT_103a465c = '\x01';
      FUN_1016304e();
    }
    FUN_100fd4c4();
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101b7a45();
    local_a0 = (double)CONCAT44(local_a0._4_4_,DAT_10302588 * local_d4);
    iVar11 = 0;
    do {
      FUN_10113358();
      FUN_100fb68f();
      FUN_101b7a50();
      local_d0 = 0;
      local_f8 = (double)CONCAT44(local_f8._4_4_,&DAT_1038ede8 + iVar11);
      cVar2 = FUN_1015f834();
      local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11);
      if (cVar2 != '\0') {
        iVar11 = 3;
        do {
          FUN_10165364(0,0);
          FUN_101657a1();
          FUN_1012d08c();
          FUN_101657a1();
          FUN_1012d08c();
          FUN_101657a1();
          FUN_1012d08c();
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        FUN_1016304e();
        iVar11 = (int)local_f0._0_4_;
      }
      local_d0 = 0;
      cVar2 = FUN_1015f834();
      if (cVar2 != '\0') {
        iVar11 = 3;
        do {
          FUN_10165364(0,0);
          FUN_101657a1();
          FUN_1012d08c();
          FUN_101657a1();
          FUN_1012d08c();
          FUN_101657a1();
          FUN_1012d08c();
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        FUN_1016304e();
        iVar11 = (int)local_f0._0_4_;
      }
      FUN_10113568();
      iVar11 = iVar11 + 1;
    } while (iVar11 != 4);
    FUN_10131d29();
    FUN_1012d079("Advanced",0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101b79e5();
    FUN_101131fa();
    FUN_1011520a();
    FUN_101b7a50();
    FUN_10133e42("Contents",&DAT_103a4660,"Show width",0xffffffff);
    if (DAT_103a4660 == 4) {
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
    }
    FUN_1013838a();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101154f4();
    FUN_10113568();
    FUN_101b7a45();
    local_d0 = (ulonglong)(uint)(DAT_103025a4 * (float)local_d8) << 0x20;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      if (0 < DAT_1038edfc) {
        iVar11 = 0;
        do {
          local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11);
          FUN_101657a1();
          uVar5 = FUN_101655f0();
          uVar6 = FUN_1016534e();
          FUN_10113358();
          local_a0 = (double)CONCAT44(local_a0._4_4_,uVar6);
          local_f8 = (double)CONCAT44(local_f8._4_4_,uVar5);
          FUN_101b5fc7(&local_d0,"Hello %d,%d",uVar5,uVar6);
          switch(DAT_103a4660) {
          case 0:
            FUN_1010c3e4();
            FUN_1012d08c();
            break;
          case 1:
            FUN_1012d079(&local_d0);
            break;
          case 2:
            pcVar7 = "longeeer";
            if (local_f8._0_4_ == (int *)0x0) {
              pcVar7 = "long";
            }
            FUN_1012d08c("Some %s text %d,%d\nOver two lines..",pcVar7,local_f8._0_4_);
            break;
          case 3:
            local_8c[0] = 0;
            FUN_1012e1b7(&local_d0);
            break;
          case 4:
            local_8c[0] = (ulonglong)DAT_102b94bc;
            FUN_1012e1b7(&local_d0);
            break;
          case 5:
            FUN_100fb68f();
            FUN_10141729(&DAT_1034a58d,&DAT_103a4664,DAT_10302814,0,0);
          }
          FUN_10113568();
          iVar11 = (int)local_f0._0_4_ + 1;
        } while (iVar11 < DAT_1038edfc * 10);
      }
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    FUN_101b7a45();
    local_8c[0] = (ulonglong)(uint)(DAT_102b8f18 * (float)local_d8) << 0x20;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10165094(0,1);
      FUN_10164e8b("One",0,0,0);
      FUN_10164e8b("Two",0,0,0);
      FUN_10164e8b("Three",0,0,0);
      FUN_1016601f();
      FUN_100fbc78();
      local_18 = 0;
      FUN_100fbd22(1000,0xbf800000);
      while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
        iVar11 = (int)(float)local_d0;
        while( true ) {
          local_f8 = (double)CONCAT44(local_f8._4_4_,iVar11);
          if (local_d0._4_4_ <= iVar11) break;
          FUN_10165364();
          uVar12 = 0;
          while (uVar12 < 3) {
            local_f0 = (double)CONCAT44(local_f0._4_4_,uVar12);
            FUN_10165606();
            FUN_1012d08c();
            uVar12 = (int)local_f0._0_4_ + 1;
          }
          iVar11 = (int)local_f8._0_4_ + 1;
        }
      }
      FUN_1016304e();
      local_18 = 0xffffffff;
      thunk_FUN_100fbc90();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101155f9();
    FUN_100fb68f();
    FUN_1013838a();
    FUN_101155f9();
    FUN_100fb68f();
    FUN_1013838a();
    FUN_101b7a45();
    local_d0 = (ulonglong)(uint)(DAT_102b8f18 * (float)local_d8) << 0x20;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10165094(DAT_1038ee08,DAT_1038ee0c);
      FUN_10164e8b("Line #",0x80,0,0);
      FUN_10164e8b("One",0,0,0);
      FUN_10164e8b("Two",0,0,0);
      FUN_10164e8b("Three",0,0,0);
      FUN_10164e8b("Four",0,0,0);
      FUN_10164e8b("Five",0,0,0);
      FUN_10164e8b(&DAT_103309a7,0,0,0);
      FUN_1016601f();
      iVar11 = 0;
      do {
        iVar15 = 0;
        FUN_10165364(0,0);
        do {
          bVar4 = FUN_10165606();
          if ((iVar15 != 0 & (bVar4 ^ 1)) == 0) {
            if (iVar15 == 0) {
              FUN_1012d08c();
            }
            else {
              FUN_1012d08c();
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != 7);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x14);
      FUN_1016304e();
    }
    FUN_10131d29();
    FUN_1012d079("Stretch + ScrollX",0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101b79e5();
    FUN_101131fa();
    FUN_1011520a();
    thunk_FUN_10130d81();
    FUN_10137f3c();
    FUN_101154f4();
    FUN_10113568();
    FUN_101b7a45();
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0x8c;
      do {
        FUN_101657a1();
        FUN_1016534e();
        FUN_101655f0();
        FUN_1012d08c();
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_101b79e5();
      iVar11 = 0;
      do {
        FUN_101657a1();
        FUN_10113358();
        FUN_10131ed3();
        FUN_1012d08c("\'%s\'",(&PTR_s_One_1033942a_5_10302434)[iVar11]);
        FUN_10131d29();
        FUN_1012d08c();
        FUN_101b7be1();
        FUN_10131d29();
        FUN_1012d08c();
        FUN_10111871();
        FUN_101b7d94();
        FUN_10111961();
        FUN_10113568();
        iVar11 = iVar11 + 1;
      } while (iVar11 != 3);
      FUN_101b7a45();
      FUN_1016304e();
    }
    local_d0 = (ulonglong)(uint)(DAT_102b8ee0 * (float)local_d8) << 0x20;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = -0xc;
      uVar12 = 0;
      do {
        uVar12 = uVar12 | *(uint *)((int)&DAT_1038ee24 + iVar11) >> 0x12 & 1;
        FUN_10164e8b(*(undefined4 *)((int)&PTR_s__path_one_10302440 + iVar11),
                     *(uint *)((int)&DAT_1038ee24 + iVar11),0,0);
        iVar11 = iVar11 + 4;
      } while (iVar11 != 0);
      if (uVar12 != 0) {
        FUN_101669ae();
      }
      FUN_1016601f();
      iVar11 = 0;
      do {
        uVar5 = FUN_101651b5();
        (&DAT_103a4684)[iVar11] = uVar5;
        iVar11 = iVar11 + 1;
      } while (iVar11 != 3);
      local_f8 = (double)CONCAT44(local_f8._4_4_,(float)((int)local_d4 / 2));
      local_f0 = (double)((ulonglong)local_f0 & 0xffffffff00000000);
      do {
        FUN_10115158();
        FUN_10165364(0,0);
        iVar11 = 0;
        do {
          FUN_10165606();
          FUN_1016514c();
          FUN_1012d08c();
          iVar11 = iVar11 + 1;
        } while (iVar11 != 3);
        iVar11 = (int)local_f0._0_4_ + 1;
        local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11);
      } while (iVar11 != 8);
      FUN_101151af();
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("one",0x10,0x42c80000,0);
      FUN_10164e8b("two",0x10,0x43480000,0);
      FUN_10164e8b("three",0x10,0,0);
      FUN_1016601f();
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          if (iVar11 == 0) {
            FUN_1010c3e4();
            FUN_1012d08c();
          }
          else {
            FUN_1012d08c();
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
      FUN_1016304e();
    }
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b(&DAT_10356101,0x10,0x42c80000,0);
      local_f0 = (double)CONCAT44(local_f0._4_4_,DAT_103013d0 * local_d4);
      FUN_10164e8b(&DAT_10356101,0x10,DAT_103013d0 * local_d4,0);
      FUN_10164e8b(&DAT_10356101,0x10,DAT_10302588 * local_d4,0);
      FUN_10164e8b(&DAT_10356101,0x10,local_f0._0_4_,0);
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          if (iVar11 == 0) {
            FUN_1010c3e4();
            FUN_1012d08c();
          }
          else {
            FUN_1012d08c();
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != 4);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b(&DAT_1033e953,0,0,0);
      FUN_10164e8b(&DAT_1033e687,0,0,0);
      FUN_1016601f();
      FUN_101657a1();
      FUN_1012d08c();
      iVar11 = FUN_100fcb2d();
      local_f0 = (double)CONCAT44(local_f0._4_4_,*(undefined4 *)(iVar11 + 0x70));
      local_d0 = 0;
      cVar2 = FUN_1015f834();
      if (cVar2 != '\0') {
        local_f0 = (double)CONCAT44(local_f0._4_4_,
                                    (float)local_d8 + (float)local_d8 +
                                    local_f0._0_4_ + local_f0._0_4_);
        FUN_10164e8b(&DAT_1033e950,0,0,0);
        FUN_10164e8b(&DAT_1033e684,0,0,0);
        FUN_1016601f();
        FUN_10165364(0,SUB84(local_f0,0));
        FUN_101657a1();
        FUN_1012d08c();
        FUN_101657a1();
        FUN_1012d08c();
        FUN_10165364(0,SUB84(local_f0,0));
        FUN_101657a1();
        FUN_1012d08c();
        FUN_101657a1();
        FUN_1012d08c();
        FUN_1016304e();
      }
      FUN_101657a1();
      FUN_1012d08c();
      FUN_101657a1();
      FUN_1012d08c();
      FUN_101657a1();
      FUN_1012d08c();
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      local_f8 = (double)CONCAT44(local_f8._4_4_,DAT_102b8d94 * (float)local_d8);
      iVar11 = 0;
      do {
        local_f0 = (double)CONCAT44(local_f0._4_4_,(float)iVar11 * (float)local_f8._0_4_);
        iVar15 = FUN_100fcb2d();
        uVar12 = (uint)(*(float *)(iVar15 + 0x70) + *(float *)(iVar15 + 0x70) + local_f0._0_4_);
        local_f0 = (double)(ulonglong)uVar12;
        uStack_e8 = 0;
        uStack_e4 = 0;
        FUN_10165364(0,(float)(int)uVar12);
        FUN_101657a1();
        FUN_1012d08c();
        iVar11 = iVar11 + 1;
      } while (iVar11 != 8);
      FUN_1016304e();
    }
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10165364(0,0);
      FUN_101657a1();
      local_8c[0] = DAT_103027d0;
      local_d0 = CONCAT44(_UNK_10302834,_DAT_10302830);
      uStack_c8 = _UNK_10302838;
      uStack_c4 = _UNK_1030283c;
      FUN_10144b9b("##1",&local_d0,0,local_8c);
      FUN_101657a1();
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_10165364(0,0);
      FUN_101657a1();
      local_8c[0] = DAT_103027d0;
      local_d0 = CONCAT44(_UNK_10302834,_DAT_10302830);
      uStack_c8 = _UNK_10302838;
      uStack_c4 = _UNK_1030283c;
      FUN_10144b9b(&DAT_1033e599,&local_d0,0,local_8c);
      FUN_101657a1();
      FUN_10114a0e(0,0);
      FUN_1012d08c();
      FUN_1012d08c();
      FUN_1016304e();
    }
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_100fcb2d();
      uVar12 = 0;
      do {
        if ((char)((char)(uVar12 / 3) * '\x03' + '\x02') == (char)uVar12) {
          FUN_100fd2b4(0x11,0x41a00000);
          FUN_10165364(0,0);
          FUN_101657a1();
          FUN_1012d08c();
          FUN_100fd4c4();
        }
        else {
          FUN_10165364(0,0);
          FUN_101657a1();
          FUN_1012d08c();
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != 8);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1012d08c();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101b7a45();
    local_d0 = (ulonglong)(uint)(DAT_10302840 * (float)local_d8) << 0x20;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0;
      do {
        iVar15 = 0;
        FUN_10165364(0,0);
        do {
          FUN_101657a1();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 10);
      FUN_1016304e();
    }
    FUN_10114a0e(0,0xbf800000);
    FUN_1012d08c();
    FUN_10131d29();
    FUN_1012d08c();
    local_f0 = (double)CONCAT44(local_f0._4_4_,DAT_10302588 * local_d4);
    local_8c[0] = (ulonglong)(uint)(DAT_10302588 * local_d4);
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_101657a1();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    iVar11 = 0;
    FUN_10114a0e(0,0xbf800000);
    local_8c[0] = (ulonglong)local_f0 & 0xffffffff;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar15 = FUN_100fcb2d();
      local_f0 = (double)CONCAT44(local_f0._4_4_,
                                  DAT_102b9150 * (float)local_d8 +
                                  *(float *)(iVar15 + 0x70) + *(float *)(iVar15 + 0x70));
      do {
        FUN_10165364(0,SUB84(local_f0,0));
        iVar15 = 0;
        do {
          FUN_101657a1();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 3);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10133e42("row bg type",&DAT_1038ee30,&DAT_10355fc2,0xffffffff);
    FUN_10133e42("row bg target",&DAT_1038ee34,"RowBg0",0xffffffff);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10133e42("cell bg type",&DAT_1038ee38,&DAT_10356038,0xffffffff);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        if (DAT_1038ee30 != 0) {
          fVar1 = DAT_102b71d4;
          if (DAT_1038ee30 != 1) {
            fVar1 = (float)iVar11 * DAT_102b71b8 + DAT_102b8c70;
          }
          uStack_c8 = *(undefined4 *)(&UNK_10302848 + (uint)(DAT_1038ee30 == 1) * 4);
          local_d0 = CONCAT44(uStack_c8,fVar1);
          uStack_c4 = 0x3f266666;
          FUN_100fcba2();
          FUN_10165294();
        }
        local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11 + 0x41);
        local_f8 = (double)CONCAT44(local_f8._4_4_,iVar11);
        uVar12 = 0;
        do {
          FUN_10165606();
          FUN_1012d08c();
          if ((((iVar11 - 1U < 2) && (uVar12 != 0)) && (uVar12 < 3)) && (DAT_1038ee38 == 1)) {
            local_d0 = CONCAT44(_UNK_10302854,_DAT_10302850);
            uStack_c8 = _UNK_10302858;
            uStack_c4 = _UNK_1030285c;
            FUN_100fcba2();
            FUN_10165294();
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != 5);
        iVar11 = (int)local_f8._0_4_ + 1;
      } while (iVar11 != 6);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("Name",0x80,0,0);
      FUN_10164e8b("Size",0x10,DAT_102b8f14 * local_d4,0);
      FUN_10164e8b("Type",0x10,DAT_10302784 * local_d4,0);
      FUN_1016601f();
      FUN_101b7e14();
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("small",0,0,0);
      FUN_10164e8b("half",0,0,0);
      FUN_10164e8b("right-align",0,0,0);
      FUN_1016601f();
      local_f0 = (double)CONCAT44(local_f0._4_4_,DAT_102b6c58 * local_d4);
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        if (iVar11 == 0) {
          FUN_10165606();
          FUN_1011520a();
          FUN_10165606();
          FUN_1010c3e4();
          FUN_1011520a();
          FUN_10165606();
          FUN_1011520a();
        }
        FUN_10113358();
        FUN_10165606();
        FUN_1013d285("float0",&DAT_103a4694,0,0x3f800000,"%.3f");
        FUN_10165606();
        FUN_1013d285("float1",&DAT_103a4694,0,0x3f800000,"%.3f");
        FUN_10165606();
        FUN_1013d285();
        FUN_10113568();
        iVar11 = iVar11 + 1;
      } while (iVar11 != 3);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      iVar11 = 0;
      FUN_10164e8b("Apricot",0,0,0);
      FUN_10164e8b("Banana",0,0,0);
      FUN_10164e8b("Cherry",0,0,0);
      FUN_10165364(1,0);
      do {
        FUN_10165606();
        FUN_1016514c();
        FUN_10113358();
        local_d0 = 0;
        FUN_100fd3bc(0xb,&local_d0);
        FUN_1012ff1a("##checkall");
        FUN_100fd4c4();
        FUN_100fcb2d();
        FUN_10114a0e(0);
        FUN_10166178();
        FUN_10113568();
        iVar11 = iVar11 + 1;
      } while (iVar11 != 3);
      local_f0 = (double)((ulonglong)local_f0 & 0xffffffff00000000);
      do {
        FUN_10165364(0,0);
        iVar11 = 0;
        do {
          FUN_101b5fc7(&local_d0,"Cell %d,%d",iVar11);
          FUN_10165606();
          local_8c[0] = 0;
          FUN_10133727();
          iVar11 = iVar11 + 1;
        } while (iVar11 != 3);
        iVar11 = (int)local_f0._0_4_ + 1;
        local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11);
      } while (iVar11 != 5);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    fVar19 = (float10)FUN_10111f20();
    local_48 = (float)fVar19;
    FUN_100fb68f();
    FUN_1013d499("Frozen columns",&DAT_1038ee48,0,2,&DAT_1033b386,0);
    fVar19 = (float10)FUN_10111f20();
    local_4c = (float)fVar19;
    FUN_100fb68f();
    FUN_1013d499("Frozen rows",&DAT_1038ee4c,0,2,&DAT_1033b386,0);
    thunk_FUN_10130d81();
    cVar2 = FUN_10147d77();
    if (cVar2 != '\0') {
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      fVar19 = (float10)FUN_10111f20();
      local_50 = (float)fVar19;
      FUN_100fb68f();
      iVar11 = FUN_100fcb2d();
      FUN_1013d3e7("style.TableAngledHeadersAngle",iVar11 + 0xc4,0xc2480000,0x42480000,"%.0f deg",0)
      ;
      fVar19 = (float10)FUN_10111f20();
      local_54 = (float)fVar19;
      FUN_100fb68f();
      iVar11 = FUN_100fcb2d();
      FUN_1013d2dc("style.TableAngledHeadersTextAlign",iVar11 + 200,0,0x3f800000,"%.2f",0);
      FUN_10149387();
    }
    local_d0 = (ulonglong)(uint)(DAT_102b8f14 * (float)local_d8) << 0x20;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("Track",0xc0,0,0);
      iVar11 = -0x34;
      do {
        FUN_10164e8b(*(undefined4 *)((int)&PTR_s_Banana_103023a4 + iVar11),DAT_1038ee44,0,0);
        iVar11 = iVar11 + 4;
      } while (iVar11 != 0);
      FUN_10165094(DAT_1038ee48,DAT_1038ee4c);
      FUN_101669ae();
      FUN_1016601f();
      iVar11 = 0;
      do {
        FUN_10113358();
        FUN_10165364(0,0);
        FUN_10165606();
        FUN_10131ed3();
        local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11);
        FUN_1012d08c("Track %d");
        iVar11 = 1;
        do {
          cVar2 = FUN_10165606();
          if (cVar2 != '\0') {
            FUN_10113358();
            FUN_1012ff1a(&DAT_10356101);
            FUN_10113568();
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0xe);
        FUN_10113568();
        iVar11 = (int)local_f0._0_4_ + 1;
      } while (iVar11 != 0xc);
      FUN_1016304e();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    FUN_101b79e5();
    thunk_FUN_10130d81();
    FUN_101b7a45();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("One",0,0,0);
      FUN_10164e8b("Two",0,0,0);
      FUN_10164e8b("Three",0,0,0);
      FUN_1016601f();
      iVar11 = 0;
      do {
        FUN_10165364(0,0);
        iVar15 = 0;
        do {
          FUN_10165606();
          FUN_1012d08c();
          iVar15 = iVar15 + 1;
        } while (iVar15 != 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
      FUN_1016304e();
    }
    FUN_1011eaad();
    local_d0 = 0;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b("One",0,0,0);
      FUN_10164e8b("Two",0,0,0);
      FUN_10164e8b("Three",0,0,0);
      FUN_1016601f();
      local_f8 = (double)((ulonglong)local_f8 & 0xffffffff00000000);
      local_f0 = (double)((ulonglong)local_f0 & 0xffffffff00000000);
      do {
        FUN_10165364(0,0);
        iVar11 = 0;
        do {
          FUN_10165606();
          FUN_1012d08c();
          FUN_10114a0e(0);
          FUN_10113358();
          FUN_1012e1ca();
          cVar2 = FUN_10116a0f();
          if (cVar2 != '\0') {
            FUN_1012d08c();
            local_d0 = 0;
            cVar2 = FUN_1012e1b7();
            if (cVar2 != '\0') {
              FUN_1011648c();
            }
            FUN_101165cb();
          }
          FUN_10113568();
          iVar11 = iVar11 + 1;
        } while (iVar11 != 3);
        iVar11 = (int)local_f0._0_4_ + 1;
        local_f8 = (double)CONCAT44(local_f8._4_4_,(int)local_f8._0_4_ + 3);
        local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11);
      } while (iVar11 != 4);
      iVar11 = -1;
      iVar15 = 0;
      do {
        FUN_10113358();
        uVar12 = FUN_101651b5();
        if ((uVar12 >> 0x1b & 1) != 0) {
          iVar11 = iVar15;
        }
        if (((iVar15 == iVar11) && (cVar2 = FUN_1010bfbb(), cVar2 == '\0')) &&
           (cVar2 = FUN_10113f33(), cVar2 != '\0')) {
          FUN_10115ea4("MyPopup",0);
        }
        cVar2 = FUN_10116736("MyPopup");
        if (cVar2 != '\0') {
          if (iVar15 == 3) {
            FUN_1012d08c();
          }
          else {
            FUN_1012d08c("This is a custom popup for Column %d");
          }
          local_d0 = 0;
          cVar2 = FUN_1012e1b7("Close");
          if (cVar2 != '\0') {
            FUN_1011648c();
          }
          FUN_101165cb();
        }
        FUN_10113568();
        iVar15 = iVar15 + 1;
      } while (iVar15 != 4);
      FUN_1016304e();
      FUN_1012d08c("Hovered column: %d",iVar11);
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    FUN_1011eaad();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    thunk_FUN_10130d81();
    iVar11 = 0;
    do {
      FUN_101b5fc7();
      cVar2 = FUN_101494f9(&local_d0,0x20);
      if (cVar2 != '\0') {
        fVar19 = (float10)FUN_101155d9();
        local_58 = (float)fVar19;
        local_8c[0] = (ulonglong)(uint)(local_58 * DAT_102b7100) << 0x20;
        cVar2 = FUN_1015f834();
        if (cVar2 != '\0') {
          iVar16 = 0;
          FUN_10164e8b("One",0,0);
          FUN_10164e8b("Two",0,0);
          FUN_10164e8b("Three",0,0);
          FUN_1016601f();
          local_f0 = (double)CONCAT44(local_f0._4_4_,iVar11);
          iVar15 = 9;
          if (iVar11 == 1) {
            iVar15 = 0x1b;
          }
          do {
            FUN_101657a1();
            FUN_1012d08c("this cell %d");
            iVar16 = iVar16 + 1;
          } while (iVar15 != iVar16);
          FUN_1016304e();
          iVar11 = (int)local_f0._0_4_;
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 3);
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4750) &&
       (FUN_1022c0d0(), DAT_103a4750 == -1)) {
      local_18 = 1;
      DAT_103a4748 = 0;
      DAT_103a4744 = '\0';
      DAT_103a474c = 0;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      FUN_1022c180();
    }
    if (DAT_103a4744 == '\0') {
      if (DAT_103a4748 < 0x32) {
        if (DAT_103a4748 == 0) {
          iVar11 = 0x32;
        }
        else {
          iVar15 = DAT_103a4748 / 2 + DAT_103a4748;
          iVar11 = 0x32;
          if (0x32 < iVar15) {
            iVar11 = iVar15;
          }
        }
        iVar15 = FUN_100fa1fa();
        if (DAT_103a474c != 0) {
          FUN_1025b2d0();
          FUN_100fa2cb();
        }
        DAT_103a4748 = iVar11;
        DAT_103a474c = iVar15;
        if (DAT_103a4744 == '\0') goto code_r0x101a9b4c;
      }
      else {
code_r0x101a9b4c:
        iVar15 = DAT_103a474c;
        iVar11 = 0;
        do {
          *(undefined8 *)(iVar15 + iVar11) = 0;
          *(undefined4 *)(iVar15 + 8 + iVar11) = 0;
          iVar11 = iVar11 + 0xc;
        } while (iVar11 != 600);
      }
      DAT_103a4744 = '\x01';
      piVar14 = (int *)(DAT_103a474c + 8);
      uVar12 = 0;
      do {
        piVar14[-2] = uVar12;
        piVar14[-1] = (int)(&PTR_s_Banana_103023a4)[uVar12 % 0xf];
        *piVar14 = (int)((uVar12 - 1) * uVar12) % 0x14;
        piVar14 = piVar14 + 3;
        bVar18 = uVar12 < 0x31;
        uVar12 = uVar12 + 1;
      } while (bVar18);
    }
    local_18 = 0xffffffff;
    FUN_101b79e5();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81();
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101b7a45();
    local_d0 = (ulonglong)(uint)(DAT_103013d0 * (float)local_d8) << 0x20;
    cVar2 = FUN_1015f834();
    if (cVar2 != '\0') {
      FUN_10164e8b(&DAT_1033cb72,0x14,0,0);
      FUN_10164e8b("Name",0x10,0,1);
      FUN_10164e8b("Action",0x210,0,2);
      FUN_10164e8b("Quantity",0x8008,0,3);
      FUN_10165094(0,1);
      FUN_1016601f();
      iVar11 = FUN_10165a3a();
      if ((iVar11 != 0) && (*(char *)(iVar11 + 8) == '\x01')) {
        if (DAT_103a4744 == '\x01') {
          _DAT_103a4794 = iVar11;
          FUN_1026fb00(DAT_103a474c,0x32,0xc,&DAT_101b87b0);
        }
        _DAT_103a4794 = 0;
        *(undefined1 *)(iVar11 + 8) = 0;
      }
      FUN_100fbc78();
      local_18 = 2;
      uVar5 = 0x32;
      if (DAT_103a4744 == '\0') {
        uVar5 = 0;
      }
      FUN_100fbd22(uVar5,0xbf800000);
      while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
        iVar11 = (int)(float)local_d0;
        while (iVar11 < local_d0._4_4_) {
          local_a0 = (double)CONCAT44(local_a0._4_4_,iVar11);
          local_f0._0_4_ = (float)DAT_103a474c;
          local_f8 = (double)CONCAT44(local_f8._4_4_,iVar11 * 3);
          FUN_10113358();
          FUN_10165364(0);
          FUN_101657a1();
          local_f0 = (double)CONCAT44(local_f0._4_4_,(int)local_f0._0_4_ + (int)local_f8._0_4_ * 4);
          FUN_1012d08c("%04d");
          FUN_101657a1();
          FUN_1012d079(*(undefined4 *)((int)local_f0._0_4_ + 4));
          FUN_101657a1();
          FUN_1012e1ca();
          FUN_101657a1();
          FUN_1012d08c();
          FUN_10113568();
          iVar11 = (int)local_a0._0_4_ + 1;
        }
      }
      FUN_1016304e();
      local_18 = 0xffffffff;
      thunk_FUN_100fbc90();
    }
    FUN_10149387();
  }
  if (local_100._0_1_ != '\0') {
    FUN_1014949d((byte)local_104 ^ 1,0);
  }
  cVar2 = FUN_10147d77();
  if (cVar2 != '\0') {
    FUN_101032c6();
    local_30 = _PTR_s_Selectable_1033987c_6_103023f0;
    local_40 = PTR_s_Text_103310c6_0x13_103023e0;
    puStack_3c = PTR_s_Button_10335ccb_6_103023e4;
    puStack_38 = PTR_s_SmallButton_103023e8;
    puStack_34 = PTR_s_FillButton_103023ec;
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4760) &&
       (FUN_1022c0d0(), DAT_103a4760 == -1)) {
      DAT_103a4758._4_4_ = (float)local_d8 * DAT_102b8f14;
      DAT_103a4758._0_4_ = 0;
      local_18 = 0xffffffff;
      FUN_1022c180();
    }
    cVar2 = FUN_10147d77();
    if (cVar2 != '\0') {
      FUN_101b79e5();
      FUN_1011520a();
      cVar2 = FUN_10148b8c("Features:",0x20);
      if (cVar2 != '\0') {
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        FUN_10149387();
      }
      cVar2 = FUN_10148b8c("Decorations:",0x20);
      if (cVar2 != '\0') {
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10149387();
      }
      cVar2 = FUN_10148b8c("Sizing:",0x20);
      if (cVar2 != '\0') {
        FUN_101b7a50();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10149387();
      }
      cVar2 = FUN_10148b8c("Padding:",0x20);
      if (cVar2 != '\0') {
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        FUN_10149387();
      }
      cVar2 = FUN_10148b8c("Scrolling:",0x20);
      if (cVar2 != '\0') {
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_101155f9();
        FUN_100fb68f();
        FUN_1013838a();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_101155f9();
        FUN_100fb68f();
        FUN_1013838a();
        FUN_10149387();
      }
      cVar2 = FUN_10148b8c("Sorting:",0x20);
      if (cVar2 != '\0') {
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10149387();
      }
      cVar2 = FUN_10148b8c("Headers:",0x20);
      if (cVar2 != '\0') {
        FUN_1012ff1a("show_headers",&DAT_1038ee71);
        thunk_FUN_10130d81();
        thunk_FUN_10130d81();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10149387();
      }
      cVar2 = FUN_10148b8c("Other:",0x20);
      if (cVar2 != '\0') {
        FUN_1012ff1a("show_wrapped_text",&DAT_103a476c);
        FUN_10137fb6();
        iVar11 = FUN_100fcb2d();
        FUN_10114a0e(0,*(undefined4 *)(iVar11 + 100));
        FUN_1012ff1a("outer_size",&DAT_1038ee70);
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10137f3c();
        FUN_10137f3c();
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1013838a();
        FUN_10133e14();
        FUN_10149387();
      }
      FUN_101154f4();
      FUN_101b7a45();
      FUN_10131d29();
      FUN_10149387();
    }
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a477c) &&
       (FUN_1022c0d0(), DAT_103a477c == -1)) {
      local_18 = 4;
      DAT_103a4774 = 0;
      DAT_103a4770 = 0;
      DAT_103a4778 = 0;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      FUN_1022c180();
    }
    if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a478c) &&
       (FUN_1022c0d0(), DAT_103a478c == -1)) {
      local_18 = 5;
      DAT_103a4784 = 0;
      DAT_103a4780 = 0;
      DAT_103a4788 = (int *)0x0;
      FUN_1022c3a0();
      local_18 = 0xffffffff;
      FUN_1022c180();
    }
    iVar11 = DAT_1038ee6c;
    if (DAT_103a4770 != DAT_1038ee6c) {
      iVar15 = DAT_103a4774;
      iVar16 = DAT_103a4778;
      if (DAT_103a4774 < DAT_1038ee6c) {
        if (DAT_103a4774 == 0) {
          iVar15 = 8;
        }
        else {
          iVar15 = DAT_103a4774 / 2 + DAT_103a4774;
        }
        if (iVar15 <= DAT_1038ee6c) {
          iVar15 = DAT_1038ee6c;
        }
        iVar16 = FUN_100fa1fa();
        if (DAT_103a4778 != 0) {
          local_f0 = (double)CONCAT44(local_f0._4_4_,iVar16);
          FUN_1025b2d0();
          FUN_100fa2cb();
          iVar16 = (int)local_f0._0_4_;
        }
      }
      DAT_103a4778 = iVar16;
      DAT_103a4774 = iVar15;
      iVar15 = iVar11 - DAT_103a4770;
      if (iVar15 != 0 && DAT_103a4770 <= iVar11) {
        puVar8 = (undefined8 *)(DAT_103a4770 * 0xc + DAT_103a4778);
        do {
          *puVar8 = 0;
          *(undefined4 *)(puVar8 + 1) = 0;
          puVar8 = (undefined8 *)((int)puVar8 + 0xc);
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      DAT_103a4770 = iVar11;
      if (0 < DAT_1038ee6c) {
        puVar13 = (undefined4 *)(DAT_103a4778 + 8);
        uVar12 = 0;
        do {
          puVar13[-2] = uVar12;
          puVar13[-1] = (&PTR_s_Banana_103023a4)[uVar12 % 0xf];
          uVar5 = 0;
          if ((uVar12 / 0xf) * 0xf + 4 == uVar12) {
            uVar5 = 0x14;
          }
          if ((uVar12 / 0xf) * 0xf + 3 == uVar12) {
            uVar5 = 10;
          }
          *puVar13 = uVar5;
          uVar12 = uVar12 + 1;
          puVar13 = puVar13 + 3;
        } while ((int)uVar12 < DAT_1038ee6c);
      }
    }
    local_18 = 0xffffffff;
    local_d8 = (float *)FUN_10111ef5();
    if (DAT_1038ee70 == '\0') {
      local_d0 = 0;
    }
    else {
      local_d0 = CONCAT44(DAT_103a4758._4_4_,(undefined4)DAT_103a4758);
    }
    local_d4 = *local_d8;
    cVar2 = FUN_1015f834();
    if (cVar2 == '\0') {
      pfVar17 = (float *)0x0;
      local_f0 = 0.0;
      local_f8 = 0.0;
      local_a0 = 0.0;
      local_100 = 0.0;
    }
    else {
      FUN_10164e8b(&DAT_1033cb72,DAT_103a4754 | 0x94,0,0);
      FUN_10164e8b("Name",DAT_103a4754 | 0x10,0,1);
      FUN_10164e8b("Action",DAT_103a4754 | 0x210,0,2);
      FUN_10164e8b("Quantity",DAT_103a4754 | 0x8000,0,3);
      FUN_10164e8b("Description",~DAT_1038ee5c >> 0xd & 8 | DAT_103a4754,0,4);
      FUN_10164e8b("Hidden",DAT_103a4754 | 0x202,0,0);
      FUN_10165094(DAT_1038ee64,DAT_1038ee68);
      iVar11 = FUN_10165a3a();
      if (iVar11 != 0) {
        if (*(char *)(iVar11 + 8) != '\0') {
          DAT_103a4790 = 1;
        }
        if ((1 < DAT_103a4770 & DAT_103a4790) == 1) {
          _DAT_103a4794 = iVar11;
          FUN_1026fb00(DAT_103a4778,DAT_103a4770,0xc,&DAT_101b87b0);
          _DAT_103a4794 = 0;
          *(undefined1 *)(iVar11 + 8) = 0;
        }
      }
      DAT_103a4790 = 0;
      local_104 = (float *)FUN_101651b5();
      if ((DAT_1038ee71 == '\x01') &&
         (((DAT_103a4754 & 0x40000) == 0 || (FUN_101669ae(), DAT_1038ee71 == '\x01')))) {
        FUN_1016601f();
      }
      FUN_100fbc78();
      local_18 = 6;
      FUN_100fbd22(DAT_103a4770,0xbf800000);
      while (cVar2 = FUN_100fc2ca(), cVar2 != '\0') {
        iVar11 = (int)(float)local_d0;
        while (iVar11 < local_d0._4_4_) {
          local_a0 = (double)CONCAT44(local_a0._4_4_,iVar11);
          piVar14 = (int *)(DAT_103a4778 + iVar11 * 0xc);
          local_f0 = (double)CONCAT44(local_f0._4_4_,DAT_103a4788 + DAT_103a4780);
          local_f8 = (double)CONCAT44(local_f8._4_4_,piVar14);
          piVar10 = DAT_103a4788;
          do {
            piVar9 = piVar10;
            if (DAT_103a4788 + DAT_103a4780 <= piVar9) break;
            piVar10 = piVar9 + 1;
          } while (*piVar9 != *piVar14);
          local_100 = (double)CONCAT44(local_100._4_4_,piVar9);
          local_18 = 6;
          FUN_10113358();
          FUN_10165364(0);
          FUN_10165606();
          FUN_101b5fc7();
          switch(DAT_1038ee60) {
          case 0:
            FUN_1012d079(local_8c);
            break;
          case 1:
            local_94 = 0;
            FUN_1012e1b7(local_8c);
            break;
          case 2:
            FUN_1012e1ca();
            break;
          case 3:
            local_94 = (ulonglong)DAT_102b94bc;
            FUN_1012e1b7(local_8c);
            break;
          default:
            if ((DAT_1038ee60 & 0xfffffffe) == 4) {
              uVar5 = 0;
              if (DAT_1038ee60 == 5) {
                uVar5 = 0x12;
              }
              local_94 = (ulonglong)DAT_103a4764 << 0x20;
              cVar2 = FUN_10133727(local_8c,local_100._0_4_ < (uint)local_f0._0_4_,uVar5);
              if (cVar2 != '\0') {
                iVar11 = FUN_1010330d();
                if (*(char *)(iVar11 + 0xd4) == '\x01') {
                  if (local_100._0_4_ < (uint)local_f0._0_4_) {
                    piVar14 = DAT_103a4788 + DAT_103a4780;
                    piVar10 = DAT_103a4788;
                    if (0 < DAT_103a4780) {
                      do {
                        if (*piVar10 == *local_f8._0_4_) break;
                        piVar10 = piVar10 + 1;
                      } while (piVar10 < piVar14);
                    }
                    if (piVar10 < piVar14) {
                      if (piVar10 < piVar14 + -1) {
                        *piVar10 = piVar14[-1];
                      }
                      DAT_103a4780 = DAT_103a4780 + -1;
                    }
                  }
                  else {
                    if (DAT_103a4780 == DAT_103a4784) {
                      if (DAT_103a4780 == 0) {
                        iVar11 = 8;
                      }
                      else {
                        iVar11 = DAT_103a4780 / 2 + DAT_103a4780;
                      }
                      iVar15 = DAT_103a4780 + 1;
                      if (DAT_103a4780 + 1 < iVar11) {
                        iVar15 = iVar11;
                      }
                      local_f0 = (double)CONCAT44(local_f0._4_4_,iVar15);
                      piVar14 = (int *)FUN_100fa1fa();
                      if (DAT_103a4788 != (int *)0x0) {
                        local_100 = (double)CONCAT44(local_100._4_4_,piVar14);
                        FUN_1025b2d0();
                        FUN_100fa2cb();
                        piVar14 = local_100._0_4_;
                      }
                      DAT_103a4784 = (int)local_f0._0_4_;
                      DAT_103a4788 = piVar14;
                    }
                    DAT_103a4788[DAT_103a4780] = *local_f8._0_4_;
                    DAT_103a4780 = DAT_103a4780 + 1;
                  }
                }
                else {
                  if (DAT_103a4788 != (int *)0x0) {
                    DAT_103a4784 = 0;
                    DAT_103a4780 = 0;
                    FUN_100fa2cb();
                    DAT_103a4788 = (int *)0x0;
                  }
                  if (DAT_103a4780 == 0) {
                    iVar11 = 8;
                  }
                  else {
                    iVar11 = DAT_103a4780 / 2 + DAT_103a4780;
                  }
                  iVar15 = DAT_103a4780 + 1;
                  if (DAT_103a4780 + 1 < iVar11) {
                    iVar15 = iVar11;
                  }
                  local_f0 = (double)CONCAT44(local_f0._4_4_,iVar15);
                  piVar14 = (int *)FUN_100fa1fa();
                  if (DAT_103a4788 != (int *)0x0) {
                    local_100 = (double)CONCAT44(local_100._4_4_,piVar14);
                    FUN_1025b2d0();
                    FUN_100fa2cb();
                    piVar14 = local_100._0_4_;
                  }
                  DAT_103a4784 = (int)local_f0._0_4_;
                  DAT_103a4788 = piVar14;
                  piVar14[DAT_103a4780] = *local_f8._0_4_;
                  DAT_103a4780 = DAT_103a4780 + 1;
                }
              }
            }
          }
          local_18 = 6;
          cVar2 = FUN_10165606();
          if (cVar2 != '\0') {
            FUN_1012d079(*(undefined4 *)((int)local_f8._0_4_ + 4));
          }
          cVar2 = FUN_10165606();
          if (cVar2 != '\0') {
            cVar2 = FUN_1012e1ca();
            if (cVar2 != '\0') {
              *(int *)((int)local_f8._0_4_ + 8) = *(int *)((int)local_f8._0_4_ + 8) + 1;
            }
            if ((((uint)local_104 >> 0x1a & 1) != 0) && (cVar2 = FUN_1010bf22(), cVar2 != '\0')) {
              DAT_103a4790 = 1;
            }
            FUN_10114a0e(0);
            cVar2 = FUN_1012e1ca();
            if (cVar2 != '\0') {
              *(int *)((int)local_f8._0_4_ + 8) = *(int *)((int)local_f8._0_4_ + 8) + -1;
            }
            if ((((uint)local_104 >> 0x1a & 1) != 0) && (cVar2 = FUN_1010bf22(), cVar2 != '\0')) {
              DAT_103a4790 = 1;
            }
          }
          cVar2 = FUN_10165606();
          if (cVar2 != '\0') {
            FUN_1012d08c(&DAT_1033b386);
          }
          FUN_10165606();
          if (DAT_103a476c == '\x01') {
            FUN_1012d238();
          }
          else {
            FUN_1012d08c();
          }
          cVar2 = FUN_10165606();
          if (cVar2 != '\0') {
            FUN_1012d08c();
          }
          FUN_10113568();
          iVar11 = (int)local_a0._0_4_ + 1;
        }
      }
      fVar19 = (float10)FUN_101158db();
      local_5c = (float)fVar19;
      local_f0 = (double)CONCAT44(local_f0._4_4_,local_5c);
      fVar19 = (float10)FUN_101158c9();
      local_60 = (float)fVar19;
      local_a0 = (double)CONCAT44(local_a0._4_4_,local_60);
      fVar19 = (float10)FUN_101158ff();
      local_64 = (float)fVar19;
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_64);
      fVar19 = (float10)FUN_101158ed();
      local_6c = (float)fVar19;
      local_68 = local_6c;
      local_104 = (float *)FUN_10111ef5();
      FUN_1016304e();
      local_18 = 0xffffffff;
      thunk_FUN_100fbc90();
      local_f8 = (double)(float)local_f8._0_4_;
      local_100 = (double)local_f0._0_4_;
      local_f0 = (double)local_6c;
      local_a0 = (double)local_a0._0_4_;
      pfVar17 = local_104;
    }
    FUN_1012ff1a("Debug details",&DAT_103a4791);
    if ((pfVar17 != (float *)0x0) && (DAT_103a4791 != '\0')) {
      FUN_10114a0e(0,0);
      if (pfVar17 == local_d8) {
        FUN_1012d08c(": DrawCmd: +%d (in same window)",(int)*pfVar17 - (int)local_d4);
      }
      else {
        FUN_1012d08c(": DrawCmd: +%d (in child window), Scroll: (%.f/%.f) (%.f/%.f)",
                     (int)*pfVar17 + -1,local_a0,local_f0,local_100,local_f8);
      }
    }
    FUN_10149387();
  }
  FUN_10113568();
  FUN_101b7f20();
  if (DAT_103a4559 == '\x01') {
    FUN_100fd4c4();
  }
code_r0x101aae76:
  *unaff_FS_OFFSET = local_20;
  return;
}

