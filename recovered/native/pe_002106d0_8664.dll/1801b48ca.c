/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b48ca */

void FUN_1801b48ca(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_b0;
  
  local_b0 = DAT_180402640 ^ (ulonglong)auStack_158;
  cVar7 = FUN_18014c2cb("Basic");
  if (cVar7 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x3e2,"Widgets/Basic");
    FUN_1801380f1("General");
    FUN_180107e9e("imgui_demo.cpp",0x3e5,"Widgets/Basic/Button");
    local_108 = 0;
    cVar7 = FUN_180134257("Button",&local_108);
    if (cVar7 != '\0') {
      DAT_18041f89c = DAT_18041f89c + 1;
    }
    if ((DAT_18041f89c & 1) != 0) {
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_1801330a5("Thanks for clicking me!");
    }
    FUN_180107e9e("imgui_demo.cpp",0x3ef,"Widgets/Basic/Checkbox");
    FUN_180135c3a("checkbox",&DAT_18040475d);
    FUN_180107e9e("imgui_demo.cpp",0x3f3,"Widgets/Basic/RadioButton");
    iVar10 = 0;
    FUN_180136dfd("radio a",&DAT_18041f8a0,0);
    uVar1 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180136dfd("radio b",&DAT_18041f8a0,1);
    FUN_180119893(0,uVar1);
    FUN_180136dfd("radio c",&DAT_18041f8a0,2);
    FUN_18013799d();
    FUN_1801376fe("Hyperlink","https://github.com/ocornut/imgui/wiki/Error-Handling");
    FUN_180107e9e("imgui_demo.cpp",0x3fd,"Widgets/Basic/Buttons (Colored)");
    fVar6 = DAT_180328f04;
    uVar5 = DAT_1802de3d0._4_4_;
    uVar4 = DAT_1802dc418;
    uVar3 = DAT_1802dc414;
    uVar2 = DAT_1802dbb30;
    do {
      if (iVar10 != 0) {
        FUN_180119893(0,uVar1);
      }
      FUN_18011810d(iVar10);
      fVar12 = (float)iVar10 / fVar6;
      local_138 = (char *)&local_108;
      uStack_130 = (char *)&local_10c;
      FUN_1800ff588(fVar12,uVar4,uVar4,&local_11c);
      uStack_118 = (undefined4)local_108;
      uStack_114 = CONCAT44(uVar5,local_10c);
      local_108 = CONCAT44((undefined4)local_108,local_11c);
      uStack_100 = local_10c;
      uStack_fc = uVar5;
      FUN_1801014f9(0x16,&local_108);
      local_138 = (char *)&local_108;
      uStack_130 = (char *)&local_10c;
      FUN_1800ff588(fVar12,uVar3,uVar3,&local_11c);
      uStack_118 = (undefined4)local_108;
      uStack_114 = CONCAT44(uVar5,local_10c);
      local_108 = CONCAT44((undefined4)local_108,local_11c);
      uStack_100 = local_10c;
      uStack_fc = uVar5;
      FUN_1801014f9(0x17,&local_108);
      local_138 = (char *)&local_108;
      uStack_130 = (char *)&local_10c;
      FUN_1800ff588(fVar12,uVar2,uVar2,&local_11c);
      uStack_118 = (undefined4)local_108;
      uStack_114 = CONCAT44(uVar5,local_10c);
      local_108 = CONCAT44((undefined4)local_108,local_11c);
      uStack_100 = local_10c;
      uStack_fc = uVar5;
      FUN_1801014f9(0x18,&local_108);
      local_108 = 0;
      FUN_180134257("Click",&local_108);
      FUN_180101625(3);
      FUN_18011834f();
      iVar10 = iVar10 + 1;
    } while (iVar10 != 7);
    FUN_18013799d();
    FUN_1801330a5("Hold to repeat:");
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180107e9e("imgui_demo.cpp",0x413,"Widgets/Basic/Buttons (Repeating)");
    lVar8 = FUN_18010128e();
    uVar1 = *(undefined4 *)(lVar8 + 100);
    FUN_18011648a(8,1);
    cVar7 = FUN_180134656("##left",0);
    if (cVar7 != '\0') {
      DAT_18041f8a4 = DAT_18041f8a4 + -1;
    }
    FUN_180119893(0,uVar1);
    cVar7 = FUN_180134656("##right",1);
    if (cVar7 != '\0') {
      DAT_18041f8a4 = DAT_18041f8a4 + 1;
    }
    FUN_180116548();
    uVar2 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_1801330a5(&DAT_18036b4b0,DAT_18041f8a4);
    local_108 = 0;
    FUN_180134257("Tooltip");
    FUN_18011ab06("I am a tooltip");
    FUN_18013334a("label","Value");
    FUN_1801380f1("Inputs");
    FUN_180107e9e("imgui_demo.cpp",0x429,"Widgets/Basic/InputText");
    local_138 = (char *)0x0;
    uStack_130 = (char *)0x0;
    FUN_180145e1f("input text",s_Hello__world__180404760,0x80,0);
    FUN_180119893(0,uVar2);
    FUN_180124063(
                 "USER:\nHold Shift or use mouse to select text.\nCtrl+Left/Right to word jump.\nCtrl+A or Double-Click to select all.\nCtrl+X,Ctrl+C,Ctrl+V for clipboard.\nCtrl+Z to undo, Ctrl+Y/Ctrl+Shift+Z to redo.\nEscape to revert.\n\nPROGRAMMER:\nYou can use the ImGuiInputTextFlags_CallbackResize facility if you need to wire InputText() to a dynamic string type. See misc/cpp/imgui_stdlib.h for an example (this is not demonstrated in imgui_demo.cpp)."
                 );
    uStack_130 = (char *)0x0;
    local_128 = 0;
    local_138 = (char *)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_18014630d("input text (w/ hint)","enter text here",&DAT_18041f8b0,0x80);
    FUN_180107e9e("imgui_demo.cpp",0x43c,"Widgets/Basic/InputInt, InputFloat");
    local_138 = (char *)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_180146100("input int",&DAT_1804047e0,1,100);
    uVar1 = DAT_1802ac570;
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = "%.3f";
    FUN_180145fe3("input float",&DAT_1804047e4,DAT_1802df044,DAT_1802ac570);
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = &DAT_180368324;
    FUN_180146247("input double",&DAT_1804047e8,DAT_180329200,DAT_1802ac578);
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = &DAT_18036a163;
    FUN_180145fe3("input scientific",&DAT_1804047f0,0,0);
    FUN_180119893(0,uVar2);
    FUN_180124063(
                 "You can input value using the scientific notation,\n  e.g. \"1e+8\" becomes \"100000000\"."
                 );
    FUN_18014609c("input float3",&DAT_180404800,"%.3f",0);
    FUN_1801380f1("Drags");
    FUN_180107e9e("imgui_demo.cpp",0x453,"Widgets/Basic/DragInt, DragFloat");
    local_128 = local_128 & 0xffffffff00000000;
    uStack_130 = &DAT_18036b4b0;
    local_138 = (char *)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_18013d731("drag int",&DAT_180404810,uVar1,0);
    FUN_180119893(0,uVar2);
    FUN_180124063(
                 "Click and drag to edit value.\nHold Shift/Alt for faster/slower edit.\nDouble-Click or Ctrl+Click to input value."
                 );
    uStack_130 = &DAT_18037a62d;
    local_128._0_4_ = 0x600;
    local_138._0_4_ = 100;
    FUN_18013d731("drag int 0..100",&DAT_180404814,uVar1,0);
    uStack_130 = &DAT_18036b4b0;
    local_128._0_4_ = 0x100;
    local_138._0_4_ = 200;
    FUN_18013d731("drag int wrap 100..200",&DAT_180404818,uVar1,100);
    local_128._0_4_ = 0;
    uStack_130 = "%.3f";
    local_138._0_4_ = 0;
    FUN_18013d2c2("drag float",&DAT_18040481c,DAT_1802de990,0);
    local_128 = (ulonglong)local_128._4_4_ << 0x20;
    uStack_130 = "%.06f ns";
    local_138 = (char *)((ulonglong)local_138._4_4_ << 0x20);
    FUN_18013d2c2("drag small float",&DAT_180404820,DAT_1802df118,0);
    FUN_1801380f1("Sliders");
    FUN_180107e9e("imgui_demo.cpp",0x466,"Widgets/Basic/SliderInt, SliderFloat");
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = &DAT_18036b4b0;
    FUN_18014162a("slider int",&DAT_18041f930,0xffffffff,3);
    FUN_180119893(0,uVar2);
    FUN_180124063("Ctrl+Click to input value.");
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = "ratio = %.3f";
    FUN_180141390("slider float",&DAT_180404824,0,uVar1);
    local_138 = "%.4f";
    uStack_130._0_4_ = 0x20;
    FUN_180141390("slider float (log)",&DAT_18041f934,DAT_1802dc2d8,DAT_1802dc2dc);
    FUN_180107e9e("imgui_demo.cpp",0x46f,"Widgets/Basic/SliderAngle");
    uStack_130._0_4_ = 0;
    local_138 = "%.0f deg";
    FUN_18014158b("slider angle",&DAT_18041f938,DAT_180329208,DAT_1802df0a0);
    FUN_180107e9e("imgui_demo.cpp",0x476,"Widgets/Basic/Slider (enum)");
    if ((ulonglong)DAT_18041f93c < 4) {
      local_138 = (&PTR_DAT_180328590)[DAT_18041f93c];
    }
    else {
      local_138 = "Unknown";
    }
    uStack_130 = (char *)((ulonglong)uStack_130._4_4_ << 0x20);
    FUN_18014162a("slider enum",&DAT_18041f93c,0,3);
    uVar1 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "Using the format string parameter to display a name instead of the underlying integer."
                 );
    FUN_1801380f1("Selectors/Pickers");
    FUN_180107e9e("imgui_demo.cpp",0x482,"Widgets/Basic/ColorEdit3, ColorEdit4");
    FUN_18014836f("color 1",&DAT_180404828,0);
    FUN_180119893(0,uVar1);
    FUN_180124063(
                 "Click on the color square to open a color picker.\nClick and hold to use drag and drop.\nRight-Click on the color square to show options.\nCtrl+Click on individual component to input value.\n"
                 );
    FUN_180148378("color 2",&DAT_180404840,0);
    FUN_180107e9e("imgui_demo.cpp",0x492,"Widgets/Basic/Combo");
    ppuVar9 = &PTR_DAT_1803285b0;
    puVar11 = &local_108;
    for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *ppuVar9;
      ppuVar9 = ppuVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_138._0_4_ = 0xffffffff;
    FUN_18013995e("combo",&DAT_18041f940,&local_108,0xb);
    FUN_180119893(0,uVar1);
    FUN_180124063(
                 "Using the simplified one-liner Combo API here.\nRefer to the \"Combo\" section below for an explanation of how to use the more flexible and general BeginCombo/EndCombo API."
                 );
    FUN_180107e9e("imgui_demo.cpp",0x49e,"Widgets/Basic/ListBox");
    ppuVar9 = &PTR_s_Apple_180328610;
    puVar11 = &local_108;
    for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *ppuVar9;
      ppuVar9 = ppuVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_138 = (char *)CONCAT44(local_138._4_4_,4);
    FUN_18014fe30("listbox",&DAT_180404850,&local_108,9);
    FUN_180119893(0,uVar1);
    FUN_180124063(
                 "Using the simplified one-liner ListBox API here.\nRefer to the \"List boxes\" section below for an explanation of how to use the more flexible and general BeginListBox/EndListBox API."
                 );
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_b0 ^ (ulonglong)auStack_158)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_b0 ^ (ulonglong)auStack_158);
}

