/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fa54e */

void FUN_1400fa54e(void)

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
  
  local_b0 = DAT_140f17b40 ^ (ulonglong)auStack_158;
  cVar7 = FUN_1400c51fb("Basic");
  if (cVar7 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x3e2,"Widgets/Basic");
    FUN_1400b1021("General");
    FUN_1400811b6("imgui_demo.cpp",0x3e5,"Widgets/Basic/Button");
    local_108 = 0;
    cVar7 = FUN_1400ad187("Button",&local_108);
    if (cVar7 != '\0') {
      DAT_140f30fec = DAT_140f30fec + 1;
    }
    if ((DAT_140f30fec & 1) != 0) {
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400abfd5("Thanks for clicking me!");
    }
    FUN_1400811b6("imgui_demo.cpp",0x3ef,"Widgets/Basic/Checkbox");
    FUN_1400aeb6a("checkbox",&DAT_140f17efd);
    FUN_1400811b6("imgui_demo.cpp",0x3f3,"Widgets/Basic/RadioButton");
    iVar10 = 0;
    FUN_1400afd2d("radio a",&DAT_140f30ff0,0);
    uVar1 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400afd2d("radio b",&DAT_140f30ff0,1);
    FUN_140092bab(0,uVar1);
    FUN_1400afd2d("radio c",&DAT_140f30ff0,2);
    FUN_1400b08cd();
    FUN_1400b062e("Hyperlink","https://github.com/ocornut/imgui/wiki/Error-Handling");
    FUN_1400811b6("imgui_demo.cpp",0x3fd,"Widgets/Basic/Buttons (Colored)");
    fVar6 = DAT_140e8d298;
    uVar5 = DAT_1402114e8;
    uVar4 = DAT_140211150._4_4_;
    uVar3 = DAT_140210014;
    uVar2 = DAT_1401c86dc;
    do {
      if (iVar10 != 0) {
        FUN_140092bab(0,uVar1);
      }
      FUN_140091425(iVar10);
      fVar12 = (float)iVar10 / fVar6;
      local_138 = (char *)&local_108;
      uStack_130 = (char *)&local_10c;
      FUN_140078844(fVar12,uVar3,uVar3,&local_11c);
      uStack_118 = (undefined4)local_108;
      uStack_114 = CONCAT44(uVar4,local_10c);
      local_108 = CONCAT44((undefined4)local_108,local_11c);
      uStack_100 = local_10c;
      uStack_fc = uVar4;
      FUN_14007a7b5(0x16,&local_108);
      local_138 = (char *)&local_108;
      uStack_130 = (char *)&local_10c;
      FUN_140078844(fVar12,uVar5,uVar5,&local_11c);
      uStack_118 = (undefined4)local_108;
      uStack_114 = CONCAT44(uVar4,local_10c);
      local_108 = CONCAT44((undefined4)local_108,local_11c);
      uStack_100 = local_10c;
      uStack_fc = uVar4;
      FUN_14007a7b5(0x17,&local_108);
      local_138 = (char *)&local_108;
      uStack_130 = (char *)&local_10c;
      FUN_140078844(fVar12,uVar2,uVar2,&local_11c);
      uStack_118 = (undefined4)local_108;
      uStack_114 = CONCAT44(uVar4,local_10c);
      local_108 = CONCAT44((undefined4)local_108,local_11c);
      uStack_100 = local_10c;
      uStack_fc = uVar4;
      FUN_14007a7b5(0x18,&local_108);
      local_108 = 0;
      FUN_1400ad187("Click",&local_108);
      FUN_14007a8e1(3);
      FUN_140091667();
      iVar10 = iVar10 + 1;
    } while (iVar10 != 7);
    FUN_1400b08cd();
    FUN_1400abfd5("Hold to repeat:");
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400811b6("imgui_demo.cpp",0x413,"Widgets/Basic/Buttons (Repeating)");
    lVar8 = FUN_14007a54a();
    uVar1 = *(undefined4 *)(lVar8 + 100);
    FUN_14008f7a2(8,1);
    cVar7 = FUN_1400ad586("##left",0);
    if (cVar7 != '\0') {
      DAT_140f30ff4 = DAT_140f30ff4 + -1;
    }
    FUN_140092bab(0,uVar1);
    cVar7 = FUN_1400ad586("##right",1);
    if (cVar7 != '\0') {
      DAT_140f30ff4 = DAT_140f30ff4 + 1;
    }
    FUN_14008f860();
    uVar1 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400abfd5(&DAT_140ecbfd4,DAT_140f30ff4);
    local_108 = 0;
    FUN_1400ad187("Tooltip");
    FUN_140093dc2("I am a tooltip");
    FUN_1400ac27a("label","Value");
    FUN_1400b1021("Inputs");
    FUN_1400811b6("imgui_demo.cpp",0x429,"Widgets/Basic/InputText");
    local_138 = (char *)0x0;
    uStack_130 = (char *)0x0;
    FUN_1400bed4f("input text",s_Hello__world__140f17f00,0x80,0);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "USER:\nHold Shift or use mouse to select text.\nCtrl+Left/Right to word jump.\nCtrl+A or Double-Click to select all.\nCtrl+X,Ctrl+C,Ctrl+V for clipboard.\nCtrl+Z to undo, Ctrl+Y/Ctrl+Shift+Z to redo.\nEscape to revert.\n\nPROGRAMMER:\nYou can use the ImGuiInputTextFlags_CallbackResize facility if you need to wire InputText() to a dynamic string type. See misc/cpp/imgui_stdlib.h for an example (this is not demonstrated in imgui_demo.cpp)."
                 );
    uStack_130 = (char *)0x0;
    local_128 = 0;
    local_138 = (char *)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_1400bf23d("input text (w/ hint)","enter text here",&DAT_140f31000,0x80);
    FUN_1400811b6("imgui_demo.cpp",0x43c,"Widgets/Basic/InputInt, InputFloat");
    local_138 = (char *)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_1400bf030("input int",&DAT_140f17f80,1,100);
    uVar2 = DAT_1401c86c8;
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = "%.3f";
    FUN_1400bef13("input float",&DAT_140f17f84,DAT_140211db4,DAT_1401c86c8);
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = &DAT_140ec9425;
    FUN_1400bf177("input double",&DAT_140f17f88,DAT_140e8d590,DAT_1401ced60);
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = &DAT_140ecaedc;
    FUN_1400bef13("input scientific",&DAT_140f17f90,0,0);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "You can input value using the scientific notation,\n  e.g. \"1e+8\" becomes \"100000000\"."
                 );
    FUN_1400befcc("input float3",&DAT_140f17fa0,"%.3f",0);
    FUN_1400b1021("Drags");
    FUN_1400811b6("imgui_demo.cpp",0x453,"Widgets/Basic/DragInt, DragFloat");
    local_128 = local_128 & 0xffffffff00000000;
    uStack_130 = &DAT_140ecbfd4;
    local_138 = (char *)((ulonglong)local_138 & 0xffffffff00000000);
    FUN_1400b6661("drag int",&DAT_140f17fb0,uVar2,0);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "Click and drag to edit value.\nHold Shift/Alt for faster/slower edit.\nDouble-Click or Ctrl+Click to input value."
                 );
    uStack_130 = &DAT_140ed989f;
    local_128._0_4_ = 0x600;
    local_138._0_4_ = 100;
    FUN_1400b6661("drag int 0..100",&DAT_140f17fb4,uVar2,0);
    uStack_130 = &DAT_140ecbfd4;
    local_128._0_4_ = 0x100;
    local_138._0_4_ = 200;
    FUN_1400b6661("drag int wrap 100..200",&DAT_140f17fb8,uVar2,100);
    local_128._0_4_ = 0;
    uStack_130 = "%.3f";
    local_138._0_4_ = 0;
    FUN_1400b61f2("drag float",&DAT_140f17fbc,DAT_140211700,0);
    local_128 = (ulonglong)local_128._4_4_ << 0x20;
    uStack_130 = "%.06f ns";
    local_138 = (char *)((ulonglong)local_138._4_4_ << 0x20);
    FUN_1400b61f2("drag small float",&DAT_140f17fc0,DAT_140211e88,0);
    FUN_1400b1021("Sliders");
    FUN_1400811b6("imgui_demo.cpp",0x466,"Widgets/Basic/SliderInt, SliderFloat");
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = &DAT_140ecbfd4;
    FUN_1400ba55a("slider int",&DAT_140f31080,0xffffffff,3);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92("Ctrl+Click to input value.");
    uStack_130 = (char *)((ulonglong)uStack_130 & 0xffffffff00000000);
    local_138 = "ratio = %.3f";
    FUN_1400ba2c0("slider float",&DAT_140f17fc4,0,uVar2);
    local_138 = "%.4f";
    uStack_130._0_4_ = 0x20;
    FUN_1400ba2c0("slider float (log)",&DAT_140f31084,DAT_1401c86cc,DAT_1401c86d0);
    FUN_1400811b6("imgui_demo.cpp",0x46f,"Widgets/Basic/SliderAngle");
    uStack_130._0_4_ = 0;
    local_138 = "%.0f deg";
    FUN_1400ba4bb("slider angle",&DAT_140f31088,DAT_140e8d598,DAT_140211e10);
    FUN_1400811b6("imgui_demo.cpp",0x476,"Widgets/Basic/Slider (enum)");
    if ((ulonglong)DAT_140f3108c < 4) {
      local_138 = (&PTR_DAT_140e8c920)[DAT_140f3108c];
    }
    else {
      local_138 = "Unknown";
    }
    uStack_130 = (char *)((ulonglong)uStack_130._4_4_ << 0x20);
    FUN_1400ba55a("slider enum",&DAT_140f3108c,0,3);
    uVar1 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "Using the format string parameter to display a name instead of the underlying integer."
                 );
    FUN_1400b1021("Selectors/Pickers");
    FUN_1400811b6("imgui_demo.cpp",0x482,"Widgets/Basic/ColorEdit3, ColorEdit4");
    FUN_1400c129f("color 1",&DAT_140f17fc8,0);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "Click on the color square to open a color picker.\nClick and hold to use drag and drop.\nRight-Click on the color square to show options.\nCtrl+Click on individual component to input value.\n"
                 );
    FUN_1400c12a8("color 2",&DAT_140f17fe0,0);
    FUN_1400811b6("imgui_demo.cpp",0x492,"Widgets/Basic/Combo");
    ppuVar9 = &PTR_DAT_140e8c940;
    puVar11 = &local_108;
    for (lVar8 = 0xb; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *ppuVar9;
      ppuVar9 = ppuVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_138._0_4_ = 0xffffffff;
    FUN_1400b288e("combo",&DAT_140f31090,&local_108,0xb);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "Using the simplified one-liner Combo API here.\nRefer to the \"Combo\" section below for an explanation of how to use the more flexible and general BeginCombo/EndCombo API."
                 );
    FUN_1400811b6("imgui_demo.cpp",0x49e,"Widgets/Basic/ListBox");
    ppuVar9 = &PTR_s_Apple_140e8c9a0;
    puVar11 = &local_108;
    for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *ppuVar9;
      ppuVar9 = ppuVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    local_138 = (char *)CONCAT44(local_138._4_4_,4);
    FUN_1400c8d60("listbox",&DAT_140f17ff0,&local_108,9);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "Using the simplified one-liner ListBox API here.\nRefer to the \"List boxes\" section below for an explanation of how to use the more flexible and general BeginListBox/EndListBox API."
                 );
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_b0 ^ (ulonglong)auStack_158)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_b0 ^ (ulonglong)auStack_158);
}

