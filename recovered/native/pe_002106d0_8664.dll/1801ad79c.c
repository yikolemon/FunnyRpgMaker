/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ad79c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801ad79c(void)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulonglong uVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  char *pcStack_c0;
  undefined4 local_b8;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 local_98 [9];
  ulonglong local_50;
  
  local_50 = DAT_180402640 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_18014d916("Popups & Modal windows",0);
  if (cVar2 != '\0') {
    cVar2 = FUN_18014c2cb("Popups");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x153a,"Popups/Popups");
      FUN_1801332a0(
                   "When a popup is active, it inhibits interacting with windows that are behind the popup. Clicking outside the popup closes it."
                   );
      local_98[0] = 0;
      cVar2 = FUN_180134257("Select..");
      if (cVar2 != '\0') {
        FUN_18011ac8e("my_select_popup",0);
      }
      FUN_180119893(0,DAT_1802bb8e0);
      if ((longlong)DAT_180408c60 == -1) {
        pcVar3 = "<None>";
      }
      else {
        pcVar3 = (&PTR_s_Bream_1803289a0)[DAT_180408c60];
      }
      FUN_18013309a(pcVar3,0);
      cVar2 = FUN_18011b56a("my_select_popup",0);
      if (cVar2 != '\0') {
        FUN_1801380f1("Aquarium");
        ppuVar6 = &PTR_s_Bream_1803289a0;
        lVar4 = 0;
        do {
          local_98[0] = 0;
          cVar2 = FUN_1801391f6(*ppuVar6,0,0,local_98);
          if (cVar2 != '\0') {
            DAT_180408c60 = (int)lVar4;
          }
          lVar4 = lVar4 + 1;
          ppuVar6 = ppuVar6 + 1;
        } while (lVar4 != 5);
        FUN_18011b3ef();
      }
      local_98[0] = 0;
      cVar2 = FUN_180134257("Toggle..");
      if (cVar2 != '\0') {
        FUN_18011ac8e("my_toggle_popup",0);
      }
      cVar2 = FUN_18011b56a("my_toggle_popup",0);
      if (cVar2 != '\0') {
        puVar5 = &DAT_180408c64;
        lVar4 = 0;
        do {
          FUN_18015247e(*(undefined8 *)((longlong)&PTR_s_Bream_1803289a0 + lVar4),&DAT_1803861e4,
                        puVar5,1);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x28);
        cVar2 = FUN_180151e9c("Sub-menu",1);
        if (cVar2 != '\0') {
          FUN_1801377a6("Click me",0,0,1);
          FUN_180151ea6();
        }
        FUN_180137ca1();
        FUN_1801330a5("Tooltip here");
        FUN_18011ab06("I am a tooltip over a popup");
        local_98[0] = 0;
        cVar2 = FUN_180134257("Stacked Popup");
        if (cVar2 != '\0') {
          FUN_18011ac8e("another popup",0);
        }
        cVar2 = FUN_18011b56a("another popup",0);
        if (cVar2 != '\0') {
          puVar5 = &DAT_180408c64;
          lVar4 = 0;
          do {
            FUN_18015247e(*(undefined8 *)((longlong)&PTR_s_Bream_1803289a0 + lVar4),&DAT_1803861e4,
                          puVar5,1);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0x28);
          cVar2 = FUN_180151e9c("Sub-menu",1);
          if (cVar2 != '\0') {
            FUN_1801377a6("Click me",0,0,1);
            local_98[0] = 0;
            cVar2 = FUN_180134257("Stacked Popup");
            if (cVar2 != '\0') {
              FUN_18011ac8e("another popup",0);
            }
            cVar2 = FUN_18011b56a("another popup",0);
            if (cVar2 != '\0') {
              FUN_1801330a5("I am the last one here.");
              FUN_18011b3ef();
            }
            FUN_180151ea6();
          }
          FUN_18011b3ef();
        }
        FUN_18011b3ef();
      }
      local_98[0] = 0;
      cVar2 = FUN_180134257("With a menu..");
      if (cVar2 != '\0') {
        FUN_18011ac8e("my_file_popup",0);
      }
      cVar2 = FUN_18011b56a("my_file_popup",0x400);
      if (cVar2 != '\0') {
        cVar2 = FUN_180150cda();
        if (cVar2 != '\0') {
          cVar2 = FUN_180151e9c("File",1);
          if (cVar2 != '\0') {
            FUN_1801b4483();
            FUN_180151ea6();
          }
          cVar2 = FUN_180151e9c("Edit",1);
          if (cVar2 != '\0') {
            FUN_1801377a6("Dummy",0,0,1);
            FUN_180151ea6();
          }
          FUN_180150f05();
        }
        FUN_1801330a5("Hello from popup!");
        local_98[0] = 0;
        FUN_180134257("This is a dummy button..");
        FUN_18011b3ef();
      }
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Context menus");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1597,"Popups/Context menus");
      FUN_180124063(
                   "\"Context\" functions are simple helpers to associate a Popup to a given Item or Window identifier."
                   );
      ppuVar6 = &PTR_s_Label1_1803289d0;
      uVar7 = 0;
      do {
        local_98[0] = 0;
        puVar5 = *ppuVar6;
        cVar2 = FUN_1801391f6(puVar5,uVar7 == DAT_180408c6c,0,local_98);
        if (cVar2 != '\0') {
          DAT_180408c6c = (uint)uVar7;
        }
        cVar2 = FUN_18011b87b(0,0);
        if (cVar2 != '\0') {
          DAT_180408c6c = (uint)uVar7;
          FUN_1801330a5("This is a popup for \"%s\"!",puVar5);
          local_98[0] = 0;
          cVar2 = FUN_180134257("Close",local_98);
          if (cVar2 != '\0') {
            FUN_18011b292();
          }
          FUN_18011b3ef();
        }
        FUN_18011ab06("Right-click to open popup");
        uVar7 = uVar7 + 1;
        ppuVar6 = ppuVar6 + 1;
      } while (uVar7 != 5);
      FUN_180124063("Text() elements don\'t have stable identifiers so we need to provide one.");
      FUN_1801330a5("Value = %.3f <-- (1) right-click this text",(double)_DAT_180408c70);
      cVar2 = FUN_18011b87b("my popup",0);
      if (cVar2 != '\0') {
        local_98[0] = 0;
        cVar2 = FUN_1801391f6("Set to zero",0,0);
        if (cVar2 != '\0') {
          _DAT_180408c70 = 0.0;
        }
        local_98[0] = 0;
        cVar2 = FUN_1801391f6("Set to PI",0,0);
        if (cVar2 != '\0') {
          _DAT_180408c70 = 3.1415;
        }
        FUN_1800ffdb5(DAT_1802de9b4);
        local_b8 = 0;
        pcStack_c0 = "%.3f";
        local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
        FUN_18013d2c2("##Value",&DAT_180408c70,DAT_1802dc268,0);
        FUN_18011b3ef();
      }
      FUN_1801330a5("(2) Or right-click this text");
      FUN_18011b815("my popup",8);
      local_98[0] = 0;
      cVar2 = FUN_180134257("(3) Or click this button");
      if (cVar2 != '\0') {
        FUN_18011ac8e("my popup",0);
      }
      FUN_180124063(
                   "Showcase using a popup ID linked to item ID, with the item having a changing label + stable ID using the ### operator."
                   );
      FUN_1801bf199(local_98,"Button: %s###Button",s_Label1_180408c80);
      local_a0 = 0;
      FUN_180134257(local_98);
      cVar2 = FUN_18011b87b(0,0);
      if (cVar2 != '\0') {
        FUN_1801330a5("Edit name:");
        local_c8 = 0;
        pcStack_c0 = (char *)0x0;
        FUN_180145e1f("##edit",s_Label1_180408c80,0x20,0);
        local_a0 = 0;
        cVar2 = FUN_180134257("Close");
        if (cVar2 != '\0') {
          FUN_18011b292();
        }
        FUN_18011b3ef();
      }
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_1801330a5("(<-- right-click here)");
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Modals");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x15ee,"Popups/Modals");
      FUN_1801332a0(
                   "Modal windows are like popups but the user cannot close them by clicking outside."
                   );
      local_98[0] = 0;
      cVar2 = FUN_180134257("Delete..");
      if (cVar2 != '\0') {
        FUN_18011ac8e("Delete?",0);
      }
      lVar4 = FUN_18010f8ee();
      local_98[0] = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) *
                             DAT_1802de570._4_4_ +
                             (float)((ulonglong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                             (float)*(undefined8 *)(lVar4 + 0x10) * (float)DAT_1802de570 +
                             (float)*(undefined8 *)(lVar4 + 8));
      local_a0 = CONCAT44(DAT_1802de570._4_4_,(float)DAT_1802de570);
      FUN_180116a8b(local_98,8);
      cVar2 = FUN_18011b5be("Delete?",0,0x40);
      if (cVar2 != '\0') {
        FUN_1801330a5("All those beautiful files will be deleted.\nThis operation cannot be undone!"
                     );
        FUN_180137ca1();
        local_a0 = 0;
        FUN_180101bbb(0xb,&local_a0);
        FUN_180135c3a("Don\'t ask me next time",&DAT_1804204a8);
        FUN_180101ccb(1);
        uVar1 = DAT_1802dbb48;
        local_a0 = (ulonglong)DAT_1802dbb48;
        cVar2 = FUN_180134257(&DAT_18036c58f,&local_a0);
        if (cVar2 != '\0') {
          FUN_18011b292();
        }
        FUN_18011732f();
        FUN_180119893(0,DAT_1802bb8e0);
        local_a0 = (ulonglong)uVar1;
        cVar2 = FUN_180134257("Cancel");
        if (cVar2 != '\0') {
          FUN_18011b292();
        }
        FUN_18011b3ef();
      }
      local_a0 = 0;
      cVar2 = FUN_180134257("Stacked modals..");
      if (cVar2 != '\0') {
        FUN_18011ac8e("Stacked 1",0);
      }
      cVar2 = FUN_18011b5be("Stacked 1",0,0x400);
      if (cVar2 != '\0') {
        cVar2 = FUN_180150cda();
        if (cVar2 != '\0') {
          cVar2 = FUN_180151e9c("File",1);
          if (cVar2 != '\0') {
            FUN_1801377a6("Some menu item",0,0,1);
            FUN_180151ea6();
          }
          FUN_180150f05();
        }
        FUN_1801330a5(
                     "Hello from Stacked The First\nUsing style.Colors[ImGuiCol_ModalWindowDimBg] behind it."
                     );
        FUN_180139992("Combo",&DAT_180408ca0,&DAT_1803861bb,0xffffffff);
        FUN_180148378("Color",&DAT_180408cb0,0);
        local_a0 = 0;
        cVar2 = FUN_180134257("Add another modal..");
        if (cVar2 != '\0') {
          FUN_18011ac8e("Stacked 2",0);
        }
        local_a1 = 1;
        cVar2 = FUN_18011b5be("Stacked 2",&local_a1,0);
        if (cVar2 != '\0') {
          FUN_1801330a5("Hello from Stacked The Second!");
          FUN_180148378("Color",&DAT_180408cb0,0);
          local_a0 = 0;
          cVar2 = FUN_180134257("Close");
          if (cVar2 != '\0') {
            FUN_18011b292();
          }
          FUN_18011b3ef();
        }
        local_a0 = 0;
        cVar2 = FUN_180134257("Close");
        if (cVar2 != '\0') {
          FUN_18011b292();
        }
        FUN_18011b3ef();
      }
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Menus inside a regular window");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x163b,"Popups/Menus inside a regular window");
      FUN_1801332a0(
                   "Below we are testing adding menu items to a regular window. It\'s rather unusual but should work!"
                   );
      FUN_180137ca1();
      FUN_1801377a6("Menu item",&DAT_18036c55a,0,1);
      cVar2 = FUN_180151e9c("Menu inside a regular window",1);
      if (cVar2 != '\0') {
        FUN_1801b4483();
        FUN_180151ea6();
      }
      FUN_180137ca1();
      FUN_18014d7a9();
    }
  }
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_e8);
}

