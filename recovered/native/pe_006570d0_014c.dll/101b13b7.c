/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b13b7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b13b7(void)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  size_t sVar13;
  int iVar14;
  uint uVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  float fVar17;
  undefined1 auStack_118 [4];
  uint local_114;
  undefined1 local_110 [12];
  int *local_104;
  byte local_fd;
  int *local_fc;
  int local_f8;
  int *local_f4;
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  int local_b0;
  undefined4 local_ac;
  uint local_a8;
  int local_a4;
  char *local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined8 local_70;
  float local_30;
  float local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_118;
  local_18 = 0xffffffff;
  local_1c = &LAB_101bcdd0;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  cVar3 = FUN_10147d77("Selection State & Multi-Select");
  if (cVar3 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0xb30,"Widgets/Selection State & Multi-Select");
    FUN_1011eaad();
    FUN_1012d551("Wiki page:");
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c("imgui/wiki/Multi-Select","https://github.com/ocornut/imgui/wiki/Multi-Select");
    cVar3 = FUN_10147d77("Single-Select");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xb3a,"Widgets/Selection State/Single-Select");
      iVar14 = 0;
      do {
        FUN_101b5fc7(&local_70,"Object %d",iVar14);
        local_e0 = 0;
        cVar3 = FUN_10133727(&local_70,iVar14 == DAT_1038abac,0,&local_e0);
        if (cVar3 != '\0') {
          DAT_1038abac = iVar14;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 5);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (manual/simplified, without BeginMultiSelect)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xb4a,
                   "Widgets/Selection State/Multi-Select (manual/simplified, without BeginMultiSelect)"
                  );
      FUN_1011eaad();
      iVar14 = 0;
      do {
        FUN_101b5fc7(&local_70,"Object %d",iVar14);
        local_e0 = 0;
        cVar3 = FUN_10133727(&local_70,(&DAT_103a4056)[iVar14],0,&local_e0);
        if (cVar3 != '\0') {
          iVar6 = FUN_1010330d();
          if (*(char *)(iVar6 + 0xd4) == '\0') {
            DAT_103a405a = 0;
            _DAT_103a4056 = 0;
          }
          (&DAT_103a4056)[iVar14] = (&DAT_103a4056)[iVar14] ^ 1;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != 5);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xb60,"Widgets/Selection State/Multi-Select");
      FUN_1012d08c("Supported features:");
      FUN_1012d551("Keyboard navigation (arrows, page up/down, home/end, space).");
      FUN_1012d551("Ctrl modifier to preserve and toggle selection.");
      FUN_1012d551("Shift modifier for range selection.");
      FUN_1012d551("Ctrl+A to select all.");
      FUN_1012d551("Escape to clear selection.");
      FUN_1012d551("Click and drag to box-select.");
      FUN_1012d08c(
                  "Tip: Use \'Demo->Tools->Debug Log->Selection\' to see selection requests as they happen."
                  );
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a407c) &&
         (FUN_1022c0d0(&DAT_103a407c), DAT_103a407c == -1)) {
        local_18 = 0;
        FUN_1014b032();
        FUN_1022c3a0(&LAB_101b607c);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a407c);
      }
      FUN_1012d08c("Selection: %d/%d",DAT_103a405c,0x32);
      fVar16 = (float10)FUN_10111f20();
      local_74 = (float)fVar16;
      local_70 = CONCAT44(local_74 * DAT_102b7110,0x80800000);
      cVar3 = FUN_1010c081("##Basket",&local_70,0x88,0);
      if (cVar3 != '\0') {
        uVar7 = FUN_1014a0eb(0x240,DAT_103a405c,0x32);
        FUN_1014b266(uVar7);
        uVar15 = 0;
        do {
          uVar8 = uVar15 - 0x1c;
          if (uVar15 < 0x1c) {
            uVar8 = uVar15;
          }
          FUN_101b5fc7(&local_70,"Object %05d: %s",uVar15,(&PTR_s_Artichoke_1030217c)[uVar8]);
          uVar4 = FUN_1014b156(uVar15);
          local_110[0] = uVar4;
          FUN_1014ae21(uVar15,0);
          local_e0 = 0;
          FUN_10133727(&local_70,local_110[0],0,&local_e0);
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0x32);
        uVar7 = FUN_1014a9f9();
        FUN_1014b266(uVar7);
      }
      FUN_1010c644();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (with clipper)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xb89,"Widgets/Selection State/Multi-Select (with clipper)");
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a40a0) &&
         (FUN_1022c0d0(&DAT_103a40a0), DAT_103a40a0 == -1)) {
        local_18 = 1;
        FUN_1014b032();
        FUN_1022c3a0(&LAB_101b6124);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a40a0);
      }
      FUN_1012d08c("Added features:");
      FUN_1012d551("Using ImGuiListClipper.");
      FUN_1012d08c("Selection: %d/%d",DAT_103a4080,10000);
      fVar16 = (float10)FUN_10111f20();
      local_78 = (float)fVar16;
      local_70 = CONCAT44(local_78 * DAT_102b7110,0x80800000);
      cVar3 = FUN_1010c081("##Basket",&local_70,0x88,0);
      if (cVar3 != '\0') {
        uVar7 = FUN_1014a0eb(0x240,DAT_103a4080,10000);
        local_110._0_4_ = uVar7;
        FUN_1014b266(uVar7);
        FUN_100fbc78();
        local_18 = 2;
        FUN_100fbd22(10000,0xbf800000);
        uVar15 = *(uint *)(local_110._0_4_ + 0x10);
        if ((*(uint *)(local_110._0_4_ + 0x14) & uVar15) != 0xffffffff) {
          FUN_100fc09e(uVar15,uVar15 + 1);
        }
        while (cVar3 = FUN_100fc2ca(), cVar3 != '\0') {
          iVar14 = (int)local_e0;
          while (iVar14 < local_e0._4_4_) {
            FUN_101b5fc7(&local_70,"Object %05d: %s",iVar14,
                         (&PTR_s_Artichoke_1030217c)[iVar14 % 0x1c]);
            local_110._0_4_ = iVar14;
            uVar4 = FUN_1014b156(iVar14);
            local_114 = CONCAT31(local_114._1_3_,uVar4);
            FUN_1014ae21(local_110._0_4_,(int)local_110._0_4_ >> 0x1f);
            local_f0 = 0;
            FUN_10133727(&local_70,local_114 & 0xff,0,&local_f0);
            iVar14 = local_110._0_4_ + 1;
          }
        }
        uVar7 = FUN_1014a9f9();
        FUN_1014b266(uVar7);
        local_18 = 0xffffffff;
        thunk_FUN_100fbc90();
      }
      FUN_1010c644();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (with deletion)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",3000,"Widgets/Selection State/Multi-Select (with deletion)");
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a40b0) &&
         (FUN_1022c0d0(&DAT_103a40b0), DAT_103a40b0 == -1)) {
        local_18 = 3;
        DAT_103a40a8 = 0;
        DAT_103a40a4 = 0;
        DAT_103a40ac = 0;
        FUN_1022c3a0(&LAB_101b61cc);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a40b0);
      }
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a40d4) &&
         (FUN_1022c0d0(&DAT_103a40d4), DAT_103a40d4 == -1)) {
        local_18 = 4;
        FUN_101b61e0();
        FUN_1022c3a0(&LAB_101b6244);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a40d4);
      }
      _DAT_103a40bc = &DAT_103a40a4;
      _DAT_103a40c0 = &LAB_101b7222;
      FUN_1012d08c("Added features:");
      FUN_1012d551("Dynamic list with Delete key support.");
      FUN_1012d08c("Selection size: %d/%d",DAT_103a40b4,DAT_103a40a4);
      if (DAT_103a40d8 == 0) {
        iVar14 = 0x32;
        do {
          local_110._0_4_ = DAT_103a40d8;
          DAT_103a40d8 = DAT_103a40d8 + 1;
          uVar15 = DAT_103a40a8;
          uVar8 = DAT_103a40ac;
          if (DAT_103a40a4 == DAT_103a40a8) {
            if (DAT_103a40a4 == 0) {
              uVar8 = 8;
            }
            else {
              uVar8 = (int)DAT_103a40a4 / 2 + DAT_103a40a4;
            }
            uVar15 = DAT_103a40a4 + 1;
            if ((int)(DAT_103a40a4 + 1) < (int)uVar8) {
              uVar15 = uVar8;
            }
            local_18 = 0xffffffff;
            uVar8 = FUN_100fa1fa(uVar15 * 4);
            if (DAT_103a40ac != 0) {
              local_114 = uVar8;
              FUN_1025b2d0(uVar8,DAT_103a40ac,DAT_103a40a4 << 2);
              FUN_100fa2cb(DAT_103a40ac);
              uVar8 = local_114;
            }
          }
          DAT_103a40ac = uVar8;
          DAT_103a40a8 = uVar15;
          *(undefined4 *)(DAT_103a40ac + DAT_103a40a4 * 4) = local_110._0_4_;
          DAT_103a40a4 = DAT_103a40a4 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_18 = 0xffffffff;
      cVar3 = FUN_1012e1ca("Add 20 items");
      if (cVar3 != '\0') {
        iVar14 = 0x14;
        do {
          local_110._0_4_ = DAT_103a40d8;
          DAT_103a40d8 = DAT_103a40d8 + 1;
          uVar15 = DAT_103a40a8;
          uVar8 = DAT_103a40ac;
          if (DAT_103a40a4 == DAT_103a40a8) {
            if (DAT_103a40a4 == 0) {
              uVar8 = 8;
            }
            else {
              uVar8 = (int)DAT_103a40a4 / 2 + DAT_103a40a4;
            }
            uVar15 = DAT_103a40a4 + 1;
            if ((int)(DAT_103a40a4 + 1) < (int)uVar8) {
              uVar15 = uVar8;
            }
            local_18 = 0xffffffff;
            uVar8 = FUN_100fa1fa(uVar15 * 4);
            if (DAT_103a40ac != 0) {
              local_114 = uVar8;
              FUN_1025b2d0(uVar8,DAT_103a40ac,DAT_103a40a4 << 2);
              FUN_100fa2cb(DAT_103a40ac);
              uVar8 = local_114;
            }
          }
          DAT_103a40ac = uVar8;
          DAT_103a40a8 = uVar15;
          *(undefined4 *)(DAT_103a40ac + DAT_103a40a4 * 4) = local_110._0_4_;
          DAT_103a40a4 = DAT_103a40a4 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_18 = 0xffffffff;
      FUN_10114a0e(0,0xbf800000);
      cVar3 = FUN_1012e1ca("Remove 20 items");
      if ((cVar3 != '\0') && (0 < (int)DAT_103a40a4)) {
        uVar15 = 0x14;
        if (DAT_103a40a4 < 0x14) {
          uVar15 = DAT_103a40a4;
        }
        uVar15 = uVar15 + 1;
        do {
          FUN_1014b226(*(undefined4 *)((DAT_103a40ac - 4) + DAT_103a40a4 * 4),0);
          DAT_103a40a4 = DAT_103a40a4 - 1;
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
      }
      fVar16 = (float10)FUN_101155d9();
      local_7c = (float)fVar16;
      local_70 = (ulonglong)(uint)((float)(int)DAT_103a40a4 * local_7c) << 0x20;
      FUN_10111df6(&local_70);
      fVar16 = (float10)FUN_10111f20();
      local_80 = (float)fVar16;
      local_70 = CONCAT44(local_80 * DAT_102b7110,0x80800000);
      cVar3 = FUN_1010c081("##Basket",&local_70,0x88,0);
      if (cVar3 != '\0') {
        uVar7 = FUN_1014a0eb(0x240,DAT_103a40b4,DAT_103a40a4);
        FUN_1014b266(uVar7);
        bVar5 = FUN_10110653(0x20a,1);
        bVar5 = 0 < DAT_103a40b4 & bVar5;
        local_114 = CONCAT31(local_114._1_3_,bVar5);
        if (bVar5 == 1) {
          uVar7 = FUN_101b62ec(uVar7,DAT_103a40a4);
          local_110._0_4_ = uVar7;
        }
        else {
          local_110._0_4_ = 0xffffffff;
        }
        if (0 < (int)DAT_103a40a4) {
          iVar14 = 0;
          do {
            uVar15 = *(uint *)(DAT_103a40ac + iVar14 * 4);
            FUN_101b5fc7(&local_70,"Object %05u: %s",uVar15,
                         (&PTR_s_Artichoke_1030217c)[uVar15 % 0x1c]);
            uVar4 = FUN_1014b156(uVar15);
            FUN_1014ae21(iVar14,0);
            local_e0 = 0;
            FUN_10133727(&local_70,uVar4,0,&local_e0);
            if (local_110._0_4_ == iVar14) {
              FUN_10112577(0xffffffff);
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)DAT_103a40a4);
        }
        uVar7 = FUN_1014a9f9();
        FUN_1014b266(uVar7);
        if ((char)local_114 != '\0') {
          FUN_101b635e(uVar7,&DAT_103a40a4,local_110._0_4_);
        }
      }
      FUN_1010c644();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (dual list box)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xbf5,"Widgets/Selection State/Multi-Select (dual list box)");
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4138) &&
         (FUN_1022c0d0(&DAT_103a4138), DAT_103a4138 == -1)) {
        local_18 = 5;
        FUN_101b6578();
        FUN_1022c3a0(&LAB_101b68f4);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a4138);
      }
      if (DAT_103a40e8 == 0 && DAT_103a40dc == 0) {
        iVar14 = 0;
        iVar6 = 0;
        do {
          iVar10 = DAT_103a40e0;
          iVar9 = DAT_103a40e4;
          if (iVar14 == DAT_103a40e0) {
            if (iVar14 == 0) {
              iVar9 = 8;
            }
            else {
              iVar9 = iVar14 / 2 + iVar14;
            }
            iVar10 = iVar14 + 1;
            if (iVar14 + 1 < iVar9) {
              iVar10 = iVar9;
            }
            local_18 = 0xffffffff;
            iVar9 = FUN_100fa1fa(iVar10 * 4);
            iVar14 = DAT_103a40dc;
            if (DAT_103a40e4 != 0) {
              local_110._0_4_ = iVar9;
              FUN_1025b2d0(iVar9,DAT_103a40e4,DAT_103a40dc << 2);
              FUN_100fa2cb(DAT_103a40e4);
              iVar14 = DAT_103a40dc;
              iVar9 = local_110._0_4_;
            }
          }
          DAT_103a40e4 = iVar9;
          DAT_103a40e0 = iVar10;
          *(int *)(DAT_103a40e4 + iVar14 * 4) = iVar6;
          iVar14 = DAT_103a40dc + 1;
          iVar6 = iVar6 + 1;
          DAT_103a40dc = iVar14;
        } while (iVar6 != 0x1c);
      }
      local_18 = 0xffffffff;
      FUN_101b68fe();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (in a table)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xc05,"Widgets/Selection State/Multi-Select (in a table)");
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a415c) &&
         (FUN_1022c0d0(&DAT_103a415c), DAT_103a415c == -1)) {
        local_18 = 6;
        FUN_1014b032();
        FUN_1022c3a0(&LAB_101b6cd2);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a415c);
      }
      FUN_1012d08c("Selection: %d/%d",DAT_103a413c,10000);
      fVar16 = (float10)FUN_10111f20();
      local_84 = (float)fVar16;
      local_70 = (ulonglong)(uint)(local_84 * DAT_102b7110) << 0x20;
      cVar3 = FUN_1015f834("##Basket",2,0x2000540,&local_70,0);
      if (cVar3 != '\0') {
        FUN_10164e8b("Object",0,0,0);
        FUN_10164e8b("Action",0,0,0);
        FUN_10165094(0,1);
        FUN_1016601f();
        uVar7 = FUN_1014a0eb(0x240,DAT_103a413c,10000);
        local_110._0_4_ = uVar7;
        FUN_1014b266(uVar7);
        FUN_100fbc78();
        local_18 = 7;
        FUN_100fbd22(10000,0xbf800000);
        uVar15 = *(uint *)(local_110._0_4_ + 0x10);
        if ((*(uint *)(local_110._0_4_ + 0x14) & uVar15) != 0xffffffff) {
          FUN_100fc09e(uVar15,uVar15 + 1);
        }
        while (cVar3 = FUN_100fc2ca(), cVar3 != '\0') {
          iVar14 = (int)local_e0;
          while( true ) {
            local_110._0_4_ = iVar14;
            if (local_e0._4_4_ <= iVar14) break;
            FUN_10165364(0,0);
            FUN_101657a1();
            FUN_10113358(local_110._0_4_);
            uVar7 = local_110._0_4_;
            FUN_101b5fc7(&local_70,"Object %05d: %s",local_110._0_4_,
                         (&PTR_s_Artichoke_1030217c)[(int)local_110._0_4_ % 0x1c]);
            uVar4 = FUN_1014b156(uVar7);
            local_114 = CONCAT31(local_114._1_3_,uVar4);
            FUN_1014ae21(local_110._0_4_,(int)local_110._0_4_ >> 0x1f);
            local_f0 = 0;
            FUN_10133727(&local_70,local_114 & 0xff,0x12,&local_f0);
            FUN_101657a1();
            FUN_1012e1ca("hello");
            FUN_10113568();
            iVar14 = local_110._0_4_ + 1;
          }
        }
        uVar7 = FUN_1014a9f9();
        FUN_1014b266(uVar7);
        FUN_1016304e();
        local_18 = 0xffffffff;
        thunk_FUN_100fbc90();
      }
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (checkboxes)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xc34,"Widgets/Selection State/Multi-Select (checkboxes)");
      FUN_1012d08c("In a list of checkboxes (not selectable):");
      FUN_1012d551("Using _NoAutoSelect + _NoAutoClear flags.");
      FUN_1012d551("Shift+Click to check multiple boxes.");
      FUN_1012d551("Shift+Keyboard to copy current value to other boxes.");
      thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoAutoSelect",&DAT_1038abb0,8);
      thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoAutoClear",&DAT_1038abb0,0x10);
      thunk_FUN_10130d81("ImGuiMultiSelectFlags_BoxSelect2d",&DAT_1038abb0,0x80);
      fVar16 = (float10)FUN_10111f20();
      local_88 = (float)fVar16;
      local_70 = CONCAT44(local_88 * DAT_102b7110,0x80800000);
      cVar3 = FUN_1010c081("##Basket",&local_70,9,0);
      if (cVar3 != '\0') {
        uVar7 = FUN_1014a0eb(DAT_1038abb0,0xffffffff,0x14);
        local_110._0_4_ = uVar7;
        FUN_1014b55c();
        local_e0 = 0x101b74fa103a4160;
        FUN_1014b566(local_110._0_4_);
        iVar14 = 0;
        do {
          FUN_101b5fc7(&local_70,"Item %d",iVar14);
          FUN_1014ae21(iVar14,0);
          FUN_1012ff1a(&local_70,&DAT_103a4160 + iVar14);
          iVar14 = iVar14 + 1;
        } while (iVar14 != 0x14);
        uVar7 = FUN_1014a9f9();
        FUN_1014b566(uVar7);
      }
      FUN_1010c644();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (multiple scopes)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xc5a,"Widgets/Selection State/Multi-Select (multiple scopes)");
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a41d4) &&
         (FUN_1022c0d0(&DAT_103a41d4), DAT_103a41d4 == -1)) {
        local_110._0_10_ = (unkuint10)(uint6)local_110._4_6_ << 0x20;
        do {
          local_18 = 9;
          FUN_1014b032();
          local_18 = 0xffffffff;
          iVar14 = local_110._0_4_ + 0x20;
          local_110._0_4_ = iVar14;
        } while (iVar14 != 0x60);
        FUN_1022c3a0(&LAB_101b6d7a);
        FUN_1022c180(&DAT_103a41d4);
      }
      cVar3 = thunk_FUN_10130d81("ImGuiMultiSelectFlags_ScopeWindow",&DAT_1038abb4,0x800);
      if ((cVar3 != '\0') && ((DAT_1038abb4 >> 0xb & 1) != 0)) {
        DAT_1038abb4 = DAT_1038abb4 & 0xffffefff;
      }
      cVar3 = thunk_FUN_10130d81("ImGuiMultiSelectFlags_ScopeRect",&DAT_1038abb4,0x1000);
      if ((cVar3 != '\0') && ((DAT_1038abb4 >> 0xc & 1) != 0)) {
        DAT_1038abb4 = DAT_1038abb4 & 0xfffff7ff;
      }
      thunk_FUN_10130d81("ImGuiMultiSelectFlags_ClearOnClickVoid",&DAT_1038abb4,0x400);
      thunk_FUN_10130d81("ImGuiMultiSelectFlags_BoxSelect1d",&DAT_1038abb4,0x40);
      uVar15 = 0;
      do {
        FUN_10113358(uVar15);
        puVar12 = &DAT_103a4174 + uVar15 * 8;
        local_114 = uVar15;
        uVar7 = FUN_1014a0eb(DAT_1038abb4,*puVar12,8);
        FUN_1014b266(uVar7);
        FUN_10132656("Selection scope");
        local_110._0_4_ = puVar12;
        FUN_1012d08c("Selection size: %d/%d",*puVar12,8);
        iVar14 = 0;
        do {
          FUN_101b5fc7(&local_70,"Object %05d: %s",iVar14,(&PTR_s_Artichoke_1030217c)[iVar14]);
          uVar4 = FUN_1014b156(iVar14);
          FUN_1014ae21(iVar14,0);
          local_e0 = 0;
          FUN_10133727(&local_70,uVar4,0,&local_e0);
          iVar14 = iVar14 + 1;
        } while (iVar14 != 8);
        uVar7 = FUN_1014a9f9();
        FUN_1014b266(uVar7);
        FUN_10113568();
        uVar15 = local_114 + 1;
      } while (uVar15 != 3);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (tiled assets browser)");
    if (cVar3 != '\0') {
      FUN_1012ff1a("Assets Browser",&DAT_103a33d9);
      FUN_1012d08c("(also access from \'Examples->Assets Browser\' in menu)");
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (trees)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xc98,"Widgets/Selection State/Multi-Select (trees)");
      FUN_1011eaad();
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a41f8) &&
         (FUN_1022c0d0(&DAT_103a41f8), DAT_103a41f8 == -1)) {
        local_18 = 10;
        FUN_1014b032();
        FUN_1022c3a0(&LAB_101b6e67);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a41f8);
      }
      if (DAT_103a33f0 == 0) {
        DAT_103a33f0 = FUN_101b6f0f();
      }
      FUN_1012d08c("Selection size: %d",DAT_103a41d8);
      fVar16 = (float10)FUN_10111f20();
      local_8c = (float)fVar16;
      local_70 = CONCAT44(local_8c * DAT_102b7110,0x80800000);
      cVar3 = FUN_1010c081(&DAT_10339c10,&local_70,0x88,0);
      uVar15 = DAT_103a33f0;
      if (cVar3 != '\0') {
        FUN_1014a0eb(0x280,DAT_103a41d8,0xffffffff);
        FUN_101b702a();
        local_114 = uVar15;
        iVar14 = *(int *)(uVar15 + 0x24);
        local_110._0_4_ = iVar14;
        if (iVar14 != 0) {
          local_110._0_4_ = iVar14 << 2;
          iVar14 = 0;
          do {
            FUN_101b70d8();
            iVar14 = iVar14 + 4;
          } while (local_110._0_4_ != iVar14);
        }
        FUN_1014a9f9();
        FUN_101b702a();
      }
      FUN_1010c644();
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Multi-Select (advanced)");
    if (cVar3 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xd27,"Widgets/Selection State/Multi-Select (advanced)");
      cVar3 = FUN_10147d77("Options");
      if (cVar3 != '\0') {
        cVar3 = FUN_10130e0c("Selectables",DAT_103a4200 ^ 1);
        if (cVar3 != '\0') {
          DAT_103a4200 = 0;
        }
        FUN_10114a0e(0,0xbf800000);
        cVar3 = FUN_10130e0c("Tree nodes",DAT_103a4200);
        if (cVar3 != '\0') {
          DAT_103a4200 = 1;
        }
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_1012ff1a("Enable clipper",&DAT_1038abb8);
        FUN_1012ff1a("Enable deletion",&DAT_1038abb9);
        FUN_1012ff1a("Enable drag & drop",&DAT_1038abba);
        FUN_1012ff1a("Show in a table",&DAT_103a41fc);
        FUN_1012ff1a("Show color button",&DAT_1038abbb);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_SingleSelect",&DAT_1038abbc,1);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoSelectAll",&DAT_1038abbc,2);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoRangeSelect",&DAT_1038abbc,4);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoAutoSelect",&DAT_1038abbc,8);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoAutoClear",&DAT_1038abbc,0x10);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoAutoClearOnReselect",&DAT_1038abbc,0x20);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_NoSelectOnRightClick",&DAT_1038abbc,0x20000);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_BoxSelect1d",&DAT_1038abbc,0x40);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_BoxSelect2d",&DAT_1038abbc,0x80);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_BoxSelectNoScroll",&DAT_1038abbc,0x100);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_ClearOnEscape",&DAT_1038abbc,0x200);
        thunk_FUN_10130d81("ImGuiMultiSelectFlags_ClearOnClickVoid",&DAT_1038abbc,0x400);
        cVar3 = thunk_FUN_10130d81("ImGuiMultiSelectFlags_ScopeWindow",&DAT_1038abbc,0x800);
        if ((cVar3 != '\0') && ((DAT_1038abbc >> 0xb & 1) != 0)) {
          DAT_1038abbc = DAT_1038abbc & 0xffffefff;
        }
        cVar3 = thunk_FUN_10130d81("ImGuiMultiSelectFlags_ScopeRect",&DAT_1038abbc,0x1000);
        if ((cVar3 != '\0') && ((DAT_1038abbc >> 0xc & 1) != 0)) {
          DAT_1038abbc = DAT_1038abbc & 0xfffff7ff;
        }
        cVar3 = thunk_FUN_10130d81("ImGuiMultiSelectFlags_SelectOnAuto",&DAT_1038abbc,0x2000);
        if (cVar3 != '\0') {
          DAT_1038abbc = DAT_1038abbc & 0xffff3fff;
        }
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        cVar3 = thunk_FUN_10130d81("ImGuiMultiSelectFlags_SelectOnClickAlways",&DAT_1038abbc,0x4000)
        ;
        if (cVar3 != '\0') {
          DAT_1038abbc = DAT_1038abbc & 0xffff5fff;
        }
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        cVar3 = thunk_FUN_10130d81("ImGuiMultiSelectFlags_SelectOnClickRelease",&DAT_1038abbc,0x8000
                                  );
        if (cVar3 != '\0') {
          DAT_1038abbc = DAT_1038abbc & 0xffff9fff;
        }
        FUN_10114a0e(0,0xbf800000);
        FUN_1011eaad();
        FUN_10149387();
      }
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4210) &&
         (FUN_1022c0d0(&DAT_103a4210), DAT_103a4210 == -1)) {
        local_18 = 0xb;
        DAT_103a4208 = 0;
        DAT_103a4204 = 0;
        DAT_103a420c = 0;
        FUN_1022c3a0(&LAB_101b7167);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a4210);
      }
      if (DAT_103a4214 == 0) {
        iVar14 = 1000;
        do {
          local_110._0_4_ = DAT_103a4214;
          DAT_103a4214 = DAT_103a4214 + 1;
          iVar6 = DAT_103a4208;
          uVar15 = DAT_103a420c;
          if (DAT_103a4204 == DAT_103a4208) {
            if (DAT_103a4204 == 0) {
              iVar10 = 8;
            }
            else {
              iVar10 = DAT_103a4204 / 2 + DAT_103a4204;
            }
            iVar6 = DAT_103a4204 + 1;
            if (DAT_103a4204 + 1 < iVar10) {
              iVar6 = iVar10;
            }
            local_18 = 0xffffffff;
            uVar15 = FUN_100fa1fa(iVar6 * 4);
            if (DAT_103a420c != 0) {
              local_114 = uVar15;
              FUN_1025b2d0(uVar15,DAT_103a420c,DAT_103a4204 << 2);
              FUN_100fa2cb(DAT_103a420c);
              uVar15 = local_114;
            }
          }
          DAT_103a420c = uVar15;
          DAT_103a4208 = iVar6;
          *(undefined4 *)(DAT_103a420c + DAT_103a4204 * 4) = local_110._0_4_;
          DAT_103a4204 = DAT_103a4204 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4238) &&
         (FUN_1022c0d0(&DAT_103a4238), DAT_103a4238 == -1)) {
        local_18 = 0xc;
        FUN_101b61e0();
        FUN_1022c3a0(&LAB_101b717a);
        local_18 = 0xffffffff;
        FUN_1022c180(&DAT_103a4238);
      }
      local_18 = 0xffffffff;
      FUN_1012d08c("Selection size: %d/%d",DAT_103a4218,DAT_103a4204);
      if (DAT_103a4200 == 1) {
        fVar16 = (float10)FUN_10111f20();
        fVar17 = (float)fVar16;
        local_94 = fVar17;
      }
      else {
        fVar16 = (float10)FUN_101155d9();
        fVar17 = (float)fVar16;
        local_90 = fVar17;
      }
      local_70 = (ulonglong)(uint)((float)DAT_103a4204 * fVar17) << 0x20;
      FUN_10111df6(&local_70);
      fVar16 = (float10)FUN_10111f20();
      local_98 = (float)fVar16;
      local_70 = CONCAT44(local_98 * DAT_102b7110,0x80800000);
      cVar3 = FUN_1010c081("##Basket",&local_70,0x88,0);
      if (cVar3 != '\0') {
        local_110._0_10_ = FUN_10111f20();
        fVar16 = (float10)FUN_10111f20();
        local_30 = (float)fVar16;
        local_2c = (float)(float10)local_110._0_10_;
        if (DAT_103a4200 == 1) {
          FUN_100fd2b4(0xe,0);
        }
        uVar7 = FUN_1014a0eb(DAT_1038abbc,DAT_103a4218,DAT_103a4204);
        FUN_1014b266(uVar7);
        bVar5 = FUN_10110653(0x20a,1);
        bVar5 = 0 < DAT_103a4218 & bVar5;
        local_fd = bVar5 | DAT_103a423c;
        local_110._0_4_ = uVar7;
        if (bVar5 == 0 && (DAT_103a423c & 1) == 0) {
          local_f8 = -1;
        }
        else {
          local_f8 = FUN_101b62ec(uVar7,DAT_103a4204);
        }
        DAT_103a423c = 0;
        if (DAT_103a41fc == '\x01') {
          if (DAT_103a4200 == 1) {
            local_70 = 0;
            FUN_100fd3bc(0x11,&local_70);
          }
          local_70 = 0;
          FUN_1015f834("##Split",2,0x400011,&local_70,0);
          FUN_10164e8b(&DAT_10356101,8,0x3f333333,0);
          FUN_10164e8b(&DAT_10356101,8,0x3e99999a,0);
        }
        FUN_100fbc78();
        local_18 = 0xd;
        if (DAT_1038abb8 == 1) {
          FUN_100fbd22(DAT_103a4204,0xbf800000);
          if (local_f8 != -1) {
            FUN_100fc09e(local_f8,local_f8 + 1);
          }
          uVar15 = *(uint *)(local_110._0_4_ + 0x10);
          if ((*(uint *)(local_110._0_4_ + 0x14) & uVar15) != 0xffffffff) {
            FUN_100fc09e(uVar15,uVar15 + 1);
          }
        }
        if (DAT_1038abb8 != 0) goto LAB_101b3033;
        iVar14 = 0;
        local_b0 = DAT_103a4204;
        while( true ) {
          while( true ) {
            local_110._0_4_ = iVar14;
            if (local_b0 <= iVar14) break;
            if (DAT_103a41fc == '\x01') {
              FUN_101657a1();
            }
            piVar11 = *(int **)(DAT_103a420c + local_110._0_4_ * 4);
            local_a0 = (&PTR_s_Artichoke_1030217c)[(int)piVar11 % 0x1c];
            FUN_101b5fc7(&local_70,"Object %05d: %s",piVar11,local_a0);
            local_fc = piVar11;
            FUN_10113358(piVar11);
            if (DAT_1038abbb == '\x01') {
              uVar15 = local_110._0_4_ * 0x50b74b;
              fStack_e8 = (float)(uVar15 >> 0x10 & 0xff) * _UNK_103029b8;
              fStack_e4 = DAT_1028b430 * _UNK_103029bc;
              local_f0 = CONCAT44((float)(uVar15 >> 8 & 0xff) * _UNK_103029b4,
                                  (float)(uVar15 & 0xff) * _DAT_103029b0);
              FUN_10144b9b(&DAT_1034a58d,&local_f0,0x40,&local_30);
              FUN_10114a0e(0,0xbf800000);
            }
            uVar4 = FUN_1014b156(local_110._0_4_);
            local_114 = CONCAT31(local_114._1_3_,uVar4);
            FUN_1014ae21(local_110._0_4_,(int)local_110._0_4_ >> 0x1f);
            if (DAT_103a4200 == 0) {
              local_f0 = 0;
              FUN_10133727(&local_70,local_114 & 0xff,0,&local_f0);
              local_ac = 0;
            }
            else {
              local_ac = FUN_10148b8c(&local_70,local_114 & 0xff | 0x8c0);
            }
            if (local_f8 == local_110._0_4_) {
              FUN_10112577(0xffffffff);
            }
            if ((DAT_1038abba == '\x01') && (cVar3 = FUN_101179e3(0), cVar3 != '\0')) {
              iVar14 = FUN_101182bb();
              if (iVar14 == 0) {
                local_18 = 0xe;
                local_f0 = local_f0 & 0xffffffff00000000;
                local_a4 = 0;
                if ((char)local_114 == '\0') {
                  local_104 = (int *)0x0;
                  local_104 = (int *)FUN_100fa1fa(0x20);
                  *local_104 = (int)local_fc;
                  iVar14 = 4;
                }
                else {
                  local_f4 = (int *)0x0;
                  local_114 = 0;
                  piVar11 = (int *)0x0;
                  while (local_104 = piVar11, local_fc = piVar11,
                        cVar3 = FUN_1014b16c(&local_f0,&local_a4), cVar3 != '\0') {
                    local_9c = local_a4;
                    if ((int *)local_114 == local_f4) {
                      local_a8 = ((uint)local_f4 >> 1) + (int)local_f4;
                      if (local_f4 == (int *)0x0) {
                        local_a8 = 8;
                      }
                      if ((int)local_a8 <= (int)((int)local_f4 + 1U)) {
                        local_a8 = (int)local_f4 + 1U;
                      }
                      local_104 = local_fc;
                      piVar11 = (int *)FUN_100fa1fa(local_a8 * 4);
                      piVar1 = local_fc;
                      if (local_fc != (int *)0x0) {
                        iVar14 = (int)local_f4 << 2;
                        local_f4 = piVar11;
                        FUN_1025b2d0(piVar11,local_fc,iVar14);
                        local_104 = piVar1;
                        FUN_100fa2cb(piVar1);
                        piVar11 = local_f4;
                      }
                    }
                    else {
                      local_a8 = (uint)local_f4;
                      piVar11 = local_fc;
                    }
                    piVar11[local_114] = local_9c;
                    local_114 = local_114 + 1;
                    local_f4 = (int *)local_a8;
                  }
                  iVar14 = local_114 << 2;
                  local_104 = local_fc;
                }
                local_fc = local_104;
                FUN_10117c4b("MULTISELECT_DEMO_ITEMS",local_104,iVar14,0);
                local_104 = local_fc;
                local_18 = 0xffffffff;
                if (local_fc != (int *)0x0) {
                  FUN_100fa2cb(local_fc);
                }
              }
              local_18 = 0xd;
              puVar12 = (undefined4 *)FUN_101182bb();
              uVar15 = puVar12[1];
              if ((uVar15 & 0xfffffffc) == 4) {
                FUN_1012d08c("Object %05d: %s",*(int *)*puVar12,
                             (&PTR_s_Artichoke_1030217c)[*(int *)*puVar12 % 0x1c]);
              }
              else {
                uVar8 = uVar15 + 3;
                if (-1 < (int)uVar15) {
                  uVar8 = uVar15;
                }
                FUN_1012d08c("Dragging %d objects",(int)uVar8 >> 2);
              }
              FUN_10117c1f();
            }
            if (((byte)local_ac & DAT_103a4200) == 1) {
              FUN_10149387();
            }
            cVar3 = FUN_10116a0f(0,0);
            if (cVar3 != '\0') {
              FUN_10111871(DAT_1038abb9 ^ 1 | DAT_103a4218 == 0);
              FUN_101b5fc7(&local_70,"Delete %d item(s)###DeleteSelected",DAT_103a4218);
              local_f0 = 0;
              cVar3 = FUN_10133727(&local_70,0,0,&local_f0);
              if (cVar3 != '\0') {
                DAT_103a423c = 1;
              }
              FUN_10111961();
              local_f0 = 0;
              FUN_10133727("Close",0,0,&local_f0);
              FUN_101165cb();
            }
            if (DAT_103a41fc == '\x01') {
              FUN_101657a1();
              FUN_100fb68f(0x80800000);
              local_f0 = 0;
              FUN_100fd3bc(0xb,&local_f0);
              pcVar2 = local_a0;
              sVar13 = _strlen(local_a0);
              FUN_10141729("##NoLabel",pcVar2,sVar13,0x200,0,0);
              FUN_100fd4c4(1);
            }
            FUN_10113568();
            iVar14 = local_110._0_4_ + 1;
          }
          if (DAT_1038abb8 == 0) break;
LAB_101b3033:
          cVar3 = FUN_100fc2ca();
          if (cVar3 == '\0') break;
          piVar11 = &DAT_103a4204;
          iVar14 = 0;
          if ((DAT_1038abb8 & 1) != 0) {
            piVar11 = (int *)((int)&local_e0 + 4);
            iVar14 = (int)local_e0;
          }
          local_b0 = *piVar11;
        }
        if ((DAT_103a41fc == '\x01') && (FUN_1016304e(), DAT_103a4200 == 1)) {
          FUN_100fd4c4(1);
        }
        uVar7 = FUN_1014a9f9();
        local_110._0_4_ = uVar7;
        FUN_1014b266(uVar7);
        if ((local_fd & 1) != 0) {
          FUN_101b635e(local_110._0_4_,&DAT_103a4204,local_f8);
        }
        if (DAT_103a4200 == 1) {
          FUN_100fd4c4(1);
        }
        local_18 = 0xffffffff;
        thunk_FUN_100fbc90();
      }
      FUN_1010c644();
      FUN_10149387();
    }
    FUN_10149387();
  }
  *unaff_FS_OFFSET = local_20;
  return;
}

