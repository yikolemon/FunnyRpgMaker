/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b9ebc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b9ebc(void)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  char *pcVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  byte bVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  int *piVar18;
  float *pfVar19;
  float *pfVar20;
  undefined8 *puVar21;
  size_t sVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  undefined **ppuVar28;
  int iVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined4 *puVar32;
  longlong lVar33;
  float *unaff_R15;
  float fVar34;
  ulonglong in_stack_fffffffffffffe88;
  undefined8 local_168;
  undefined4 local_120;
  undefined4 local_11c;
  char *local_118;
  undefined8 local_110;
  undefined1 *local_108;
  float local_d8;
  int local_d4;
  undefined8 local_d0;
  float local_c8 [3];
  float fStack_bc;
  float *local_b8;
  byte local_a9;
  ulonglong local_a8;
  undefined8 local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  cVar9 = FUN_18014c2cb("Selection State & Multi-Select");
  if (cVar9 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0xb30,"Widgets/Selection State & Multi-Select");
    FUN_180124063(
                 "Selections can be built using Selectable(), TreeNode() or other widgets. Selection state is owned by application code/data."
                 );
    FUN_180133606("Wiki page:");
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_1801376fe("imgui/wiki/Multi-Select","https://github.com/ocornut/imgui/wiki/Multi-Select");
    cVar9 = FUN_18014c2cb("Single-Select");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xb3a,"Widgets/Selection State/Single-Select");
      iVar26 = 0;
      do {
        FUN_1801bf199(&local_168,"Object %d",iVar26);
        local_110 = (undefined *)0x0;
        cVar9 = FUN_1801391f6(&local_168,iVar26 == DAT_180404a5c,0,&local_110);
        if (cVar9 != '\0') {
          DAT_180404a5c = iVar26;
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 != 5);
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (manual/simplified, without BeginMultiSelect)");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xb4a,
                    "Widgets/Selection State/Multi-Select (manual/simplified, without BeginMultiSelect)"
                   );
      FUN_180124063("Hold Ctrl and Click to select multiple items.");
      uVar27 = 0;
      unaff_R15 = (float *)&DAT_18041fe9a;
      do {
        FUN_1801bf199(&local_168,"Object %d",uVar27 & 0xffffffff);
        local_110 = (undefined *)0x0;
        cVar9 = FUN_1801391f6(&local_168,(&DAT_18041fe9a)[uVar27],0,&local_110);
        if (cVar9 != '\0') {
          lVar16 = FUN_180107ee8();
          if (*(char *)(lVar16 + 0x108) == '\0') {
            DAT_18041fe9e = 0;
            _DAT_18041fe9a = 0;
          }
          (&DAT_18041fe9a)[uVar27] = (&DAT_18041fe9a)[uVar27] ^ 1;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != 5);
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xb60,"Widgets/Selection State/Multi-Select");
      FUN_1801330a5("Supported features:");
      FUN_180133606("Keyboard navigation (arrows, page up/down, home/end, space).");
      FUN_180133606("Ctrl modifier to preserve and toggle selection.");
      FUN_180133606("Shift modifier for range selection.");
      FUN_180133606("Ctrl+A to select all.");
      FUN_180133606("Escape to clear selection.");
      FUN_180133606("Click and drag to box-select.");
      FUN_1801330a5(
                   "Tip: Use \'Demo->Tools->Debug Log->Selection\' to see selection requests as they happen."
                   );
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_18041fed0) && (FUN_18023d500(&DAT_18041fed0), DAT_18041fed0 == -1)) {
        FUN_18014f566(&DAT_18041fea0);
        FUN_18023d710(FUN_1801bf24f);
        _Init_thread_footer(&DAT_18041fed0);
      }
      FUN_1801330a5("Selection: %d/%d",DAT_18041fea0,0x32);
      fVar34 = (float)FUN_180116c08();
      local_168 = CONCAT44(fVar34 * DAT_1802dbb4c,0x80800000);
      cVar9 = FUN_180110d11("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar17 = FUN_18014e6af(0x240,DAT_18041fea0,0x32);
        FUN_18014f7d4(&DAT_18041fea0,uVar17);
        uVar27 = 0;
        unaff_R15 = (float *)&local_110;
        do {
          uVar30 = (uint)uVar27 - 0x1c;
          if (uVar27 < 0x1c) {
            uVar30 = (uint)uVar27;
          }
          FUN_1801bf199(&local_168,"Object %05d: %s",uVar27 & 0xffffffff,
                        (&PTR_s_Artichoke_180328770)[uVar30]);
          uVar13 = FUN_18014f686(&DAT_18041fea0,uVar27 & 0xffffffff);
          FUN_18014f370(uVar27);
          local_110 = (undefined *)0x0;
          FUN_1801391f6(&local_168,uVar13,0,unaff_R15);
          uVar27 = uVar27 + 1;
        } while (uVar27 != 0x32);
        uVar17 = FUN_18014ef2d();
        FUN_18014f7d4(&DAT_18041fea0,uVar17);
      }
      FUN_180111339();
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (with clipper)");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xb89,"Widgets/Selection State/Multi-Select (with clipper)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_18041ff08) && (FUN_18023d500(&DAT_18041ff08), DAT_18041ff08 == -1)) {
        FUN_18014f566(&DAT_18041fed8);
        FUN_18023d710(FUN_1801bf2c6);
        _Init_thread_footer(&DAT_18041ff08);
      }
      FUN_1801330a5("Added features:");
      FUN_180133606("Using ImGuiListClipper.");
      FUN_1801330a5("Selection: %d/%d",DAT_18041fed8,10000);
      fVar34 = (float)FUN_180116c08();
      local_168 = CONCAT44(fVar34 * DAT_1802dbb4c,0x80800000);
      cVar9 = FUN_180110d11("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar27 = FUN_18014e6af(0x240,DAT_18041fed8,10000);
        FUN_18014f7d4(&DAT_18041fed8,uVar27);
        FUN_1801003f2(&local_110);
        FUN_1801004b6(&local_110,10000,DAT_1802bb8e0);
        lVar16 = *(longlong *)(uVar27 + 0x10);
        if (lVar16 != -1) {
          FUN_1801007ee(&local_110,lVar16,(int)lVar16 + 1);
        }
        unaff_R15 = local_c8;
        while (cVar9 = FUN_180100a32(&local_110), cVar9 != '\0') {
          for (fVar34 = (float)local_110; (int)fVar34 < local_110._4_4_;
              fVar34 = (float)((int)fVar34 + 1)) {
            FUN_1801bf199(&local_168,"Object %05d: %s",fVar34,
                          (&PTR_s_Artichoke_180328770)[(int)fVar34 % 0x1c]);
            uVar10 = FUN_18014f686(&DAT_18041fed8,fVar34);
            uVar27 = CONCAT71((int7)(uVar27 >> 8),uVar10);
            FUN_18014f370((longlong)(int)fVar34);
            local_c8[0] = 0.0;
            local_c8[1] = 0.0;
            FUN_1801391f6(&local_168,uVar27 & 0xffffffff,0);
          }
        }
        uVar17 = FUN_18014ef2d();
        FUN_18014f7d4(&DAT_18041fed8,uVar17);
        thunk_FUN_180100412(&local_110);
      }
      FUN_180111339();
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (with deletion)");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",3000,"Widgets/Selection State/Multi-Select (with deletion)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_18041ff20) && (FUN_18023d500(&DAT_18041ff20), DAT_18041ff20 == -1)) {
        _DAT_18041ff10 = 0;
        DAT_18041ff18 = 0;
        FUN_18023d710(&LAB_1801bf33d);
        _Init_thread_footer(&DAT_18041ff20);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_18041ff58) && (FUN_18023d500(&DAT_18041ff58), DAT_18041ff58 == -1)) {
        FUN_1801bf34e(&DAT_18041ff28);
        FUN_18023d710(FUN_1801bf395);
        _Init_thread_footer(&DAT_18041ff58);
      }
      _DAT_18041ff30 = &DAT_18041ff10;
      _DAT_18041ff38 = &LAB_1801c03b2;
      FUN_1801330a5("Added features:");
      FUN_180133606("Dynamic list with Delete key support.");
      FUN_1801330a5("Selection size: %d/%d",DAT_18041ff28,_DAT_18041ff10 & 0xffffffff);
      if (DAT_18041ff5c == 0) {
        iVar29 = 0x32;
        iVar26 = DAT_18041ff10;
        do {
          iVar24 = DAT_18041ff5c;
          DAT_18041ff5c = DAT_18041ff5c + 1;
          if (iVar26 == DAT_18041ff14) {
            if (iVar26 == 0) {
              iVar14 = 8;
            }
            else {
              iVar14 = iVar26 / 2 + iVar26;
            }
            iVar23 = iVar26 + 1;
            if (iVar26 + 1 < iVar14) {
              iVar23 = iVar14;
            }
            lVar16 = FUN_1800fe7f8((longlong)iVar23 << 2);
            if (DAT_18041ff18 != 0) {
              FUN_1802a82f0(lVar16,DAT_18041ff18,(longlong)(int)DAT_18041ff10 << 2);
              FUN_1800fe8d4(DAT_18041ff18);
            }
            _DAT_18041ff10 = CONCAT44(iVar23,DAT_18041ff10);
            iVar26 = DAT_18041ff10;
            DAT_18041ff18 = lVar16;
          }
          *(int *)(DAT_18041ff18 + (longlong)iVar26 * 4) = iVar24;
          iVar26 = DAT_18041ff10 + 1;
          _DAT_18041ff10 = CONCAT44(DAT_18041ff14,iVar26);
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      cVar9 = FUN_18013425f("Add 20 items");
      if (cVar9 != '\0') {
        iVar29 = 0x14;
        iVar26 = DAT_18041ff10;
        do {
          iVar24 = DAT_18041ff5c;
          DAT_18041ff5c = DAT_18041ff5c + 1;
          if (iVar26 == DAT_18041ff14) {
            if (iVar26 == 0) {
              iVar14 = 8;
            }
            else {
              iVar14 = iVar26 / 2 + iVar26;
            }
            iVar23 = iVar26 + 1;
            if (iVar26 + 1 < iVar14) {
              iVar23 = iVar14;
            }
            lVar16 = FUN_1800fe7f8((longlong)iVar23 << 2);
            if (DAT_18041ff18 != 0) {
              FUN_1802a82f0(lVar16,DAT_18041ff18,(longlong)(int)DAT_18041ff10 << 2);
              FUN_1800fe8d4(DAT_18041ff18);
            }
            _DAT_18041ff10 = CONCAT44(iVar23,DAT_18041ff10);
            iVar26 = DAT_18041ff10;
            DAT_18041ff18 = lVar16;
          }
          *(int *)(DAT_18041ff18 + (longlong)iVar26 * 4) = iVar24;
          iVar26 = DAT_18041ff10 + 1;
          _DAT_18041ff10 = CONCAT44(DAT_18041ff14,iVar26);
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      FUN_180119893(0,DAT_1802bb8e0);
      cVar9 = FUN_18013425f("Remove 20 items");
      if ((cVar9 != '\0') && (0 < (int)DAT_18041ff10)) {
        uVar30 = 0x14;
        if (DAT_18041ff10 < 0x14) {
          uVar30 = DAT_18041ff10;
        }
        uVar30 = uVar30 + 1;
        uVar15 = DAT_18041ff10;
        do {
          FUN_18014f78a(&DAT_18041ff28,
                        *(undefined4 *)(DAT_18041ff18 + -4 + (longlong)(int)uVar15 * 4),0);
          uVar15 = DAT_18041ff10 - 1;
          _DAT_18041ff10 = CONCAT44(DAT_18041ff14,uVar15);
          uVar30 = uVar30 - 1;
        } while (1 < uVar30);
      }
      fVar34 = (float)FUN_18011a43e();
      local_168 = (ulonglong)(uint)((float)(int)DAT_18041ff10 * fVar34) << 0x20;
      FUN_180116af2(&local_168);
      fVar34 = (float)FUN_180116c08();
      local_168 = CONCAT44(fVar34 * DAT_1802dbb4c,0x80800000);
      cVar9 = FUN_180110d11("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar17 = FUN_18014e6af(0x240,DAT_18041ff28,_DAT_18041ff10 & 0xffffffff);
        FUN_18014f7d4(&DAT_18041ff28,uVar17);
        bVar11 = FUN_1801152ff(0x20a,1);
        bVar11 = 0 < DAT_18041ff28 & bVar11;
        local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
        local_118 = (char *)CONCAT71(local_118._1_7_,bVar11);
        if (bVar11 == 1) {
          uVar13 = FUN_1801bf40c(&DAT_18041ff28,uVar17,_DAT_18041ff10 & 0xffffffff);
          local_a8 = CONCAT44(local_a8._4_4_,uVar13);
        }
        if (0 < (int)DAT_18041ff10) {
          uVar27 = local_a8 & 0xffffffff;
          uVar31 = 0;
          unaff_R15 = (float *)&DAT_18041ff28;
          do {
            uVar30 = *(uint *)(DAT_18041ff18 + uVar31 * 4);
            FUN_1801bf199(&local_168,"Object %05u: %s",uVar30,
                          (&PTR_s_Artichoke_180328770)[uVar30 % 0x1c]);
            uVar13 = FUN_18014f686(&DAT_18041ff28,uVar30);
            FUN_18014f370(uVar31);
            local_110 = (undefined *)0x0;
            FUN_1801391f6(&local_168,uVar13,0,&local_110);
            if (uVar27 == uVar31) {
              FUN_180117268(0xffffffff);
            }
            uVar31 = uVar31 + 1;
          } while ((longlong)uVar31 < (longlong)(int)DAT_18041ff10);
        }
        uVar17 = FUN_18014ef2d();
        FUN_18014f7d4(&DAT_18041ff28,uVar17);
        if ((char)local_118 != '\0') {
          FUN_1801bf486(&DAT_18041ff28,uVar17,&DAT_18041ff10,local_a8 & 0xffffffff);
        }
      }
      FUN_180111339();
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (dual list box)");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xbf5,"Widgets/Selection State/Multi-Select (dual list box)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_18041ffe8) && (FUN_18023d500(&DAT_18041ffe8), DAT_18041ffe8 == -1)) {
        FUN_1801bf694(&DAT_18041ff60);
        FUN_18023d710(&LAB_1801bfa1e);
        _Init_thread_footer(&DAT_18041ffe8);
      }
      if (DAT_18041ff70 == 0 && DAT_18041ff60 == 0) {
        iVar26 = 0;
        iVar29 = 0;
        do {
          iVar24 = DAT_18041ff64;
          lVar16 = DAT_18041ff68;
          if (iVar26 == DAT_18041ff64) {
            if (iVar26 == 0) {
              iVar14 = 8;
            }
            else {
              iVar14 = iVar26 / 2 + iVar26;
            }
            iVar24 = iVar26 + 1;
            if (iVar26 + 1 < iVar14) {
              iVar24 = iVar14;
            }
            lVar16 = FUN_1800fe7f8((longlong)iVar24 << 2);
            iVar26 = DAT_18041ff60;
            if (DAT_18041ff68 != 0) {
              FUN_1802a82f0(lVar16,DAT_18041ff68,(longlong)DAT_18041ff60 << 2);
              FUN_1800fe8d4(DAT_18041ff68);
              iVar26 = DAT_18041ff60;
            }
          }
          DAT_18041ff68 = lVar16;
          DAT_18041ff64 = iVar24;
          *(int *)(DAT_18041ff68 + (longlong)iVar26 * 4) = iVar29;
          iVar26 = DAT_18041ff60 + 1;
          iVar29 = iVar29 + 1;
          DAT_18041ff60 = iVar26;
        } while (iVar29 != 0x1c);
      }
      FUN_1801bfa2a(&DAT_18041ff60);
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (in a table)");
    uVar30 = (uint)(in_stack_fffffffffffffe88 >> 0x20);
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xc05,"Widgets/Selection State/Multi-Select (in a table)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180420020) && (FUN_18023d500(&DAT_180420020), DAT_180420020 == -1)) {
        FUN_18014f566(&DAT_18041fff0);
        FUN_18023d710(FUN_1801bfe65);
        _Init_thread_footer(&DAT_180420020);
      }
      FUN_1801330a5("Selection: %d/%d",DAT_18041fff0,10000);
      fVar34 = (float)FUN_180116c08();
      local_168 = (ulonglong)(uint)(fVar34 * DAT_1802dbb4c) << 0x20;
      in_stack_fffffffffffffe88 = (ulonglong)uVar30 << 0x20;
      cVar9 = FUN_180164c18("##Basket",2,0x2000540,&local_168,in_stack_fffffffffffffe88);
      if (cVar9 != '\0') {
        FUN_18016a158("Object",0,0,0);
        FUN_18016a158("Action",0,0,0);
        FUN_18016a395(0,1);
        FUN_18016b3e4();
        puVar32 = &DAT_18041fff0;
        lVar16 = FUN_18014e6af(0x240,DAT_18041fff0,10000);
        FUN_18014f7d4(&DAT_18041fff0,lVar16);
        FUN_1801003f2(&local_110);
        FUN_1801004b6(&local_110,10000,DAT_1802bb8e0);
        lVar16 = *(longlong *)(lVar16 + 0x10);
        if (lVar16 != -1) {
          FUN_1801007ee(&local_110,lVar16,(int)lVar16 + 1);
        }
        unaff_R15 = local_c8;
        while (cVar9 = FUN_180100a32(&local_110), cVar9 != '\0') {
          for (fVar34 = (float)local_110; (int)fVar34 < local_110._4_4_;
              fVar34 = (float)((int)fVar34 + 1)) {
            FUN_18016a67b(0,0);
            FUN_18016ab34();
            FUN_18011810d(fVar34);
            FUN_1801bf199(&local_168,"Object %05d: %s",fVar34,
                          (&PTR_s_Artichoke_180328770)[(int)fVar34 % 0x1c]);
            uVar10 = FUN_18014f686(&DAT_18041fff0,fVar34);
            puVar32 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar32 >> 8),uVar10);
            FUN_18014f370((longlong)(int)fVar34);
            local_c8[0] = 0.0;
            local_c8[1] = 0.0;
            FUN_1801391f6(&local_168,(ulonglong)puVar32 & 0xffffffff,0x12);
            FUN_18016ab34();
            FUN_18013425f();
            FUN_18011834f();
          }
        }
        uVar17 = FUN_18014ef2d();
        FUN_18014f7d4(&DAT_18041fff0,uVar17);
        FUN_180168430();
        thunk_FUN_180100412(&local_110);
      }
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (checkboxes)");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xc34,"Widgets/Selection State/Multi-Select (checkboxes)");
      FUN_1801330a5("In a list of checkboxes (not selectable):");
      FUN_180133606("Using _NoAutoSelect + _NoAutoClear flags.");
      FUN_180133606("Shift+Click to check multiple boxes.");
      FUN_180133606("Shift+Keyboard to copy current value to other boxes.");
      thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoAutoSelect",&DAT_180404a60,8);
      thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoAutoClear",&DAT_180404a60,0x10);
      thunk_FUN_18013698f("ImGuiMultiSelectFlags_BoxSelect2d",&DAT_180404a60,0x80);
      fVar34 = (float)FUN_180116c08();
      local_168 = CONCAT44(fVar34 * DAT_1802dbb4c,0x80800000);
      cVar9 = FUN_180110d11("##Basket",&local_168,9,0);
      if (cVar9 != '\0') {
        uVar17 = FUN_18014e6af(DAT_180404a60,0xffffffff,0x14);
        FUN_18014fac4(&local_110);
        local_110 = &DAT_180420030;
        local_108 = &LAB_1801c06ee;
        FUN_18014face(&local_110,uVar17);
        uVar27 = 0;
        do {
          FUN_1801bf199(&local_168,"Item %d",uVar27 & 0xffffffff);
          FUN_18014f370(uVar27);
          FUN_180135c3a(&local_168,&DAT_180420030 + uVar27);
          uVar27 = uVar27 + 1;
        } while (uVar27 != 0x14);
        uVar17 = FUN_18014ef2d();
        FUN_18014face(&local_110,uVar17);
      }
      FUN_180111339();
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (multiple scopes)");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xc5a,"Widgets/Selection State/Multi-Select (multiple scopes)")
      ;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_1804200e0) && (FUN_18023d500(&DAT_1804200e0), DAT_1804200e0 == -1)) {
        local_a8 = 0;
        do {
          FUN_18014f566((longlong)&DAT_180420050 + local_a8);
          local_a8 = local_a8 + 0x30;
        } while (local_a8 != 0x90);
        FUN_18023d710(FUN_1801bfedc);
        _Init_thread_footer(&DAT_1804200e0);
      }
      cVar9 = thunk_FUN_18013698f("ImGuiMultiSelectFlags_ScopeWindow",&DAT_180404a64,0x800);
      if ((cVar9 != '\0') && ((DAT_180404a64 >> 0xb & 1) != 0)) {
        DAT_180404a64 = DAT_180404a64 & 0xffffefff;
      }
      cVar9 = thunk_FUN_18013698f("ImGuiMultiSelectFlags_ScopeRect",&DAT_180404a64,0x1000);
      if ((cVar9 != '\0') && ((DAT_180404a64 >> 0xc & 1) != 0)) {
        DAT_180404a64 = DAT_180404a64 & 0xfffff7ff;
      }
      thunk_FUN_18013698f("ImGuiMultiSelectFlags_ClearOnClickVoid",&DAT_180404a64,0x400);
      thunk_FUN_18013698f("ImGuiMultiSelectFlags_BoxSelect1d",&DAT_180404a64,0x40);
      uVar27 = 0;
      unaff_R15 = (float *)&local_168;
      do {
        FUN_18011810d(uVar27 & 0xffffffff);
        puVar32 = &DAT_180420050 + uVar27 * 0xc;
        local_a8 = uVar27;
        uVar17 = FUN_18014e6af(DAT_180404a64,(&DAT_180420050)[uVar27 * 0xc],8);
        FUN_18014f7d4(puVar32,uVar17);
        FUN_1801380f1("Selection scope");
        FUN_1801330a5("Selection size: %d/%d",(&DAT_180420050)[uVar27 * 0xc],8);
        ppuVar28 = &PTR_s_Artichoke_180328770;
        uVar27 = 0;
        do {
          FUN_1801bf199(unaff_R15,"Object %05d: %s",uVar27 & 0xffffffff,*ppuVar28);
          uVar13 = FUN_18014f686(puVar32,uVar27 & 0xffffffff);
          FUN_18014f370(uVar27);
          local_110 = (undefined *)0x0;
          FUN_1801391f6(unaff_R15,uVar13,0,&local_110);
          uVar27 = uVar27 + 1;
          ppuVar28 = ppuVar28 + 1;
        } while (uVar27 != 8);
        uVar17 = FUN_18014ef2d();
        FUN_18014f7d4(puVar32,uVar17);
        FUN_18011834f();
        uVar27 = local_a8 + 1;
      } while (uVar27 != 3);
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (tiled assets browser)");
    if (cVar9 != '\0') {
      FUN_180135c3a("Assets Browser",&DAT_18041f1e1);
      FUN_1801330a5("(also access from \'Examples->Assets Browser\' in menu)");
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (trees)");
    if (cVar9 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xc98,"Widgets/Selection State/Multi-Select (trees)");
      FUN_180124063(
                   "This is rather advanced and experimental. If you are getting started with multi-select, please don\'t start by looking at how to use it for a tree!\n\nFuture versions will try to simplify and formalize some of this."
                   );
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180420118) && (FUN_18023d500(&DAT_180420118), DAT_180420118 == -1)) {
        FUN_18014f566(&DAT_1804200e8);
        FUN_18023d710(FUN_1801bffd8);
        _Init_thread_footer(&DAT_180420118);
      }
      if (DAT_18041f1f8 == 0) {
        DAT_18041f1f8 = FUN_1801c004f();
      }
      FUN_1801330a5("Selection size: %d",DAT_1804200e8);
      fVar34 = (float)FUN_180116c08();
      local_168 = CONCAT44(fVar34 * DAT_1802dbb4c,0x80800000);
      cVar9 = FUN_180110d11(&DAT_180369d3a,&local_168,0x88,0);
      lVar16 = DAT_18041f1f8;
      if (cVar9 != '\0') {
        uVar17 = FUN_18014e6af(0x280,DAT_1804200e8,0xffffffff);
        FUN_1801c01ac(uVar17,lVar16);
        iVar26 = *(int *)(lVar16 + 0x28);
        if ((longlong)iVar26 != 0) {
          lVar2 = *(longlong *)(lVar16 + 0x30);
          lVar33 = 0;
          do {
            FUN_1801c028a(*(undefined8 *)(lVar2 + lVar33));
            lVar33 = lVar33 + 8;
          } while ((longlong)iVar26 * 8 != lVar33);
        }
        uVar17 = FUN_18014ef2d();
        FUN_1801c01ac(uVar17,lVar16);
      }
      FUN_180111339();
      FUN_18014d7a9();
    }
    cVar9 = FUN_18014c2cb("Multi-Select (advanced)");
    if (cVar9 != '\0') {
      uVar17 = 0xd27;
      FUN_180107e9e("imgui_demo.cpp",0xd27,"Widgets/Selection State/Multi-Select (advanced)");
      cVar9 = FUN_18014c2cb("Options");
      if (cVar9 != '\0') {
        cVar9 = FUN_180136a21("Selectables",
                              CONCAT71((int7)((ulonglong)uVar17 >> 8),DAT_180420120) ^ 1);
        if (cVar9 != '\0') {
          DAT_180420120 = 0;
        }
        FUN_180119893(0,DAT_1802bb8e0);
        cVar9 = FUN_180136a21("Tree nodes",DAT_180420120);
        if (cVar9 != '\0') {
          DAT_180420120 = 1;
        }
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "TreeNode() is technically supported but... using this correctly is more complicated (you need some sort of linear/random access to your tree, which is suited to advanced trees setups already implementing filters and clipper. We will work toward simplifying and demoing this.\n\nFor now the tree demo is actually a little bit meaningless because it is an empty tree with only root nodes."
                     );
        FUN_180135c3a("Enable clipper",&DAT_180404a68);
        FUN_180135c3a("Enable deletion",&DAT_180404a69);
        FUN_180135c3a("Enable drag & drop",&DAT_180404a6a);
        FUN_180135c3a("Show in a table",&DAT_18042011c);
        FUN_180135c3a("Show color button",&DAT_180404a6b);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_SingleSelect",&DAT_180404a6c,1);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoSelectAll",&DAT_180404a6c,2);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoRangeSelect",&DAT_180404a6c,4);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoAutoSelect",&DAT_180404a6c,8);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoAutoClear",&DAT_180404a6c,0x10);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoAutoClearOnReselect",&DAT_180404a6c,0x20);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_NoSelectOnRightClick",&DAT_180404a6c,0x20000);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_BoxSelect1d",&DAT_180404a6c,0x40);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_BoxSelect2d",&DAT_180404a6c,0x80);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_BoxSelectNoScroll",&DAT_180404a6c,0x100);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_ClearOnEscape",&DAT_180404a6c,0x200);
        thunk_FUN_18013698f("ImGuiMultiSelectFlags_ClearOnClickVoid",&DAT_180404a6c,0x400);
        cVar9 = thunk_FUN_18013698f("ImGuiMultiSelectFlags_ScopeWindow",&DAT_180404a6c,0x800);
        if ((cVar9 != '\0') && ((DAT_180404a6c >> 0xb & 1) != 0)) {
          DAT_180404a6c = DAT_180404a6c & 0xffffefff;
        }
        cVar9 = thunk_FUN_18013698f("ImGuiMultiSelectFlags_ScopeRect",&DAT_180404a6c,0x1000);
        if ((cVar9 != '\0') && ((DAT_180404a6c >> 0xc & 1) != 0)) {
          DAT_180404a6c = DAT_180404a6c & 0xfffff7ff;
        }
        cVar9 = thunk_FUN_18013698f("ImGuiMultiSelectFlags_SelectOnAuto",&DAT_180404a6c,0x2000);
        if (cVar9 != '\0') {
          DAT_180404a6c = DAT_180404a6c & 0xffff3fff;
        }
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "Apply selection on mouse down when clicking on unselected item, on mouse up when clicking on selected item. (Default)"
                     );
        cVar9 = thunk_FUN_18013698f("ImGuiMultiSelectFlags_SelectOnClickAlways",&DAT_180404a6c,
                                    0x4000);
        if (cVar9 != '\0') {
          DAT_180404a6c = DAT_180404a6c & 0xffff5fff;
        }
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063(
                     "Prevents Drag and Drop from being used on multi-selection, but allows e.g. BoxSelect to always reselect even when clicking inside an existing selection. (Excel style behavior)"
                     );
        cVar9 = thunk_FUN_18013698f("ImGuiMultiSelectFlags_SelectOnClickRelease",&DAT_180404a6c,
                                    0x8000);
        if (cVar9 != '\0') {
          DAT_180404a6c = DAT_180404a6c & 0xffff9fff;
        }
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180124063("Allow dragging an unselected item without altering selection.");
        FUN_18014d7a9();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180420138) && (FUN_18023d500(&DAT_180420138), DAT_180420138 == -1)) {
        _DAT_180420128 = 0;
        DAT_180420130 = 0;
        FUN_18023d710(&LAB_1801c032a);
        _Init_thread_footer(&DAT_180420138);
      }
      if (DAT_18042013c == 0) {
        iVar29 = 1000;
        iVar26 = DAT_180420128;
        do {
          iVar24 = DAT_18042013c;
          DAT_18042013c = DAT_18042013c + 1;
          if (iVar26 == DAT_18042012c) {
            if (iVar26 == 0) {
              iVar14 = 8;
            }
            else {
              iVar14 = iVar26 / 2 + iVar26;
            }
            iVar23 = iVar26 + 1;
            if (iVar26 + 1 < iVar14) {
              iVar23 = iVar14;
            }
            lVar16 = FUN_1800fe7f8((longlong)iVar23 << 2);
            if (DAT_180420130 != 0) {
              FUN_1802a82f0(lVar16,DAT_180420130,(longlong)DAT_180420128 << 2);
              FUN_1800fe8d4(DAT_180420130);
            }
            _DAT_180420128 = CONCAT44(iVar23,DAT_180420128);
            iVar26 = DAT_180420128;
            DAT_180420130 = lVar16;
          }
          *(int *)(DAT_180420130 + (longlong)iVar26 * 4) = iVar24;
          iVar26 = DAT_180420128 + 1;
          _DAT_180420128 = CONCAT44(DAT_18042012c,iVar26);
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180420170) && (FUN_18023d500(&DAT_180420170), DAT_180420170 == -1)) {
        FUN_1801bf34e(&DAT_180420140);
        FUN_18023d710(FUN_1801c033b);
        _Init_thread_footer(&DAT_180420170);
      }
      FUN_1801330a5("Selection size: %d/%d",DAT_180420140,_DAT_180420128 & 0xffffffff);
      if (DAT_180420120 == 1) {
        fVar34 = (float)FUN_180116c08();
      }
      else {
        fVar34 = (float)FUN_18011a43e();
      }
      local_168 = (ulonglong)(uint)((float)DAT_180420128 * fVar34) << 0x20;
      FUN_180116af2(&local_168);
      fVar34 = (float)FUN_180116c08();
      local_168 = CONCAT44(fVar34 * DAT_1802dbb4c,0x80800000);
      cVar9 = FUN_180110d11("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar13 = FUN_180116c08();
        local_120 = FUN_180116c08();
        local_11c = uVar13;
        if (DAT_180420120 == 1) {
          FUN_180101aa6(0xe,0);
        }
        lVar16 = FUN_18014e6af(DAT_180404a6c,DAT_180420140,_DAT_180420128 & 0xffffffff);
        FUN_18014f7d4(&DAT_180420140,lVar16);
        bVar11 = FUN_1801152ff(0x20a,1);
        bVar11 = 0 < DAT_180420140 & bVar11;
        local_a9 = bVar11 | DAT_180420174;
        local_d0 = 0xffffffff;
        if (bVar11 != 0 || (DAT_180420174 & 1) != 0) {
          local_d0 = FUN_1801bf40c(&DAT_180420140,lVar16,_DAT_180420128 & 0xffffffff);
        }
        DAT_180420174 = 0;
        if (DAT_18042011c == '\x01') {
          if (DAT_180420120 == 1) {
            local_168 = 0;
            FUN_180101bbb(0x11);
          }
          local_168 = 0;
          FUN_180164c18("##Split",2,0x400011,&local_168,
                        in_stack_fffffffffffffe88 & 0xffffffff00000000);
          FUN_18016a158(&DAT_1803861e4,8,DAT_1802dc414,0);
          FUN_18016a158(&DAT_1803861e4,8,DAT_1802dbb70,0);
        }
        FUN_1801003f2();
        if (DAT_180404a68 == 1) {
          FUN_1801004b6(&local_110,_DAT_180420128 & 0xffffffff,DAT_1802bb8e0);
          if ((int)local_d0 != -1) {
            FUN_1801007ee(&local_110,local_d0,(int)local_d0 + 1);
          }
          lVar16 = *(longlong *)(lVar16 + 0x10);
          if (lVar16 != -1) {
            FUN_1801007ee(&local_110,lVar16,(int)lVar16 + 1);
          }
        }
        if (DAT_180404a68 != 0) goto LAB_1801bba82;
        uVar27 = 0;
        local_d4 = DAT_180420128;
        fVar34 = _UNK_18032929c;
        fVar3 = _UNK_180329298;
        fVar4 = _UNK_180329294;
        fVar5 = _DAT_180329290;
        uVar13 = DAT_1802de9b4;
        uVar6 = DAT_1802bb8e0;
        fVar7 = DAT_1802ac570;
        while( true ) {
          while( true ) {
            if (local_d4 <= (int)uVar27) break;
            local_a8 = CONCAT44(local_a8._4_4_,(int)uVar27);
            if (DAT_18042011c == '\x01') {
              FUN_18016ab34();
            }
            lVar16 = (longlong)(int)local_a8;
            fVar1 = *(float *)(DAT_180420130 + lVar16 * 4);
            local_118 = (&PTR_s_Artichoke_180328770)[(int)fVar1 % 0x1c];
            FUN_1801bf199(&local_168,"Object %05d: %s",fVar1);
            FUN_18011810d(fVar1);
            if (DAT_180404a6b == '\x01') {
              uVar30 = (int)local_a8 * 0x50b74b;
              local_c8[2] = (float)(uVar30 >> 0x10 & 0xff) * fVar3;
              fStack_bc = fVar7 * fVar34;
              local_c8[1] = (float)(uVar30 >> 8 & 0xff) * fVar4;
              local_c8[0] = (float)(uVar30 & 0xff) * fVar5;
              FUN_180149615(&DAT_18037a670,local_c8,0x40,&local_120);
              FUN_180119893(0,uVar6);
            }
            bVar11 = FUN_18014f686(&DAT_180420140,local_a8 & 0xffffffff);
            unaff_R15 = (float *)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),bVar11);
            FUN_18014f370(lVar16);
            if (DAT_180420120 == 0) {
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              FUN_1801391f6(&local_168,(ulonglong)unaff_R15 & 0xffffffff,0,local_c8);
              bVar12 = 0;
            }
            else {
              bVar12 = FUN_18014cfb6(&local_168,bVar11 | 0x8c0);
            }
            if ((int)local_d0 == (int)local_a8) {
              FUN_180117268(0xffffffff);
            }
            if ((DAT_180404a6a == '\x01') && (cVar9 = FUN_18011c8b1(0), cVar9 != '\0')) {
              lVar16 = FUN_18011d202();
              if (lVar16 == 0) {
                local_c8[0] = 0.0;
                local_c8[1] = 0.0;
                local_d8 = 0.0;
                if (bVar11 == 0) {
                  local_b8 = (float *)0x0;
                  pfVar20 = (float *)FUN_1800fe7f8(0x20);
                  *pfVar20 = fVar1;
                  iVar26 = 4;
                }
                else {
                  uVar30 = 0;
                  pfVar20 = (float *)0x0;
                  uVar15 = 0;
                  while (local_b8 = pfVar20,
                        cVar9 = FUN_18014f6a0(&DAT_180420140,local_c8,&local_d8), fVar1 = local_d8,
                        cVar9 != '\0') {
                    pfVar19 = pfVar20;
                    uVar25 = uVar30;
                    if (uVar15 == uVar30) {
                      uVar25 = (uVar30 >> 1) + uVar30;
                      if (uVar30 == 0) {
                        uVar25 = 8;
                      }
                      if ((int)uVar25 <= (int)(uVar30 + 1)) {
                        uVar25 = uVar30 + 1;
                      }
                      local_b8 = pfVar20;
                      pfVar19 = (float *)FUN_1800fe7f8((ulonglong)uVar25 * 4);
                      if (pfVar20 != (float *)0x0) {
                        FUN_1802a82f0(pfVar19,pfVar20,(ulonglong)uVar30 << 2);
                        local_b8 = pfVar20;
                        FUN_1800fe8d4(pfVar20);
                      }
                    }
                    uVar30 = uVar25;
                    pfVar20 = pfVar19;
                    pfVar20[uVar15] = fVar1;
                    uVar15 = uVar15 + 1;
                    unaff_R15 = pfVar20;
                  }
                  iVar26 = uVar15 << 2;
                }
                local_b8 = pfVar20;
                FUN_18011cb49("MULTISELECT_DEMO_ITEMS",pfVar20,iVar26,0);
                local_b8 = pfVar20;
                if (pfVar20 != (float *)0x0) {
                  FUN_1800fe8d4(pfVar20);
                }
              }
              puVar21 = (undefined8 *)FUN_18011d202();
              uVar30 = *(uint *)(puVar21 + 1);
              if ((uVar30 & 0xfffffffc) == 4) {
                FUN_1801330a5("Object %05d: %s",(longlong)*(int *)*puVar21,
                              (&PTR_s_Artichoke_180328770)[*(int *)*puVar21 % 0x1c]);
              }
              else {
                uVar15 = uVar30 + 3;
                if (-1 < (int)uVar30) {
                  uVar15 = uVar30;
                }
                FUN_1801330a5("Dragging %d objects",(int)uVar15 >> 2);
              }
              FUN_18011cb14();
            }
            if ((bVar12 & DAT_180420120) == 1) {
              FUN_18014d7a9();
            }
            cVar9 = FUN_18011b87b(0,0);
            if (cVar9 != '\0') {
              FUN_180116580(DAT_180404a69 ^ 1 | DAT_180420140 == 0);
              FUN_1801bf199(&local_168,"Delete %d item(s)###DeleteSelected",DAT_180420140);
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              cVar9 = FUN_1801391f6(&local_168,0,0,local_c8);
              if (cVar9 != '\0') {
                DAT_180420174 = 1;
              }
              FUN_180116676();
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              FUN_1801391f6("Close",0,0,local_c8);
              FUN_18011b3ef();
            }
            if (DAT_18042011c == '\x01') {
              FUN_18016ab34();
              FUN_1800ffdb5(uVar13);
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              FUN_180101bbb(0xb,local_c8);
              pcVar8 = local_118;
              sVar22 = strlen(local_118);
              FUN_180145e1f("##NoLabel",pcVar8,sVar22,0x200,0,0);
              FUN_180101ccb(1);
            }
            FUN_18011834f();
            uVar27 = (ulonglong)((int)local_a8 + 1);
          }
          if (DAT_180404a68 == 0) break;
LAB_1801bba82:
          cVar9 = FUN_180100a32();
          if (cVar9 == '\0') break;
          piVar18 = &DAT_180420128;
          uVar27 = 0;
          if ((DAT_180404a68 & 1) != 0) {
            piVar18 = (int *)((longlong)&local_110 + 4);
            uVar27 = (ulonglong)local_110 & 0xffffffff;
          }
          local_d4 = *piVar18;
          fVar34 = _UNK_18032929c;
          fVar3 = _UNK_180329298;
          fVar4 = _UNK_180329294;
          fVar5 = _DAT_180329290;
          uVar13 = DAT_1802de9b4;
          uVar6 = DAT_1802bb8e0;
          fVar7 = DAT_1802ac570;
        }
        if ((DAT_18042011c == '\x01') && (FUN_180168430(), DAT_180420120 == 1)) {
          FUN_180101ccb(1);
        }
        uVar17 = FUN_18014ef2d();
        FUN_18014f7d4(&DAT_180420140,uVar17);
        if ((local_a9 & 1) != 0) {
          FUN_1801bf486(&DAT_180420140,uVar17,&DAT_180420128,local_d0);
        }
        if (DAT_180420120 == 1) {
          FUN_180101ccb(1);
        }
        thunk_FUN_180100412(&local_110);
      }
      FUN_180111339();
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  return;
}

