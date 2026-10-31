/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fb4e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fb4e4(void)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined *puVar16;
  float fVar17;
  undefined1 auStack_a8 [32];
  char *local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  cVar7 = FUN_1400c51fb("Color/Picker Widgets");
  if (cVar7 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x4ee,"Widgets/Color");
    FUN_1400b1021("Options");
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_NoAlpha",&DAT_140f311c4,2);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_AlphaOpaque",&DAT_140f311c4,0x1000);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_AlphaNoBg",&DAT_140f311c4,0x2000);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_AlphaPreviewHalf",&DAT_140f311c4,0x4000);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_NoOptions",&DAT_140f311c4,8);
    uVar3 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92("Right-click on the individual color widget to show options.");
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_NoDragDrop",&DAT_140f311c4,0x200);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_NoColorMarkers",&DAT_140f311c4,0x800);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_HDR",&DAT_140f311c4,0x80000);
    FUN_140092bab(0,uVar3);
    FUN_14009cf92("Currently all this does is to lift the 0..1 limits on dragging widgets.");
    FUN_1400811b6("imgui_demo.cpp",0x4fc,"Widgets/Color/ColorEdit");
    FUN_1400b1021("Inline color editor");
    FUN_1400abfd5("Color widget:");
    FUN_140092bab(0,uVar3);
    FUN_14009cf92(
                 "Click on the color square to open a color picker.\nCtrl+Click on individual component to input value.\n"
                 );
    FUN_1400c129f("MyColor##1",&DAT_140f18000,DAT_140f311c4);
    FUN_1400811b6("imgui_demo.cpp",0x504,"Widgets/Color/ColorEdit (HSV, with Alpha)");
    FUN_1400abfd5("Color widget HSV with Alpha:");
    FUN_1400c12a8("MyColor##2",&DAT_140f18000,DAT_140f311c4 | 0x200000);
    FUN_1400811b6("imgui_demo.cpp",0x508,"Widgets/Color/ColorEdit (float display)");
    FUN_1400abfd5("Color widget with Float Display:");
    FUN_1400c12a8("MyColor##2f",&DAT_140f18000,DAT_140f311c4 | 0x1000000);
    FUN_1400811b6("imgui_demo.cpp",0x50c,"Widgets/Color/ColorButton (with Picker)");
    FUN_1400abfd5("Color button with Picker:");
    FUN_140092bab(0,uVar3);
    FUN_14009cf92(
                 "With the ImGuiColorEditFlags_NoInputs flag you can hide all the slider/text inputs.\nWith the ImGuiColorEditFlags_NoLabel flag you can pass a non-empty label which will only be used for the tooltip and picker popup."
                 );
    FUN_1400c12a8("MyColor##3",&DAT_140f18000,DAT_140f311c4 | 0xa0);
    FUN_1400811b6("imgui_demo.cpp",0x514,"Widgets/Color/ColorButton (with custom Picker popup)");
    FUN_1400abfd5("Color button with Custom Picker Popup:");
    fVar17 = DAT_140e8d59c;
    uVar3 = DAT_1401c86dc;
    if (DAT_140f311c8 == '\0') {
      pcVar12 = (char *)&DAT_140f311d8;
      lVar14 = 0;
      do {
        local_88 = pcVar12 + -4;
        local_80 = pcVar12;
        FUN_140078844((float)(int)lVar14 / fVar17,uVar3,uVar3,pcVar12 + -8);
        pcVar12[4] = '\0';
        pcVar12[5] = '\0';
        pcVar12[6] = -0x80;
        pcVar12[7] = '?';
        lVar14 = lVar14 + 1;
        pcVar12 = pcVar12 + 0x10;
      } while (lVar14 != 0x20);
      DAT_140f311c8 = '\x01';
    }
    local_68 = 0;
    cVar7 = FUN_1400c2545("MyColor##3b",&DAT_140f18000,DAT_140f311c4,&local_68);
    lVar14 = FUN_14007a54a();
    FUN_140092bab(0,*(undefined4 *)(lVar14 + 100));
    local_68 = 0;
    cVar8 = FUN_1400ad187("Palette",&local_68);
    if ((cVar7 != '\0') || (cVar8 != '\0')) {
      FUN_140093f4a("mypicker",0);
      _DAT_140f313d0 = _DAT_140f18000;
      uRam0000000140f313d4 = DAT_140f18000_4;
      uRam0000000140f313d8 = _DAT_140f18008;
      uRam0000000140f313dc = uRam0000000140f1800c;
    }
    cVar7 = FUN_140094826("mypicker",0);
    if (cVar7 != '\0') {
      FUN_1400abfd5("MY CUSTOM COLOR PICKER WITH AN AMAZING PALETTE!");
      FUN_1400b0bd1();
      FUN_1400c2b69("##picker",&DAT_140f18000,DAT_140f311c4 | 0x110,0);
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400937ae();
      FUN_1400abfd5("Current");
      uVar6 = DAT_140e8d5a0;
      local_68 = DAT_140e8d5a0;
      FUN_1400c2545("##current",&DAT_140f18000,0x4004,&local_68);
      FUN_1400abfd5("Previous");
      local_68 = uVar6;
      cVar7 = FUN_1400c2545("##previous",&DAT_140f313d0,0x4004,&local_68);
      if (cVar7 != '\0') {
        _DAT_140f18000 = CONCAT44(uRam0000000140f313d4,_DAT_140f313d0);
        _DAT_140f18008 = uRam0000000140f313d8;
        uRam0000000140f1800c = uRam0000000140f313dc;
      }
      FUN_1400b0bd1();
      FUN_1400abfd5("Palette");
      uVar6 = DAT_140e8d5b0;
      puVar13 = &DAT_140f311d0;
      uVar15 = 0;
      do {
        FUN_140091425(uVar15 & 0xffffffff);
        if ((uVar15 & 7) != 0) {
          lVar14 = FUN_14007a54a();
          FUN_140092bab(0,*(undefined4 *)(lVar14 + 0x60));
        }
        local_68 = uVar6;
        cVar7 = FUN_1400c2545("##palette",puVar13,0x46,&local_68);
        if (cVar7 != '\0') {
          _DAT_140f18008 = *(undefined4 *)(puVar13 + 1);
          _DAT_140f18000 = *puVar13;
        }
        cVar7 = FUN_14009603f();
        if (cVar7 != '\0') {
          plVar10 = (longlong *)FUN_140096119("_COL3F",0);
          if (plVar10 != (longlong *)0x0) {
            puVar1 = (undefined8 *)*plVar10;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar13 = *puVar1;
          }
          plVar10 = (longlong *)FUN_140096119("_COL4F",0);
          if (plVar10 != (longlong *)0x0) {
            puVar2 = (undefined4 *)*plVar10;
            uVar3 = puVar2[1];
            uVar4 = puVar2[2];
            uVar5 = puVar2[3];
            *(undefined4 *)puVar13 = *puVar2;
            *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
            *(undefined4 *)(puVar13 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
          }
          FUN_1400964e6();
        }
        FUN_140091667();
        uVar15 = uVar15 + 1;
        puVar13 = puVar13 + 2;
      } while (uVar15 != 0x20);
      FUN_1400927b2();
      FUN_1400946ab();
    }
    FUN_1400811b6("imgui_demo.cpp",0x558,"Widgets/Color/ColorButton (simple)");
    FUN_1400abfd5("Color button only:");
    FUN_1400aeb6a("ImGuiColorEditFlags_NoBorder",&DAT_140f313e0);
    local_68 = DAT_140e8d4f0;
    FUN_1400c2545("MyColor##3c",&DAT_140f18000,(uint)DAT_140f313e0 << 10 | DAT_140f311c4);
    FUN_1400811b6("imgui_demo.cpp",0x55e,"Widgets/Color/ColorPicker");
    FUN_1400b1021("Color picker");
    FUN_1400912b0("Color picker");
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_NoAlpha",&DAT_140f18020,2);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_AlphaBar",&DAT_140f18020,0x40000);
    thunk_FUN_1400af8bf("ImGuiColorEditFlags_NoSidePreview",&DAT_140f18020,0x100);
    if ((DAT_140f18020 & 0x100) != 0) {
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_1400aeb6a("With Ref Color",&DAT_140f313e1);
      if (DAT_140f313e1 == '\x01') {
        FUN_140092bab(0,DAT_1401c86a4);
        FUN_1400c12a8("##RefColor",&DAT_140f18010,DAT_140f311c4 | 0x20);
      }
    }
    FUN_1400b28c2("Picker Mode",&DAT_140f313e4,"Auto/Current",0xffffffff);
    uVar3 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92("When not specified explicitly, user can right-click the picker to change mode.");
    FUN_1400b28c2("Display Mode",&DAT_140f313e8,"Auto/Current",0xffffffff);
    FUN_140092bab(0,uVar3);
    FUN_14009cf92(
                 "ColorEdit defaults to displaying RGB inputs if you don\'t specify a display mode, but the user can change it with a right-click on those inputs.\n\nColorPicker defaults to displaying RGB+HSV+Hex if you don\'t specify a display mode.\n\nYou can change the defaults using SetColorEditOptions()."
                 );
    uVar11 = DAT_140f18020 | DAT_140f311c4 | 0x2000000;
    if (DAT_140f313e4 != 1) {
      uVar11 = DAT_140f18020 | DAT_140f311c4;
    }
    uVar9 = uVar11 | 0x4000000;
    if (DAT_140f313e4 != 2) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 | 0x20;
    if (DAT_140f313e8 != 1) {
      uVar11 = uVar9;
    }
    uVar9 = uVar11 | 0x100000;
    if (DAT_140f313e8 != 2) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 | 0x200000;
    if (DAT_140f313e8 != 3) {
      uVar11 = uVar9;
    }
    uVar9 = uVar11 | 0x400000;
    if (DAT_140f313e8 != 4) {
      uVar9 = uVar11;
    }
    puVar16 = (undefined *)0x0;
    if (DAT_140f313e1 != '\0') {
      puVar16 = &DAT_140f18010;
    }
    FUN_1400c2b69("MyColor##4",&DAT_140f18000,uVar9,puVar16);
    FUN_1400abfd5("Set defaults in code:");
    FUN_140092bab(0,uVar3);
    FUN_14009cf92(
                 "SetColorEditOptions() is designed to allow you to set boot-time default.\nWe don\'t have Push/Pop functions because you can force options on a per-widget basis if needed, and the user can change non-forced ones with the options menu.\nWe don\'t have a getter to avoid encouraging you to persistently save values that aren\'t forward-compatible."
                 );
    local_68 = 0;
    cVar7 = FUN_1400ad187("Default: Uint8 + HSV + Hue Bar");
    if (cVar7 != '\0') {
      FUN_1400c4f94(0x2a00000);
    }
    local_68 = 0;
    cVar7 = FUN_1400ad187("Default: Float + HDR + Hue Wheel");
    if (cVar7 != '\0') {
      FUN_1400c4f94(0x5080000);
    }
    FUN_1400abfd5("Both types:");
    FUN_14008a381(&local_68);
    fVar17 = (float)local_68;
    lVar14 = FUN_14007a54a();
    fVar17 = (fVar17 - *(float *)(lVar14 + 0x60)) * DAT_140210024;
    FUN_140079071(fVar17);
    FUN_1400c473e("##MyColor##5",&DAT_140f18000,0x2000122);
    uVar3 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_140079071(fVar17);
    FUN_1400c473e(&DAT_140ecdf92,&DAT_140f18000,0x4000122);
    FUN_140091667();
    FUN_1400b06f5();
    FUN_1400abfd5("HSV encoded colors");
    FUN_140092bab(0,uVar3);
    FUN_14009cf92(
                 "By default, colors are given to ColorEdit and ColorPicker in RGB, but ImGuiColorEditFlags_InputHSV allows you to store colors as HSV and pass them to ColorEdit and ColorPicker as HSV. This comes with the added benefit that you can manipulate hue values with the picker even when saturation or value are zero."
                 );
    FUN_1400abfd5("Color widget with InputHSV:");
    FUN_1400c12a8("HSV shown as RGB##1",&DAT_140f18024,0x11100000);
    FUN_1400c12a8("HSV shown as HSV##1",&DAT_140f18024,0x11200000);
    local_80 = "%.3f";
    local_78 = 0;
    local_88 = (char *)CONCAT44(local_88._4_4_,0x3f800000);
    FUN_1400b637e("Raw HSV values",&DAT_140f18024,DAT_140211db4,0);
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_a8);
}

