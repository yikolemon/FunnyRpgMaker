/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a5c66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a5c66(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_60 [3];
  undefined1 local_5d;
  undefined8 local_5c;
  undefined8 local_54 [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_60;
  cVar1 = FUN_101494f9("Popups & Modal windows",0);
  if (cVar1 != '\0') {
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x153a,"Popups/Popups");
      FUN_1012d238();
      local_54[0] = 0;
      cVar1 = FUN_1012e1b7("Select..",local_54);
      if (cVar1 != '\0') {
        FUN_10115ea4("my_select_popup",0);
      }
      FUN_10114a0e(0,0xbf800000);
      if (DAT_1038ed80 == -1) {
        pcVar2 = "<None>";
      }
      else {
        pcVar2 = (&PTR_s_Bream_10302290)[DAT_1038ed80];
      }
      FUN_1012d079(pcVar2,0);
      cVar1 = FUN_10116736("my_select_popup",0);
      if (cVar1 != '\0') {
        FUN_10132656();
        iVar3 = 0;
        do {
          local_54[0] = 0;
          cVar1 = FUN_10133727((&PTR_s_Bream_10302290)[iVar3],0,0,local_54);
          if (cVar1 != '\0') {
            DAT_1038ed80 = iVar3;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 != 5);
        FUN_101165cb();
      }
      local_54[0] = 0;
      cVar1 = FUN_1012e1b7("Toggle..",local_54);
      if (cVar1 != '\0') {
        FUN_10115ea4("my_toggle_popup",0);
      }
      cVar1 = FUN_10116736("my_toggle_popup",0);
      if (cVar1 != '\0') {
        iVar3 = 0;
        do {
          FUN_1014e1b4((&PTR_s_Bream_10302290)[iVar3],&DAT_10356101,&DAT_1038ed84 + iVar3,1);
          iVar3 = iVar3 + 1;
        } while (iVar3 != 5);
        cVar1 = FUN_1014db73("Sub-menu",1);
        if (cVar1 != '\0') {
          FUN_10131d08("Click me",0,0,1);
          FUN_1014db88();
        }
        FUN_10132188();
        FUN_1012d08c();
        FUN_10115d65();
        local_54[0] = 0;
        cVar1 = FUN_1012e1b7("Stacked Popup",local_54);
        if (cVar1 != '\0') {
          FUN_10115ea4("another popup",0);
        }
        cVar1 = FUN_10116736("another popup",0);
        if (cVar1 != '\0') {
          iVar3 = 0;
          do {
            FUN_1014e1b4((&PTR_s_Bream_10302290)[iVar3],&DAT_10356101,&DAT_1038ed84 + iVar3,1);
            iVar3 = iVar3 + 1;
          } while (iVar3 != 5);
          cVar1 = FUN_1014db73("Sub-menu",1);
          if (cVar1 != '\0') {
            FUN_10131d08("Click me",0,0,1);
            local_54[0] = 0;
            cVar1 = FUN_1012e1b7("Stacked Popup",local_54);
            if (cVar1 != '\0') {
              FUN_10115ea4("another popup",0);
            }
            cVar1 = FUN_10116736("another popup",0);
            if (cVar1 != '\0') {
              FUN_1012d08c();
              FUN_101165cb();
            }
            FUN_1014db88();
          }
          FUN_101165cb();
        }
        FUN_101165cb();
      }
      local_54[0] = 0;
      cVar1 = FUN_1012e1b7("With a menu..",local_54);
      if (cVar1 != '\0') {
        FUN_10115ea4("my_file_popup",0);
      }
      cVar1 = FUN_10116736("my_file_popup",0x400);
      if (cVar1 != '\0') {
        cVar1 = FUN_1014c8c1();
        if (cVar1 != '\0') {
          cVar1 = FUN_1014db73("File",1);
          if (cVar1 != '\0') {
            FUN_101ac3af();
            FUN_1014db88();
          }
          cVar1 = FUN_1014db73("Edit",1);
          if (cVar1 != '\0') {
            FUN_10131d08("Dummy",0,0,1);
            FUN_1014db88();
          }
          FUN_1014caf3();
        }
        FUN_1012d08c();
        local_54[0] = 0;
        FUN_1012e1b7("This is a dummy button..",local_54);
        FUN_101165cb();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1597,"Popups/Context menus");
      FUN_1011eaad();
      iVar3 = 0;
      do {
        local_54[0] = 0;
        cVar1 = FUN_10133727((&PTR_s_Label1_103022a4)[iVar3],iVar3 == DAT_1038ed8c,0,local_54);
        if (cVar1 != '\0') {
          DAT_1038ed8c = iVar3;
        }
        cVar1 = FUN_10116a0f(0);
        if (cVar1 != '\0') {
          DAT_1038ed8c = iVar3;
          FUN_1012d08c("This is a popup for \"%s\"!");
          local_54[0] = 0;
          cVar1 = FUN_1012e1b7("Close");
          if (cVar1 != '\0') {
            FUN_1011648c();
          }
          FUN_101165cb();
        }
        FUN_10115d65();
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
      FUN_1011eaad();
      FUN_1012d08c("Value = %.3f <-- (1) right-click this text",(double)_DAT_1038ed90);
      cVar1 = FUN_10116a0f("my popup",0);
      if (cVar1 != '\0') {
        local_54[0] = 0;
        cVar1 = FUN_10133727("Set to zero",0,0,local_54);
        if (cVar1 != '\0') {
          _DAT_1038ed90 = 0.0;
        }
        local_54[0] = 0;
        cVar1 = FUN_10133727("Set to PI",0,0,local_54);
        if (cVar1 != '\0') {
          _DAT_1038ed90 = 3.1415;
        }
        FUN_100fb68f();
        FUN_10137f3c("##Value",&DAT_1038ed90,0x3dcccccd,0,0,"%.3f",0);
        FUN_101165cb();
      }
      FUN_1012d08c();
      FUN_101169c1("my popup",8);
      local_54[0] = 0;
      cVar1 = FUN_1012e1b7("(3) Or click this button",local_54);
      if (cVar1 != '\0') {
        FUN_10115ea4("my popup",0);
      }
      FUN_1011eaad();
      FUN_101b5fc7(local_54,"Button: %s###Button",s_Label1_1038ed94);
      local_5c = 0;
      FUN_1012e1b7(local_54,&local_5c);
      cVar1 = FUN_10116a0f(0,0);
      if (cVar1 != '\0') {
        FUN_1012d08c();
        FUN_10141729("##edit",s_Label1_1038ed94,DAT_10302814,0,0,0);
        local_5c = 0;
        cVar1 = FUN_1012e1b7("Close",&local_5c);
        if (cVar1 != '\0') {
          FUN_1011648c();
        }
        FUN_101165cb();
      }
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c();
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x15ee,"Popups/Modals");
      FUN_1012d238();
      local_54[0] = 0;
      cVar1 = FUN_1012e1b7("Delete..",local_54);
      if (cVar1 != '\0') {
        FUN_10115ea4("Delete?",0);
      }
      iVar3 = FUN_1010ad36();
      local_54[0] = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0x10) >> 0x20) *
                             DAT_102b89c0._4_4_ +
                             (float)((ulonglong)*(undefined8 *)(iVar3 + 8) >> 0x20),
                             (float)*(undefined8 *)(iVar3 + 0x10) * (float)DAT_102b89c0 +
                             (float)*(undefined8 *)(iVar3 + 8));
      local_5c = CONCAT44(DAT_102b89c0._4_4_,(float)DAT_102b89c0);
      FUN_10111d56(local_54,8,&local_5c);
      cVar1 = FUN_1011677e("Delete?",0,0x40);
      if (cVar1 != '\0') {
        FUN_1012d08c();
        FUN_10132188();
        local_5c = 0;
        FUN_100fd3bc(0xb,&local_5c);
        FUN_1012ff1a("Don\'t ask me next time",&DAT_103a4558);
        FUN_100fd4c4();
        local_5c = (ulonglong)DAT_10301bf0;
        cVar1 = FUN_1012e1b7(&DAT_1033c465,&local_5c);
        if (cVar1 != '\0') {
          FUN_1011648c();
        }
        FUN_1011262c();
        FUN_10114a0e(0,0xbf800000);
        local_5c = (ulonglong)DAT_10301bf0;
        cVar1 = FUN_1012e1b7("Cancel",&local_5c);
        if (cVar1 != '\0') {
          FUN_1011648c();
        }
        FUN_101165cb();
      }
      local_5c = 0;
      cVar1 = FUN_1012e1b7("Stacked modals..",&local_5c);
      if (cVar1 != '\0') {
        FUN_10115ea4("Stacked 1",0);
      }
      cVar1 = FUN_1011677e("Stacked 1",0,0x400);
      if (cVar1 != '\0') {
        cVar1 = FUN_1014c8c1();
        if (cVar1 != '\0') {
          cVar1 = FUN_1014db73("File",1);
          if (cVar1 != '\0') {
            FUN_10131d08("Some menu item",0,0,1);
            FUN_1014db88();
          }
          FUN_1014caf3();
        }
        FUN_1012d08c();
        FUN_10133e42("Combo",&DAT_1038edb4,&DAT_103560d8,0xffffffff);
        FUN_101438ec("Color",&DAT_1038edb8,0);
        local_5c = 0;
        cVar1 = FUN_1012e1b7("Add another modal..",&local_5c);
        if (cVar1 != '\0') {
          FUN_10115ea4("Stacked 2",0);
        }
        local_5d = 1;
        cVar1 = FUN_1011677e("Stacked 2",&local_5d,0);
        if (cVar1 != '\0') {
          FUN_1012d08c();
          FUN_101438ec("Color",&DAT_1038edb8,0);
          local_5c = 0;
          cVar1 = FUN_1012e1b7("Close",&local_5c);
          if (cVar1 != '\0') {
            FUN_1011648c();
          }
          FUN_101165cb();
        }
        local_5c = 0;
        cVar1 = FUN_1012e1b7("Close",&local_5c);
        if (cVar1 != '\0') {
          FUN_1011648c();
        }
        FUN_101165cb();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77();
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x163b,"Popups/Menus inside a regular window");
      FUN_1012d238();
      FUN_10132188();
      FUN_10131d08("Menu item","Ctrl+M",0,1);
      cVar1 = FUN_1014db73("Menu inside a regular window",1);
      if (cVar1 != '\0') {
        FUN_101ac3af();
        FUN_1014db88();
      }
      FUN_10132188();
      FUN_10149387();
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_60)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

