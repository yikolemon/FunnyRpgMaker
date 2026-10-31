/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bcdb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bcdb0(void)

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
  
  local_90 = DAT_180402640 ^ (ulonglong)auStack_108;
  cVar5 = FUN_18014c2cb("Text");
  if (cVar5 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0xeb0,"Widgets/Text");
    cVar5 = FUN_18014c2cb("Colorful Text");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xeb3,"Widgets/Text/Colored Text");
      local_a8 = _DAT_1803292a0;
      fStack_a4 = (float)_UNK_1803292a4;
      uStack_a0 = _UNK_1803292a8;
      uStack_9c = _UNK_1803292ac;
      FUN_18013318b(&local_a8,&DAT_180366d8e);
      local_a8 = _DAT_180329140;
      fStack_a4 = _UNK_180329144;
      uStack_a0 = _UNK_180329148;
      uStack_9c = _UNK_18032914c;
      FUN_18013318b(&local_a8,"Yellow");
      FUN_18013320f("Disabled");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("The TextDisabled color is stored in ImGuiStyle.");
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Font Size");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xebe,"Widgets/Text/Font Size");
      pfVar6 = (float *)FUN_18010128e();
      fVar9 = pfVar6[1];
      fVar1 = pfVar6[2];
      FUN_1801330a5("style.FontScaleMain = %0.2f",(double)fVar9);
      FUN_1801330a5("style.FontScaleDpi = %0.2f",(double)pfVar6[2]);
      FUN_1801330a5("global_scale = ~%0.2f",(double)(fVar1 * fVar9));
      fVar9 = (float)FUN_180116c08();
      FUN_1801330a5("FontSize = %0.2f",(double)fVar9);
      FUN_1801380f1(&DAT_1803861e4);
      uStack_e0._0_4_ = 0;
      local_e8 = "%.0f";
      FUN_180141390("custom_size",&DAT_180404a80,DAT_1802dc2dc,DAT_1802dbb34);
      FUN_1801330a5("ImGui::PushFont(nullptr, custom_size);");
      FUN_180117a04(0,DAT_180404a80);
      dVar2 = (double)DAT_180404a80;
      fVar9 = (float)FUN_180116c08();
      FUN_1801330a5("FontSize = %.2f (== %.2f * global_scale)",(double)fVar9,SUB84(dVar2,0));
      FUN_180117b11();
      FUN_1801380f1(&DAT_1803861e4);
      fVar1 = DAT_1802dbb50;
      fVar9 = DAT_1802dbb2c;
      uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
      local_e8 = "%.2f";
      FUN_180141390("custom_scale",&DAT_180404a84,DAT_1802dbb2c,DAT_1802dbb50);
      FUN_1801330a5("ImGui::PushFont(nullptr, style.FontSizeBase * custom_scale);");
      FUN_180117a04(0,*pfVar6 * _DAT_180404a84);
      dVar2 = (double)_DAT_180404a84;
      fVar10 = (float)FUN_180116c08();
      FUN_1801330a5("FontSize = %.2f (== style.FontSizeBase * %.2f * global_scale)",(double)fVar10,
                    SUB84(dVar2,0));
      FUN_180117b11();
      FUN_1801380f1(&DAT_1803861e4);
      fVar10 = fVar9;
      do {
        FUN_180117a04(0,*pfVar6 * fVar10);
        fVar11 = (float)FUN_180116c08();
        FUN_1801330a5("FontSize = %.2f (== style.FontSizeBase * %.2f * global_scale)",(double)fVar11
                      ,SUB84((double)fVar10,0));
        FUN_180117b11();
        fVar10 = fVar10 + fVar9;
      } while (fVar10 <= fVar1);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Word Wrapping");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xee3,"Widgets/Text/Word Wrapping");
      FUN_1801332a0(
                   "This text should automatically wrap on the edge of the window. The current implementation for text wrapping follows simple rules suitable for English and possibly other languages."
                   );
      FUN_1801377c5();
      local_e8 = "%.0f";
      uStack_e0 = uStack_e0 & 0xffffffff00000000;
      FUN_180141390("Wrap width",&DAT_180404a88,DAT_1802dc290,DAT_1802de840);
      uVar8 = 0;
      uVar7 = FUN_180116bd5();
      fVar9 = DAT_1802dc2dc;
      bVar4 = true;
      do {
        bVar3 = bVar4;
        FUN_1801330a5("Test paragraph %d:",uVar8);
        FUN_180119e05(&local_a8);
        fVar1 = fStack_a4;
        local_b0 = local_a8 + _DAT_180404a88;
        local_ac = fStack_a4;
        local_b4 = (float)FUN_180116c08();
        local_b4 = local_b4 + fVar1;
        local_b8 = local_a8 + _DAT_180404a88 + fVar9;
        FUN_180119e52(local_c0);
        FUN_1801166df(local_c0[0] + _DAT_180404a88);
        if (bVar3) {
          FUN_1801330a5("The lazy dog is a good dog. This paragraph should fit within %.0f pixels. Testing a 1 character word. The quick brown fox jumps over the lazy dog."
                        ,(double)_DAT_180404a88);
        }
        else {
          FUN_1801330a5(
                       "aaaaaaaa bbbbbbbb, c cccccccc,dddddddd. d eeeeeeee   ffffffff. gggggggg!hhhhhhhh"
                       );
        }
        FUN_180110cdb(local_c0);
        FUN_180110cc6(local_c8);
        local_d8 = 0;
        local_e8 = (char *)((ulonglong)local_e8 & 0xffffffff00000000);
        uStack_e0._0_4_ = 0x3f800000;
        FUN_180192c0a(uVar7,local_c8,local_c0,0xff00ffff);
        uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
        local_e8 = (char *)((ulonglong)local_e8 & 0xffffffff00000000);
        FUN_180192d20(uVar7,&local_b0,&local_b8,0xffff00ff);
        FUN_1801167a4();
        uVar8 = 1;
        bVar4 = false;
      } while (bVar3);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("UTF-8 Text");
    if (cVar5 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xf05,"Widgets/Text/UTF-8 Text");
      FUN_1801332a0(
                   "CJK text will only appear if the font was loaded with the appropriate CJK character ranges. Call io.Fonts->AddFontFromFileTTF() manually to load extra character ranges. Read docs/FONTS.md for details."
                   );
      FUN_1801330a5(&DAT_18037828e);
      FUN_1801330a5(&DAT_1803782b5);
      local_e8 = (char *)0x0;
      uStack_e0 = 0;
      FUN_180145e1f("UTF-8 input",&DAT_180404a90,0x20,0);
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_90 ^ (ulonglong)auStack_108)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_90 ^ (ulonglong)auStack_108);
}

