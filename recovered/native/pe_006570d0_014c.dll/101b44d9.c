/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b44d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b44d9(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bce00;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  cVar2 = FUN_10147d77("Text Input");
  if (cVar2 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0xf44,"Widgets/Text Input");
    cVar2 = FUN_10147d77("Multi-line Text Input");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xf47,"Widgets/Text Input/Multi-line Text Input");
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiInputTextFlags_ReadOnly",&DAT_1038ebfc,0x200);
      thunk_FUN_10130d81("ImGuiInputTextFlags_WordWrap",&DAT_1038ebfc,0x1000000);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiInputTextFlags_AllowTabInput",&DAT_1038ebfc,0x20);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiInputTextFlags_CtrlEnterForNewLine",&DAT_1038ebfc,0x100);
      uVar1 = DAT_1038ebfc;
      fVar6 = (float10)FUN_10111f20();
      local_28 = (float)fVar6;
      local_2c = local_28 * DAT_102b8c90;
      local_30 = 0x80800000;
      FUN_10141afd("##source",s____The_Pentium_F00F_bug__shortha_1038abfc,0x4000,&local_30,uVar1,0,0
                  );
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("Filtered Text Input");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xf66,"Widgets/Text Input/Filtered Text Input");
      FUN_10141729("default",&DAT_103a4368,DAT_10302814,0,0,0);
      FUN_10141729("decimal",&DAT_103a4388,(undefined4)DAT_103029d0,DAT_103029d0._4_4_,0,0);
      FUN_10141729("hexadecimal",&DAT_103a43a8,(undefined4)DAT_103029e0,DAT_103029e0._4_4_,0,0);
      FUN_10141729("uppercase",&DAT_103a43c8,(undefined4)DAT_103029f0,DAT_103029f0._4_4_,0,0);
      FUN_10141729("no blank",&DAT_103a43e8,(undefined4)DAT_10302a00,DAT_10302a00._4_4_,0,0);
      FUN_10141729("casing swap",&DAT_103a4408,0x20,0x200000,&LAB_101b7852,0);
      FUN_10141729("\"imgui\"",&DAT_103a4428,0x20,0x200000,&LAB_101b787a,0);
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("Password Input");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xf86,"Widgets/Text Input/Password input");
      FUN_10141729("password",s_password123_1038ec00,(undefined4)DAT_10302a10,DAT_10302a10._4_4_,0,0
                  );
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10141b2a("password (w/ hint)","<password>",s_password123_1038ec00,(undefined4)DAT_10302a10
                   ,DAT_10302a10._4_4_,0,0);
      FUN_10141729("password (clear)",s_password123_1038ec00,DAT_102b8f80,0,0,0);
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("Completion, History, Edit Callbacks");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xf91,"Widgets/Text Input/Completion, History, Edit Callbacks");
      FUN_10141729("Completion",&DAT_103a4448,0x40,0x40000,&LAB_101b78aa,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10141729("History",&DAT_103a4488,0x40,0x80000,&LAB_101b78aa,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10141729("Edit",&DAT_103a44c8,0x40,0x800000,&LAB_101b78aa,&DAT_103a4508);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c("(%d)",DAT_103a4508);
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("Resize Callback");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xfcf,"Widgets/Text Input/Resize Callback");
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiInputTextFlags_WordWrap",&DAT_103a450c,0x1000000);
      if (*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a451c) {
        FUN_1022c0d0(&DAT_103a451c);
        if (DAT_103a451c == -1) {
          local_14 = 0;
          DAT_103a4514 = 0;
          DAT_103a4510 = 0;
          DAT_103a4518 = 0;
          FUN_1022c3a0(&LAB_101b7955);
          local_14 = 0xffffffff;
          FUN_1022c180(&DAT_103a451c);
        }
      }
      if (DAT_103a4510 == 0) {
        if (DAT_103a4514 == 0) {
          iVar3 = FUN_100fa1fa(8);
          if (DAT_103a4518 != 0) {
            FUN_1025b2d0(iVar3,DAT_103a4518,DAT_103a4510);
            FUN_100fa2cb(DAT_103a4518);
          }
          DAT_103a4514 = 8;
          iVar4 = DAT_103a4510;
          DAT_103a4518 = iVar3;
        }
        else {
          iVar4 = 0;
        }
        *(undefined1 *)(DAT_103a4518 + iVar4) = 0;
        DAT_103a4510 = DAT_103a4510 + 1;
      }
      uVar5 = _DAT_103a450c | 0x400000;
      fVar6 = (float10)FUN_10111f20();
      local_24 = (float)fVar6;
      local_2c = local_24 * DAT_102b8c90;
      local_30 = 0x80800000;
      FUN_10141afd("##MyStr",DAT_103a4518,DAT_103a4510,&local_30,uVar5,&LAB_101b7968,&DAT_103a4510);
      FUN_1012d08c("Data: %p\nSize: %d\nCapacity: %d",DAT_103a4518,DAT_103a4510,DAT_103a4514);
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("Eliding, Alignment");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0xffd,"Widgets/Text Input/Eliding, Alignment");
      thunk_FUN_10130d81("ImGuiInputTextFlags_ElideLeft",&DAT_1038ecc0,0x20000);
      FUN_10141729(&DAT_103371e7,s__path_to_some_folder_with_long_f_1038ec40,0x80,DAT_1038ecc0,0,0);
      FUN_10149387();
    }
    cVar2 = FUN_10147d77("Miscellaneous");
    if (cVar2 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1007,"Widgets/Text Input/Miscellaneous");
      thunk_FUN_10130d81("ImGuiInputTextFlags_EscapeClearsAll",&DAT_1038ecc4,0x80);
      thunk_FUN_10130d81("ImGuiInputTextFlags_ReadOnly",&DAT_1038ecc4,0x200);
      thunk_FUN_10130d81("ImGuiInputTextFlags_NoUndoRedo",&DAT_1038ecc4,0x10000);
      FUN_10141729("Hello",&DAT_103a4520,0x10,DAT_1038ecc4,0,0);
      FUN_10149387();
    }
    FUN_10149387();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

