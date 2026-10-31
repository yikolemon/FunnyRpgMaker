/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401023a1 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401023a1(void)

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
  cVar3 = FUN_1400c51fb("Tabs");
  if (cVar3 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0xe20,"Widgets/Tabs");
    cVar3 = FUN_1400c51fb("Basic");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xe23,"Widgets/Tabs/Basic");
      cVar3 = FUN_1400cb4d2("MyTabBar",0);
      if (cVar3 != '\0') {
        cVar3 = FUN_1400ccbf1("Avocado",0,0);
        if (cVar3 != '\0') {
          FUN_1400abfd5("This is the Avocado tab!\nblah blah blah blah blah");
          FUN_1400cdb4a();
        }
        cVar3 = FUN_1400ccbf1("Broccoli",0,0);
        if (cVar3 != '\0') {
          FUN_1400abfd5("This is the Broccoli tab!\nblah blah blah blah blah");
          FUN_1400cdb4a();
        }
        cVar3 = FUN_1400ccbf1("Cucumber",0,0);
        if (cVar3 != '\0') {
          FUN_1400abfd5("This is the Cucumber tab!\nblah blah blah blah blah");
          FUN_1400cdb4a();
        }
        FUN_1400cb960();
      }
      FUN_1400b0bd1();
      FUN_1400c66d9();
    }
    cVar3 = FUN_1400c51fb("Advanced & Close Button");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xe3e,"Widgets/Tabs/Advanced & Close Button");
      thunk_FUN_1400af8bf("ImGuiTabBarFlags_Reorderable",&DAT_140f18210,1);
      thunk_FUN_1400af8bf("ImGuiTabBarFlags_AutoSelectNewTabs",&DAT_140f18210,2);
      thunk_FUN_1400af8bf("ImGuiTabBarFlags_TabListPopupButton",&DAT_140f18210,4);
      thunk_FUN_1400af8bf("ImGuiTabBarFlags_NoCloseWithMiddleMouseButton",&DAT_140f18210,8);
      thunk_FUN_1400af8bf("ImGuiTabBarFlags_DrawSelectedOverline",&DAT_140f18210,0x40);
      FUN_140106688(&DAT_140f18210);
      FUN_1400b08cd();
      FUN_1400abfd5("Opened:");
      uVar2 = DAT_1401c86a4;
      puVar8 = &DAT_140f18214;
      lVar10 = 0;
      ppuVar11 = &PTR_s_Artichoke_140e8cc30;
      do {
        FUN_140092bab(0,uVar2);
        FUN_1400aeb6a(*(undefined8 *)((longlong)&PTR_s_Artichoke_140e8cc30 + lVar10),puVar8);
        puVar8 = puVar8 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0x20);
      cVar3 = FUN_1400cb4d2("MyTabBar",DAT_140f18210);
      if (cVar3 != '\0') {
        uVar12 = 0;
        do {
          if ((&DAT_140f18214)[uVar12] == '\x01') {
            puVar1 = *ppuVar11;
            cVar3 = FUN_1400ccbf1(puVar1,&DAT_140f18214 + uVar12,0);
            if (cVar3 != '\0') {
              FUN_1400abfd5("This is the %s tab!",puVar1);
              if ((uVar12 & 1) != 0) {
                FUN_1400abfd5("I am an odd tab.");
              }
              FUN_1400cdb4a();
            }
          }
          uVar12 = uVar12 + 1;
          ppuVar11 = ppuVar11 + 1;
        } while (uVar12 != 4);
        FUN_1400cb960();
      }
      FUN_1400b0bd1();
      FUN_1400c66d9();
    }
    cVar3 = FUN_1400c51fb("TabItemButton & Leading/Trailing flags");
    if (cVar3 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xe67,"Widgets/Tabs/TabItemButton & Leading-Trailing flags");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2c) < DAT_140f318d8) && (FUN_140188840(&DAT_140f318d8), DAT_140f318d8 == -1)) {
        _DAT_140f318c8 = 0;
        DAT_140f318d0 = 0;
        FUN_140188b50(&LAB_140106701);
        _Init_thread_footer(&DAT_140f318d8);
      }
      if (DAT_140f318dc == 0) {
        iVar9 = 3;
        iVar6 = DAT_140f318c8;
        do {
          iVar7 = DAT_140f318dc;
          DAT_140f318dc = DAT_140f318dc + 1;
          if (iVar6 == DAT_140f318cc) {
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
            lVar10 = FUN_140077ab4((longlong)iVar5 << 2);
            if (DAT_140f318d0 != 0) {
              FUN_1401c5180(lVar10,DAT_140f318d0,(longlong)DAT_140f318c8 << 2);
              FUN_140077b90(DAT_140f318d0);
            }
            _DAT_140f318c8 = CONCAT44(iVar5,DAT_140f318c8);
            iVar6 = DAT_140f318c8;
            DAT_140f318d0 = lVar10;
          }
          *(int *)(DAT_140f318d0 + (longlong)iVar6 * 4) = iVar7;
          iVar6 = DAT_140f318c8 + 1;
          _DAT_140f318c8 = CONCAT44(DAT_140f318cc,iVar6);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      FUN_1400aeb6a("Show Leading TabItemButton()",&DAT_140f18218);
      FUN_1400aeb6a("Show Trailing TabItemButton()",&DAT_140f18219);
      FUN_140106688(&DAT_140f1821c);
      cVar3 = FUN_1400cb4d2("MyTabBar",DAT_140f1821c);
      if (cVar3 != '\0') {
        if ((DAT_140f18218 == '\x01') && (cVar3 = FUN_1400cdb95("?",0x50), cVar3 != '\0')) {
          FUN_140093f4a("MyHelpMenu",0);
        }
        cVar3 = FUN_140094826("MyHelpMenu",0);
        if (cVar3 != '\0') {
          local_78[0] = 0;
          FUN_1400b2126("Hello!",0,0);
          FUN_1400946ab();
        }
        if (DAT_140f18219 == '\0') {
          iVar6 = DAT_140f318c8;
        }
        else {
          cVar3 = FUN_1400cdb95(&DAT_140ed7050,0x90);
          iVar9 = DAT_140f318dc;
          iVar6 = DAT_140f318c8;
          if (cVar3 != '\0') {
            DAT_140f318dc = DAT_140f318dc + 1;
            if (DAT_140f318c8 == DAT_140f318cc) {
              if (DAT_140f318c8 == 0) {
                iVar6 = 8;
              }
              else {
                iVar6 = DAT_140f318c8 / 2 + DAT_140f318c8;
              }
              iVar7 = DAT_140f318c8 + 1;
              if (DAT_140f318c8 + 1 < iVar6) {
                iVar7 = iVar6;
              }
              lVar10 = FUN_140077ab4((longlong)iVar7 << 2);
              if (DAT_140f318d0 != 0) {
                FUN_1401c5180(lVar10,DAT_140f318d0,(longlong)DAT_140f318c8 << 2);
                FUN_140077b90(DAT_140f318d0);
              }
              _DAT_140f318c8 = CONCAT44(iVar7,DAT_140f318c8);
              iVar6 = DAT_140f318c8;
              DAT_140f318d0 = lVar10;
            }
            *(int *)(DAT_140f318d0 + (longlong)iVar6 * 4) = iVar9;
            iVar6 = DAT_140f318c8 + 1;
            _DAT_140f318c8 = CONCAT44(DAT_140f318cc,iVar6);
          }
        }
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            local_61[0] = '\x01';
            uVar12 = (ulonglong)iVar6;
            FUN_1401064f9(local_78,0x10,"%04d",*(undefined4 *)(DAT_140f318d0 + uVar12 * 4));
            cVar3 = FUN_1400ccbf1(local_78,local_61,0);
            if (cVar3 != '\0') {
              FUN_1400abfd5("This is the %s tab!",local_78);
              FUN_1400cdb4a();
            }
            iVar9 = DAT_140f318c8;
            if (local_61[0] == '\0') {
              FUN_1401c5180(DAT_140f318d0 + uVar12 * 4,DAT_140f318d0 + uVar12 * 4 + 4,
                            (~uVar12 + (longlong)DAT_140f318c8) * 4);
              iVar9 = iVar9 + -1;
              _DAT_140f318c8 = CONCAT44(DAT_140f318cc,iVar9);
            }
            else {
              iVar6 = iVar6 + 1;
            }
          } while (iVar6 < iVar9);
        }
        FUN_1400cb960();
      }
      FUN_1400b0bd1();
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  return;
}

