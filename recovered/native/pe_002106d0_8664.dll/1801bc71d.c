/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bc71d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bc71d(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined **ppuVar11;
  ulonglong uVar12;
  undefined8 local_78 [2];
  char local_61 [33];
  
  local_61[1] = -2;
  local_61[2] = -1;
  local_61[3] = -1;
  local_61[4] = -1;
  local_61[5] = -1;
  local_61[6] = -1;
  local_61[7] = -1;
  local_61[8] = -1;
  cVar3 = FUN_18014c2cb("Tabs");
  if (cVar3 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0xe20,"Widgets/Tabs");
    cVar3 = FUN_18014c2cb("Basic");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xe23,"Widgets/Tabs/Basic");
      cVar3 = FUN_1801525a2("MyTabBar",0);
      if (cVar3 != '\0') {
        cVar3 = FUN_180153cc1("Avocado",0,0);
        if (cVar3 != '\0') {
          FUN_1801330a5("This is the Avocado tab!\nblah blah blah blah blah");
          FUN_180154c1a();
        }
        cVar3 = FUN_180153cc1("Broccoli",0,0);
        if (cVar3 != '\0') {
          FUN_1801330a5("This is the Broccoli tab!\nblah blah blah blah blah");
          FUN_180154c1a();
        }
        cVar3 = FUN_180153cc1("Cucumber",0,0);
        if (cVar3 != '\0') {
          FUN_1801330a5("This is the Cucumber tab!\nblah blah blah blah blah");
          FUN_180154c1a();
        }
        FUN_180152a30();
      }
      FUN_180137ca1();
      FUN_18014d7a9();
    }
    cVar3 = FUN_18014c2cb("Advanced & Close Button");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xe3e,"Widgets/Tabs/Advanced & Close Button");
      thunk_FUN_18013698f("ImGuiTabBarFlags_Reorderable",&DAT_180404a70,1);
      thunk_FUN_18013698f("ImGuiTabBarFlags_AutoSelectNewTabs",&DAT_180404a70,2);
      thunk_FUN_18013698f("ImGuiTabBarFlags_TabListPopupButton",&DAT_180404a70,4);
      thunk_FUN_18013698f("ImGuiTabBarFlags_NoCloseWithMiddleMouseButton",&DAT_180404a70,8);
      thunk_FUN_18013698f("ImGuiTabBarFlags_DrawSelectedOverline",&DAT_180404a70,0x40);
      FUN_1801c0984(&DAT_180404a70);
      FUN_18013799d();
      FUN_1801330a5("Opened:");
      uVar2 = DAT_1802bb8e0;
      puVar8 = &DAT_180404a74;
      lVar10 = 0;
      ppuVar11 = &PTR_s_Artichoke_1803288a0;
      do {
        FUN_180119893(0,uVar2);
        FUN_180135c3a(*(undefined8 *)((longlong)&PTR_s_Artichoke_1803288a0 + lVar10),puVar8);
        puVar8 = puVar8 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x20);
      cVar3 = FUN_1801525a2("MyTabBar",DAT_180404a70);
      if (cVar3 != '\0') {
        uVar12 = 0;
        do {
          if ((&DAT_180404a74)[uVar12] == '\x01') {
            puVar1 = *ppuVar11;
            cVar3 = FUN_180153cc1(puVar1,&DAT_180404a74 + uVar12,0);
            if (cVar3 != '\0') {
              FUN_1801330a5("This is the %s tab!",puVar1);
              if ((uVar12 & 1) != 0) {
                FUN_1801330a5("I am an odd tab.");
              }
              FUN_180154c1a();
            }
          }
          uVar12 = uVar12 + 1;
          ppuVar11 = ppuVar11 + 1;
        } while (uVar12 != 4);
        FUN_180152a30();
      }
      FUN_180137ca1();
      FUN_18014d7a9();
    }
    cVar3 = FUN_18014c2cb("TabItemButton & Leading/Trailing flags");
    if (cVar3 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xe67,"Widgets/Tabs/TabItemButton & Leading-Trailing flags");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_180420188) && (FUN_18023d500(&DAT_180420188), DAT_180420188 == -1)) {
        _DAT_180420178 = 0;
        DAT_180420180 = 0;
        FUN_18023d710(&LAB_1801c09fd);
        _Init_thread_footer(&DAT_180420188);
      }
      if (DAT_18042018c == 0) {
        iVar9 = 3;
        iVar6 = DAT_180420178;
        do {
          iVar7 = DAT_18042018c;
          DAT_18042018c = DAT_18042018c + 1;
          if (iVar6 == DAT_18042017c) {
            if (iVar6 == 0) {
              iVar4 = 8;
            }
            else {
              iVar4 = iVar6 / 2 + iVar6;
            }
            iVar5 = iVar6 + 1;
            if (iVar6 + 1 < iVar4) {
              iVar5 = iVar4;
            }
            lVar10 = FUN_1800fe7f8((longlong)iVar5 << 2);
            if (DAT_180420180 != 0) {
              FUN_1802a82f0(lVar10,DAT_180420180,(longlong)DAT_180420178 << 2);
              FUN_1800fe8d4(DAT_180420180);
            }
            _DAT_180420178 = CONCAT44(iVar5,DAT_180420178);
            iVar6 = DAT_180420178;
            DAT_180420180 = lVar10;
          }
          *(int *)(DAT_180420180 + (longlong)iVar6 * 4) = iVar7;
          iVar6 = DAT_180420178 + 1;
          _DAT_180420178 = CONCAT44(DAT_18042017c,iVar6);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      FUN_180135c3a("Show Leading TabItemButton()",&DAT_180404a78);
      FUN_180135c3a("Show Trailing TabItemButton()",&DAT_180404a79);
      FUN_1801c0984(&DAT_180404a7c);
      cVar3 = FUN_1801525a2("MyTabBar",DAT_180404a7c);
      if (cVar3 != '\0') {
        if ((DAT_180404a78 == '\x01') && (cVar3 = FUN_180154c65("?",0x50), cVar3 != '\0')) {
          FUN_18011ac8e("MyHelpMenu",0);
        }
        cVar3 = FUN_18011b56a("MyHelpMenu",0);
        if (cVar3 != '\0') {
          local_78[0] = 0;
          FUN_1801391f6("Hello!",0,0);
          FUN_18011b3ef();
        }
        if (DAT_180404a79 == '\0') {
          iVar6 = DAT_180420178;
        }
        else {
          cVar3 = FUN_180154c65(&DAT_1803772e5,0x90);
          iVar9 = DAT_18042018c;
          iVar6 = DAT_180420178;
          if (cVar3 != '\0') {
            DAT_18042018c = DAT_18042018c + 1;
            if (DAT_180420178 == DAT_18042017c) {
              if (DAT_180420178 == 0) {
                iVar6 = 8;
              }
              else {
                iVar6 = DAT_180420178 / 2 + DAT_180420178;
              }
              iVar7 = DAT_180420178 + 1;
              if (DAT_180420178 + 1 < iVar6) {
                iVar7 = iVar6;
              }
              lVar10 = FUN_1800fe7f8((longlong)iVar7 << 2);
              if (DAT_180420180 != 0) {
                FUN_1802a82f0(lVar10,DAT_180420180,(longlong)DAT_180420178 << 2);
                FUN_1800fe8d4(DAT_180420180);
              }
              _DAT_180420178 = CONCAT44(iVar7,DAT_180420178);
              iVar6 = DAT_180420178;
              DAT_180420180 = lVar10;
            }
            *(int *)(DAT_180420180 + (longlong)iVar6 * 4) = iVar9;
            iVar6 = DAT_180420178 + 1;
            _DAT_180420178 = CONCAT44(DAT_18042017c,iVar6);
          }
        }
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            local_61[0] = '\x01';
            uVar12 = (ulonglong)iVar6;
            FUN_1801c07f5(local_78,0x10,"%04d",*(undefined4 *)(DAT_180420180 + uVar12 * 4));
            cVar3 = FUN_180153cc1(local_78,local_61,0);
            if (cVar3 != '\0') {
              FUN_1801330a5("This is the %s tab!",local_78);
              FUN_180154c1a();
            }
            iVar9 = DAT_180420178;
            if (local_61[0] == '\0') {
              FUN_1802a82f0(DAT_180420180 + uVar12 * 4,DAT_180420180 + uVar12 * 4 + 4,
                            (~uVar12 + (longlong)DAT_180420178) * 4);
              iVar9 = iVar9 + -1;
              _DAT_180420178 = CONCAT44(DAT_18042017c,iVar9);
            }
            else {
              iVar6 = iVar6 + 1;
            }
          } while (iVar6 < iVar9);
        }
        FUN_180152a30();
      }
      FUN_180137ca1();
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  return;
}

