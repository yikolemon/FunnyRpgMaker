/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bd4e3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bd4e3(void)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined4 local_38;
  float local_34;
  undefined8 local_30;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_30 = 0xfffffffffffffffe;
  cVar2 = FUN_18014c2cb("Text Input");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0xf44,"Widgets/Text Input");
    cVar2 = FUN_18014c2cb("Multi-line Text Input");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xf47,"Widgets/Text Input/Multi-line Text Input");
      FUN_180124063(
                   "You can use the ImGuiInputTextFlags_CallbackResize facility if you need to wire InputTextMultiline() to a dynamic string type. See misc/cpp/imgui_stdlib.h for an example. (This is not demonstrated in imgui_demo.cpp because we don\'t want to include <string> in here)"
                   );
      thunk_FUN_18013698f("ImGuiInputTextFlags_ReadOnly",&DAT_180408ab0,0x200);
      thunk_FUN_18013698f("ImGuiInputTextFlags_WordWrap",&DAT_180408ab0,0x1000000);
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Feature is currently in Beta. Please read comments in imgui.h");
      thunk_FUN_18013698f("ImGuiInputTextFlags_AllowTabInput",&DAT_180408ab0,0x20);
      FUN_180119893(0,uVar1);
      FUN_180124063(
                   "When _AllowTabInput is set, passing through the widget with Tabbing doesn\'t automatically activate it, in order to also cycling through subsequent widgets."
                   );
      thunk_FUN_18013698f("ImGuiInputTextFlags_CtrlEnterForNewLine",&DAT_180408ab0,0x100);
      uVar1 = DAT_180408ab0;
      local_34 = (float)FUN_180116c08();
      local_34 = local_34 * DAT_1802de7b0;
      local_38 = 0x80800000;
      uVar5 = CONCAT44(uVar6,uVar1);
      FUN_1801462d7("##source",s____The_Pentium_F00F_bug__shortha_180404ab0,0x4000,&local_38,uVar5,0
                    ,0);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Filtered Text Input");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xf66,"Widgets/Text Input/Filtered Text Input");
      FUN_180145e1f("default",&DAT_1804202b0,0x20,0,0,0);
      FUN_180145e1f("decimal",&DAT_1804202d0,0x20,1,0,0);
      FUN_180145e1f("hexadecimal",&DAT_1804202f0,0x20,10,0,0);
      FUN_180145e1f("uppercase",&DAT_180420310,0x20,8,0,0);
      FUN_180145e1f("no blank",&DAT_180420330,0x20,0x10,0,0);
      FUN_180145e1f("casing swap",&DAT_180420350,0x20,0x200000,&LAB_1801c0a64,0);
      uVar6 = 1;
      FUN_180145e1f("\"imgui\"",&DAT_180420370,0x20,0x200000,FUN_1801c0a88,0);
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Password Input");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xf86,"Widgets/Text Input/Password input");
      uVar6 = 0;
      FUN_180145e1f("password",s_password123_180408ac0,0x40,0x400,0,0);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Display all characters as \'*\'.\nDisable clipboard cut and copy.\nDisable logging.\n"
                   );
      FUN_18014630d("password (w/ hint)","<password>",s_password123_180408ac0,0x40,
                    CONCAT44(uVar6,0x400),0,0);
      uVar6 = 0;
      FUN_180145e1f("password (clear)",s_password123_180408ac0,0x40,0,0,0);
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Completion, History, Edit Callbacks");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xf91,"Widgets/Text Input/Completion, History, Edit Callbacks")
      ;
      FUN_180145e1f("Completion",&DAT_180420390,0x40,0x40000,FUN_1801c0ac0,0);
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Here we append \"..\" each time Tab is pressed. See \'Examples>Console\' for a more meaningful demonstration of using this callback."
                   );
      FUN_180145e1f("History",&DAT_1804203d0,0x40,0x80000,FUN_1801c0ac0,0);
      FUN_180119893(0,uVar1);
      FUN_180124063(
                   "Here we replace and select text each time Up/Down are pressed. See \'Examples>Console\' for a more meaningful demonstration of using this callback."
                   );
      uVar6 = 1;
      FUN_180145e1f("Edit",&DAT_180420410,0x40,0x800000,FUN_1801c0ac0,&DAT_180420450);
      FUN_180119893(0,uVar1);
      FUN_180124063("Here we toggle the casing of the first character on every edit + count edits.")
      ;
      FUN_180119893(0,uVar1);
      FUN_1801330a5("(%d)",DAT_180420450);
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Resize Callback");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xfcf,"Widgets/Text Input/Resize Callback");
      FUN_180124063(
                   "Using ImGuiInputTextFlags_CallbackResize to wire your custom string type to InputText().\n\nSee misc/cpp/imgui_stdlib.h for an implementation of this for std::string."
                   );
      thunk_FUN_18013698f("ImGuiInputTextFlags_WordWrap",&DAT_180420454,0x1000000);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_180420468) {
        FUN_18023d500(&DAT_180420468);
        if (DAT_180420468 == -1) {
          _DAT_180420458 = 0;
          DAT_180420460 = 0;
          FUN_18023d710(&LAB_1801c0b81);
          _Init_thread_footer(&DAT_180420468);
        }
      }
      if (DAT_180420458 == 0) {
        if (DAT_18042045c == 0) {
          lVar3 = FUN_1800fe7f8(8);
          if (DAT_180420460 != 0) {
            FUN_1802a82f0(lVar3,DAT_180420460,(longlong)DAT_180420458);
            FUN_1800fe8d4(DAT_180420460);
          }
          _DAT_180420458 = CONCAT44(8,DAT_180420458);
          lVar4 = (longlong)DAT_180420458;
          DAT_180420460 = lVar3;
        }
        else {
          lVar4 = 0;
        }
        *(undefined1 *)(DAT_180420460 + lVar4) = 0;
        DAT_180420458 = DAT_180420458 + 1;
      }
      uVar1 = _DAT_180420454;
      local_34 = (float)FUN_180116c08();
      local_34 = local_34 * DAT_1802de7b0;
      local_38 = 0x80800000;
      FUN_1801462d7("##MyStr",DAT_180420460,(longlong)DAT_180420458,&local_38,
                    CONCAT44(uVar6,uVar1) | 0x400000,FUN_1801c0b92,&DAT_180420458);
      FUN_1801330a5("Data: %p\nSize: %d\nCapacity: %d",DAT_180420460,_DAT_180420458 & 0xffffffff,
                    DAT_18042045c);
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Eliding, Alignment");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xffd,"Widgets/Text Input/Eliding, Alignment");
      thunk_FUN_18013698f("ImGuiInputTextFlags_ElideLeft",&DAT_180408b80,0x20000);
      FUN_180145e1f(&DAT_1803672e8,s__path_to_some_folder_with_long_f_180408b00,0x80,DAT_180408b80,0
                    ,0);
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Miscellaneous");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1007,"Widgets/Text Input/Miscellaneous");
      thunk_FUN_18013698f("ImGuiInputTextFlags_EscapeClearsAll",&DAT_180408b84,0x80);
      thunk_FUN_18013698f("ImGuiInputTextFlags_ReadOnly",&DAT_180408b84,0x200);
      thunk_FUN_18013698f("ImGuiInputTextFlags_NoUndoRedo",&DAT_180408b84,0x10000);
      FUN_180145e1f("Hello",&DAT_180420470,0x10,DAT_180408b84,0,0);
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  return;
}

