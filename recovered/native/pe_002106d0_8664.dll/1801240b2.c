/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801240b2 */

void FUN_1801240b2(longlong param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  longlong lVar10;
  undefined *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  int local_b8;
  char *local_b0;
  int local_a8;
  uint local_a0;
  double local_98;
  double local_90;
  longlong local_80;
  int local_74;
  undefined8 local_70;
  undefined1 local_65 [5];
  ulonglong local_60;
  
  lVar8 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x20) == 0) {
    pcVar14 = "<unknown>";
  }
  else {
    pcVar14 = (char *)**(undefined8 **)(param_1 + 0x28);
  }
  local_80 = *(longlong *)(param_1 + 8);
  cVar3 = FUN_18014c1c1(param_1,"Font: \"%s\": %d sources(s)",pcVar14);
  if (cVar3 == '\0') {
    FUN_180119fae(0);
  }
  FUN_180119fae(0);
  if (*(char *)(lVar8 + 0x2b40) == '\x01') {
    FUN_180117a04(param_1,0);
    FUN_1801330a5("The quick brown fox jumps over the lazy dog");
    FUN_180117b11();
  }
  lVar8 = local_80;
  if (cVar3 == '\0') {
    FUN_18011a002(0);
    if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_d8)) {
      FUN_18011a002(0);
      return;
    }
  }
  else {
    cVar3 = FUN_18013425f("Set as default");
    if (cVar3 != '\0') {
      lVar7 = FUN_180107ee8();
      *(longlong *)(lVar7 + 0x40) = param_1;
    }
    FUN_180119893(0,DAT_1802bb8e0);
    uVar9 = 1;
    if (1 < *(int *)(lVar8 + 0x68)) {
      uVar9 = *(undefined1 *)(lVar8 + 0x50);
    }
    FUN_180116580(uVar9);
    cVar3 = FUN_18013425f("Remove");
    if (cVar3 != '\0') {
      FUN_18019753a(lVar8,param_1);
    }
    FUN_180116676();
    FUN_180119893(0,DAT_1802bb8e0);
    cVar3 = FUN_18013425f("Clear bakes");
    if (cVar3 != '\0') {
      FUN_180196cd0(lVar8,param_1,0);
    }
    FUN_180119893(0,DAT_1802bb8e0);
    cVar3 = FUN_18013425f("Clear unused");
    if (cVar3 != '\0') {
      FUN_180196cd0(lVar8,param_1,2);
    }
    fVar18 = (float)FUN_180116c08();
    FUN_1800ffdb5(fVar18 * DAT_1802de98c);
    local_b0 = "%.1f";
    local_a8 = 0;
    local_b8 = 0x40000000;
    FUN_18013d2c2("Font scale",param_1 + 0x48,DAT_1802de990,DAT_1802dbb70);
    uVar1 = *(undefined2 *)(param_1 + 0x32);
    FUN_1800ff0f0(local_65,uVar1);
    FUN_1801330a5("Fallback character: \'%s\' (U+%04X)",local_65,uVar1);
    uVar1 = *(undefined2 *)(param_1 + 0x30);
    FUN_1800ff0f0(local_65,uVar1);
    FUN_1801330a5("Ellipsis character: \'%s\' (U+%04X)",local_65,uVar1);
    if (0 < *(int *)(param_1 + 0x20)) {
      uVar12 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar12 * 8);
        local_90 = (double)*(float *)(lVar8 + 0x54);
        local_98 = (double)*(float *)(lVar8 + 0x50);
        local_a8 = (int)*(char *)(lVar8 + 0x38);
        local_b8 = *(int *)(lVar8 + 100);
        local_a0 = (uint)*(byte *)(lVar8 + 0x36);
        local_b0 = (char *)CONCAT44(local_b0._4_4_,(int)*(char *)(lVar8 + 0x37));
        cVar3 = FUN_18014c1c1(lVar8,
                              "Input %d: \'%s\' [%d], Oversample: %d,%d, PixelSnapH: %d, Offset: (%.1f,%.1f)"
                              ,uVar12 & 0xffffffff,lVar8);
        if (cVar3 != '\0') {
          puVar13 = *(undefined8 **)(lVar8 + 0x88);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = *(undefined8 **)(local_80 + 0x2b8);
          }
          puVar11 = (undefined *)*puVar13;
          if (puVar11 == (undefined *)0x0) {
            puVar11 = &DAT_18036cf1c;
          }
          FUN_1801330a5("Loader: \'%s\'",puVar11);
          if (((char *)*puVar13 != (char *)0x0) &&
             (iVar4 = strcmp((char *)*puVar13,"FreeType"), iVar4 == 0)) {
            local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar8 + 0x68));
            FUN_1801330a5("FreeType Loader Flags: 0x%08X");
            cVar3 = FUN_18019ea3c(&local_70);
            lVar7 = local_80;
            if (cVar3 != '\0') {
              FUN_180195db6(local_80,param_1);
              *(int *)(lVar8 + 0x68) = (int)local_70;
              FUN_180198258(lVar7,param_1);
            }
          }
          FUN_18014d7a9();
        }
        lVar8 = local_80;
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)(param_1 + 0x20));
      if ((1 < *(int *)(param_1 + 0x20)) &&
         (cVar3 = FUN_18014c2cb("Input Glyphs Overlap Detection Tool"), cVar3 != '\0')) {
        FUN_1801332a0(
                     "- First Input that contains the glyph is used.\n- Use ImFontConfig::GlyphExcludeRanges[] to specify ranges to ignore glyph in given Input.\n- Prefer using a small number of ranges as the list is scanned every time a new glyph is loaded,\n  - e.g. GlyphExcludeRanges[] = { ICON_MIN_FA, ICON_MAX_FA, 0 };\n- This tool doesn\'t cache results and is slow, don\'t keep it open!"
                     );
        local_70 = 0;
        local_b8 = 0;
        uVar16 = 0;
        cVar3 = FUN_180164c18("table",2,0);
        uVar2 = DAT_1802bb8e0;
        if (cVar3 != '\0') {
          do {
            uVar5 = FUN_18012aec7(lVar8,param_1,uVar16);
            uVar17 = uVar16;
            uVar15 = uVar16;
            if (uVar5 != 0) {
              do {
                uVar17 = uVar15;
                if (uVar17 == 0xffff) {
                  uVar15 = 0x10000;
                  break;
                }
                uVar15 = uVar17 + 1;
                uVar6 = FUN_18012aec7(lVar8,param_1,uVar15);
              } while (uVar6 == uVar5);
              cVar3 = FUN_18016ab34();
              if (cVar3 != '\0') {
                iVar4 = 0;
                uVar6 = uVar5;
                do {
                  iVar4 = iVar4 + 1;
                  uVar6 = uVar6 - 1 & uVar6;
                } while (uVar6 != 0);
                local_b8 = uVar15 - uVar16;
                local_b0 = (char *)CONCAT44(local_b0._4_4_,iVar4);
                cVar3 = FUN_18014c1c1(uVar16,"U+%04X-U+%04X: %d codepoints in %d inputs",uVar16,
                                      uVar17);
                if (cVar3 != '\0') {
                  if (uVar16 <= uVar17) {
                    do {
                      FUN_1800ff0f0(&local_70,uVar16);
                      FUN_180133606("Codepoint U+%04X (%s)",uVar16,&local_70);
                      uVar16 = uVar16 + 1;
                    } while (uVar17 + 1 != uVar16);
                  }
                  FUN_18014d7a9();
                  lVar8 = local_80;
                }
              }
              FUN_18016ab34();
              iVar4 = *(int *)(param_1 + 0x20);
              if (0 < iVar4) {
                uVar16 = 0;
                do {
                  if ((uVar5 >> (uVar16 & 0x1f) & 1) != 0) {
                    FUN_1801330a5(&DAT_18037bb7b,uVar16);
                    FUN_180119893(0,uVar2);
                    iVar4 = *(int *)(param_1 + 0x20);
                  }
                  uVar16 = uVar16 + 1;
                } while ((int)uVar16 < iVar4);
              }
            }
            uVar16 = uVar17 + 1;
          } while (uVar16 < 0x10000);
          FUN_180168430();
        }
        FUN_18014d7a9();
      }
    }
    lVar8 = *(longlong *)(lVar8 + 0x2b0);
    if (0 < *(int *)(lVar8 + 0xc0)) {
      uVar16 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0xd0) + (ulonglong)(uVar16 >> 5) * 8);
        lVar10 = (ulonglong)(uVar16 & 0x1f) * 0x68;
        if (*(longlong *)(lVar7 + 0x58 + lVar10) == param_1) {
          lVar7 = lVar7 + lVar10;
          FUN_18011810d(*(undefined4 *)(lVar7 + 0x54));
          local_b8 = *(int *)(lVar7 + 0x30);
          local_b0 = "";
          if (*(int *)(lVar7 + 0x50) < *(int *)(*(longlong *)(local_80 + 0x2b0) + 0xa4) + -1) {
            local_b0 = " *Unused*";
          }
          cVar3 = FUN_18014c0b4("Glyphs","Baked at { %.2fpx, d.%.2f }: %d glyphs%s",
                                (double)*(float *)(lVar7 + 0x14),(double)*(float *)(lVar7 + 0x18));
          if (cVar3 != '\0') {
            cVar3 = FUN_18013425f("Load all");
            if (cVar3 != '\0') {
              iVar4 = 0;
              do {
                FUN_180197c14(lVar7,iVar4);
                iVar4 = iVar4 + 1;
              } while (iVar4 != 0x10000);
            }
            iVar4 = (int)SQRT((float)(*(uint *)(lVar7 + 0x4c) & 0x3ffffff));
            FUN_1801330a5("Ascent: %f, Descent: %f, Ascent-Descent: %f",
                          (double)*(float *)(lVar7 + 0x44),(double)*(float *)(lVar7 + 0x48),
                          (double)(*(float *)(lVar7 + 0x44) - *(float *)(lVar7 + 0x48)));
            FUN_1801330a5("Texture Area: about %d px ~%dx%d px",*(uint *)(lVar7 + 0x4c) & 0x3ffffff,
                          iVar4,iVar4);
            if (0 < *(int *)(param_1 + 0x20)) {
              uVar12 = 0;
              do {
                lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar12 * 8);
                FUN_180198216(lVar8,lVar7,&local_70,&local_74);
                local_90 = (double)*(float *)(lVar8 + 0x54);
                local_98 = (double)*(float *)(lVar8 + 0x50);
                local_a0 = (uint)*(byte *)(lVar8 + 0x36);
                local_a8 = local_74;
                local_b0 = (char *)CONCAT44(local_b0._4_4_,(int)*(char *)(lVar8 + 0x38));
                local_b8 = (int)local_70;
                FUN_180133606("Input %d: \'%s\', Oversample: (%d=>%d,%d=>%d), PixelSnapH: %d, Offset: (%.1f,%.1f)"
                              ,uVar12 & 0xffffffff,lVar8,(int)*(char *)(lVar8 + 0x37));
                uVar12 = uVar12 + 1;
              } while ((longlong)uVar12 < (longlong)*(int *)(param_1 + 0x20));
            }
            FUN_18012af53(param_1,lVar7,0xffffffff);
            FUN_18014d7a9();
          }
          FUN_18011834f();
          lVar8 = *(longlong *)(local_80 + 0x2b0);
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(lVar8 + 0xc0));
    }
    FUN_18014d7a9();
    FUN_18011a002(0);
    if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_d8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_d8);
}

