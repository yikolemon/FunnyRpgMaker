/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b379c */

void FUN_101b379c(void)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined8 local_38 [2];
  int local_28;
  char local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcde0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar2 = FUN_10147d77("Tabs");
  if (cVar2 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0xe20,"Widgets/Tabs");
    cVar2 = FUN_10147d77("Basic");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xe23,"Widgets/Tabs/Basic");
      cVar2 = FUN_1014e2f8("MyTabBar",0);
      if (cVar2 != '\0') {
        cVar2 = FUN_1014fafc("Avocado",0,0);
        if (cVar2 != '\0') {
          FUN_1012d08c("This is the Avocado tab!\nblah blah blah blah blah");
          FUN_10150ac8();
        }
        cVar2 = FUN_1014fafc("Broccoli",0,0);
        if (cVar2 != '\0') {
          FUN_1012d08c("This is the Broccoli tab!\nblah blah blah blah blah");
          FUN_10150ac8();
        }
        cVar2 = FUN_1014fafc("Cucumber",0,0);
        if (cVar2 != '\0') {
          FUN_1012d08c("This is the Cucumber tab!\nblah blah blah blah blah");
          FUN_10150ac8();
        }
        FUN_1014e72b();
      }
      FUN_10132188();
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("Advanced & Close Button");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xe3e,"Widgets/Tabs/Advanced & Close Button");
      thunk_FUN_10130d81("ImGuiTabBarFlags_Reorderable",&DAT_1038abc0,1);
      thunk_FUN_10130d81("ImGuiTabBarFlags_AutoSelectNewTabs",&DAT_1038abc0,2);
      thunk_FUN_10130d81("ImGuiTabBarFlags_TabListPopupButton",&DAT_1038abc0,4);
      thunk_FUN_10130d81("ImGuiTabBarFlags_NoCloseWithMiddleMouseButton",&DAT_1038abc0,8);
      thunk_FUN_10130d81("ImGuiTabBarFlags_DrawSelectedOverline",&DAT_1038abc0,0x40);
      FUN_101b7751();
      FUN_10131ed3();
      FUN_1012d08c("Opened:");
      iVar6 = 0;
      do {
        FUN_10114a0e(0,0xbf800000);
        FUN_1012ff1a((&PTR_s_Artichoke_10302214)[iVar6],&DAT_1038abc4 + iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 4);
      cVar2 = FUN_1014e2f8("MyTabBar",DAT_1038abc0);
      if (cVar2 != '\0') {
        uVar4 = 0;
        do {
          if ((&DAT_1038abc4)[uVar4] == '\x01') {
            puVar1 = (&PTR_s_Artichoke_10302214)[uVar4];
            local_14 = 0xffffffff;
            cVar2 = FUN_1014fafc(puVar1,&DAT_1038abc4 + uVar4,0);
            if (cVar2 != '\0') {
              FUN_1012d08c("This is the %s tab!",puVar1);
              if ((uVar4 & 1) != 0) {
                FUN_1012d08c("I am an odd tab.");
              }
              FUN_10150ac8();
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 != 4);
        local_14 = 0xffffffff;
        FUN_1014e72b();
      }
      FUN_10132188();
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("TabItemButton & Leading/Trailing flags");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xe67,"Widgets/Tabs/TabItemButton & Leading-Trailing flags");
      if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a424c) &&
         (FUN_1022c0d0(&DAT_103a424c), DAT_103a424c == -1)) {
        local_14 = 0;
        DAT_103a4244 = 0;
        DAT_103a4240 = 0;
        DAT_103a4248 = 0;
        FUN_1022c3a0(&LAB_101b77bb);
        local_14 = 0xffffffff;
        FUN_1022c180(&DAT_103a424c);
      }
      if (DAT_103a4250 == 0) {
        iVar6 = 3;
        do {
          local_28 = DAT_103a4250;
          DAT_103a4250 = DAT_103a4250 + 1;
          iVar5 = DAT_103a4244;
          iVar3 = DAT_103a4248;
          if (DAT_103a4240 == DAT_103a4244) {
            if (DAT_103a4240 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = DAT_103a4240 / 2 + DAT_103a4240;
            }
            iVar5 = DAT_103a4240 + 1;
            if (DAT_103a4240 + 1 < iVar3) {
              iVar5 = iVar3;
            }
            local_14 = 0xffffffff;
            iVar3 = FUN_100fa1fa(iVar5 * 4);
            if (DAT_103a4248 != 0) {
              FUN_1025b2d0(iVar3,DAT_103a4248,DAT_103a4240 << 2);
              FUN_100fa2cb(DAT_103a4248);
            }
          }
          DAT_103a4248 = iVar3;
          DAT_103a4244 = iVar5;
          *(int *)(DAT_103a4248 + DAT_103a4240 * 4) = local_28;
          DAT_103a4240 = DAT_103a4240 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_14 = 0xffffffff;
      FUN_1012ff1a("Show Leading TabItemButton()",&DAT_1038abc8);
      FUN_1012ff1a("Show Trailing TabItemButton()",&DAT_1038abc9);
      FUN_101b7751();
      cVar2 = FUN_1014e2f8("MyTabBar",DAT_1038abcc);
      if (cVar2 != '\0') {
        if ((DAT_1038abc8 == '\x01') && (cVar2 = FUN_10150b10("?",0x50), cVar2 != '\0')) {
          FUN_10115ea4("MyHelpMenu",0);
        }
        cVar2 = FUN_10116736("MyHelpMenu",0);
        if (cVar2 != '\0') {
          local_38[0] = 0;
          FUN_10133727("Hello!",0,0,local_38);
          FUN_101165cb();
        }
        if ((DAT_1038abc9 != '\0') &&
           (cVar2 = FUN_10150b10(&DAT_103471b7,0x90), iVar6 = DAT_103a4250, cVar2 != '\0')) {
          DAT_103a4250 = DAT_103a4250 + 1;
          iVar5 = DAT_103a4244;
          iVar3 = DAT_103a4248;
          if (DAT_103a4240 == DAT_103a4244) {
            if (DAT_103a4240 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = DAT_103a4240 / 2 + DAT_103a4240;
            }
            iVar5 = DAT_103a4240 + 1;
            if (DAT_103a4240 + 1 < iVar3) {
              iVar5 = iVar3;
            }
            iVar3 = FUN_100fa1fa(iVar5 * 4);
            if (DAT_103a4248 != 0) {
              FUN_1025b2d0(iVar3,DAT_103a4248,DAT_103a4240 << 2);
              FUN_100fa2cb(DAT_103a4248);
            }
          }
          DAT_103a4248 = iVar3;
          DAT_103a4244 = iVar5;
          *(int *)(DAT_103a4248 + DAT_103a4240 * 4) = iVar6;
          DAT_103a4240 = DAT_103a4240 + 1;
        }
        if (0 < DAT_103a4240) {
          uVar4 = 0;
          do {
            local_21 = '\x01';
            FUN_101b75f6(local_38,0x10,"%04d",*(undefined4 *)(DAT_103a4248 + uVar4 * 4));
            cVar2 = FUN_1014fafc(local_38,&local_21,0);
            if (cVar2 != '\0') {
              FUN_1012d08c("This is the %s tab!",local_38);
              FUN_10150ac8();
            }
            iVar6 = DAT_103a4240;
            if (local_21 == '\0') {
              FUN_1025b2d0(DAT_103a4248 + uVar4 * 4,DAT_103a4248 + uVar4 * 4 + 4,
                           (~uVar4 + DAT_103a4240) * 4);
              DAT_103a4240 = iVar6 + -1;
            }
            else {
              uVar4 = uVar4 + 1;
            }
          } while ((int)uVar4 < DAT_103a4240);
        }
        FUN_1014e72b();
      }
      FUN_10132188();
      FUN_10149387();
    }
    FUN_10149387();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

