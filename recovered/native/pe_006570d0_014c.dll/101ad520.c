/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ad520 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ad520(void)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  int *piVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  cVar5 = FUN_10147d77("Color/Picker Widgets");
  if (cVar5 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x4ee,"Widgets/Color");
    FUN_10132656("Options");
    thunk_FUN_10130d81("ImGuiColorEditFlags_NoAlpha",&DAT_103a3c44,2);
    thunk_FUN_10130d81("ImGuiColorEditFlags_AlphaOpaque",&DAT_103a3c44,0x1000);
    thunk_FUN_10130d81("ImGuiColorEditFlags_AlphaNoBg",&DAT_103a3c44,0x2000);
    thunk_FUN_10130d81("ImGuiColorEditFlags_AlphaPreviewHalf",&DAT_103a3c44,0x4000);
    thunk_FUN_10130d81("ImGuiColorEditFlags_NoOptions",&DAT_103a3c44,8);
    iVar12 = 0;
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiColorEditFlags_NoDragDrop",&DAT_103a3c44,0x200);
    thunk_FUN_10130d81("ImGuiColorEditFlags_NoColorMarkers",&DAT_103a3c44,0x800);
    thunk_FUN_10130d81("ImGuiColorEditFlags_HDR",&DAT_103a3c44,0x80000);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101032c6("imgui_demo.cpp",0x4fc,"Widgets/Color/ColorEdit");
    FUN_10132656("Inline color editor");
    FUN_1012d08c("Color widget:");
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101438d3("MyColor##1",&DAT_1038aa18,DAT_103a3c44);
    FUN_101032c6("imgui_demo.cpp",0x504,"Widgets/Color/ColorEdit (HSV, with Alpha)");
    FUN_1012d08c("Color widget HSV with Alpha:");
    FUN_101438ec("MyColor##2",&DAT_1038aa18,DAT_103a3c44 | 0x200000);
    FUN_101032c6("imgui_demo.cpp",0x508,"Widgets/Color/ColorEdit (float display)");
    FUN_1012d08c("Color widget with Float Display:");
    FUN_101438ec("MyColor##2f",&DAT_1038aa18,DAT_103a3c44 | 0x1000000);
    FUN_101032c6("imgui_demo.cpp",0x50c,"Widgets/Color/ColorButton (with Picker)");
    FUN_1012d08c("Color button with Picker:");
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_101438ec("MyColor##3",&DAT_1038aa18,DAT_103a3c44 | 0xa0);
    FUN_101032c6("imgui_demo.cpp",0x514,"Widgets/Color/ColorButton (with custom Picker popup)");
    FUN_1012d08c("Color button with Custom Picker Popup:");
    if (DAT_103a3c48 == '\0') {
      puVar11 = &DAT_103a3c54;
      do {
        FUN_100faedd((float)iVar12 / _DAT_103028c0,0x3f4ccccd,0x3f4ccccd,puVar11 + -2,puVar11 + -1,
                     puVar11);
        puVar11[1] = 0x3f800000;
        iVar12 = iVar12 + 1;
        puVar11 = puVar11 + 4;
      } while (iVar12 != 0x20);
      DAT_103a3c48 = '\x01';
    }
    local_1c = 0;
    cVar5 = FUN_10144b9b("MyColor##3b",&DAT_1038aa18,DAT_103a3c44,&local_1c);
    iVar12 = FUN_100fcb2d();
    FUN_10114a0e(0,*(undefined4 *)(iVar12 + 100));
    local_1c = 0;
    cVar6 = FUN_1012e1b7("Palette",&local_1c);
    if ((cVar5 != '\0') || (cVar6 != '\0')) {
      FUN_10115ea4("mypicker",0);
      _DAT_103a3e4c = _DAT_1038aa18;
      uRam103a3e50 = DAT_1038aa18_4;
      uRam103a3e54 = _DAT_1038aa20;
      uRam103a3e58 = uRam1038aa24;
    }
    cVar5 = FUN_10116736("mypicker",0);
    if (cVar5 != '\0') {
      FUN_1012d08c("MY CUSTOM COLOR PICKER WITH AN AMAZING PALETTE!");
      FUN_10132188();
      uVar10 = 0;
      FUN_10145288("##picker",&DAT_1038aa18,DAT_103a3c44 | 0x110,0);
      FUN_10114a0e(0,0xbf800000);
      FUN_10115649();
      FUN_1012d08c("Current");
      local_1c = DAT_103028d0;
      FUN_10144b9b("##current",&DAT_1038aa18,0x4004,&local_1c);
      FUN_1012d08c("Previous");
      local_1c = DAT_103028d0;
      cVar5 = FUN_10144b9b("##previous",&DAT_103a3e4c,0x4004,&local_1c);
      if (cVar5 != '\0') {
        _DAT_1038aa18 = CONCAT44(uRam103a3e50,_DAT_103a3e4c);
        _DAT_1038aa20 = uRam103a3e54;
        uRam1038aa24 = uRam103a3e58;
      }
      FUN_10132188();
      FUN_1012d08c("Palette");
      puVar13 = &DAT_103a3c4c;
      do {
        FUN_10113358(uVar10);
        if ((uVar10 & 7) != 0) {
          iVar12 = FUN_100fcb2d();
          FUN_10114a0e(0,*(undefined4 *)(iVar12 + 0x60));
        }
        local_1c = DAT_103028e0;
        cVar5 = FUN_10144b9b("##palette",puVar13,0x46,&local_1c);
        if (cVar5 != '\0') {
          _DAT_1038aa20 = *(undefined4 *)(puVar13 + 1);
          _DAT_1038aa18 = *puVar13;
        }
        cVar5 = FUN_10117e47();
        if (cVar5 != '\0') {
          puVar11 = (undefined4 *)FUN_10117f03("_COL3F",0);
          if (puVar11 != (undefined4 *)0x0) {
            puVar1 = (undefined8 *)*puVar11;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar1 + 1);
            *puVar13 = *puVar1;
          }
          piVar7 = (int *)FUN_10117f03("_COL4F",0);
          if (piVar7 != (int *)0x0) {
            puVar11 = (undefined4 *)*piVar7;
            uVar2 = puVar11[1];
            uVar3 = puVar11[2];
            uVar4 = puVar11[3];
            *(undefined4 *)puVar13 = *puVar11;
            *(undefined4 *)((int)puVar13 + 4) = uVar2;
            *(undefined4 *)(puVar13 + 1) = uVar3;
            *(undefined4 *)((int)puVar13 + 0xc) = uVar4;
          }
          FUN_101182df();
        }
        FUN_10113568();
        uVar10 = uVar10 + 1;
        puVar13 = puVar13 + 2;
      } while (uVar10 != 0x20);
      FUN_1011462f();
      FUN_101165cb();
    }
    FUN_101032c6("imgui_demo.cpp",0x558,"Widgets/Color/ColorButton (simple)");
    FUN_1012d08c("Color button only:");
    FUN_1012ff1a("ImGuiColorEditFlags_NoBorder",&DAT_103a3e5c);
    local_1c = DAT_103027e0;
    FUN_10144b9b("MyColor##3c",&DAT_1038aa18,(uint)DAT_103a3e5c << 10 | DAT_103a3c44,&local_1c);
    FUN_101032c6("imgui_demo.cpp",0x55e,"Widgets/Color/ColorPicker");
    FUN_10132656("Color picker");
    FUN_101131fa("Color picker");
    thunk_FUN_10130d81("ImGuiColorEditFlags_NoAlpha",&DAT_1038aa38,2);
    thunk_FUN_10130d81("ImGuiColorEditFlags_AlphaBar",&DAT_1038aa38,0x40000);
    thunk_FUN_10130d81("ImGuiColorEditFlags_NoSidePreview",&DAT_1038aa38,0x100);
    if ((DAT_1038aa38 & 0x100) != 0) {
      FUN_10114a0e(0,0xbf800000);
      FUN_1012ff1a("With Ref Color",&DAT_103a3e5d);
      if (DAT_103a3e5d == '\x01') {
        FUN_10114a0e(0,0xbf800000);
        FUN_101438ec("##RefColor",&DAT_1038aa28,DAT_103a3c44 | 0x20);
      }
    }
    FUN_10133e42("Picker Mode",&DAT_103a3e60,"Auto/Current",0xffffffff);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10133e42("Display Mode",&DAT_103a3e64,"Auto/Current",0xffffffff);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    uVar10 = DAT_1038aa38 | DAT_103a3c44 | 0x2000000;
    if (DAT_103a3e60 != 1) {
      uVar10 = DAT_1038aa38 | DAT_103a3c44;
    }
    uVar9 = uVar10 | 0x4000000;
    if (DAT_103a3e60 != 2) {
      uVar9 = uVar10;
    }
    uVar10 = uVar9 | 0x20;
    if (DAT_103a3e64 != 1) {
      uVar10 = uVar9;
    }
    uVar9 = uVar10 | 0x100000;
    if (DAT_103a3e64 != 2) {
      uVar9 = uVar10;
    }
    uVar10 = uVar9 | 0x200000;
    if (DAT_103a3e64 != 3) {
      uVar10 = uVar9;
    }
    uVar9 = uVar10 | 0x400000;
    if (DAT_103a3e64 != 4) {
      uVar9 = uVar10;
    }
    puVar8 = &DAT_1038aa28;
    if (DAT_103a3e5d == '\0') {
      puVar8 = (undefined *)0x0;
    }
    FUN_10145288("MyColor##4",&DAT_1038aa18,uVar9,puVar8);
    FUN_1012d08c("Set defaults in code:");
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    local_1c = 0;
    cVar5 = FUN_1012e1b7("Default: Uint8 + HSV + Hue Bar",&local_1c);
    if (cVar5 != '\0') {
      FUN_10147b71(0x2a00000);
    }
    local_1c = 0;
    cVar5 = FUN_1012e1b7("Default: Float + HDR + Hue Wheel",&local_1c);
    if (cVar5 != '\0') {
      FUN_10147b71(0x5080000);
    }
    FUN_1012d08c("Both types:");
    FUN_1010c3e4(&local_1c);
    local_20 = (float)local_1c;
    iVar12 = FUN_100fcb2d();
    local_20 = (local_20 - *(float *)(iVar12 + 0x60)) * DAT_102b8e90;
    FUN_100fb68f(local_20);
    FUN_10147320("##MyColor##5",&DAT_1038aa18,0x2000122);
    FUN_10114a0e(0,0xbf800000);
    FUN_100fb68f(local_20);
    FUN_10147320("##MyColor##6",&DAT_1038aa18,0x4000122);
    FUN_10113568();
    FUN_10131d29();
    FUN_1012d08c("HSV encoded colors");
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_1012d08c("Color widget with InputHSV:");
    FUN_101438ec("HSV shown as RGB##1",&DAT_1038aa3c,0x11100000);
    FUN_101438ec("HSV shown as HSV##1",&DAT_1038aa3c,0x11200000);
    FUN_101380ba("Raw HSV values",&DAT_1038aa3c,0x3c23d70a,0,0x3f800000,"%.3f",0);
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

