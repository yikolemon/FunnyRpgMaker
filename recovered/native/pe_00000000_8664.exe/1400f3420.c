/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400f3420 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f3420(void)

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
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  cVar2 = FUN_1400c6846("Popups & Modal windows",0);
  if (cVar2 != '\0') {
    cVar2 = FUN_1400c51fb("Popups");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x153a,"Popups/Popups");
      FUN_1400ac1d0(
                   "When a popup is active, it inhibits interacting with windows that are behind the popup. Clicking outside the popup closes it."
                   );
      local_98[0] = 0;
      cVar2 = FUN_1400ad187("Select..");
      if (cVar2 != '\0') {
        FUN_140093f4a("my_select_popup",0);
      }
      FUN_140092bab(0,DAT_1401c86a4);
      if ((longlong)DAT_140f1c400 == -1) {
        pcVar3 = "<None>";
      }
      else {
        pcVar3 = (&PTR_s_Bream_140e8cd30)[DAT_140f1c400];
      }
      FUN_1400abfca(pcVar3,0);
      cVar2 = FUN_140094826("my_select_popup",0);
      if (cVar2 != '\0') {
        FUN_1400b1021("Aquarium");
        ppuVar6 = &PTR_s_Bream_140e8cd30;
        lVar4 = 0;
        do {
          local_98[0] = 0;
          cVar2 = FUN_1400b2126(*ppuVar6,0,0,local_98);
          if (cVar2 != '\0') {
            DAT_140f1c400 = (int)lVar4;
          }
          lVar4 = lVar4 + 1;
          ppuVar6 = ppuVar6 + 1;
        } while (lVar4 != 5);
        FUN_1400946ab();
      }
      local_98[0] = 0;
      cVar2 = FUN_1400ad187("Toggle..");
      if (cVar2 != '\0') {
        FUN_140093f4a("my_toggle_popup",0);
      }
      cVar2 = FUN_140094826("my_toggle_popup",0);
      if (cVar2 != '\0') {
        puVar5 = &DAT_140f1c404;
        lVar4 = 0;
        do {
          FUN_1400cb3ae(*(undefined8 *)((longlong)&PTR_s_Bream_140e8cd30 + lVar4),&DAT_140edcdbf,
                        puVar5,1);
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0x28);
        cVar2 = FUN_1400cadcc("Sub-menu",1);
        if (cVar2 != '\0') {
          FUN_1400b06d6("Click me",0,0,1);
          FUN_1400cadd6();
        }
        FUN_1400b0bd1();
        FUN_1400abfd5("Tooltip here");
        FUN_140093dc2("I am a tooltip over a popup");
        local_98[0] = 0;
        cVar2 = FUN_1400ad187("Stacked Popup");
        if (cVar2 != '\0') {
          FUN_140093f4a("another popup",0);
        }
        cVar2 = FUN_140094826("another popup",0);
        if (cVar2 != '\0') {
          puVar5 = &DAT_140f1c404;
          lVar4 = 0;
          do {
            FUN_1400cb3ae(*(undefined8 *)((longlong)&PTR_s_Bream_140e8cd30 + lVar4),&DAT_140edcdbf,
                          puVar5,1);
            puVar5 = puVar5 + 1;
            lVar4 = lVar4 + 8;
          } while (lVar4 != 0x28);
          cVar2 = FUN_1400cadcc("Sub-menu",1);
          if (cVar2 != '\0') {
            FUN_1400b06d6("Click me",0,0,1);
            local_98[0] = 0;
            cVar2 = FUN_1400ad187("Stacked Popup");
            if (cVar2 != '\0') {
              FUN_140093f4a("another popup",0);
            }
            cVar2 = FUN_140094826("another popup",0);
            if (cVar2 != '\0') {
              FUN_1400abfd5("I am the last one here.");
              FUN_1400946ab();
            }
            FUN_1400cadd6();
          }
          FUN_1400946ab();
        }
        FUN_1400946ab();
      }
      local_98[0] = 0;
      cVar2 = FUN_1400ad187("With a menu..");
      if (cVar2 != '\0') {
        FUN_140093f4a("my_file_popup",0);
      }
      cVar2 = FUN_140094826("my_file_popup",0x400);
      if (cVar2 != '\0') {
        cVar2 = FUN_1400c9c0a();
        if (cVar2 != '\0') {
          cVar2 = FUN_1400cadcc("File",1);
          if (cVar2 != '\0') {
            FUN_1400fa107();
            FUN_1400cadd6();
          }
          cVar2 = FUN_1400cadcc("Edit",1);
          if (cVar2 != '\0') {
            FUN_1400b06d6("Dummy",0,0,1);
            FUN_1400cadd6();
          }
          FUN_1400c9e35();
        }
        FUN_1400abfd5("Hello from popup!");
        local_98[0] = 0;
        FUN_1400ad187("This is a dummy button..");
        FUN_1400946ab();
      }
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Context menus");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1597,"Popups/Context menus");
      FUN_14009cf92(
                   "\"Context\" functions are simple helpers to associate a Popup to a given Item or Window identifier."
                   );
      ppuVar6 = &PTR_s_Label1_140e8cd60;
      uVar7 = 0;
      do {
        local_98[0] = 0;
        puVar5 = *ppuVar6;
        cVar2 = FUN_1400b2126(puVar5,uVar7 == DAT_140f1c40c,0,local_98);
        if (cVar2 != '\0') {
          DAT_140f1c40c = (uint)uVar7;
        }
        cVar2 = FUN_140094b37(0,0);
        if (cVar2 != '\0') {
          DAT_140f1c40c = (uint)uVar7;
          FUN_1400abfd5("This is a popup for \"%s\"!",puVar5);
          local_98[0] = 0;
          cVar2 = FUN_1400ad187("Close",local_98);
          if (cVar2 != '\0') {
            FUN_14009454e();
          }
          FUN_1400946ab();
        }
        FUN_140093dc2("Right-click to open popup");
        uVar7 = uVar7 + 1;
        ppuVar6 = ppuVar6 + 1;
      } while (uVar7 != 5);
      FUN_14009cf92("Text() elements don\'t have stable identifiers so we need to provide one.");
      FUN_1400abfd5("Value = %.3f <-- (1) right-click this text",(double)_DAT_140f1c410);
      cVar2 = FUN_140094b37("my popup",0);
      if (cVar2 != '\0') {
        local_98[0] = 0;
        cVar2 = FUN_1400b2126("Set to zero",0,0);
        if (cVar2 != '\0') {
          _DAT_140f1c410 = 0.0;
        }
        local_98[0] = 0;
        cVar2 = FUN_1400b2126("Set to PI",0,0);
        if (cVar2 != '\0') {
          _DAT_140f1c410 = 3.1415;
        }
        FUN_140079071(DAT_140211724);
        local_b8 = 0;
        pcStack_c0 = "%.3f";
        local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
        FUN_1400b61f2("##Value",&DAT_140f1c410,DAT_140210018,0);
        FUN_1400946ab();
      }
      FUN_1400abfd5("(2) Or right-click this text");
      FUN_140094ad1("my popup",8);
      local_98[0] = 0;
      cVar2 = FUN_1400ad187("(3) Or click this button");
      if (cVar2 != '\0') {
        FUN_140093f4a("my popup",0);
      }
      FUN_14009cf92(
                   "Showcase using a popup ID linked to item ID, with the item having a changing label + stable ID using the ### operator."
                   );
      FUN_140104e1d(local_98,"Button: %s###Button",s_Label1_140f1c420);
      local_a0 = 0;
      FUN_1400ad187(local_98);
      cVar2 = FUN_140094b37(0,0);
      if (cVar2 != '\0') {
        FUN_1400abfd5("Edit name:");
        local_c8 = 0;
        pcStack_c0 = (char *)0x0;
        FUN_1400bed4f("##edit",s_Label1_140f1c420,0x20,0);
        local_a0 = 0;
        cVar2 = FUN_1400ad187("Close");
        if (cVar2 != '\0') {
          FUN_14009454e();
        }
        FUN_1400946ab();
      }
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400abfd5("(<-- right-click here)");
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Modals");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x15ee,"Popups/Modals");
      FUN_1400ac1d0(
                   "Modal windows are like popups but the user cannot close them by clicking outside."
                   );
      local_98[0] = 0;
      cVar2 = FUN_1400ad187("Delete..");
      if (cVar2 != '\0') {
        FUN_140093f4a("Delete?",0);
      }
      lVar4 = FUN_140088c06();
      local_98[0] = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) *
                             DAT_1401c8640._4_4_ +
                             (float)((ulonglong)*(undefined8 *)(lVar4 + 8) >> 0x20),
                             (float)*(undefined8 *)(lVar4 + 0x10) * (float)DAT_1401c8640 +
                             (float)*(undefined8 *)(lVar4 + 8));
      local_a0 = CONCAT44(DAT_1401c8640._4_4_,(float)DAT_1401c8640);
      FUN_14008fda3(local_98,8);
      cVar2 = FUN_14009487a("Delete?",0,0x40);
      if (cVar2 != '\0') {
        FUN_1400abfd5("All those beautiful files will be deleted.\nThis operation cannot be undone!"
                     );
        FUN_1400b0bd1();
        local_a0 = 0;
        FUN_14007ae77(0xb,&local_a0);
        FUN_1400aeb6a("Don\'t ask me next time",&DAT_140f31bf8);
        FUN_14007af87(1);
        uVar1 = DAT_140e82338;
        local_a0 = (ulonglong)DAT_140e82338;
        cVar2 = FUN_1400ad187(&DAT_140eccdc6,&local_a0);
        if (cVar2 != '\0') {
          FUN_14009454e();
        }
        FUN_140090647();
        FUN_140092bab(0,DAT_1401c86a4);
        local_a0 = (ulonglong)uVar1;
        cVar2 = FUN_1400ad187("Cancel");
        if (cVar2 != '\0') {
          FUN_14009454e();
        }
        FUN_1400946ab();
      }
      local_a0 = 0;
      cVar2 = FUN_1400ad187("Stacked modals..");
      if (cVar2 != '\0') {
        FUN_140093f4a("Stacked 1",0);
      }
      cVar2 = FUN_14009487a("Stacked 1",0,0x400);
      if (cVar2 != '\0') {
        cVar2 = FUN_1400c9c0a();
        if (cVar2 != '\0') {
          cVar2 = FUN_1400cadcc("File",1);
          if (cVar2 != '\0') {
            FUN_1400b06d6("Some menu item",0,0,1);
            FUN_1400cadd6();
          }
          FUN_1400c9e35();
        }
        FUN_1400abfd5(
                     "Hello from Stacked The First\nUsing style.Colors[ImGuiCol_ModalWindowDimBg] behind it."
                     );
        FUN_1400b28c2("Combo",&DAT_140f1c440,&DAT_140edcd96,0xffffffff);
        FUN_1400c12a8("Color",&DAT_140f1c450,0);
        local_a0 = 0;
        cVar2 = FUN_1400ad187("Add another modal..");
        if (cVar2 != '\0') {
          FUN_140093f4a("Stacked 2",0);
        }
        local_a1 = 1;
        cVar2 = FUN_14009487a("Stacked 2",&local_a1,0);
        if (cVar2 != '\0') {
          FUN_1400abfd5("Hello from Stacked The Second!");
          FUN_1400c12a8("Color",&DAT_140f1c450,0);
          local_a0 = 0;
          cVar2 = FUN_1400ad187("Close");
          if (cVar2 != '\0') {
            FUN_14009454e();
          }
          FUN_1400946ab();
        }
        local_a0 = 0;
        cVar2 = FUN_1400ad187("Close");
        if (cVar2 != '\0') {
          FUN_14009454e();
        }
        FUN_1400946ab();
      }
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Menus inside a regular window");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x163b,"Popups/Menus inside a regular window");
      FUN_1400ac1d0(
                   "Below we are testing adding menu items to a regular window. It\'s rather unusual but should work!"
                   );
      FUN_1400b0bd1();
      FUN_1400b06d6("Menu item",&DAT_140eccd99,0,1);
      cVar2 = FUN_1400cadcc("Menu inside a regular window",1);
      if (cVar2 != '\0') {
        FUN_1400fa107();
        FUN_1400cadd6();
      }
      FUN_1400b0bd1();
      FUN_1400c66d9();
    }
  }
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_e8);
}

