/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009cfe1 */

void FUN_14009cfe1(longlong param_1)

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
  
  lVar8 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x20) == 0) {
    pcVar14 = "<unknown>";
  }
  else {
    pcVar14 = (char *)**(undefined8 **)(param_1 + 0x28);
  }
  local_80 = *(longlong *)(param_1 + 8);
  cVar3 = FUN_1400c50f1(param_1,"Font: \"%s\": %d sources(s)",pcVar14);
  if (cVar3 == '\0') {
    FUN_1400932c6(0);
  }
  FUN_1400932c6(0);
  if (*(char *)(lVar8 + 0x2b40) == '\x01') {
    FUN_140090d1c(param_1,0);
    FUN_1400abfd5("The quick brown fox jumps over the lazy dog");
    FUN_140090e29();
  }
  lVar8 = local_80;
  if (cVar3 == '\0') {
    FUN_14009331a(0);
    if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_d8)) {
      FUN_14009331a(0);
      return;
    }
  }
  else {
    cVar3 = FUN_1400ad18f("Set as default");
    if (cVar3 != '\0') {
      lVar7 = FUN_140081200();
      *(longlong *)(lVar7 + 0x40) = param_1;
    }
    FUN_140092bab(0,DAT_1401c86a4);
    uVar9 = 1;
    if (1 < *(int *)(lVar8 + 0x68)) {
      uVar9 = *(undefined1 *)(lVar8 + 0x50);
    }
    FUN_14008f898(uVar9);
    cVar3 = FUN_1400ad18f("Remove");
    if (cVar3 != '\0') {
      FUN_1400e2aae(lVar8,param_1);
    }
    FUN_14008f98e();
    FUN_140092bab(0,DAT_1401c86a4);
    cVar3 = FUN_1400ad18f("Clear bakes");
    if (cVar3 != '\0') {
      FUN_1400e2244(lVar8,param_1,0);
    }
    FUN_140092bab(0,DAT_1401c86a4);
    cVar3 = FUN_1400ad18f("Clear unused");
    if (cVar3 != '\0') {
      FUN_1400e2244(lVar8,param_1,2);
    }
    fVar18 = (float)FUN_14008ff20();
    FUN_140079071(fVar18 * DAT_1402116fc);
    local_b0 = "%.1f";
    local_a8 = 0;
    local_b8 = 0x40000000;
    FUN_1400b61f2("Font scale",param_1 + 0x48,DAT_140211700,DAT_1402115c8);
    uVar1 = *(undefined2 *)(param_1 + 0x32);
    FUN_1400783ac(local_65,uVar1);
    FUN_1400abfd5("Fallback character: \'%s\' (U+%04X)",local_65,uVar1);
    uVar1 = *(undefined2 *)(param_1 + 0x30);
    FUN_1400783ac(local_65,uVar1);
    FUN_1400abfd5("Ellipsis character: \'%s\' (U+%04X)",local_65,uVar1);
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
        cVar3 = FUN_1400c50f1(lVar8,
                              "Input %d: \'%s\' [%d], Oversample: %d,%d, PixelSnapH: %d, Offset: (%.1f,%.1f)"
                              ,uVar12 & 0xffffffff,lVar8);
        if (cVar3 != '\0') {
          puVar13 = *(undefined8 **)(lVar8 + 0x88);
          if (puVar13 == (undefined8 *)0x0) {
            puVar13 = *(undefined8 **)(local_80 + 0x2b8);
          }
          puVar11 = (undefined *)*puVar13;
          if (puVar11 == (undefined *)0x0) {
            puVar11 = &DAT_140ecd5d9;
          }
          FUN_1400abfd5("Loader: \'%s\'",puVar11);
          if (((char *)*puVar13 != (char *)0x0) &&
             (iVar4 = strcmp((char *)*puVar13,"FreeType"), iVar4 == 0)) {
            local_70 = CONCAT44(local_70._4_4_,*(undefined4 *)(lVar8 + 0x68));
            FUN_1400abfd5("FreeType Loader Flags: 0x%08X");
            cVar3 = FUN_140117fa8(&local_70);
            lVar7 = local_80;
            if (cVar3 != '\0') {
              FUN_1400e132a(local_80,param_1);
              *(int *)(lVar8 + 0x68) = (int)local_70;
              FUN_1400e37cc(lVar7,param_1);
            }
          }
          FUN_1400c66d9();
        }
        lVar8 = local_80;
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)(param_1 + 0x20));
      if ((1 < *(int *)(param_1 + 0x20)) &&
         (cVar3 = FUN_1400c51fb("Input Glyphs Overlap Detection Tool"), cVar3 != '\0')) {
        FUN_1400ac1d0(
                     "- First Input that contains the glyph is used.\n- Use ImFontConfig::GlyphExcludeRanges[] to specify ranges to ignore glyph in given Input.\n- Prefer using a small number of ranges as the list is scanned every time a new glyph is loaded,\n  - e.g. GlyphExcludeRanges[] = { ICON_MIN_FA, ICON_MAX_FA, 0 };\n- This tool doesn\'t cache results and is slow, don\'t keep it open!"
                     );
        local_70 = 0;
        local_b8 = 0;
        uVar16 = 0;
        cVar3 = FUN_14010cbe8("table",2,0);
        uVar2 = DAT_1401c86a4;
        if (cVar3 != '\0') {
          do {
            uVar5 = FUN_1400a3df7(lVar8,param_1,uVar16);
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
                uVar6 = FUN_1400a3df7(lVar8,param_1,uVar15);
              } while (uVar6 == uVar5);
              cVar3 = FUN_140112b04();
              if (cVar3 != '\0') {
                iVar4 = 0;
                uVar6 = uVar5;
                do {
                  iVar4 = iVar4 + 1;
                  uVar6 = uVar6 - 1 & uVar6;
                } while (uVar6 != 0);
                local_b8 = uVar15 - uVar16;
                local_b0 = (char *)CONCAT44(local_b0._4_4_,iVar4);
                cVar3 = FUN_1400c50f1(uVar16,"U+%04X-U+%04X: %d codepoints in %d inputs",uVar16,
                                      uVar17);
                if (cVar3 != '\0') {
                  if (uVar16 <= uVar17) {
                    do {
                      FUN_1400783ac(&local_70,uVar16);
                      FUN_1400ac536("Codepoint U+%04X (%s)",uVar16,&local_70);
                      uVar16 = uVar16 + 1;
                    } while (uVar17 + 1 != uVar16);
                  }
                  FUN_1400c66d9();
                  lVar8 = local_80;
                }
              }
              FUN_140112b04();
              iVar4 = *(int *)(param_1 + 0x20);
              if (0 < iVar4) {
                uVar16 = 0;
                do {
                  if ((uVar5 >> (uVar16 & 0x1f) & 1) != 0) {
                    FUN_1400abfd5(&DAT_140edacb6,uVar16);
                    FUN_140092bab(0,uVar2);
                    iVar4 = *(int *)(param_1 + 0x20);
                  }
                  uVar16 = uVar16 + 1;
                } while ((int)uVar16 < iVar4);
              }
            }
            uVar16 = uVar17 + 1;
          } while (uVar16 < 0x10000);
          FUN_140110400();
        }
        FUN_1400c66d9();
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
          FUN_140091425(*(undefined4 *)(lVar7 + 0x54));
          local_b8 = *(int *)(lVar7 + 0x30);
          local_b0 = "";
          if (*(int *)(lVar7 + 0x50) < *(int *)(*(longlong *)(local_80 + 0x2b0) + 0xa4) + -1) {
            local_b0 = " *Unused*";
          }
          cVar3 = FUN_1400c4fe4("Glyphs","Baked at { %.2fpx, d.%.2f }: %d glyphs%s",
                                (double)*(float *)(lVar7 + 0x14),(double)*(float *)(lVar7 + 0x18));
          if (cVar3 != '\0') {
            cVar3 = FUN_1400ad18f("Load all");
            if (cVar3 != '\0') {
              iVar4 = 0;
              do {
                FUN_1400e3188(lVar7,iVar4);
                iVar4 = iVar4 + 1;
              } while (iVar4 != 0x10000);
            }
            iVar4 = (int)SQRT((float)(*(uint *)(lVar7 + 0x4c) & 0x3ffffff));
            FUN_1400abfd5("Ascent: %f, Descent: %f, Ascent-Descent: %f",
                          (double)*(float *)(lVar7 + 0x44),(double)*(float *)(lVar7 + 0x48),
                          (double)(*(float *)(lVar7 + 0x44) - *(float *)(lVar7 + 0x48)));
            FUN_1400abfd5("Texture Area: about %d px ~%dx%d px",*(uint *)(lVar7 + 0x4c) & 0x3ffffff,
                          iVar4,iVar4);
            if (0 < *(int *)(param_1 + 0x20)) {
              uVar12 = 0;
              do {
                lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + uVar12 * 8);
                FUN_1400e378a(lVar8,lVar7,&local_70,&local_74);
                local_90 = (double)*(float *)(lVar8 + 0x54);
                local_98 = (double)*(float *)(lVar8 + 0x50);
                local_a0 = (uint)*(byte *)(lVar8 + 0x36);
                local_a8 = local_74;
                local_b0 = (char *)CONCAT44(local_b0._4_4_,(int)*(char *)(lVar8 + 0x38));
                local_b8 = (int)local_70;
                FUN_1400ac536("Input %d: \'%s\', Oversample: (%d=>%d,%d=>%d), PixelSnapH: %d, Offset: (%.1f,%.1f)"
                              ,uVar12 & 0xffffffff,lVar8,(int)*(char *)(lVar8 + 0x37));
                uVar12 = uVar12 + 1;
              } while ((longlong)uVar12 < (longlong)*(int *)(param_1 + 0x20));
            }
            FUN_1400a3e83(param_1,lVar7,0xffffffff);
            FUN_1400c66d9();
          }
          FUN_140091667();
          lVar8 = *(longlong *)(local_80 + 0x2b0);
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < *(int *)(lVar8 + 0xc0));
    }
    FUN_1400c66d9();
    FUN_14009331a(0);
    if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_d8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_d8);
}

