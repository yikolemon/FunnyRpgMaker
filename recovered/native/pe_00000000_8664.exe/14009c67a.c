/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009c67a */

void FUN_14009c67a(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  char *pcVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 *puVar16;
  char *pcVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_f8 [32];
  uint local_d8;
  char *local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  ulonglong local_70;
  
  lVar9 = DAT_140f2a910;
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_f8;
  lVar15 = DAT_140f2a910 + 0xda8;
  FUN_14008f898(1);
  thunk_FUN_1400af8bf("io.BackendFlags: RendererHasTextures",lVar9 + 0x34,0x10);
  FUN_14008f98e();
  FUN_14009ce56("Font");
  local_d0 = "%.0f";
  local_c8 = 0;
  local_d8 = 0x42c80000;
  cVar8 = FUN_1400b61f2("FontSizeBase",lVar15,DAT_14021001c,DAT_1401c86c0);
  if (cVar8 != '\0') {
    *(undefined4 *)(lVar9 + 0x12f0) = *(undefined4 *)(lVar9 + 0xda8);
  }
  FUN_140092bab();
  fVar21 = (float)FUN_14008ff20();
  FUN_1400abfd5(" (out %.2f)",(double)fVar21);
  FUN_140092bab();
  FUN_14009cf92("- This is scaling font only. General scaling will come later.");
  uVar7 = DAT_1402116f4;
  uVar6 = DAT_1401c86a0;
  local_c8 = 0;
  local_d0 = "%.3f";
  local_d8 = 0x40800000;
  FUN_1400b61f2("FontScaleMain",lVar9 + 0xdac,DAT_1402116f4,DAT_1401c86a0);
  local_c8 = 0;
  local_d0 = "%.3f";
  local_d8 = 0x40800000;
  FUN_1400b61f2("FontScaleDpi",lVar9 + 0xdb0,uVar7,uVar6);
  if ((*(byte *)(lVar9 + 0x34) & 0x10) == 0) {
    FUN_1400ac536(
                 "Warning: Font scaling will NOT be smooth, because\nImGuiBackendFlags_RendererHasTextures is not set!"
                 );
    FUN_1400ac536("For instructions, see:");
    FUN_140092bab();
    FUN_1400b062e("docs/BACKENDS.md","https://github.com/ocornut/imgui/blob/master/docs/BACKENDS.md"
                 );
  }
  FUN_1400ac536("Load a nice font for better results!");
  FUN_1400ac536("Please submit feedback:");
  FUN_140092bab();
  FUN_1400b062e("#8465","https://github.com/ocornut/imgui/issues/8465");
  FUN_1400ac536("Read FAQ for more details:");
  FUN_140092bab();
  FUN_1400b062e("dearimgui.com/faq","https://www.dearimgui.com/faq/");
  FUN_1400b1021("Font List");
  FUN_1400aeb6a("Show font preview",lVar9 + 0x2b40);
  pcVar17 = "NULL";
  if (*(char **)(param_1 + 0x2c0) != (char *)0x0) {
    pcVar17 = *(char **)(param_1 + 0x2c0);
  }
  pcVar10 = "Loader";
  cVar8 = FUN_1400c4fe4("Loader","Loader: \'%s\'",pcVar17);
  if (cVar8 != '\0') {
    lVar15 = *(longlong *)(param_1 + 0x2b8);
    FUN_14008f898(CONCAT71((int7)((ulonglong)pcVar10 >> 8),*(undefined1 *)(param_1 + 0x51)) ^ 1);
    FUN_14008f898(1);
    FUN_1400af951("stb_truetype",0);
    FUN_140093dc2("Requires #define IMGUI_ENABLE_STB_TRUETYPE");
    FUN_14008f98e();
    FUN_140092bab();
    lVar9 = FUN_140117936();
    cVar8 = FUN_1400af951("FreeType",lVar15 == lVar9);
    if (cVar8 != '\0') {
      thunk_FUN_1400e148b(param_1,lVar9);
    }
    if (lVar15 == lVar9) {
      local_88._0_4_ = *(undefined4 *)(param_1 + 0x2d0);
      FUN_1400abfd5("Shared FreeType Loader Flags:  0x%08X");
      cVar8 = FUN_140117fa8(local_88);
      if (cVar8 != '\0') {
        iVar14 = *(int *)(param_1 + 0x68);
        if ((longlong)iVar14 == 0) {
          *(undefined4 *)(param_1 + 0x2d0) = local_88._0_4_;
        }
        else {
          lVar15 = *(longlong *)(param_1 + 0x70);
          lVar9 = 0;
          do {
            FUN_1400e132a(param_1,*(undefined8 *)(lVar15 + lVar9));
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar14 * 8 != lVar9);
          lVar15 = *(longlong *)(param_1 + 0x70);
          iVar14 = *(int *)(param_1 + 0x68);
          *(undefined4 *)(param_1 + 0x2d0) = local_88._0_4_;
          if ((longlong)iVar14 != 0) {
            lVar9 = 0;
            do {
              FUN_1400e37cc(param_1,*(undefined8 *)(lVar15 + lVar9));
              lVar9 = lVar9 + 8;
            } while ((longlong)iVar14 * 8 != lVar9);
          }
        }
      }
    }
    FUN_14008f98e();
    FUN_1400c66d9();
  }
  iVar14 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar14 != 0) {
    lVar15 = *(longlong *)(param_1 + 0x70);
    lVar9 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar15 + lVar9);
      FUN_14009136c(uVar1);
      FUN_14009cfe1(uVar1);
      FUN_140091667();
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar14 * 8 != lVar9);
  }
  FUN_1400b1021("Font Atlas");
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_88._8_8_;
  local_88 = auVar2 << 0x40;
  cVar8 = FUN_1400ad187("Compact");
  if (cVar8 != '\0') {
    thunk_FUN_1400e13d3(param_1);
  }
  FUN_140092bab();
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_88._8_8_;
  local_88 = auVar3 << 0x40;
  cVar8 = FUN_1400ad187(&DAT_140ec2d4e);
  if (cVar8 != '\0') {
    FUN_1400e4cc5(param_1,0xffffffff,0xffffffff);
  }
  FUN_140092bab();
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_88._8_8_;
  local_88 = auVar4 << 0x40;
  cVar8 = FUN_1400ad187("Clear All");
  if (cVar8 != '\0') {
    FUN_1400e3549(param_1);
  }
  FUN_140093dc2("Destroy cache and custom rectangles.");
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar15 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar15 * 8);
      if (lVar15 != 0) {
        FUN_140092bab();
      }
      FUN_1400abfd5("Tex: %dx%d",*(undefined4 *)(lVar9 + 0x1c),*(undefined4 *)(lVar9 + 0x20));
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x40));
  }
  lVar15 = *(longlong *)(param_1 + 0x2b0);
  if ((float)*(int *)(lVar15 + 0x98) < 0.0) {
    fVar21 = (float)FUN_1401a8af0();
  }
  else {
    fVar21 = SQRT((float)*(int *)(lVar15 + 0x98));
  }
  if ((float)*(int *)(lVar15 + 0xa0) < 0.0) {
    fVar22 = (float)FUN_1401a8af0();
  }
  else {
    fVar22 = SQRT((float)*(int *)(lVar15 + 0xa0));
  }
  local_d8 = (int)fVar21;
  FUN_1400abfd5("Packed rects: %d, area: about %d px ~%dx%d px",*(undefined4 *)(lVar15 + 0x94),
                *(undefined4 *)(lVar15 + 0x98),(int)fVar21);
  local_d8 = (int)fVar22;
  FUN_1400abfd5("incl. Discarded rects: %d, area: about %d px ~%dx%d px",
                *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0x9c),
                *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0xa0),(int)fVar22);
  cVar8 = FUN_1400c4fe4("Rects Index","Rects Index (%d)",
                        *(undefined4 *)(*(longlong *)(param_1 + 0x2b0) + 0x94));
  if (cVar8 != '\0') {
    FUN_14007ab2c(0x18,DAT_1401c86c8);
    fVar21 = (float)FUN_140093756();
    puVar16 = local_88;
    auVar5._4_8_ = local_88._8_8_;
    auVar5._0_4_ = fVar21 * DAT_1402116f8;
    auVar5._12_4_ = 0;
    local_88 = auVar5 << 0x20;
    local_d8 = 0;
    cVar8 = FUN_14010cbe8("##table",2,0x20007c0,puVar16);
    uVar13 = 0xffffffff;
    if (cVar8 != '\0') {
      lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x70);
      if (lVar15 != 0) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78);
        lVar20 = 0;
        do {
          if ((*(uint *)(lVar9 + lVar20) >> 0x1e & 1) != 0) {
            uVar18 = (uint)((ulonglong)
                            ((lVar20 + lVar9) - *(longlong *)(*(longlong *)(param_1 + 0x2b0) + 0x78)
                            ) >> 2) | *(uint *)(lVar9 + lVar20) & 0x3ff00000;
            local_78 = 0;
            local_88 = ZEXT416(0);
            FUN_1400e2f24(param_1,uVar18,local_88);
            local_d8 = *(uint *)(lVar9 + lVar20) >> 0x1e & 1;
            local_b8 = (uint)(ushort)local_88._2_2_;
            local_c0 = (uint)(ushort)local_88._0_2_;
            local_c8 = (uint)(ushort)local_88._6_2_;
            local_d0 = (char *)CONCAT44(local_d0._4_4_,(uint)(ushort)local_88._4_2_);
            FUN_140077ea7(&local_90,0,"ID:%08X, used:%d, { w:%3d, h:%3d } { x:%4d, y:%4d }",uVar18);
            FUN_140112b04();
            local_98 = 0;
            FUN_1400b2126(local_90,0,0,&local_98);
            cVar8 = FUN_1400808b4(0);
            if (cVar8 != '\0') {
              uVar13 = uVar18;
            }
            FUN_140112b04();
            local_98 = CONCAT44((float)((uint)local_88._4_4_ >> 0x10),
                                (float)(local_88._4_4_ & 0xffff));
            local_a8 = *(undefined8 *)(param_1 + 0x28);
            uStack_a0 = *(undefined8 *)(param_1 + 0x30);
            FUN_1400ae6f7(&local_a8,&local_98,local_88 + 8,&local_78);
          }
          lVar20 = lVar20 + 4;
        } while (lVar15 * 4 != lVar20);
      }
      FUN_140110400();
    }
    FUN_14007af87(1);
    FUN_1400c66d9();
    local_88 = ZEXT816(0);
    local_78 = 0;
    if (uVar13 != 0xffffffff) {
      FUN_1400e2f24(param_1,uVar13,puVar16);
      goto LAB_14009cdc4;
    }
  }
  local_88 = ZEXT816(0);
  local_78 = 0;
  puVar16 = (undefined1 *)0x0;
LAB_14009cdc4:
  uVar12 = (ulonglong)*(uint *)(param_1 + 0x40);
  if (0 < (int)*(uint *)(param_1 + 0x40)) {
    iVar14 = -1;
    uVar19 = 0;
    do {
      iVar11 = (int)uVar12;
      if (uVar19 == iVar11 - 1) {
        FUN_1400c67ef(1,2);
        iVar11 = *(int *)(param_1 + 0x40);
      }
      FUN_14009d72d(*(undefined8 *)(*(longlong *)(param_1 + 0x48) + uVar19 * 8),iVar11 + iVar14,
                    puVar16);
      uVar19 = uVar19 + 1;
      uVar12 = (ulonglong)*(int *)(param_1 + 0x40);
      iVar14 = iVar14 + -1;
    } while ((longlong)uVar19 < (longlong)uVar12);
  }
  if (DAT_140f17b40 != (local_70 ^ (ulonglong)auStack_f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_70 ^ (ulonglong)auStack_f8);
  }
  return;
}

