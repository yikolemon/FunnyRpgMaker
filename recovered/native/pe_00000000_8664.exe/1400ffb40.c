/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ffb40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ffb40(void)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
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
  cVar9 = FUN_1400c51fb("Selection State & Multi-Select");
  if (cVar9 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0xb30,"Widgets/Selection State & Multi-Select");
    FUN_14009cf92(
                 "Selections can be built using Selectable(), TreeNode() or other widgets. Selection state is owned by application code/data."
                 );
    FUN_1400ac536("Wiki page:");
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400b062e("imgui/wiki/Multi-Select","https://github.com/ocornut/imgui/wiki/Multi-Select");
    cVar9 = FUN_1400c51fb("Single-Select");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xb3a,"Widgets/Selection State/Single-Select");
      iVar26 = 0;
      do {
        FUN_140104e1d(&local_168,"Object %d",iVar26);
        local_110 = (undefined *)0x0;
        cVar9 = FUN_1400b2126(&local_168,iVar26 == DAT_140f181fc,0,&local_110);
        if (cVar9 != '\0') {
          DAT_140f181fc = iVar26;
        }
        iVar26 = iVar26 + 1;
      } while (iVar26 != 5);
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (manual/simplified, without BeginMultiSelect)");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xb4a,
                    "Widgets/Selection State/Multi-Select (manual/simplified, without BeginMultiSelect)"
                   );
      FUN_14009cf92("Hold Ctrl and Click to select multiple items.");
      uVar27 = 0;
      unaff_R15 = (float *)&DAT_140f315ea;
      do {
        FUN_140104e1d(&local_168,"Object %d",uVar27 & 0xffffffff);
        local_110 = (undefined *)0x0;
        cVar9 = FUN_1400b2126(&local_168,(&DAT_140f315ea)[uVar27],0,&local_110);
        if (cVar9 != '\0') {
          lVar16 = FUN_140081200();
          if (*(char *)(lVar16 + 0x108) == '\0') {
            DAT_140f315ee = 0;
            _DAT_140f315ea = 0;
          }
          (&DAT_140f315ea)[uVar27] = (&DAT_140f315ea)[uVar27] ^ 1;
        }
        uVar27 = uVar27 + 1;
      } while (uVar27 != 5);
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xb60,"Widgets/Selection State/Multi-Select");
      FUN_1400abfd5("Supported features:");
      FUN_1400ac536("Keyboard navigation (arrows, page up/down, home/end, space).");
      FUN_1400ac536("Ctrl modifier to preserve and toggle selection.");
      FUN_1400ac536("Shift modifier for range selection.");
      FUN_1400ac536("Ctrl+A to select all.");
      FUN_1400ac536("Escape to clear selection.");
      FUN_1400ac536("Click and drag to box-select.");
      FUN_1400abfd5(
                   "Tip: Use \'Demo->Tools->Debug Log->Selection\' to see selection requests as they happen."
                   );
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31620) && (FUN_140188840(&DAT_140f31620), DAT_140f31620 == -1)) {
        FUN_1400c8496(&DAT_140f315f0);
        FUN_140188b50(FUN_140104ed3);
        _Init_thread_footer(&DAT_140f31620);
      }
      FUN_1400abfd5("Selection: %d/%d",DAT_140f315f0,0x32);
      fVar34 = (float)FUN_14008ff20();
      local_168 = CONCAT44(fVar34 * DAT_1401c86d4,0x80800000);
      cVar9 = FUN_14008a029("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar17 = FUN_1400c75df(0x240,DAT_140f315f0,0x32);
        FUN_1400c8704(&DAT_140f315f0,uVar17);
        uVar27 = 0;
        unaff_R15 = (float *)&local_110;
        do {
          uVar30 = (uint)uVar27 - 0x1c;
          if (uVar27 < 0x1c) {
            uVar30 = (uint)uVar27;
          }
          FUN_140104e1d(&local_168,"Object %05d: %s",uVar27 & 0xffffffff,
                        (&PTR_s_Artichoke_140e8cb00)[uVar30]);
          uVar13 = FUN_1400c85b6(&DAT_140f315f0,uVar27 & 0xffffffff);
          FUN_1400c82a0(uVar27);
          local_110 = (undefined *)0x0;
          FUN_1400b2126(&local_168,uVar13,0,unaff_R15);
          uVar27 = uVar27 + 1;
        } while (uVar27 != 0x32);
        uVar17 = FUN_1400c7e5d();
        FUN_1400c8704(&DAT_140f315f0,uVar17);
      }
      FUN_14008a651();
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (with clipper)");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xb89,"Widgets/Selection State/Multi-Select (with clipper)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31658) && (FUN_140188840(&DAT_140f31658), DAT_140f31658 == -1)) {
        FUN_1400c8496(&DAT_140f31628);
        FUN_140188b50(FUN_140104f4a);
        _Init_thread_footer(&DAT_140f31658);
      }
      FUN_1400abfd5("Added features:");
      FUN_1400ac536("Using ImGuiListClipper.");
      FUN_1400abfd5("Selection: %d/%d",DAT_140f31628,10000);
      fVar34 = (float)FUN_14008ff20();
      local_168 = CONCAT44(fVar34 * DAT_1401c86d4,0x80800000);
      cVar9 = FUN_14008a029("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar27 = FUN_1400c75df(0x240,DAT_140f31628,10000);
        FUN_1400c8704(&DAT_140f31628,uVar27);
        FUN_1400796ae(&local_110);
        FUN_140079772(&local_110,10000,DAT_1401c86a4);
        lVar16 = *(longlong *)(uVar27 + 0x10);
        if (lVar16 != -1) {
          FUN_140079aaa(&local_110,lVar16,(int)lVar16 + 1);
        }
        unaff_R15 = local_c8;
        while (cVar9 = FUN_140079cee(&local_110), cVar9 != '\0') {
          for (fVar34 = (float)local_110; (int)fVar34 < local_110._4_4_;
              fVar34 = (float)((int)fVar34 + 1)) {
            FUN_140104e1d(&local_168,"Object %05d: %s",fVar34,
                          (&PTR_s_Artichoke_140e8cb00)[(int)fVar34 % 0x1c]);
            uVar10 = FUN_1400c85b6(&DAT_140f31628,fVar34);
            uVar27 = CONCAT71((int7)(uVar27 >> 8),uVar10);
            FUN_1400c82a0((longlong)(int)fVar34);
            local_c8[0] = 0.0;
            local_c8[1] = 0.0;
            FUN_1400b2126(&local_168,uVar27 & 0xffffffff,0);
          }
        }
        uVar17 = FUN_1400c7e5d();
        FUN_1400c8704(&DAT_140f31628,uVar17);
        thunk_FUN_1400796ce(&local_110);
      }
      FUN_14008a651();
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (with deletion)");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",3000,"Widgets/Selection State/Multi-Select (with deletion)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31670) && (FUN_140188840(&DAT_140f31670), DAT_140f31670 == -1)) {
        _DAT_140f31660 = 0;
        DAT_140f31668 = 0;
        FUN_140188b50(&LAB_140104fc1);
        _Init_thread_footer(&DAT_140f31670);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f316a8) && (FUN_140188840(&DAT_140f316a8), DAT_140f316a8 == -1)) {
        FUN_140104fd2(&DAT_140f31678);
        FUN_140188b50(FUN_140105099);
        _Init_thread_footer(&DAT_140f316a8);
      }
      _DAT_140f31680 = &DAT_140f31660;
      _DAT_140f31688 = &LAB_1401060b6;
      FUN_1400abfd5("Added features:");
      FUN_1400ac536("Dynamic list with Delete key support.");
      FUN_1400abfd5("Selection size: %d/%d",DAT_140f31678,_DAT_140f31660 & 0xffffffff);
      if (DAT_140f316ac == 0) {
        iVar29 = 0x32;
        iVar26 = DAT_140f31660;
        do {
          iVar24 = DAT_140f316ac;
          DAT_140f316ac = DAT_140f316ac + 1;
          if (iVar26 == DAT_140f31664) {
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
            lVar16 = FUN_140077ab4((longlong)iVar23 << 2);
            if (DAT_140f31668 != 0) {
              FUN_1401c5180(lVar16,DAT_140f31668,(longlong)(int)DAT_140f31660 << 2);
              FUN_140077b90(DAT_140f31668);
            }
            _DAT_140f31660 = CONCAT44(iVar23,DAT_140f31660);
            iVar26 = DAT_140f31660;
            DAT_140f31668 = lVar16;
          }
          *(int *)(DAT_140f31668 + (longlong)iVar26 * 4) = iVar24;
          iVar26 = DAT_140f31660 + 1;
          _DAT_140f31660 = CONCAT44(DAT_140f31664,iVar26);
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      cVar9 = FUN_1400ad18f("Add 20 items");
      if (cVar9 != '\0') {
        iVar29 = 0x14;
        iVar26 = DAT_140f31660;
        do {
          iVar24 = DAT_140f316ac;
          DAT_140f316ac = DAT_140f316ac + 1;
          if (iVar26 == DAT_140f31664) {
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
            lVar16 = FUN_140077ab4((longlong)iVar23 << 2);
            if (DAT_140f31668 != 0) {
              FUN_1401c5180(lVar16,DAT_140f31668,(longlong)(int)DAT_140f31660 << 2);
              FUN_140077b90(DAT_140f31668);
            }
            _DAT_140f31660 = CONCAT44(iVar23,DAT_140f31660);
            iVar26 = DAT_140f31660;
            DAT_140f31668 = lVar16;
          }
          *(int *)(DAT_140f31668 + (longlong)iVar26 * 4) = iVar24;
          iVar26 = DAT_140f31660 + 1;
          _DAT_140f31660 = CONCAT44(DAT_140f31664,iVar26);
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      FUN_140092bab(0,DAT_1401c86a4);
      cVar9 = FUN_1400ad18f("Remove 20 items");
      if ((cVar9 != '\0') && (0 < (int)DAT_140f31660)) {
        uVar30 = 0x14;
        if (DAT_140f31660 < 0x14) {
          uVar30 = DAT_140f31660;
        }
        uVar30 = uVar30 + 1;
        uVar15 = DAT_140f31660;
        do {
          FUN_1400c86ba(&DAT_140f31678,
                        *(undefined4 *)(DAT_140f31668 + -4 + (longlong)(int)uVar15 * 4),0);
          uVar15 = DAT_140f31660 - 1;
          _DAT_140f31660 = CONCAT44(DAT_140f31664,uVar15);
          uVar30 = uVar30 - 1;
        } while (1 < uVar30);
      }
      fVar34 = (float)FUN_140093756();
      local_168 = (ulonglong)(uint)((float)(int)DAT_140f31660 * fVar34) << 0x20;
      FUN_14008fe0a(&local_168);
      fVar34 = (float)FUN_14008ff20();
      local_168 = CONCAT44(fVar34 * DAT_1401c86d4,0x80800000);
      cVar9 = FUN_14008a029("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar17 = FUN_1400c75df(0x240,DAT_140f31678,_DAT_140f31660 & 0xffffffff);
        FUN_1400c8704(&DAT_140f31678,uVar17);
        bVar11 = FUN_14008e617(0x20a,1);
        bVar11 = 0 < DAT_140f31678 & bVar11;
        local_a8 = CONCAT44(local_a8._4_4_,0xffffffff);
        local_118 = (char *)CONCAT71(local_118._1_7_,bVar11);
        if (bVar11 == 1) {
          uVar13 = FUN_140105110(&DAT_140f31678,uVar17,_DAT_140f31660 & 0xffffffff);
          local_a8 = CONCAT44(local_a8._4_4_,uVar13);
        }
        if (0 < (int)DAT_140f31660) {
          uVar27 = local_a8 & 0xffffffff;
          uVar31 = 0;
          unaff_R15 = (float *)&DAT_140f31678;
          do {
            uVar30 = *(uint *)(DAT_140f31668 + uVar31 * 4);
            FUN_140104e1d(&local_168,"Object %05u: %s",uVar30,
                          (&PTR_s_Artichoke_140e8cb00)[uVar30 % 0x1c]);
            uVar13 = FUN_1400c85b6(&DAT_140f31678,uVar30);
            FUN_1400c82a0(uVar31);
            local_110 = (undefined *)0x0;
            FUN_1400b2126(&local_168,uVar13,0,&local_110);
            if (uVar27 == uVar31) {
              FUN_140090580(0xffffffff);
            }
            uVar31 = uVar31 + 1;
          } while ((longlong)uVar31 < (longlong)(int)DAT_140f31660);
        }
        uVar17 = FUN_1400c7e5d();
        FUN_1400c8704(&DAT_140f31678,uVar17);
        if ((char)local_118 != '\0') {
          FUN_14010518a(&DAT_140f31678,uVar17,&DAT_140f31660,local_a8 & 0xffffffff);
        }
      }
      FUN_14008a651();
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (dual list box)");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xbf5,"Widgets/Selection State/Multi-Select (dual list box)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31738) && (FUN_140188840(&DAT_140f31738), DAT_140f31738 == -1)) {
        FUN_140105398(&DAT_140f316b0);
        FUN_140188b50(&LAB_140105722);
        _Init_thread_footer(&DAT_140f31738);
      }
      if (DAT_140f316c0 == 0 && DAT_140f316b0 == 0) {
        iVar26 = 0;
        iVar29 = 0;
        do {
          iVar24 = DAT_140f316b4;
          lVar16 = DAT_140f316b8;
          if (iVar26 == DAT_140f316b4) {
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
            lVar16 = FUN_140077ab4((longlong)iVar24 << 2);
            iVar26 = DAT_140f316b0;
            if (DAT_140f316b8 != 0) {
              FUN_1401c5180(lVar16,DAT_140f316b8,(longlong)DAT_140f316b0 << 2);
              FUN_140077b90(DAT_140f316b8);
              iVar26 = DAT_140f316b0;
            }
          }
          DAT_140f316b8 = lVar16;
          DAT_140f316b4 = iVar24;
          *(int *)(DAT_140f316b8 + (longlong)iVar26 * 4) = iVar29;
          iVar26 = DAT_140f316b0 + 1;
          iVar29 = iVar29 + 1;
          DAT_140f316b0 = iVar26;
        } while (iVar29 != 0x1c);
      }
      FUN_14010572e(&DAT_140f316b0);
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (in a table)");
    uVar30 = (uint)(in_stack_fffffffffffffe88 >> 0x20);
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xc05,"Widgets/Selection State/Multi-Select (in a table)");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31770) && (FUN_140188840(&DAT_140f31770), DAT_140f31770 == -1)) {
        FUN_1400c8496(&DAT_140f31740);
        FUN_140188b50(FUN_140105b69);
        _Init_thread_footer(&DAT_140f31770);
      }
      FUN_1400abfd5("Selection: %d/%d",DAT_140f31740,10000);
      fVar34 = (float)FUN_14008ff20();
      local_168 = (ulonglong)(uint)(fVar34 * DAT_1401c86d4) << 0x20;
      in_stack_fffffffffffffe88 = (ulonglong)uVar30 << 0x20;
      cVar9 = FUN_14010cbe8("##Basket",2,0x2000540,&local_168,in_stack_fffffffffffffe88);
      if (cVar9 != '\0') {
        FUN_140112128("Object",0,0,0);
        FUN_140112128("Action",0,0,0);
        FUN_140112365(0,1);
        FUN_1401133b4();
        puVar32 = &DAT_140f31740;
        lVar16 = FUN_1400c75df(0x240,DAT_140f31740,10000);
        FUN_1400c8704(&DAT_140f31740,lVar16);
        FUN_1400796ae(&local_110);
        FUN_140079772(&local_110,10000,DAT_1401c86a4);
        lVar16 = *(longlong *)(lVar16 + 0x10);
        if (lVar16 != -1) {
          FUN_140079aaa(&local_110,lVar16,(int)lVar16 + 1);
        }
        unaff_R15 = local_c8;
        while (cVar9 = FUN_140079cee(&local_110), cVar9 != '\0') {
          for (fVar34 = (float)local_110; (int)fVar34 < local_110._4_4_;
              fVar34 = (float)((int)fVar34 + 1)) {
            FUN_14011264b(0,0);
            FUN_140112b04();
            FUN_140091425(fVar34);
            FUN_140104e1d(&local_168,"Object %05d: %s",fVar34,
                          (&PTR_s_Artichoke_140e8cb00)[(int)fVar34 % 0x1c]);
            uVar10 = FUN_1400c85b6(&DAT_140f31740,fVar34);
            puVar32 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar32 >> 8),uVar10);
            FUN_1400c82a0((longlong)(int)fVar34);
            local_c8[0] = 0.0;
            local_c8[1] = 0.0;
            FUN_1400b2126(&local_168,(ulonglong)puVar32 & 0xffffffff,0x12);
            FUN_140112b04();
            FUN_1400ad18f();
            FUN_140091667();
          }
        }
        uVar17 = FUN_1400c7e5d();
        FUN_1400c8704(&DAT_140f31740,uVar17);
        FUN_140110400();
        thunk_FUN_1400796ce(&local_110);
      }
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (checkboxes)");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xc34,"Widgets/Selection State/Multi-Select (checkboxes)");
      FUN_1400abfd5("In a list of checkboxes (not selectable):");
      FUN_1400ac536("Using _NoAutoSelect + _NoAutoClear flags.");
      FUN_1400ac536("Shift+Click to check multiple boxes.");
      FUN_1400ac536("Shift+Keyboard to copy current value to other boxes.");
      thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoAutoSelect",&DAT_140f18200,8);
      thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoAutoClear",&DAT_140f18200,0x10);
      thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_BoxSelect2d",&DAT_140f18200,0x80);
      fVar34 = (float)FUN_14008ff20();
      local_168 = CONCAT44(fVar34 * DAT_1401c86d4,0x80800000);
      cVar9 = FUN_14008a029("##Basket",&local_168,9,0);
      if (cVar9 != '\0') {
        uVar17 = FUN_1400c75df(DAT_140f18200,0xffffffff,0x14);
        FUN_1400c89f4(&local_110);
        local_110 = &DAT_140f31780;
        local_108 = &LAB_1401063f2;
        FUN_1400c89fe(&local_110,uVar17);
        uVar27 = 0;
        do {
          FUN_140104e1d(&local_168,"Item %d",uVar27 & 0xffffffff);
          FUN_1400c82a0(uVar27);
          FUN_1400aeb6a(&local_168,&DAT_140f31780 + uVar27);
          uVar27 = uVar27 + 1;
        } while (uVar27 != 0x14);
        uVar17 = FUN_1400c7e5d();
        FUN_1400c89fe(&local_110,uVar17);
      }
      FUN_14008a651();
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (multiple scopes)");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xc5a,"Widgets/Selection State/Multi-Select (multiple scopes)")
      ;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31830) && (FUN_140188840(&DAT_140f31830), DAT_140f31830 == -1)) {
        local_a8 = 0;
        do {
          FUN_1400c8496((longlong)&DAT_140f317a0 + local_a8);
          local_a8 = local_a8 + 0x30;
        } while (local_a8 != 0x90);
        FUN_140188b50(FUN_140105be0);
        _Init_thread_footer(&DAT_140f31830);
      }
      cVar9 = thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_ScopeWindow",&DAT_140f18204,0x800);
      if ((cVar9 != '\0') && ((DAT_140f18204 >> 0xb & 1) != 0)) {
        DAT_140f18204 = DAT_140f18204 & 0xffffefff;
      }
      cVar9 = thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_ScopeRect",&DAT_140f18204,0x1000);
      if ((cVar9 != '\0') && ((DAT_140f18204 >> 0xc & 1) != 0)) {
        DAT_140f18204 = DAT_140f18204 & 0xfffff7ff;
      }
      thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_ClearOnClickVoid",&DAT_140f18204,0x400);
      thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_BoxSelect1d",&DAT_140f18204,0x40);
      uVar27 = 0;
      unaff_R15 = (float *)&local_168;
      do {
        FUN_140091425(uVar27 & 0xffffffff);
        puVar32 = &DAT_140f317a0 + uVar27 * 0xc;
        local_a8 = uVar27;
        uVar17 = FUN_1400c75df(DAT_140f18204,(&DAT_140f317a0)[uVar27 * 0xc],8);
        FUN_1400c8704(puVar32,uVar17);
        FUN_1400b1021("Selection scope");
        FUN_1400abfd5("Selection size: %d/%d",(&DAT_140f317a0)[uVar27 * 0xc],8);
        ppuVar28 = &PTR_s_Artichoke_140e8cb00;
        uVar27 = 0;
        do {
          FUN_140104e1d(unaff_R15,"Object %05d: %s",uVar27 & 0xffffffff,*ppuVar28);
          uVar13 = FUN_1400c85b6(puVar32,uVar27 & 0xffffffff);
          FUN_1400c82a0(uVar27);
          local_110 = (undefined *)0x0;
          FUN_1400b2126(unaff_R15,uVar13,0,&local_110);
          uVar27 = uVar27 + 1;
          ppuVar28 = ppuVar28 + 1;
        } while (uVar27 != 8);
        uVar17 = FUN_1400c7e5d();
        FUN_1400c8704(puVar32,uVar17);
        FUN_140091667();
        uVar27 = local_a8 + 1;
      } while (uVar27 != 3);
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (tiled assets browser)");
    if (cVar9 != '\0') {
      FUN_1400aeb6a("Assets Browser",&DAT_140f30931);
      FUN_1400abfd5("(also access from \'Examples->Assets Browser\' in menu)");
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (trees)");
    if (cVar9 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xc98,"Widgets/Selection State/Multi-Select (trees)");
      FUN_14009cf92(
                   "This is rather advanced and experimental. If you are getting started with multi-select, please don\'t start by looking at how to use it for a tree!\n\nFuture versions will try to simplify and formalize some of this."
                   );
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31868) && (FUN_140188840(&DAT_140f31868), DAT_140f31868 == -1)) {
        FUN_1400c8496(&DAT_140f31838);
        FUN_140188b50(FUN_140105cdc);
        _Init_thread_footer(&DAT_140f31868);
      }
      if (DAT_140f30948 == 0) {
        DAT_140f30948 = FUN_140105d53();
      }
      FUN_1400abfd5("Selection size: %d",DAT_140f31838);
      fVar34 = (float)FUN_14008ff20();
      local_168 = CONCAT44(fVar34 * DAT_1401c86d4,0x80800000);
      cVar9 = FUN_14008a029(&DAT_140ecab82,&local_168,0x88,0);
      lVar16 = DAT_140f30948;
      if (cVar9 != '\0') {
        uVar17 = FUN_1400c75df(0x280,DAT_140f31838,0xffffffff);
        FUN_140105eb0(uVar17,lVar16);
        iVar26 = *(int *)(lVar16 + 0x28);
        if ((longlong)iVar26 != 0) {
          lVar2 = *(longlong *)(lVar16 + 0x30);
          lVar33 = 0;
          do {
            FUN_140105f8e(*(undefined8 *)(lVar2 + lVar33));
            lVar33 = lVar33 + 8;
          } while ((longlong)iVar26 * 8 != lVar33);
        }
        uVar17 = FUN_1400c7e5d();
        FUN_140105eb0(uVar17,lVar16);
      }
      FUN_14008a651();
      FUN_1400c66d9();
    }
    cVar9 = FUN_1400c51fb("Multi-Select (advanced)");
    if (cVar9 != '\0') {
      uVar17 = 0xd27;
      FUN_1400811b6("imgui_demo.cpp",0xd27,"Widgets/Selection State/Multi-Select (advanced)");
      cVar9 = FUN_1400c51fb("Options");
      if (cVar9 != '\0') {
        cVar9 = FUN_1400af951("Selectables",
                              CONCAT71((int7)((ulonglong)uVar17 >> 8),DAT_140f31870) ^ 1);
        if (cVar9 != '\0') {
          DAT_140f31870 = 0;
        }
        FUN_140092bab(0,DAT_1401c86a4);
        cVar9 = FUN_1400af951("Tree nodes",DAT_140f31870);
        if (cVar9 != '\0') {
          DAT_140f31870 = 1;
        }
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92(
                     "TreeNode() is technically supported but... using this correctly is more complicated (you need some sort of linear/random access to your tree, which is suited to advanced trees setups already implementing filters and clipper. We will work toward simplifying and demoing this.\n\nFor now the tree demo is actually a little bit meaningless because it is an empty tree with only root nodes."
                     );
        FUN_1400aeb6a("Enable clipper",&DAT_140f18208);
        FUN_1400aeb6a("Enable deletion",&DAT_140f18209);
        FUN_1400aeb6a("Enable drag & drop",&DAT_140f1820a);
        FUN_1400aeb6a("Show in a table",&DAT_140f3186c);
        FUN_1400aeb6a("Show color button",&DAT_140f1820b);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_SingleSelect",&DAT_140f1820c,1);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoSelectAll",&DAT_140f1820c,2);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoRangeSelect",&DAT_140f1820c,4);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoAutoSelect",&DAT_140f1820c,8);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoAutoClear",&DAT_140f1820c,0x10);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoAutoClearOnReselect",&DAT_140f1820c,0x20);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_NoSelectOnRightClick",&DAT_140f1820c,0x20000);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_BoxSelect1d",&DAT_140f1820c,0x40);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_BoxSelect2d",&DAT_140f1820c,0x80);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_BoxSelectNoScroll",&DAT_140f1820c,0x100);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_ClearOnEscape",&DAT_140f1820c,0x200);
        thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_ClearOnClickVoid",&DAT_140f1820c,0x400);
        cVar9 = thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_ScopeWindow",&DAT_140f1820c,0x800);
        if ((cVar9 != '\0') && ((DAT_140f1820c >> 0xb & 1) != 0)) {
          DAT_140f1820c = DAT_140f1820c & 0xffffefff;
        }
        cVar9 = thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_ScopeRect",&DAT_140f1820c,0x1000);
        if ((cVar9 != '\0') && ((DAT_140f1820c >> 0xc & 1) != 0)) {
          DAT_140f1820c = DAT_140f1820c & 0xfffff7ff;
        }
        cVar9 = thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_SelectOnAuto",&DAT_140f1820c,0x2000);
        if (cVar9 != '\0') {
          DAT_140f1820c = DAT_140f1820c & 0xffff3fff;
        }
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92(
                     "Apply selection on mouse down when clicking on unselected item, on mouse up when clicking on selected item. (Default)"
                     );
        cVar9 = thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_SelectOnClickAlways",&DAT_140f1820c,
                                    0x4000);
        if (cVar9 != '\0') {
          DAT_140f1820c = DAT_140f1820c & 0xffff5fff;
        }
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92(
                     "Prevents Drag and Drop from being used on multi-selection, but allows e.g. BoxSelect to always reselect even when clicking inside an existing selection. (Excel style behavior)"
                     );
        cVar9 = thunk_FUN_1400af8bf("ImGuiMultiSelectFlags_SelectOnClickRelease",&DAT_140f1820c,
                                    0x8000);
        if (cVar9 != '\0') {
          DAT_140f1820c = DAT_140f1820c & 0xffff9fff;
        }
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_14009cf92("Allow dragging an unselected item without altering selection.");
        FUN_1400c66d9();
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f31888) && (FUN_140188840(&DAT_140f31888), DAT_140f31888 == -1)) {
        _DAT_140f31878 = 0;
        DAT_140f31880 = 0;
        FUN_140188b50(&LAB_14010602e);
        _Init_thread_footer(&DAT_140f31888);
      }
      if (DAT_140f3188c == 0) {
        iVar29 = 1000;
        iVar26 = DAT_140f31878;
        do {
          iVar24 = DAT_140f3188c;
          DAT_140f3188c = DAT_140f3188c + 1;
          if (iVar26 == DAT_140f3187c) {
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
            lVar16 = FUN_140077ab4((longlong)iVar23 << 2);
            if (DAT_140f31880 != 0) {
              FUN_1401c5180(lVar16,DAT_140f31880,(longlong)DAT_140f31878 << 2);
              FUN_140077b90(DAT_140f31880);
            }
            _DAT_140f31878 = CONCAT44(iVar23,DAT_140f31878);
            iVar26 = DAT_140f31878;
            DAT_140f31880 = lVar16;
          }
          *(int *)(DAT_140f31880 + (longlong)iVar26 * 4) = iVar24;
          iVar26 = DAT_140f31878 + 1;
          _DAT_140f31878 = CONCAT44(DAT_140f3187c,iVar26);
          iVar29 = iVar29 + -1;
        } while (iVar29 != 0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f318c0) && (FUN_140188840(&DAT_140f318c0), DAT_140f318c0 == -1)) {
        FUN_140104fd2(&DAT_140f31890);
        FUN_140188b50(FUN_14010603f);
        _Init_thread_footer(&DAT_140f318c0);
      }
      FUN_1400abfd5("Selection size: %d/%d",DAT_140f31890,_DAT_140f31878 & 0xffffffff);
      if (DAT_140f31870 == 1) {
        fVar34 = (float)FUN_14008ff20();
      }
      else {
        fVar34 = (float)FUN_140093756();
      }
      local_168 = (ulonglong)(uint)((float)DAT_140f31878 * fVar34) << 0x20;
      FUN_14008fe0a(&local_168);
      fVar34 = (float)FUN_14008ff20();
      local_168 = CONCAT44(fVar34 * DAT_1401c86d4,0x80800000);
      cVar9 = FUN_14008a029("##Basket",&local_168,0x88,0);
      if (cVar9 != '\0') {
        uVar13 = FUN_14008ff20();
        local_120 = FUN_14008ff20();
        local_11c = uVar13;
        if (DAT_140f31870 == 1) {
          FUN_14007ad62(0xe,0);
        }
        lVar16 = FUN_1400c75df(DAT_140f1820c,DAT_140f31890,_DAT_140f31878 & 0xffffffff);
        FUN_1400c8704(&DAT_140f31890,lVar16);
        bVar11 = FUN_14008e617(0x20a,1);
        bVar11 = 0 < DAT_140f31890 & bVar11;
        local_a9 = bVar11 | DAT_140f318c4;
        local_d0 = 0xffffffff;
        if (bVar11 != 0 || (DAT_140f318c4 & 1) != 0) {
          local_d0 = FUN_140105110(&DAT_140f31890,lVar16,_DAT_140f31878 & 0xffffffff);
        }
        DAT_140f318c4 = 0;
        if (DAT_140f3186c == '\x01') {
          if (DAT_140f31870 == 1) {
            local_168 = 0;
            FUN_14007ae77(0x11);
          }
          local_168 = 0;
          FUN_14010cbe8("##Split",2,0x400011,&local_168,
                        in_stack_fffffffffffffe88 & 0xffffffff00000000);
          FUN_140112128(&DAT_140edcdbf,8,DAT_1402114e8,0);
          FUN_140112128(&DAT_140edcdbf,8,DAT_1402115c8,0);
        }
        FUN_1400796ae();
        if (DAT_140f18208 == 1) {
          FUN_140079772(&local_110,_DAT_140f31878 & 0xffffffff,DAT_1401c86a4);
          if ((int)local_d0 != -1) {
            FUN_140079aaa(&local_110,local_d0,(int)local_d0 + 1);
          }
          lVar16 = *(longlong *)(lVar16 + 0x10);
          if (lVar16 != -1) {
            FUN_140079aaa(&local_110,lVar16,(int)lVar16 + 1);
          }
        }
        if (DAT_140f18208 != 0) goto LAB_140101706;
        uVar27 = 0;
        local_d4 = DAT_140f31878;
        fVar34 = _UNK_140e8d62c;
        fVar3 = _UNK_140e8d628;
        fVar4 = _UNK_140e8d624;
        fVar5 = _DAT_140e8d620;
        uVar13 = DAT_140211724;
        fVar6 = DAT_1401c86c8;
        uVar7 = DAT_1401c86a4;
        while( true ) {
          while( true ) {
            if (local_d4 <= (int)uVar27) break;
            local_a8 = CONCAT44(local_a8._4_4_,(int)uVar27);
            if (DAT_140f3186c == '\x01') {
              FUN_140112b04();
            }
            lVar16 = (longlong)(int)local_a8;
            fVar1 = *(float *)(DAT_140f31880 + lVar16 * 4);
            local_118 = (&PTR_s_Artichoke_140e8cb00)[(int)fVar1 % 0x1c];
            FUN_140104e1d(&local_168,"Object %05d: %s",fVar1);
            FUN_140091425(fVar1);
            if (DAT_140f1820b == '\x01') {
              uVar30 = (int)local_a8 * 0x50b74b;
              local_c8[2] = (float)(uVar30 >> 0x10 & 0xff) * fVar3;
              fStack_bc = fVar6 * fVar34;
              local_c8[1] = (float)(uVar30 >> 8 & 0xff) * fVar4;
              local_c8[0] = (float)(uVar30 & 0xff) * fVar5;
              FUN_1400c2545(&DAT_140ed98bf,local_c8,0x40,&local_120);
              FUN_140092bab(0,uVar7);
            }
            bVar11 = FUN_1400c85b6(&DAT_140f31890,local_a8 & 0xffffffff);
            unaff_R15 = (float *)CONCAT71((int7)((ulonglong)unaff_R15 >> 8),bVar11);
            FUN_1400c82a0(lVar16);
            if (DAT_140f31870 == 0) {
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              FUN_1400b2126(&local_168,(ulonglong)unaff_R15 & 0xffffffff,0,local_c8);
              bVar12 = 0;
            }
            else {
              bVar12 = FUN_1400c5ee6(&local_168,bVar11 | 0x8c0);
            }
            if ((int)local_d0 == (int)local_a8) {
              FUN_140090580(0xffffffff);
            }
            if ((DAT_140f1820a == '\x01') && (cVar9 = FUN_140095b6d(0), cVar9 != '\0')) {
              lVar16 = FUN_1400964be();
              if (lVar16 == 0) {
                local_c8[0] = 0.0;
                local_c8[1] = 0.0;
                local_d8 = 0.0;
                if (bVar11 == 0) {
                  local_b8 = (float *)0x0;
                  pfVar20 = (float *)FUN_140077ab4(0x20);
                  *pfVar20 = fVar1;
                  iVar26 = 4;
                }
                else {
                  uVar30 = 0;
                  pfVar20 = (float *)0x0;
                  uVar15 = 0;
                  while (local_b8 = pfVar20,
                        cVar9 = FUN_1400c85d0(&DAT_140f31890,local_c8,&local_d8), fVar1 = local_d8,
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
                      pfVar19 = (float *)FUN_140077ab4((ulonglong)uVar25 * 4);
                      if (pfVar20 != (float *)0x0) {
                        FUN_1401c5180(pfVar19,pfVar20,(ulonglong)uVar30 << 2);
                        local_b8 = pfVar20;
                        FUN_140077b90(pfVar20);
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
                FUN_140095e05("MULTISELECT_DEMO_ITEMS",pfVar20,iVar26,0);
                local_b8 = pfVar20;
                if (pfVar20 != (float *)0x0) {
                  FUN_140077b90(pfVar20);
                }
              }
              puVar21 = (undefined8 *)FUN_1400964be();
              uVar30 = *(uint *)(puVar21 + 1);
              if ((uVar30 & 0xfffffffc) == 4) {
                FUN_1400abfd5("Object %05d: %s",(longlong)*(int *)*puVar21,
                              (&PTR_s_Artichoke_140e8cb00)[*(int *)*puVar21 % 0x1c]);
              }
              else {
                uVar15 = uVar30 + 3;
                if (-1 < (int)uVar30) {
                  uVar15 = uVar30;
                }
                FUN_1400abfd5("Dragging %d objects",(int)uVar15 >> 2);
              }
              FUN_140095dd0();
            }
            if ((bVar12 & DAT_140f31870) == 1) {
              FUN_1400c66d9();
            }
            cVar9 = FUN_140094b37(0,0);
            if (cVar9 != '\0') {
              FUN_14008f898(DAT_140f18209 ^ 1 | DAT_140f31890 == 0);
              FUN_140104e1d(&local_168,"Delete %d item(s)###DeleteSelected",DAT_140f31890);
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              cVar9 = FUN_1400b2126(&local_168,0,0,local_c8);
              if (cVar9 != '\0') {
                DAT_140f318c4 = 1;
              }
              FUN_14008f98e();
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              FUN_1400b2126("Close",0,0,local_c8);
              FUN_1400946ab();
            }
            if (DAT_140f3186c == '\x01') {
              FUN_140112b04();
              FUN_140079071(uVar13);
              local_c8[0] = 0.0;
              local_c8[1] = 0.0;
              FUN_14007ae77(0xb,local_c8);
              pcVar8 = local_118;
              sVar22 = strlen(local_118);
              FUN_1400bed4f("##NoLabel",pcVar8,sVar22,0x200,0,0);
              FUN_14007af87(1);
            }
            FUN_140091667();
            uVar27 = (ulonglong)((int)local_a8 + 1);
          }
          if (DAT_140f18208 == 0) break;
LAB_140101706:
          cVar9 = FUN_140079cee();
          if (cVar9 == '\0') break;
          piVar18 = &DAT_140f31878;
          uVar27 = 0;
          if ((DAT_140f18208 & 1) != 0) {
            piVar18 = (int *)((longlong)&local_110 + 4);
            uVar27 = (ulonglong)local_110 & 0xffffffff;
          }
          local_d4 = *piVar18;
          fVar34 = _UNK_140e8d62c;
          fVar3 = _UNK_140e8d628;
          fVar4 = _UNK_140e8d624;
          fVar5 = _DAT_140e8d620;
          uVar13 = DAT_140211724;
          fVar6 = DAT_1401c86c8;
          uVar7 = DAT_1401c86a4;
        }
        if ((DAT_140f3186c == '\x01') && (FUN_140110400(), DAT_140f31870 == 1)) {
          FUN_14007af87(1);
        }
        uVar17 = FUN_1400c7e5d();
        FUN_1400c8704(&DAT_140f31890,uVar17);
        if ((local_a9 & 1) != 0) {
          FUN_14010518a(&DAT_140f31890,uVar17,&DAT_140f31878,local_d0);
        }
        if (DAT_140f31870 == 1) {
          FUN_14007af87(1);
        }
        thunk_FUN_1400796ce(&local_110);
      }
      FUN_14008a651();
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  return;
}

