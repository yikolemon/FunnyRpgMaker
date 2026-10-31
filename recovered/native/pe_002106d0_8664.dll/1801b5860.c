/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b5860 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b5860(void)

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
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_a8;
  cVar7 = FUN_18014c2cb("Color/Picker Widgets");
  if (cVar7 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x4ee,"Widgets/Color");
    FUN_1801380f1("Options");
    thunk_FUN_18013698f("ImGuiColorEditFlags_NoAlpha",&DAT_18041fa74,2);
    thunk_FUN_18013698f("ImGuiColorEditFlags_AlphaOpaque",&DAT_18041fa74,0x1000);
    thunk_FUN_18013698f("ImGuiColorEditFlags_AlphaNoBg",&DAT_18041fa74,0x2000);
    thunk_FUN_18013698f("ImGuiColorEditFlags_AlphaPreviewHalf",&DAT_18041fa74,0x4000);
    thunk_FUN_18013698f("ImGuiColorEditFlags_NoOptions",&DAT_18041fa74,8);
    uVar3 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063("Right-click on the individual color widget to show options.");
    thunk_FUN_18013698f("ImGuiColorEditFlags_NoDragDrop",&DAT_18041fa74,0x200);
    thunk_FUN_18013698f("ImGuiColorEditFlags_NoColorMarkers",&DAT_18041fa74,0x800);
    thunk_FUN_18013698f("ImGuiColorEditFlags_HDR",&DAT_18041fa74,0x80000);
    FUN_180119893(0,uVar3);
    FUN_180124063("Currently all this does is to lift the 0..1 limits on dragging widgets.");
    FUN_180107e9e("imgui_demo.cpp",0x4fc,"Widgets/Color/ColorEdit");
    FUN_1801380f1("Inline color editor");
    FUN_1801330a5("Color widget:");
    FUN_180119893(0,uVar3);
    FUN_180124063(
                 "Click on the color square to open a color picker.\nCtrl+Click on individual component to input value.\n"
                 );
    FUN_18014836f("MyColor##1",&DAT_180404860,DAT_18041fa74);
    FUN_180107e9e("imgui_demo.cpp",0x504,"Widgets/Color/ColorEdit (HSV, with Alpha)");
    FUN_1801330a5("Color widget HSV with Alpha:");
    FUN_180148378("MyColor##2",&DAT_180404860,DAT_18041fa74 | 0x200000);
    FUN_180107e9e("imgui_demo.cpp",0x508,"Widgets/Color/ColorEdit (float display)");
    FUN_1801330a5("Color widget with Float Display:");
    FUN_180148378("MyColor##2f",&DAT_180404860,DAT_18041fa74 | 0x1000000);
    FUN_180107e9e("imgui_demo.cpp",0x50c,"Widgets/Color/ColorButton (with Picker)");
    FUN_1801330a5("Color button with Picker:");
    FUN_180119893(0,uVar3);
    FUN_180124063(
                 "With the ImGuiColorEditFlags_NoInputs flag you can hide all the slider/text inputs.\nWith the ImGuiColorEditFlags_NoLabel flag you can pass a non-empty label which will only be used for the tooltip and picker popup."
                 );
    FUN_180148378("MyColor##3",&DAT_180404860,DAT_18041fa74 | 0xa0);
    FUN_180107e9e("imgui_demo.cpp",0x514,"Widgets/Color/ColorButton (with custom Picker popup)");
    FUN_1801330a5("Color button with Custom Picker Popup:");
    fVar17 = DAT_18032920c;
    uVar3 = DAT_1802dbb30;
    if (DAT_18041fa78 == '\0') {
      pcVar12 = (char *)&DAT_18041fa88;
      lVar14 = 0;
      do {
        local_88 = pcVar12 + -4;
        local_80 = pcVar12;
        FUN_1800ff588((float)(int)lVar14 / fVar17,uVar3,uVar3,pcVar12 + -8);
        pcVar12[4] = '\0';
        pcVar12[5] = '\0';
        pcVar12[6] = -0x80;
        pcVar12[7] = '?';
        lVar14 = lVar14 + 1;
        pcVar12 = pcVar12 + 0x10;
      } while (lVar14 != 0x20);
      DAT_18041fa78 = '\x01';
    }
    local_68 = 0;
    cVar7 = FUN_180149615("MyColor##3b",&DAT_180404860,DAT_18041fa74,&local_68);
    lVar14 = FUN_18010128e();
    FUN_180119893(0,*(undefined4 *)(lVar14 + 100));
    local_68 = 0;
    cVar8 = FUN_180134257("Palette",&local_68);
    if ((cVar7 != '\0') || (cVar8 != '\0')) {
      FUN_18011ac8e("mypicker",0);
      _DAT_18041fc80 = _DAT_180404860;
      uRam000000018041fc84 = DAT_180404860_4;
      uRam000000018041fc88 = _DAT_180404868;
      uRam000000018041fc8c = uRam000000018040486c;
    }
    cVar7 = FUN_18011b56a("mypicker",0);
    if (cVar7 != '\0') {
      FUN_1801330a5("MY CUSTOM COLOR PICKER WITH AN AMAZING PALETTE!");
      FUN_180137ca1();
      FUN_180149c39("##picker",&DAT_180404860,DAT_18041fa74 | 0x110,0);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_18011a496();
      FUN_1801330a5("Current");
      uVar6 = DAT_180329210;
      local_68 = DAT_180329210;
      FUN_180149615("##current",&DAT_180404860,0x4004,&local_68);
      FUN_1801330a5("Previous");
      local_68 = uVar6;
      cVar7 = FUN_180149615("##previous",&DAT_18041fc80,0x4004,&local_68);
      if (cVar7 != '\0') {
        _DAT_180404860 = CONCAT44(uRam000000018041fc84,_DAT_18041fc80);
        _DAT_180404868 = uRam000000018041fc88;
        uRam000000018040486c = uRam000000018041fc8c;
      }
      FUN_180137ca1();
      FUN_1801330a5("Palette");
      uVar6 = DAT_180329220;
      puVar13 = &DAT_18041fa80;
      uVar15 = 0;
      do {
        FUN_18011810d(uVar15 & 0xffffffff);
        if ((uVar15 & 7) != 0) {
          lVar14 = FUN_18010128e();
          FUN_180119893(0,*(undefined4 *)(lVar14 + 0x60));
        }
        local_68 = uVar6;
        cVar7 = FUN_180149615("##palette",puVar13,0x46,&local_68);
        if (cVar7 != '\0') {
          _DAT_180404868 = *(undefined4 *)(puVar13 + 1);
          _DAT_180404860 = *puVar13;
        }
        cVar7 = FUN_18011cd83();
        if (cVar7 != '\0') {
          plVar10 = (longlong *)FUN_18011ce5d("_COL3F",0);
          if (plVar10 != (longlong *)0x0) {
            puVar1 = (undefined8 *)*plVar10;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar13 = *puVar1;
          }
          plVar10 = (longlong *)FUN_18011ce5d("_COL4F",0);
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
          FUN_18011d22a();
        }
        FUN_18011834f();
        uVar15 = uVar15 + 1;
        puVar13 = puVar13 + 2;
      } while (uVar15 != 0x20);
      FUN_18011949a();
      FUN_18011b3ef();
    }
    FUN_180107e9e("imgui_demo.cpp",0x558,"Widgets/Color/ColorButton (simple)");
    FUN_1801330a5("Color button only:");
    FUN_180135c3a("ImGuiColorEditFlags_NoBorder",&DAT_18041fc90);
    local_68 = DAT_180329160;
    FUN_180149615("MyColor##3c",&DAT_180404860,(uint)DAT_18041fc90 << 10 | DAT_18041fa74);
    FUN_180107e9e("imgui_demo.cpp",0x55e,"Widgets/Color/ColorPicker");
    FUN_1801380f1("Color picker");
    FUN_180117f98("Color picker");
    thunk_FUN_18013698f("ImGuiColorEditFlags_NoAlpha",&DAT_180404880,2);
    thunk_FUN_18013698f("ImGuiColorEditFlags_AlphaBar",&DAT_180404880,0x40000);
    thunk_FUN_18013698f("ImGuiColorEditFlags_NoSidePreview",&DAT_180404880,0x100);
    if ((DAT_180404880 & 0x100) != 0) {
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180135c3a("With Ref Color",&DAT_18041fc91);
      if (DAT_18041fc91 == '\x01') {
        FUN_180119893(0,DAT_1802bb8e0);
        FUN_180148378("##RefColor",&DAT_180404870,DAT_18041fa74 | 0x20);
      }
    }
    FUN_180139992("Picker Mode",&DAT_18041fc94,"Auto/Current",0xffffffff);
    uVar3 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063("When not specified explicitly, user can right-click the picker to change mode.");
    FUN_180139992("Display Mode",&DAT_18041fc98,"Auto/Current",0xffffffff);
    FUN_180119893(0,uVar3);
    FUN_180124063(
                 "ColorEdit defaults to displaying RGB inputs if you don\'t specify a display mode, but the user can change it with a right-click on those inputs.\n\nColorPicker defaults to displaying RGB+HSV+Hex if you don\'t specify a display mode.\n\nYou can change the defaults using SetColorEditOptions()."
                 );
    uVar11 = DAT_180404880 | DAT_18041fa74 | 0x2000000;
    if (DAT_18041fc94 != 1) {
      uVar11 = DAT_180404880 | DAT_18041fa74;
    }
    uVar9 = uVar11 | 0x4000000;
    if (DAT_18041fc94 != 2) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 | 0x20;
    if (DAT_18041fc98 != 1) {
      uVar11 = uVar9;
    }
    uVar9 = uVar11 | 0x100000;
    if (DAT_18041fc98 != 2) {
      uVar9 = uVar11;
    }
    uVar11 = uVar9 | 0x200000;
    if (DAT_18041fc98 != 3) {
      uVar11 = uVar9;
    }
    uVar9 = uVar11 | 0x400000;
    if (DAT_18041fc98 != 4) {
      uVar9 = uVar11;
    }
    puVar16 = (undefined *)0x0;
    if (DAT_18041fc91 != '\0') {
      puVar16 = &DAT_180404870;
    }
    FUN_180149c39("MyColor##4",&DAT_180404860,uVar9,puVar16);
    FUN_1801330a5("Set defaults in code:");
    FUN_180119893(0,uVar3);
    FUN_180124063(
                 "SetColorEditOptions() is designed to allow you to set boot-time default.\nWe don\'t have Push/Pop functions because you can force options on a per-widget basis if needed, and the user can change non-forced ones with the options menu.\nWe don\'t have a getter to avoid encouraging you to persistently save values that aren\'t forward-compatible."
                 );
    local_68 = 0;
    cVar7 = FUN_180134257("Default: Uint8 + HSV + Hue Bar");
    if (cVar7 != '\0') {
      FUN_18014c064(0x2a00000);
    }
    local_68 = 0;
    cVar7 = FUN_180134257("Default: Float + HDR + Hue Wheel");
    if (cVar7 != '\0') {
      FUN_18014c064(0x5080000);
    }
    FUN_1801330a5("Both types:");
    FUN_180111069(&local_68);
    fVar17 = (float)local_68;
    lVar14 = FUN_18010128e();
    fVar17 = (fVar17 - *(float *)(lVar14 + 0x60)) * DAT_1802bb8d8;
    FUN_1800ffdb5(fVar17);
    FUN_18014b80e("##MyColor##5",&DAT_180404860,0x2000122);
    uVar3 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_1800ffdb5(fVar17);
    FUN_18014b80e(&DAT_18036dea5,&DAT_180404860,0x4000122);
    FUN_18011834f();
    FUN_1801377c5();
    FUN_1801330a5("HSV encoded colors");
    FUN_180119893(0,uVar3);
    FUN_180124063(
                 "By default, colors are given to ColorEdit and ColorPicker in RGB, but ImGuiColorEditFlags_InputHSV allows you to store colors as HSV and pass them to ColorEdit and ColorPicker as HSV. This comes with the added benefit that you can manipulate hue values with the picker even when saturation or value are zero."
                 );
    FUN_1801330a5("Color widget with InputHSV:");
    FUN_180148378("HSV shown as RGB##1",&DAT_180404884,0x11100000);
    FUN_180148378("HSV shown as HSV##1",&DAT_180404884,0x11200000);
    local_80 = "%.3f";
    local_78 = 0;
    local_88 = (char *)CONCAT44(local_88._4_4_,0x3f800000);
    FUN_18013d44e("Raw HSV values",&DAT_180404884,DAT_1802df044,0);
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_a8);
}

