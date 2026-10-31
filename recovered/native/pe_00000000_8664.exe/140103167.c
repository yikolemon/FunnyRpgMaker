/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140103167 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140103167(void)

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
  cVar2 = FUN_1400c51fb("Text Input");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0xf44,"Widgets/Text Input");
    cVar2 = FUN_1400c51fb("Multi-line Text Input");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xf47,"Widgets/Text Input/Multi-line Text Input");
      FUN_14009cf92(
                   "You can use the ImGuiInputTextFlags_CallbackResize facility if you need to wire InputTextMultiline() to a dynamic string type. See misc/cpp/imgui_stdlib.h for an example. (This is not demonstrated in imgui_demo.cpp because we don\'t want to include <string> in here)"
                   );
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_ReadOnly",&DAT_140f1c250,0x200);
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_WordWrap",&DAT_140f1c250,0x1000000);
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("Feature is currently in Beta. Please read comments in imgui.h");
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_AllowTabInput",&DAT_140f1c250,0x20);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92(
                   "When _AllowTabInput is set, passing through the widget with Tabbing doesn\'t automatically activate it, in order to also cycling through subsequent widgets."
                   );
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_CtrlEnterForNewLine",&DAT_140f1c250,0x100);
      uVar1 = DAT_140f1c250;
      local_34 = (float)FUN_14008ff20();
      local_34 = local_34 * _caseD_100;
      local_38 = 0x80800000;
      uVar5 = CONCAT44(uVar6,uVar1);
      FUN_1400bf207("##source",s____The_Pentium_F00F_bug__shortha_140f18250,0x4000,&local_38,uVar5,0
                    ,0);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Filtered Text Input");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xf66,"Widgets/Text Input/Filtered Text Input");
      FUN_1400bed4f("default",&DAT_140f31a00,0x20,0,0,0);
      FUN_1400bed4f("decimal",&DAT_140f31a20,0x20,1,0,0);
      FUN_1400bed4f("hexadecimal",&DAT_140f31a40,0x20,10,0,0);
      FUN_1400bed4f("uppercase",&DAT_140f31a60,0x20,8,0,0);
      FUN_1400bed4f("no blank",&DAT_140f31a80,0x20,0x10,0,0);
      FUN_1400bed4f("casing swap",&DAT_140f31aa0,0x20,0x200000,&LAB_140106768,0);
      uVar6 = 1;
      FUN_1400bed4f("\"imgui\"",&DAT_140f31ac0,0x20,0x200000,FUN_14010678c,0);
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Password Input");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xf86,"Widgets/Text Input/Password input");
      uVar6 = 0;
      FUN_1400bed4f("password",s_password123_140f1c260,0x40,0x400,0,0);
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92(
                   "Display all characters as \'*\'.\nDisable clipboard cut and copy.\nDisable logging.\n"
                   );
      FUN_1400bf23d("password (w/ hint)","<password>",s_password123_140f1c260,0x40,
                    CONCAT44(uVar6,0x400),0,0);
      uVar6 = 0;
      FUN_1400bed4f("password (clear)",s_password123_140f1c260,0x40,0,0,0);
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Completion, History, Edit Callbacks");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xf91,"Widgets/Text Input/Completion, History, Edit Callbacks")
      ;
      FUN_1400bed4f("Completion",&DAT_140f31ae0,0x40,0x40000,FUN_1401067c4,0);
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92(
                   "Here we append \"..\" each time Tab is pressed. See \'Examples>Console\' for a more meaningful demonstration of using this callback."
                   );
      FUN_1400bed4f("History",&DAT_140f31b20,0x40,0x80000,FUN_1401067c4,0);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92(
                   "Here we replace and select text each time Up/Down are pressed. See \'Examples>Console\' for a more meaningful demonstration of using this callback."
                   );
      uVar6 = 1;
      FUN_1400bed4f("Edit",&DAT_140f31b60,0x40,0x800000,FUN_1401067c4,&DAT_140f31ba0);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92("Here we toggle the casing of the first character on every edit + count edits.")
      ;
      FUN_140092bab(0,uVar1);
      FUN_1400abfd5("(%d)",DAT_140f31ba0);
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Resize Callback");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xfcf,"Widgets/Text Input/Resize Callback");
      FUN_14009cf92(
                   "Using ImGuiInputTextFlags_CallbackResize to wire your custom string type to InputText().\n\nSee misc/cpp/imgui_stdlib.h for an implementation of this for std::string."
                   );
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_WordWrap",&DAT_140f31ba4,0x1000000);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c) < DAT_140f31bb8) {
        FUN_140188840(&DAT_140f31bb8);
        if (DAT_140f31bb8 == -1) {
          _DAT_140f31ba8 = 0;
          DAT_140f31bb0 = 0;
          FUN_140188b50(&LAB_140106885);
          _Init_thread_footer(&DAT_140f31bb8);
        }
      }
      if (DAT_140f31ba8 == 0) {
        if (DAT_140f31bac == 0) {
          lVar3 = FUN_140077ab4(8);
          if (DAT_140f31bb0 != 0) {
            FUN_1401c5180(lVar3,DAT_140f31bb0,(longlong)DAT_140f31ba8);
            FUN_140077b90(DAT_140f31bb0);
          }
          _DAT_140f31ba8 = CONCAT44(8,DAT_140f31ba8);
          lVar4 = (longlong)DAT_140f31ba8;
          DAT_140f31bb0 = lVar3;
        }
        else {
          lVar4 = 0;
        }
        *(undefined1 *)(DAT_140f31bb0 + lVar4) = 0;
        DAT_140f31ba8 = DAT_140f31ba8 + 1;
      }
      uVar1 = _DAT_140f31ba4;
      local_34 = (float)FUN_14008ff20();
      local_34 = local_34 * _caseD_100;
      local_38 = 0x80800000;
      FUN_1400bf207("##MyStr",DAT_140f31bb0,(longlong)DAT_140f31ba8,&local_38,
                    CONCAT44(uVar6,uVar1) | 0x400000,FUN_140106896,&DAT_140f31ba8);
      FUN_1400abfd5("Data: %p\nSize: %d\nCapacity: %d",DAT_140f31bb0,_DAT_140f31ba8 & 0xffffffff,
                    DAT_140f31bac);
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Eliding, Alignment");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xffd,"Widgets/Text Input/Eliding, Alignment");
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_ElideLeft",&DAT_140f1c320,0x20000);
      FUN_1400bed4f("Path",s__path_to_some_folder_with_long_f_140f1c2a0,0x80,DAT_140f1c320,0,0);
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Miscellaneous");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1007,"Widgets/Text Input/Miscellaneous");
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_EscapeClearsAll",&DAT_140f1c324,0x80);
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_ReadOnly",&DAT_140f1c324,0x200);
      thunk_FUN_1400af8bf("ImGuiInputTextFlags_NoUndoRedo",&DAT_140f1c324,0x10000);
      FUN_1400bed4f("Hello",&DAT_140f31bc0,0x10,DAT_140f1c324,0,0);
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  return;
}

