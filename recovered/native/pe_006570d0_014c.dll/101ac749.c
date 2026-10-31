/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ac749 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac749(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  float local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined8 uStack_4c;
  undefined *local_44;
  undefined8 local_40;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *local_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  cVar1 = FUN_10147d77("Basic");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x3e2,"Widgets/Basic");
    FUN_10132656("General");
    FUN_101032c6("imgui_demo.cpp",0x3e5,"Widgets/Basic/Button");
    local_40 = 0;
    cVar1 = FUN_1012e1b7("Button",&local_40);
    if (cVar1 != '\0') {
      DAT_103a3a80 = DAT_103a3a80 + 1;
    }
    if ((DAT_103a3a80 & 1) != 0) {
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c("Thanks for clicking me!");
    }
    FUN_101032c6("imgui_demo.cpp",0x3ef,"Widgets/Basic/Checkbox");
    FUN_1012ff1a("checkbox",&DAT_1038a92d);
    FUN_101032c6("imgui_demo.cpp",0x3f3,"Widgets/Basic/RadioButton");
    iVar3 = 0;
    FUN_10131233("radio a",&DAT_103a3a84,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_10131233("radio b",&DAT_103a3a84,1);
    FUN_10114a0e(0,0xbf800000);
    FUN_10131233("radio c",&DAT_103a3a84,2);
    FUN_10131ed3();
    FUN_10131c6c("Hyperlink","https://github.com/ocornut/imgui/wiki/Error-Handling");
    FUN_101032c6("imgui_demo.cpp",0x3fd,"Widgets/Basic/Buttons (Colored)");
    do {
      if (iVar3 != 0) {
        FUN_10114a0e(0,0xbf800000);
      }
      FUN_10113358(iVar3);
      local_58 = (float)iVar3 / DAT_103025a4;
      FUN_100faedd(local_58,0x3f19999a,0x3f19999a,&local_54,&local_40,&local_44);
      uStack_50 = (undefined4)local_40;
      uStack_4c = CONCAT44(DAT_102b8820._4_4_,local_44);
      local_40 = CONCAT44((undefined4)local_40,local_54);
      puStack_38 = local_44;
      puStack_34 = DAT_102b8820._4_4_;
      FUN_100fcd80(0x16,&local_40);
      FUN_100faedd(local_58,0x3f333333,0x3f333333,&local_54,&local_40,&local_44);
      uStack_50 = (undefined4)local_40;
      uStack_4c = CONCAT44(DAT_102b8820._4_4_,local_44);
      local_40 = CONCAT44((undefined4)local_40,local_54);
      puStack_38 = local_44;
      puStack_34 = DAT_102b8820._4_4_;
      FUN_100fcd80(0x17,&local_40);
      FUN_100faedd(local_58,0x3f4ccccd,0x3f4ccccd,&local_54,&local_40,&local_44);
      uStack_50 = (undefined4)local_40;
      uStack_4c = CONCAT44(DAT_102b8820._4_4_,local_44);
      local_40 = CONCAT44((undefined4)local_40,local_54);
      puStack_38 = local_44;
      puStack_34 = DAT_102b8820._4_4_;
      FUN_100fcd80(0x18,&local_40);
      local_40 = 0;
      FUN_1012e1b7("Click",&local_40);
      FUN_100fce8e(3);
      FUN_10113568();
      iVar3 = iVar3 + 1;
    } while (iVar3 != 7);
    FUN_10131ed3();
    FUN_1012d08c("Hold to repeat:");
    FUN_10114a0e(0,0xbf800000);
    FUN_101032c6("imgui_demo.cpp",0x413,"Widgets/Basic/Buttons (Repeating)");
    iVar3 = FUN_100fcb2d();
    local_58 = *(float *)(iVar3 + 100);
    FUN_1011177d(8,1);
    cVar1 = FUN_1012e5f7("##left",0);
    if (cVar1 != '\0') {
      DAT_103a3a88 = DAT_103a3a88 + -1;
    }
    FUN_10114a0e(0,local_58);
    cVar1 = FUN_1012e5f7("##right",1);
    if (cVar1 != '\0') {
      DAT_103a3a88 = DAT_103a3a88 + 1;
    }
    FUN_10111839();
    FUN_10114a0e(0,0xbf800000);
    FUN_1012d08c(&DAT_1033b386,DAT_103a3a88);
    local_40 = 0;
    FUN_1012e1b7("Tooltip",&local_40);
    FUN_10115d65("I am a tooltip");
    FUN_1012d2bb("label","Value");
    FUN_10132656("Inputs");
    FUN_101032c6("imgui_demo.cpp",0x429,"Widgets/Basic/InputText");
    FUN_10141729("input text",s_Hello__world__1038a92e,DAT_103028a0,0,0,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10141b2a("input text (w/ hint)","enter text here",&DAT_103a3a8c,DAT_103028a0,0,0,0);
    FUN_101032c6("imgui_demo.cpp",0x43c,"Widgets/Basic/InputInt, InputFloat");
    FUN_101419a0("input int",&DAT_1038a9b0,1,100,0);
    FUN_101418cb("input float",&DAT_1038a9b4,0x3c23d70a,0x3f800000,"%.3f",0);
    FUN_10141a7b("input double",&DAT_1038a9b8,_DAT_103028b0,_UNK_103028b4,_UNK_103028b8,
                 _UNK_103028bc,&DAT_10338223,0);
    FUN_101418cb("input scientific",&DAT_1038a9c0,0,0,&DAT_1033a039,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1014195e("input float3",&DAT_1038a9c4,"%.3f",0);
    FUN_10132656("Drags");
    FUN_101032c6("imgui_demo.cpp",0x453,"Widgets/Basic/DragInt, DragFloat");
    FUN_1013838a("drag int",&DAT_1038a9d4,0x3f800000,0,0,&DAT_1033b386,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1013838a("drag int 0..100",&DAT_1038a9d8,0x3f800000,0,100,&DAT_1034a54a,0x600);
    FUN_1013838a("drag int wrap 100..200",&DAT_1038a9dc,0x3f800000,100,200,&DAT_1033b386,0x100);
    FUN_10137f3c("drag float",&DAT_1038a9e0,0x3ba3d70a,0,0,"%.3f",0);
    FUN_10137f3c("drag small float",&DAT_1038a9e4,0x38d1b717,0,0,"%.06f ns",0);
    FUN_10132656("Sliders");
    FUN_101032c6("imgui_demo.cpp",0x466,"Widgets/Basic/SliderInt, SliderFloat");
    FUN_1013d499("slider int",&DAT_103a3b0c,0xffffffff,3,&DAT_1033b386,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1013d285("slider float",&DAT_1038a9e8,0,0x3f800000,"ratio = %.3f",0);
    FUN_1013d285("slider float (log)",&DAT_103a3b10,0xc1200000,0x41200000,"%.4f",0x20);
    FUN_101032c6("imgui_demo.cpp",0x46f,"Widgets/Basic/SliderAngle");
    FUN_1013d3e7("slider angle",&DAT_103a3b14,0xc3b40000,0x43b40000,"%.0f deg",0);
    FUN_101032c6("imgui_demo.cpp",0x476,"Widgets/Basic/Slider (enum)");
    pcVar2 = "Unknown";
    if (DAT_103a3b18 < 4) {
      pcVar2 = (&PTR_DAT_10302094)[DAT_103a3b18];
    }
    FUN_1013d499("slider enum",&DAT_103a3b18,0,3,pcVar2,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10132656("Selectors/Pickers");
    FUN_101032c6("imgui_demo.cpp",0x482,"Widgets/Basic/ColorEdit3, ColorEdit4");
    FUN_101438d3("color 1",&DAT_1038a9ec,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101438ec("color 2",&DAT_1038a9f8,0);
    FUN_101032c6("imgui_demo.cpp",0x492,"Widgets/Basic/Combo");
    puStack_20 = PTR_DAT_103020c4;
    puStack_1c = PTR_DAT_103020c8;
    puStack_18 = PTR_DAT_103020cc;
    puStack_30 = PTR_DAT_103020b4;
    puStack_2c = PTR_DAT_103020b8;
    puStack_28 = PTR_DAT_103020bc;
    local_24 = PTR_DAT_103020c0;
    local_40 = CONCAT44(PTR_DAT_103020a8,PTR_DAT_103020a4);
    puStack_38 = PTR_DAT_103020ac;
    puStack_34 = PTR_s_DDDD_1033cb7d_6_103020b0;
    FUN_10133e14("combo",&DAT_103a3b1c,&local_40,0xb,0xffffffff);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101032c6("imgui_demo.cpp",0x49e,"Widgets/Basic/ListBox");
    puStack_20 = PTR_s_Watermelon_103020f0;
    puStack_30 = PTR_s_Mango_103020e0;
    puStack_2c = PTR_s_Orange_103020e4;
    puStack_28 = PTR_s_Pineapple_103020e8;
    local_24 = PTR_s_Strawberry_103020ec;
    local_40 = CONCAT44(PTR_s_Banana_103020d4,PTR_s_Apple_103020d0);
    puStack_38 = PTR_s_Cherry_103020d8;
    puStack_34 = PTR_DAT_103020dc;
    FUN_1014b8fd("listbox",&DAT_1038aa08,&local_40,9,4);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

