/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140102a34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140102a34(void)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_108 [32];
  char *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined1 local_c8 [8];
  float local_c0 [2];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_140f17b40 ^ (ulonglong)auStack_108;
  cVar5 = FUN_1400c51fb("Text");
  if (cVar5 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0xeb0,"Widgets/Text");
    cVar5 = FUN_1400c51fb("Colorful Text");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xeb3,"Widgets/Text/Colored Text");
      local_a8 = _DAT_140e8d630;
      fStack_a4 = (float)_UNK_140e8d634;
      uStack_a0 = _UNK_140e8d638;
      uStack_9c = _UNK_140e8d63c;
      FUN_1400ac0bb(&local_a8,&DAT_140ec8024);
      local_a8 = _DAT_140e8d4d0;
      fStack_a4 = _UNK_140e8d4d4;
      uStack_a0 = _UNK_140e8d4d8;
      uStack_9c = _UNK_140e8d4dc;
      FUN_1400ac0bb(&local_a8,"Yellow");
      FUN_1400ac13f("Disabled");
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92("The TextDisabled color is stored in ImGuiStyle.");
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Font Size");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xebe,"Widgets/Text/Font Size");
      pfVar6 = (float *)FUN_14007a54a();
      fVar9 = pfVar6[1];
      fVar1 = pfVar6[2];
      FUN_1400abfd5("style.FontScaleMain = %0.2f",(double)fVar9);
      FUN_1400abfd5("style.FontScaleDpi = %0.2f",(double)pfVar6[2]);
      FUN_1400abfd5("global_scale = ~%0.2f",(double)(fVar1 * fVar9));
      fVar9 = (float)FUN_14008ff20();
      FUN_1400abfd5("FontSize = %0.2f",(double)fVar9);
      FUN_1400b1021(&DAT_140edcdbf);
      uStack_e0._0_4_ = 0;
      local_e8 = "%.0f";
      FUN_1400ba2c0("custom_size",&DAT_140f18220,DAT_1401c86d0,DAT_1402114b0);
      FUN_1400abfd5("ImGui::PushFont(nullptr, custom_size);");
      FUN_140090d1c(0,DAT_140f18220);
      dVar2 = (double)DAT_140f18220;
      fVar9 = (float)FUN_14008ff20();
      FUN_1400abfd5("FontSize = %.2f (== %.2f * global_scale)",(double)fVar9,SUB84(dVar2,0));
      FUN_140090e29();
      FUN_1400b1021(&DAT_140edcdbf);
      fVar1 = DAT_140211518;
      fVar9 = DAT_1401c86a0;
      uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
      local_e8 = "%.2f";
      FUN_1400ba2c0("custom_scale",&DAT_140f18224,DAT_1401c86a0,DAT_140211518);
      FUN_1400abfd5("ImGui::PushFont(nullptr, style.FontSizeBase * custom_scale);");
      FUN_140090d1c(0,*pfVar6 * _DAT_140f18224);
      dVar2 = (double)_DAT_140f18224;
      fVar10 = (float)FUN_14008ff20();
      FUN_1400abfd5("FontSize = %.2f (== style.FontSizeBase * %.2f * global_scale)",(double)fVar10,
                    SUB84(dVar2,0));
      FUN_140090e29();
      FUN_1400b1021(&DAT_140edcdbf);
      fVar10 = fVar9;
      do {
        FUN_140090d1c(0,*pfVar6 * fVar10);
        fVar11 = (float)FUN_14008ff20();
        FUN_1400abfd5("FontSize = %.2f (== style.FontSizeBase * %.2f * global_scale)",(double)fVar11
                      ,SUB84((double)fVar10,0));
        FUN_140090e29();
        fVar10 = fVar10 + fVar9;
      } while (fVar10 <= fVar1);
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("Word Wrapping");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xee3,"Widgets/Text/Word Wrapping");
      FUN_1400ac1d0(
                   "This text should automatically wrap on the edge of the window. The current implementation for text wrapping follows simple rules suitable for English and possibly other languages."
                   );
      FUN_1400b06f5();
      local_e8 = "%.0f";
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      FUN_1400ba2c0("Wrap width",&DAT_140f18228,DAT_1401c8670,DAT_1402115a0);
      uVar8 = 0;
      uVar7 = FUN_14008feed();
      fVar9 = DAT_1401c86d0;
      bVar4 = true;
      do {
        bVar3 = bVar4;
        FUN_1400abfd5("Test paragraph %d:",uVar8);
        FUN_14009311d(&local_a8);
        fVar1 = fStack_a4;
        local_b0 = local_a8 + _DAT_140f18228;
        local_ac = fStack_a4;
        local_b4 = (float)FUN_14008ff20();
        local_b4 = local_b4 + fVar1;
        local_b8 = local_a8 + _DAT_140f18228 + fVar9;
        FUN_14009316a(local_c0);
        FUN_14008f9f7(local_c0[0] + _DAT_140f18228);
        if (bVar3) {
          FUN_1400abfd5("The lazy dog is a good dog. This paragraph should fit within %.0f pixels. Testing a 1 character word. The quick brown fox jumps over the lazy dog."
                        ,(double)_DAT_140f18228);
        }
        else {
          FUN_1400abfd5(
                       "aaaaaaaa bbbbbbbb, c cccccccc,dddddddd. d eeeeeeee   ffffffff. gggggggg!hhhhhhhh"
                       );
        }
        FUN_140089ff3(local_c0);
        FUN_140089fde(local_c8);
        local_d8 = 0;
        local_e8 = (char *)((ulonglong)local_e8 & 0xffffffff00000000);
        uStack_e0._0_4_ = 0x3f800000;
        FUN_1400de17e(uVar7,local_c8,local_c0,0xff00ffff);
        uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
        local_e8 = (char *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_1400de294(uVar7,&local_b0,&local_b8,0xffff00ff);
        FUN_14008fabc();
        uVar8 = 1;
        bVar4 = false;
      } while (bVar3);
      FUN_1400c66d9();
    }
    cVar5 = FUN_1400c51fb("UTF-8 Text");
    if (cVar5 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0xf05,"Widgets/Text/UTF-8 Text");
      FUN_1400ac1d0(
                   "CJK text will only appear if the font was loaded with the appropriate CJK character ranges. Call io.Fonts->AddFontFromFileTTF() manually to load extra character ranges. Read docs/FONTS.md for details."
                   );
      FUN_1400abfd5(&DAT_140ed7bab);
      FUN_1400abfd5(&DAT_140ed7bd2);
      local_e8 = (char *)0x0;
      uStack_e0 = 0;
      FUN_1400bed4f("UTF-8 input",&DAT_140f18230,0x20,0);
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_90 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_90 ^ (ulonglong)auStack_108);
}

