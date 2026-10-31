/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011f51a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011f51a(undefined4 param_1)

{
  byte *pbVar1;
  undefined **ppuVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  float fVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  char *pcVar18;
  int iVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  int *unaff_FS_OFFSET;
  bool bVar24;
  float10 fVar25;
  float fVar26;
  undefined *local_168 [8];
  undefined8 local_148;
  undefined *local_140 [6];
  undefined *puStack_128;
  undefined *puStack_124;
  undefined *local_120;
  undefined *puStack_11c;
  undefined *puStack_118;
  undefined *puStack_114;
  undefined *local_110;
  undefined8 local_10c;
  float fStack_104;
  float fStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  float local_64;
  float fStack_60;
  undefined4 *local_5c;
  undefined8 local_58;
  int *local_50;
  float local_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *local_3c;
  char *local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_168;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012c9e0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_38 = (char *)(DAT_1039d74c + 0x2800);
  local_24 = DAT_1039d74c;
  ppuVar2 = local_168;
  if (*(char *)(DAT_1039d74c + 0x2800) == '\x01') {
    FUN_10121f9a(local_38);
    ppuVar2 = (undefined **)local_20;
  }
  local_20 = (undefined1 *)ppuVar2;
  local_4c = (float)(local_24 + 0x2801);
  if (*(char *)(local_24 + 0x2801) == '\x01') {
    FUN_101223c6(local_4c);
  }
  cVar3 = FUN_10107d2b("Dear ImGui Metrics/Debugger",param_1,0);
  iVar15 = DAT_1039d74c;
  if ((cVar3 == '\0') ||
     (*(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1,
     1 < *(short *)(*(int *)(iVar15 + 0x14cc) + 0x108))) {
    FUN_1010ad44();
    *unaff_FS_OFFSET = local_1c;
  }
  else {
    FUN_10122793();
    FUN_1012d08c("Dear ImGui %s (%d)","1.92.9 WIP",0x4b51);
    iVar15 = local_24;
    if (*(char *)(local_24 + 0x20) != '\0') {
      iVar21 = local_24 + 0x20;
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c("(Context Name: \"%s\")",iVar21);
    }
    FUN_1012d08c("Application average %.3f ms/frame (%.1f FPS)",
                 (double)(DAT_102b8f30 / *(float *)(iVar15 + 0xc4)),
                 (double)*(float *)(iVar15 + 0xc4));
    FUN_1012d08c("%d vertices, %d indices (%d triangles)",*(undefined4 *)(iVar15 + 200),
                 *(int *)(iVar15 + 0xcc),*(int *)(iVar15 + 0xcc) / 3);
    FUN_1012d08c("%d visible windows, %d current allocations",*(undefined4 *)(iVar15 + 0xd0),
                 *(int *)(iVar15 + 0x2858) - *(int *)(iVar15 + 0x285c));
    FUN_10132188();
    local_168[4] = PTR_s_WorkRect_10332267_7_102b84bc;
    local_168[5] = PTR_s_Content_102b84c0;
    local_168[6] = PTR_s_ContentIdeal_102b84c4;
    local_168[7] = PTR_s_ContentRegionRect_102b84c8;
    local_168[0] = PTR_s_OuterRect_102b84ac;
    local_168[1] = PTR_s_OuterRectClipped_102b84b0;
    local_168[2] = PTR_s_InnerRect_102b84b4;
    local_168[3] = PTR_s_InnerClipRect_102b84b8;
    local_110 = PTR_s_ColumnsContentUnfrozen_102b84fc;
    local_120 = PTR_s_ColumnsClipRect_102b84ec;
    puStack_11c = PTR_s_ColumnsContentHeadersUsed_102b84f0;
    puStack_118 = PTR_s_ColumnsContentHeadersIdeal_102b84f4;
    puStack_114 = PTR_s_ColumnsContentFrozen_102b84f8;
    local_140[4] = PTR_s_InnerClipRect_102b84dc;
    local_140[5] = PTR_s_BackgroundClipRect_102b84e0;
    puStack_128 = PTR_s_ColumnsRect_102b84e4;
    puStack_124 = PTR_s_ColumnsWorkRect_102b84e8;
    local_140[0] = PTR_s_OuterRect_102b84cc;
    local_140[1] = PTR_s_InnerRect_102b84d0;
    local_140[2] = PTR_s_WorkRect_10332267_7_102b84d4;
    local_140[3] = PTR_s_HostClipRect_102b84d8;
    local_5c = (undefined4 *)(iVar15 + 0x280c);
    if (*(int *)(iVar15 + 0x280c) < 0) {
      *(undefined4 *)(iVar15 + 0x280c) = 4;
    }
    local_50 = (int *)(iVar15 + 0x2810);
    if (*(int *)(iVar15 + 0x2810) < 0) {
      *local_50 = 2;
    }
    cVar3 = FUN_10147d77("Tools");
    if (cVar3 != '\0') {
      FUN_100fdb2e(&local_10c,&DAT_1034960f,0,0,0xbf800000);
      iVar15 = local_24;
      FUN_101321e9(0,"Debug breaks",0,(float)local_10c + *(float *)(local_24 + 0xdd0));
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      cVar3 = FUN_1012ff1a("Show Item Picker",(char *)(iVar15 + 0x27e5));
      if ((cVar3 != '\0') && (*(char *)(iVar15 + 0x27e5) == '\x01')) {
        FUN_10114acd();
      }
      iVar15 = local_24;
      FUN_1012ff1a("Show \"Debug Break\" buttons in other sections (io.ConfigDebugIsDebuggerPresent)"
                   ,local_24 + 0xa0);
      FUN_10132656("Visualize");
      FUN_1012ff1a("Show Debug Log",local_38);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1012ff1a("Show ID Stack Tool",local_4c);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1012ff1a("Show windows begin order",iVar15 + 0x2803);
      FUN_1012ff1a("Show windows rectangles",iVar15 + 0x2802);
      FUN_10114a0e(0,0xbf800000);
      fVar25 = (float10)FUN_10111f20();
      local_8c = (float)fVar25;
      FUN_100fb68f(local_8c * DAT_102b8f14);
      bVar4 = FUN_10133e14("##show_windows_rect_type",local_5c,local_168,8,8);
      pbVar1 = (byte *)(iVar15 + 0x2802);
      *pbVar1 = *pbVar1 | bVar4;
      if ((*pbVar1 != 0) && (*(int *)(iVar15 + 0x2048) != 0)) {
        FUN_1012d551("\'%s\':",*(undefined4 *)(*(int *)(iVar15 + 0x2048) + 4));
        FUN_10115158(0);
        iVar21 = 0;
        do {
          FUN_101227ae(iVar21);
          FUN_1012d08c("(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s",(double)(float)local_10c,
                       (double)local_10c._4_4_,(double)fStack_104,(double)fStack_100,
                       (double)(fStack_104 - (float)local_10c),
                       (double)(fStack_100 - local_10c._4_4_),local_168[iVar21]);
          iVar21 = iVar21 + 1;
        } while (iVar21 != 8);
        FUN_101151af(0);
      }
      FUN_1012ff1a("Show tables rectangles",iVar15 + 0x2804);
      FUN_10114a0e(0,0xbf800000);
      fVar25 = (float10)FUN_10111f20();
      local_88 = (float)fVar25;
      FUN_100fb68f(local_88 * DAT_102b8f14);
      bVar4 = FUN_10133e14("##show_table_rects_type",local_50,local_140,0xd,0xd);
      pbVar1 = (byte *)(iVar15 + 0x2804);
      *pbVar1 = *pbVar1 | bVar4;
      if (((*pbVar1 != 0) && (*(int *)(local_24 + 0x2048) != 0)) &&
         (iVar15 = *(int *)(local_24 + 0x232c), 0 < iVar15)) {
        piVar11 = (int *)0x0;
        do {
          iVar21 = *(int *)(*(int *)(local_24 + 0x2334) + 4 + (int)piVar11 * 8);
          local_3c = piVar11;
          if (((iVar21 != -1) && (*(int *)(local_24 + 9000) != 0)) &&
             (puVar12 = (undefined4 *)(*(int *)(local_24 + 9000) + iVar21 * 0x204),
             *(int *)(local_24 + 4) + -1 <= (int)puVar12[0xf])) {
            if ((puVar12[0x55] == *(int *)(local_24 + 0x2048)) ||
               (puVar12[0x56] == *(int *)(local_24 + 0x2048))) {
              local_14 = 0xffffffff;
              FUN_1012d551("Table 0x%08X (%d columns, in \'%s\')",*puVar12,puVar12[0x10],
                           *(undefined4 *)(puVar12[0x55] + 4));
              cVar3 = FUN_10102a1a(0);
              if (cVar3 != '\0') {
                FUN_100fe900(*(undefined4 *)(puVar12[0x55] + 0x3c));
                local_10c = CONCAT44((float)((ulonglong)*(undefined8 *)(puVar12 + 0x33) >> 0x20) +
                                     DAT_102b70a0._4_4_,
                                     (float)*(undefined8 *)(puVar12 + 0x33) + (float)DAT_102b70a0);
                local_6c = CONCAT44((float)((ulonglong)*(undefined8 *)(puVar12 + 0x31) >> 0x20) +
                                    DAT_102b89a0._4_4_,
                                    (float)*(undefined8 *)(puVar12 + 0x31) + (float)DAT_102b89a0);
                FUN_1018b762(&local_6c,&local_10c,_DAT_102b8f40,_UNK_102b8f44,_UNK_102b8f48,
                             _UNK_102b8f4c);
              }
              FUN_10115158(0);
              piVar11 = (int *)0x0;
              do {
                if (piVar11 < (int *)0x6) {
                  FUN_10122862(piVar11,0xffffffff);
                  local_4c = local_64;
                  fStack_48 = fStack_60;
                  uStack_44 = 0;
                  uStack_40 = 0;
                  local_28 = piVar11;
                  local_38 = (char *)local_6c;
                  fStack_34 = local_6c._4_4_;
                  fStack_30 = 0.0;
                  fStack_2c = 0.0;
                  local_14 = 0xffffffff;
                  FUN_100fa4b1(&local_10c,0x80,"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s",
                               (double)(float)(char *)local_6c,(double)local_6c._4_4_,
                               (double)local_64,(double)fStack_60,
                               (double)(local_64 - (float)(char *)local_6c),
                               (double)(fStack_60 - local_6c._4_4_),local_140[(int)piVar11]);
                  local_58 = 0;
                  FUN_10133727(&local_10c,0,0,&local_58);
                  cVar3 = FUN_10102a1a(0);
                  piVar11 = local_28;
                  if (cVar3 != '\0') {
                    FUN_100fe900(*(undefined4 *)(puVar12[0x55] + 0x3c));
                    local_58 = CONCAT44(fStack_48 + DAT_102b70a0._4_4_,
                                        local_4c + (float)DAT_102b70a0);
                    local_74 = CONCAT44(fStack_34 + DAT_102b89a0._4_4_,
                                        (float)local_38 + (float)DAT_102b89a0);
                    FUN_1018b762(&local_74,&local_58,_DAT_102b8f40,_UNK_102b8f44,_UNK_102b8f48,
                                 _UNK_102b8f4c);
                    piVar11 = local_28;
                  }
                }
                else if (((piVar11 == (int *)0x8) || (piVar11 == (int *)0x6)) &&
                        (0 < (int)puVar12[0x10])) {
                  local_14 = 0xffffffff;
                  iVar15 = 0;
                  local_28 = piVar11;
                  do {
                    piVar11 = local_28;
                    FUN_10122862(local_28,iVar15);
                    local_4c = local_64;
                    fStack_48 = fStack_60;
                    uStack_44 = 0;
                    uStack_40 = 0;
                    local_38 = (char *)local_6c;
                    fStack_34 = local_6c._4_4_;
                    fStack_30 = 0.0;
                    fStack_2c = 0.0;
                    FUN_100fa4b1(&local_10c,0x80,
                                 "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s",
                                 (double)(float)(char *)local_6c,(double)local_6c._4_4_,
                                 (double)local_64,(double)fStack_60,
                                 (double)(local_64 - (float)(char *)local_6c),
                                 (double)(fStack_60 - local_6c._4_4_),iVar15,local_140[(int)piVar11]
                                );
                    local_58 = 0;
                    FUN_10133727(&local_10c,0,0,&local_58);
                    cVar3 = FUN_10102a1a(0);
                    if (cVar3 != '\0') {
                      FUN_100fe900(*(undefined4 *)(puVar12[0x55] + 0x3c));
                      local_58 = CONCAT44(fStack_48 + DAT_102b70a0._4_4_,
                                          local_4c + (float)DAT_102b70a0);
                      local_74 = CONCAT44(fStack_34 + DAT_102b89a0._4_4_,
                                          (float)local_38 + (float)DAT_102b89a0);
                      FUN_1018b762(&local_74,&local_58,_DAT_102b8f40,_UNK_102b8f44,_UNK_102b8f48,
                                   _UNK_102b8f4c);
                    }
                    iVar15 = iVar15 + 1;
                    piVar11 = local_28;
                  } while (iVar15 < (int)puVar12[0x10]);
                }
                piVar11 = (int *)((int)piVar11 + 1);
              } while (piVar11 != (int *)0xd);
              FUN_101151af(0);
              iVar15 = *(int *)(local_24 + 0x232c);
            }
          }
          piVar11 = (int *)((int)local_3c + 1);
        } while ((int)piVar11 < iVar15);
      }
      iVar15 = local_24;
      local_14 = 0xffffffff;
      FUN_1012ff1a("Show groups rectangles",local_24 + 0x1f6c);
      FUN_10132656("Validate");
      FUN_1012ff1a("Debug Begin/BeginChild return value",iVar15 + 0xa4);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_1012ff1a("UTF-8 Encoding viewer",iVar15 + 0x2807);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      if (*(char *)(iVar15 + 0x2807) == '\x01') {
        FUN_100fb68f(0x80800000);
        FUN_10141729("##DebugTextEncodingBuf",&DAT_1039d758,DAT_102b8f80,0,0,0);
        if (DAT_1039d758 != '\0') {
          FUN_1011df4a(&DAT_1039d758);
        }
      }
      FUN_10149387();
    }
    iVar15 = local_24;
    cVar3 = FUN_10147bc2("Windows","Windows (%d)",*(undefined4 *)(local_24 + 0x1484));
    if (cVar3 != '\0') {
      FUN_10122a05(iVar15 + 0x1484,"By display order");
      FUN_10122a05(iVar15 + 0x1490,"By focus order (root windows)");
      cVar3 = FUN_10147d77("By submission order (begin stack)");
      iVar15 = local_24;
      if (cVar3 != '\0') {
        if (*(int *)(local_24 + 0x14a0) < 0) {
          uVar6 = FUN_100fa1fa(0);
          if (*(int *)(iVar15 + 0x14a4) != 0) {
            FUN_1025b2d0(uVar6,*(int *)(iVar15 + 0x14a4),*(int *)(iVar15 + 0x149c) << 2);
            FUN_100fa2cb(*(undefined4 *)(iVar15 + 0x14a4));
          }
          *(undefined4 *)(iVar15 + 0x14a4) = uVar6;
          *(undefined4 *)(iVar15 + 0x14a0) = 0;
        }
        *(undefined4 *)(iVar15 + 0x149c) = 0;
        if (*(int *)(iVar15 + 0x1484) == 0) {
          uVar6 = *(undefined4 *)(iVar15 + 0x14a4);
          uVar22 = 0;
        }
        else {
          local_28 = *(int **)(iVar15 + 0x148c);
          local_4c = (float)(*(int *)(iVar15 + 0x1484) << 2);
          uVar22 = 0;
          fVar13 = 0.0;
          do {
            local_38 = *(char **)((int)local_28 + (int)fVar13);
            if (*(int *)(local_24 + 4) <= *(int *)(local_38 + 0x2b4) + 1) {
              if (uVar22 == *(uint *)(local_24 + 0x14a0)) {
                if (uVar22 == 0) {
                  iVar15 = 8;
                }
                else {
                  iVar15 = (int)uVar22 / 2 + uVar22;
                }
                iVar21 = uVar22 + 1;
                if ((int)(uVar22 + 1) < iVar15) {
                  iVar21 = iVar15;
                }
                local_14 = 0xffffffff;
                piVar11 = (int *)FUN_100fa1fa(iVar21 * 4);
                iVar15 = local_24;
                if (*(int *)(local_24 + 0x14a4) != 0) {
                  local_3c = piVar11;
                  FUN_1025b2d0(piVar11,*(int *)(local_24 + 0x14a4),*(int *)(local_24 + 0x149c) << 2)
                  ;
                  FUN_100fa2cb(*(undefined4 *)(iVar15 + 0x14a4));
                  piVar11 = local_3c;
                }
                *(int **)(iVar15 + 0x14a4) = piVar11;
                *(int *)(iVar15 + 0x14a0) = iVar21;
                uVar22 = *(uint *)(iVar15 + 0x149c);
              }
              else {
                piVar11 = *(int **)(local_24 + 0x14a4);
                iVar15 = local_24;
              }
              piVar11[uVar22] = (int)local_38;
              uVar22 = *(int *)(iVar15 + 0x149c) + 1;
              *(uint *)(iVar15 + 0x149c) = uVar22;
            }
            iVar15 = local_24;
            fVar13 = (float)((int)fVar13 + 4);
          } while (local_4c != fVar13);
          uVar6 = *(undefined4 *)(local_24 + 0x14a4);
          local_14 = 0xffffffff;
          if (1 < uVar22) {
            FUN_1026fb00(uVar6,uVar22,4,&LAB_10122a64);
            uVar22 = *(uint *)(iVar15 + 0x149c);
            uVar6 = *(undefined4 *)(iVar15 + 0x14a4);
          }
        }
        FUN_10122a81(uVar6,uVar22,0);
        FUN_10149387();
      }
      FUN_10149387();
      iVar15 = local_24;
    }
    if (*(int *)(iVar15 + 0x1fe0) == 0) {
      iVar21 = 0;
    }
    else {
      iVar21 = 0;
      iVar16 = 0;
      do {
        iVar21 = iVar21 + *(int *)(*(int *)(*(int *)(iVar15 + 0x1fe8) + iVar16) + 0xa8);
        iVar16 = iVar16 + 4;
      } while (*(int *)(iVar15 + 0x1fe0) << 2 != iVar16);
    }
    local_14 = 0xffffffff;
    cVar3 = FUN_10147bc2("DrawLists","DrawLists (%d)",iVar21);
    iVar15 = local_24;
    if (cVar3 != '\0') {
      FUN_1012ff1a("Show ImDrawCmd mesh when hovering",local_24 + 0x2805);
      FUN_1012ff1a("Show ImDrawCmd bounding boxes when hovering",iVar15 + 0x2806);
      iVar15 = *(int *)(iVar15 + 0x1fe0);
      if (iVar15 != 0) {
        piVar11 = *(int **)(local_24 + 0x1fe8);
        local_3c = piVar11 + iVar15;
        do {
          puVar12 = (undefined4 *)*piVar11;
          local_38 = (char *)puVar12[0x2a];
          local_28 = piVar11;
          if (local_38 != (char *)0x0) {
            local_4c = (float)puVar12[0x2c];
            local_38 = (char *)((int)local_38 << 2);
            bVar24 = false;
            pcVar14 = (char *)0x0;
            do {
              uVar6 = *(undefined4 *)(pcVar14 + (int)local_4c);
              local_14 = 0xffffffff;
              if (!bVar24) {
                FUN_1012d08c("Active DrawLists in Viewport #%d, ID: 0x%08X",puVar12[0x17],*puVar12);
              }
              FUN_10122b20(0,puVar12,uVar6,"DrawList");
              pcVar14 = pcVar14 + 4;
              bVar24 = true;
            } while (local_38 != pcVar14);
          }
          piVar11 = local_28 + 1;
        } while (piVar11 != local_3c);
      }
      local_14 = 0xffffffff;
      FUN_10149387();
    }
    iVar15 = local_24;
    cVar3 = FUN_10147bc2("Viewports","Viewports (%d)",*(undefined4 *)(local_24 + 0x1fe0));
    if (cVar3 != '\0') {
      *(undefined4 *)(iVar15 + 0x2814) = 0xffffffff;
      cVar3 = FUN_10147bc2("Monitors","Monitors (%d)",*(undefined4 *)(iVar15 + 0xc9c));
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      iVar15 = local_24;
      if (cVar3 != '\0') {
        if (0 < *(int *)(local_24 + 0xc9c)) {
          iVar21 = 0;
          iVar16 = 0;
          do {
            FUN_1012315b(*(int *)(iVar15 + 0xca4) + iVar21,"Monitor",iVar16);
            cVar3 = FUN_10102a1a(0);
            if (cVar3 != '\0') {
              *(int *)(iVar15 + 0x2814) = iVar16;
            }
            iVar16 = iVar16 + 1;
            iVar21 = iVar21 + 0x28;
          } while (iVar16 < *(int *)(iVar15 + 0xc9c));
        }
        FUN_1012315b(iVar15 + 0x1ffc,"Fallback",0);
        FUN_10149387();
      }
      FUN_1014949d(1,2);
      cVar3 = FUN_10147d77("Windows Minimap");
      if (cVar3 != '\0') {
        FUN_101232c0();
        FUN_10149387();
      }
      *(undefined4 *)(local_24 + 0x2818) = 0;
      uVar7 = 0;
      uVar6 = 0;
      if (*(undefined4 **)(local_24 + 0x1ff4) != (undefined4 *)0x0) {
        uVar6 = **(undefined4 **)(local_24 + 0x1ff4);
      }
      if (*(undefined4 **)(local_24 + 0x1ff0) != (undefined4 *)0x0) {
        uVar7 = **(undefined4 **)(local_24 + 0x1ff0);
      }
      FUN_1012d551("MouseViewport: 0x%08X (UserHovered 0x%08X, LastHovered 0x%08X)",uVar7,
                   *(undefined4 *)(local_24 + 0x100),uVar6);
      cVar3 = FUN_10147d77("Inferred Z order (front-to-back)");
      if (cVar3 != '\0') {
        if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_1039d7a4) &&
           (FUN_1022c0d0(&DAT_1039d7a4), DAT_1039d7a4 == -1)) {
          local_14 = 0;
          DAT_1039d79c = (char *)0x0;
          DAT_1039d798 = (char *)0x0;
          DAT_1039d7a0 = 0.0;
          FUN_1022c3a0(&LAB_101234f3);
          local_14 = 0xffffffff;
          FUN_1022c180(&DAT_1039d7a4);
        }
        pcVar14 = *(char **)(local_24 + 0x1fe0);
        pcVar20 = pcVar14;
        if ((int)DAT_1039d79c < (int)pcVar14) {
          if (DAT_1039d79c == (char *)0x0) {
            pcVar23 = (char *)0x8;
          }
          else {
            pcVar23 = DAT_1039d79c + (int)DAT_1039d79c / 2;
          }
          if ((int)pcVar23 <= (int)pcVar14) {
            pcVar23 = pcVar14;
          }
          fVar13 = (float)FUN_100fa1fa((int)pcVar23 * 4);
          if (DAT_1039d7a0 != 0.0) {
            FUN_1025b2d0(fVar13,DAT_1039d7a0,(int)DAT_1039d798 << 2);
            FUN_100fa2cb(DAT_1039d7a0);
          }
          pcVar20 = *(char **)(local_24 + 0x1fe0);
          DAT_1039d79c = pcVar23;
          DAT_1039d7a0 = fVar13;
        }
        DAT_1039d798 = pcVar14;
        FUN_1025b2d0(DAT_1039d7a0,*(undefined4 *)(local_24 + 0x1fe8),(int)pcVar20 << 2);
        if (1 < (int)pcVar14) {
          FUN_1026fb00(DAT_1039d7a0,pcVar14,4,&LAB_10123506);
          pcVar14 = DAT_1039d798;
        }
        local_38 = pcVar14;
        if (pcVar14 != (char *)0x0) {
          local_4c = DAT_1039d7a0;
          local_38 = (char *)((int)pcVar14 << 2);
          pcVar14 = (char *)0x0;
          do {
            puVar12 = *(undefined4 **)(pcVar14 + (int)local_4c);
            puVar8 = &DAT_1033cdfd;
            puVar17 = &DAT_1033cdfd;
            if (puVar12[0x16] != 0) {
              puVar17 = *(undefined **)(puVar12[0x16] + 4);
            }
            if ((*(code **)(local_24 + 0xc5c) != (code *)0x0) &&
               (*(char *)(puVar12 + 0x15) == '\x01')) {
              cVar3 = (**(code **)(local_24 + 0xc5c))(puVar12);
              puVar8 = &DAT_1033ec41;
              if (cVar3 != '\0') {
                puVar8 = &DAT_1033e8fa;
              }
            }
            FUN_1012d551("Viewport #%d, ID: 0x%08X, LastFocused = %08d, PlatformFocused = %s, Window: \"%s\""
                         ,puVar12[0x17],*puVar12,puVar12[0x19],puVar8,puVar17);
            cVar3 = FUN_10102a1a(0);
            if (cVar3 != '\0') {
              *(undefined4 *)(local_24 + 0x2818) = *puVar12;
            }
            pcVar14 = pcVar14 + 4;
          } while (local_38 != pcVar14);
        }
        FUN_10149387();
      }
      iVar15 = *(int *)(local_24 + 0x1fe0);
      if (iVar15 != 0) {
        iVar21 = *(int *)(local_24 + 0x1fe8);
        iVar16 = 0;
        do {
          FUN_10123519(*(undefined4 *)(iVar21 + iVar16));
          iVar16 = iVar16 + 4;
        } while (iVar15 << 2 != iVar16);
      }
      FUN_10149387();
      iVar15 = local_24;
    }
    iVar15 = *(int *)(iVar15 + 0x1214);
    if (iVar15 != 0) {
      local_38 = *(char **)(local_24 + 0x121c);
      iVar21 = 0;
      do {
        iVar16 = *(int *)(local_38 + iVar21);
        cVar3 = FUN_10147c9d(iVar16,"Fonts (%d), Textures (%d)",*(undefined4 *)(iVar16 + 0x54),
                             *(undefined4 *)(iVar16 + 0x34));
        if (cVar3 != '\0') {
          FUN_1011e1cb(iVar16);
          FUN_10149387();
        }
        iVar21 = iVar21 + 4;
      } while (iVar15 << 2 != iVar21);
    }
    iVar15 = local_24;
    cVar3 = FUN_10147bc2("Popups","Popups (%d)",*(undefined4 *)(local_24 + 0x1fbc));
    if (cVar3 != '\0') {
      iVar15 = *(int *)(iVar15 + 0x1fbc);
      if (iVar15 != 0) {
        local_4c = *(float *)(local_24 + 0x1fc4);
        local_28 = (int *)(iVar15 * 0x28);
        piVar11 = (int *)0x0;
        fVar13 = local_4c;
        do {
          fVar26 = local_4c;
          iVar15 = *(int *)((int)fVar13 + 4 + (int)piVar11);
          local_38 = "NULL";
          pcVar14 = "NULL";
          if ((iVar15 != 0) && (*(int *)(iVar15 + 0x3a0) != 0)) {
            pcVar14 = *(char **)(*(int *)(iVar15 + 0x3a0) + 4);
          }
          iVar21 = *(int *)((int)local_4c + 8 + (int)piVar11);
          if (iVar21 != 0) {
            local_38 = *(char **)(iVar21 + 4);
          }
          if (iVar15 == 0) {
            pcVar20 = "NULL";
            pcVar23 = "";
            pcVar18 = "";
          }
          else {
            pcVar20 = *(char **)(iVar15 + 4);
            pcVar18 = "Menu;";
            if ((*(uint *)(iVar15 + 0xc) >> 0x1c & 1) == 0) {
              pcVar18 = "";
            }
            pcVar23 = "Child;";
            if ((*(uint *)(iVar15 + 0xc) >> 0x18 & 1) == 0) {
              pcVar23 = "";
            }
          }
          FUN_1012d551("PopupID: %08x, Window: \'%s\' (%s%s), RestoreNavWindow \'%s\', ParentWindow \'%s\'"
                       ,*(undefined4 *)((int)local_4c + (int)piVar11),pcVar20,pcVar23,pcVar18,
                       local_38,pcVar14);
          piVar11 = piVar11 + 10;
          fVar13 = fVar26;
        } while (local_28 != piVar11);
      }
      FUN_10149387();
      iVar15 = local_24;
    }
    cVar3 = FUN_10147bc2("TabBars","Tab Bars (%d)",*(undefined4 *)(iVar15 + 0x2378));
    if (cVar3 != '\0') {
      iVar15 = *(int *)(iVar15 + 0x2368);
      if (0 < iVar15) {
        iVar21 = 0;
        do {
          iVar16 = *(int *)(*(int *)(local_24 + 0x2370) + 4 + iVar21 * 8);
          if ((iVar16 != -1) && (*(int *)(local_24 + 0x2364) != 0)) {
            iVar15 = *(int *)(local_24 + 0x2364) + iVar16 * 0xa4;
            local_14 = 0xffffffff;
            FUN_101132aa(iVar15);
            FUN_101238c4(iVar15,"TabBar");
            FUN_10113568();
            iVar15 = *(int *)(local_24 + 0x2368);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < iVar15);
      }
      local_14 = 0xffffffff;
      FUN_10149387();
      iVar15 = local_24;
    }
    cVar3 = FUN_10147bc2("Tables","Tables (%d)",*(undefined4 *)(iVar15 + 0x233c));
    if (cVar3 != '\0') {
      iVar15 = *(int *)(local_24 + 0x232c);
      if (0 < iVar15) {
        iVar21 = 0;
        do {
          iVar16 = *(int *)(*(int *)(local_24 + 0x2334) + 4 + iVar21 * 8);
          if ((iVar16 != -1) && (*(int *)(local_24 + 9000) != 0)) {
            local_14 = 0xffffffff;
            FUN_10168604(*(int *)(local_24 + 9000) + iVar16 * 0x204);
            iVar15 = *(int *)(local_24 + 0x232c);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < iVar15);
      }
      local_14 = 0xffffffff;
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("InputText");
    if (cVar3 != '\0') {
      FUN_101436bd(local_24 + 0x2470);
      FUN_10149387();
    }
    iVar15 = local_24;
    cVar3 = FUN_10147bc2("TypingSelect","TypingSelect (%d)",*(char *)(local_24 + 0x2618) != '\0');
    if (cVar3 != '\0') {
      FUN_101496d1(iVar15 + 0x2608);
      FUN_10149387();
    }
    cVar3 = FUN_10147bc2("MultiSelect","MultiSelect (%d)",*(undefined4 *)(iVar15 + 0x2444));
    iVar15 = local_24;
    if (cVar3 != '\0') {
      FUN_1012d551("BoxSelect ID=0x%08X, Starting = %d, Active %d",
                   *(undefined4 *)(local_24 + 0x2394),*(undefined1 *)(local_24 + 0x2399),
                   *(undefined1 *)(local_24 + 0x2398));
      iVar15 = *(int *)(iVar15 + 0x2434);
      if (0 < iVar15) {
        iVar21 = 0;
        do {
          iVar16 = *(int *)(*(int *)(local_24 + 0x243c) + 4 + iVar21 * 8);
          if ((iVar16 != -1) && (*(int *)(local_24 + 0x2430) != 0)) {
            local_14 = 0xffffffff;
            FUN_1014af6b(*(int *)(local_24 + 0x2430) + iVar16 * 0x28);
            iVar15 = *(int *)(local_24 + 0x2434);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < iVar15);
      }
      local_14 = 0xffffffff;
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Docking");
    if (cVar3 != '\0') {
      FUN_1012ff1a("List root nodes",&DAT_10389dd0);
      FUN_1012ff1a("Ctrl shows window dock info",local_24 + 0x2809);
      cVar3 = FUN_1012e1ca("Clear nodes");
      if (cVar3 != '\0') {
        FUN_10119f7c();
      }
      FUN_10114a0e(0,0xbf800000);
      cVar3 = FUN_1012e1ca("Rebuild all");
      if (cVar3 != '\0') {
        *(undefined1 *)(local_24 + 0x26c0) = 1;
      }
      iVar15 = *(int *)(local_24 + 0x269c);
      if (0 < iVar15) {
        iVar21 = 0;
        do {
          iVar16 = *(int *)(*(int *)(local_24 + 0x26a4) + 4 + iVar21 * 8);
          if ((iVar16 != 0) && ((DAT_10389dd0 != '\x01' || (*(int *)(iVar16 + 0x18) == 0)))) {
            local_14 = 0xffffffff;
            FUN_10123c59(iVar16,"Node");
            iVar15 = *(int *)(local_24 + 0x269c);
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < iVar15);
      }
      local_14 = 0xffffffff;
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Settings");
    if (cVar3 != '\0') {
      cVar3 = FUN_1012e1ca("Clear");
      if (cVar3 != '\0') {
        FUN_101185b9();
      }
      FUN_10114a0e(0,0xbf800000);
      cVar3 = FUN_1012e1ca("Save to memory");
      if (cVar3 != '\0') {
        FUN_101188bc(0);
      }
      FUN_10114a0e(0,0xbf800000);
      cVar3 = FUN_1012e1ca("Save to disk");
      if (cVar3 != '\0') {
        FUN_101019e9(*(undefined4 *)(local_24 + 0x50));
      }
      FUN_10114a0e(0,0xbf800000);
      if (*(int *)(local_24 + 0x50) == 0) {
        FUN_1012d079("<NULL>",0);
      }
      else {
        FUN_1012d08c(&DAT_1034a762,*(int *)(local_24 + 0x50));
      }
      iVar15 = local_24;
      FUN_1012ff1a("io.ConfigDebugIniSettings",local_24 + 0xa6);
      FUN_1012d08c("SettingsDirtyTimer %.2f",(double)*(float *)(iVar15 + 0x26cc));
      cVar3 = FUN_10147bc2("SettingsHandlers","Settings handlers: (%d)",
                           *(undefined4 *)(iVar15 + 0x26dc));
      if (cVar3 != '\0') {
        iVar15 = *(int *)(iVar15 + 0x26dc);
        if (iVar15 != 0) {
          iVar21 = *(int *)(local_24 + 0x26e4);
          iVar16 = 0;
          do {
            FUN_1012d551(&DAT_1034a762,*(undefined4 *)(iVar21 + iVar16));
            iVar16 = iVar16 + 0x24;
          } while (iVar15 * 0x24 != iVar16);
        }
        FUN_10149387();
        iVar15 = local_24;
      }
      cVar3 = FUN_10147bc2("SettingsWindows","Settings packed data: Windows: %d bytes",
                           *(undefined4 *)(iVar15 + 0x26e8));
      if (cVar3 != '\0') {
        if (*(int *)(iVar15 + 0x26f0) != 0) {
          iVar21 = *(int *)(iVar15 + 0x26f0) + 4;
          do {
            FUN_10124028(iVar21);
            iVar21 = iVar21 + *(int *)(iVar21 + -4);
          } while (iVar21 != *(int *)(iVar15 + 0x26e8) + *(int *)(iVar15 + 0x26f0) + 4);
        }
        FUN_10149387();
      }
      cVar3 = FUN_10147bc2("SettingsTables","Settings packed data: Tables: %d bytes",
                           *(undefined4 *)(iVar15 + 0x26f4));
      iVar15 = local_24;
      if (cVar3 != '\0') {
        if (*(int *)(local_24 + 0x26fc) != 0) {
          iVar21 = *(int *)(local_24 + 0x26fc) + 4;
          do {
            FUN_10168edd(iVar21);
            iVar21 = iVar21 + *(int *)(iVar21 + -4);
          } while (iVar21 != *(int *)(iVar15 + 0x26f4) + *(int *)(iVar15 + 0x26fc) + 4);
        }
        FUN_10149387();
      }
      cVar3 = FUN_10147bc2("SettingsDocking","Settings packed data: Docking");
      if (cVar3 != '\0') {
        FUN_1012d08c("In SettingsWindows:");
        iVar15 = *(int *)(local_24 + 0x26f0);
        if (iVar15 != 0) {
          iVar21 = iVar15 + 4;
          do {
            iVar16 = local_24;
            if (*(int *)(iVar21 + 0x14) != 0) {
              local_14 = 0xffffffff;
              FUN_1012d551("Window \'%s\' -> DockId %08X DockOrder=%d",iVar21 + 0x24,
                           *(int *)(iVar21 + 0x14),(int)*(short *)(iVar21 + 0x1c));
              iVar15 = *(int *)(iVar16 + 0x26f0);
            }
            iVar21 = iVar21 + *(int *)(iVar21 + -4);
          } while (iVar21 != *(int *)(iVar16 + 0x26e8) + iVar15 + 4);
        }
        local_14 = 0xffffffff;
        FUN_1012d08c("In SettingsNodes:");
        if (0 < *(int *)(local_24 + 0x26b4)) {
          iVar21 = 0;
          iVar15 = 0;
          do {
            local_38 = *(char **)(local_24 + 0x26bc);
            iVar16 = *(int *)(local_38 + iVar21 + 0xc);
            if (iVar16 == 0) {
              puVar17 = &DAT_10356101;
            }
            else {
              iVar9 = FUN_1010cbc5(iVar16);
              if (iVar9 == 0) {
                iVar9 = FUN_10118aeb(iVar16);
                puVar17 = (undefined *)(iVar9 + 0x24);
                if (iVar9 == 0) {
                  puVar17 = &DAT_1033cdfd;
                }
              }
              else {
                puVar17 = *(undefined **)(iVar9 + 4);
                if (puVar17 == (undefined *)0x0) {
                  puVar17 = &DAT_1033cdfd;
                }
              }
            }
            FUN_1012d551("Node %08X, Parent %08X, SelectedTab %08X (\'%s\')",
                         *(undefined4 *)(local_38 + iVar21),*(undefined4 *)(local_38 + iVar21 + 4),
                         iVar16,puVar17);
            iVar15 = iVar15 + 1;
            iVar21 = iVar21 + 0x24;
          } while (iVar15 < *(int *)(local_24 + 0x26b4));
        }
        FUN_10149387();
      }
      cVar3 = FUN_10147bc2("SettingsIniData","Settings unpacked data (.ini): %d bytes",
                           *(int *)(local_24 + 0x26d0) + -1 +
                           (uint)(*(int *)(local_24 + 0x26d0) == 0));
      if (cVar3 != '\0') {
        fVar25 = (float10)FUN_10111f20();
        local_84 = (float)fVar25;
        local_10c = CONCAT44(local_84 * DAT_102b7110,0x80800000);
        puVar17 = &DAT_1039d750;
        if (*(undefined **)(local_24 + 0x26d8) != (undefined *)0x0) {
          puVar17 = *(undefined **)(local_24 + 0x26d8);
        }
        FUN_10141afd("##Ini",puVar17,*(undefined4 *)(local_24 + 0x26d0),&local_10c,0x200,0,0);
        FUN_10149387();
      }
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Memory allocations");
    iVar15 = local_24;
    if (cVar3 != '\0') {
      FUN_1012d08c("%d current allocations",
                   *(int *)(local_24 + 0x2858) - *(int *)(local_24 + 0x285c));
      FUN_1012d08c("Releasing selected unused buffers after: %.2f secs",
                   (double)*(float *)(iVar15 + 0x84));
      cVar3 = FUN_1012e1ca("GC now");
      if (cVar3 != '\0') {
        *(undefined1 *)(local_24 + 0x1f6d) = 1;
      }
      FUN_1012d08c("Recent frames with allocations:");
      iVar15 = local_24;
      iVar21 = 1;
      do {
        iVar19 = (*(short *)(iVar15 + 0x2860) + iVar21) % 6;
        iVar16 = (int)*(short *)(iVar15 + 0x286a + iVar19 * 8);
        iVar9 = (int)*(short *)(iVar15 + 0x2868 + iVar19 * 8);
        FUN_1012d551("Frame %06d: %+3d ( %2d alloc, %2d free )",
                     *(undefined4 *)(iVar15 + 0x2864 + iVar19 * 8),iVar9 - iVar16,iVar9,iVar16);
        iVar21 = iVar21 + 1;
      } while (iVar21 != 7);
      FUN_10114a0e(0,0xbf800000);
      FUN_1012d08c("<- %d frames ago",*(int *)(iVar15 + 4) - *(int *)(iVar15 + 0x2864 + iVar19 * 8))
      ;
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Inputs");
    if (cVar3 != '\0') {
      FUN_1012d08c("KEYBOARD/GAMEPAD/MOUSE KEYS");
      FUN_10115158(0);
      FUN_1012d08c("Keys down:");
      iVar15 = 0x200;
      do {
        cVar3 = FUN_10113c70(iVar15);
        if (cVar3 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          uVar6 = FUN_10113610(iVar15);
          local_14 = 0xffffffff;
          FUN_1012d08c(&DAT_1034a762,uVar6,iVar15);
          FUN_10114a0e(0,0xbf800000);
          iVar21 = FUN_100f9590(DAT_1039d74c,iVar15);
          FUN_1012d08c("(%.02f)",(double)*(float *)(iVar21 + 4));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 0x29b);
      local_14 = 0xffffffff;
      FUN_1012d08c("Keys pressed:");
      iVar15 = 0x200;
      do {
        cVar3 = FUN_10113d4b(iVar15,1);
        if (cVar3 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          uVar6 = FUN_10113610(iVar15);
          local_14 = 0xffffffff;
          FUN_1012d08c(&DAT_1034a762,uVar6,iVar15);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 0x29b);
      local_14 = 0xffffffff;
      FUN_1012d08c("Keys released:");
      iVar15 = 0x200;
      do {
        cVar3 = FUN_10113ed3(iVar15);
        if (cVar3 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          uVar6 = FUN_10113610(iVar15);
          local_14 = 0xffffffff;
          FUN_1012d08c(&DAT_1034a762,uVar6,iVar15);
        }
        iVar21 = local_24;
        iVar15 = iVar15 + 1;
      } while (iVar15 != 0x29b);
      pcVar14 = "Super ";
      if (*(char *)(local_24 + 0x107) == '\0') {
        pcVar14 = "";
      }
      puVar17 = &DAT_1034b75e;
      if (*(char *)(local_24 + 0x106) == '\0') {
        puVar17 = &DAT_10356101;
      }
      pcVar20 = "Shift ";
      if (*(char *)(local_24 + 0x105) == '\0') {
        pcVar20 = "";
      }
      pcVar23 = "Ctrl ";
      if (*(char *)(local_24 + 0x104) == '\0') {
        pcVar23 = "";
      }
      local_14 = 0xffffffff;
      FUN_1012d08c("Keys mods: %s%s%s%s",pcVar23,pcVar20,puVar17,pcVar14);
      FUN_1012d08c("Chars queue:");
      if (0 < *(int *)(iVar21 + 0xbe0)) {
        iVar15 = 0;
        do {
          sVar5 = *(short *)(*(int *)(iVar21 + 0xbe8) + iVar15 * 2);
          FUN_10114a0e(0,0xbf800000);
          iVar16 = (int)(char)sVar5;
          if (0xde < (ushort)(sVar5 - 0x21U)) {
            iVar16 = 0x3f;
          }
          FUN_1012d08c("\'%c\' (0x%04X)",iVar16,sVar5);
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(iVar21 + 0xbe0));
      }
      uVar6 = FUN_10111ef5();
      FUN_1011db71(uVar6);
      FUN_101151af(0);
      FUN_1012d08c("MOUSE STATE");
      FUN_10115158(0);
      cVar3 = FUN_10103c30(0);
      iVar15 = local_24;
      if (cVar3 == '\0') {
        FUN_1012d08c("Mouse pos: <INVALID>");
        iVar15 = local_24;
      }
      else {
        FUN_1012d08c("Mouse pos: (%g, %g)",(double)*(float *)(local_24 + 0xe4),
                     (double)*(float *)(local_24 + 0xe8));
      }
      FUN_1012d08c("Mouse delta: (%g, %g)",(double)*(float *)(iVar15 + 0xd8),
                   (double)*(float *)(iVar15 + 0xdc));
      FUN_1012d08c("Mouse down:");
      iVar15 = 0;
      do {
        cVar3 = FUN_1010b10c(iVar15);
        if (cVar3 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          local_14 = 0xffffffff;
          FUN_1012d08c("b%d (%.02f secs)",iVar15,(double)*(float *)(local_24 + 0xb74 + iVar15 * 4));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 5);
      local_14 = 0xffffffff;
      FUN_1012d08c("Mouse clicked:");
      iVar15 = 0;
      do {
        cVar3 = FUN_1010377a(iVar15,0);
        if (cVar3 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          local_14 = 0xffffffff;
          FUN_1012d08c("b%d (%d)",iVar15,*(undefined2 *)(local_24 + 0xb22 + iVar15 * 2));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 5);
      local_14 = 0xffffffff;
      FUN_1012d08c("Mouse released:");
      iVar15 = 0;
      do {
        cVar3 = FUN_10113f33(iVar15);
        if (cVar3 != '\0') {
          FUN_10114a0e(0,0xbf800000);
          local_14 = 0xffffffff;
          FUN_1012d08c(&DAT_1033aaa4,iVar15);
        }
        iVar21 = local_24;
        iVar15 = iVar15 + 1;
      } while (iVar15 != 5);
      local_14 = 0xffffffff;
      FUN_1012d08c("Mouse wheel: %.1f",(double)*(float *)(local_24 + 0xf4));
      FUN_1012d08c("MouseStationaryTimer: %.2f",(double)*(float *)(iVar21 + 0x2464));
      uVar6 = FUN_10124080();
      FUN_1012d08c("Mouse source: %s",uVar6);
      FUN_1012d08c("Pen Pressure: %.1f",(double)*(float *)(iVar21 + 0xbd8));
      FUN_101151af(0);
      FUN_1012d08c("MOUSE WHEELING");
      FUN_10115158(0);
      if (*(int *)(iVar21 + 0x14e0) == 0) {
        pcVar14 = "NULL";
      }
      else {
        pcVar14 = *(char **)(*(int *)(iVar21 + 0x14e0) + 4);
      }
      FUN_1012d08c("WheelingWindow: \'%s\'",pcVar14);
      iVar15 = local_24;
      FUN_1012d08c("WheelingWindowReleaseTimer: %.2f",(double)*(float *)(local_24 + 0x14f4));
      fVar13 = *(float *)(iVar15 + 0x1500);
      fVar26 = *(float *)(iVar15 + 0x1504);
      pcVar14 = "<none>";
      if (fVar13 < fVar26) {
        pcVar14 = "Y";
      }
      pcVar20 = "X";
      if (fVar13 <= fVar26) {
        pcVar20 = pcVar14;
      }
      FUN_1012d08c("WheelingAxisAvg[] = { %.3f, %.3f }, Main Axis: %s",(double)fVar13,(double)fVar26
                   ,pcVar20);
      FUN_101151af(0);
      FUN_1012d08c("KEY OWNERS");
      FUN_10115158(0);
      fVar25 = (float10)FUN_101155d9();
      local_80 = (float)fVar25;
      local_10c = CONCAT44(local_80 * DAT_102b8f18,0x80800000);
      cVar3 = FUN_1010c081("##owners",&local_10c,0x88,0x100);
      if (cVar3 != '\0') {
        piVar11 = (int *)(local_24 + 0x159c);
        iVar15 = 0x200;
        do {
          if ((char *)*piVar11 != (char *)0xffffffff) {
            pcVar14 = " LockUntilRelease";
            if (*(char *)((int)piVar11 + 9) == '\0') {
              pcVar14 = "";
              if ((char)piVar11[2] != '\0') {
                pcVar14 = " LockThisFrame";
              }
              local_14 = 0xffffffff;
            }
            local_38 = (char *)*piVar11;
            uVar6 = FUN_10113610(iVar15);
            local_14 = 0xffffffff;
            FUN_1012d08c("%s: 0x%08X%s",uVar6,local_38,pcVar14);
            FUN_10124092(*piVar11);
          }
          iVar15 = iVar15 + 1;
          piVar11 = piVar11 + 3;
        } while (iVar15 != 0x29b);
      }
      local_14 = 0xffffffff;
      FUN_1010c644();
      FUN_101151af(0);
      FUN_1012d08c("SHORTCUT ROUTING");
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      FUN_10115158(0);
      fVar25 = (float10)FUN_101155d9();
      local_7c = (float)fVar25;
      local_10c = CONCAT44(local_7c * DAT_102b8f18,0x80800000);
      cVar3 = FUN_1010c081("##routes",&local_10c,0x88,0x100);
      if (cVar3 != '\0') {
        piVar11 = (int *)0x200;
        do {
          sVar5 = *(short *)(local_24 + 0x18e0 + (int)piVar11 * 2);
          if (sVar5 != -1) {
            local_14 = 0xffffffff;
            local_28 = piVar11;
            do {
              iVar15 = *(int *)(local_24 + 0x1e20);
              iVar21 = sVar5 * 0x10;
              uVar22 = (uint)*(ushort *)(iVar15 + 2 + iVar21) | (uint)local_28;
              local_38 = (char *)(uint)*(ushort *)(iVar15 + 4 + iVar21);
              local_4c = *(float *)(iVar15 + 8 + iVar21);
              uVar6 = FUN_10103065(uVar22);
              FUN_1012d08c("%s: 0x%08X (scored %d)",uVar6,local_4c,local_38);
              FUN_10124092(*(undefined4 *)(iVar15 + 8 + iVar21));
              if (*(char *)(local_24 + 0xa0) == '\x01') {
                FUN_10114a0e(0,0xbf800000);
                cVar3 = FUN_10124192("**DebugBreak**","in SetShortcutRouting() for this KeyChord");
                if (cVar3 != '\0') {
                  *(uint *)(local_24 + 0x1e38) = uVar22;
                }
              }
              sVar5 = *(short *)(iVar15 + iVar21);
              piVar11 = local_28;
            } while (sVar5 != -1);
          }
          piVar11 = (int *)((int)piVar11 + 1);
        } while (piVar11 != (int *)0x29b);
      }
      local_14 = 0xffffffff;
      FUN_1010c644();
      FUN_1012d08c("(ActiveIdUsing: AllKeyboardKeys: %d, NavDirMask: 0x%X)",
                   *(undefined1 *)(local_24 + 0x1e34),*(undefined4 *)(local_24 + 0x1e30));
      FUN_101151af(0);
      FUN_10149387();
    }
    cVar3 = FUN_10147d77("Internal state");
    if (cVar3 != '\0') {
      FUN_1012d08c("WINDOWING");
      FUN_10115158(0);
      pcVar20 = "NULL";
      pcVar14 = "NULL";
      if (*(int *)(local_24 + 0x14d0) != 0) {
        pcVar14 = *(char **)(*(int *)(local_24 + 0x14d0) + 4);
      }
      FUN_1012d08c("HoveredWindow: \'%s\'",pcVar14);
      if (*(int *)(local_24 + 0x14d0) != 0) {
        pcVar20 = *(char **)(*(int *)(*(int *)(local_24 + 0x14d0) + 0x3b0) + 4);
      }
      FUN_1012d08c("HoveredWindow->Root: \'%s\'",pcVar20);
      if (*(int *)(local_24 + 0x14d4) == 0) {
        pcVar14 = "NULL";
      }
      else {
        pcVar14 = *(char **)(*(int *)(local_24 + 0x14d4) + 4);
      }
      FUN_1012d08c("HoveredWindowUnderMovingWindow: \'%s\'",pcVar14);
      if (*(undefined4 **)(local_24 + 0x2894) == (undefined4 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(undefined4 **)(local_24 + 0x2894);
      }
      FUN_1012d08c("HoveredDockNode: 0x%08X",uVar6);
      if (*(int *)(local_24 + 0x14dc) == 0) {
        pcVar14 = "NULL";
      }
      else {
        pcVar14 = *(char **)(*(int *)(local_24 + 0x14dc) + 4);
      }
      FUN_1012d08c("MovingWindow: \'%s\'",pcVar14);
      iVar15 = local_24;
      uVar6 = 0;
      if (*(undefined4 **)(local_24 + 0x1ff4) != (undefined4 *)0x0) {
        uVar6 = **(undefined4 **)(local_24 + 0x1ff4);
      }
      FUN_1012d08c("MouseViewport: 0x%08X (UserHovered 0x%08X, LastHovered 0x%08X)",
                   **(undefined4 **)(local_24 + 0x1ff0),*(undefined4 *)(local_24 + 0x100),uVar6);
      FUN_101151af(0);
      FUN_1012d08c("ITEMS");
      FUN_10115158(0);
      uVar6 = FUN_1012441b();
      FUN_1012d08c("ActiveId: 0x%08X/0x%08X (%.2f sec), AllowOverlap: %d, Source: %s",
                   *(undefined4 *)(iVar15 + 0x1528),*(undefined4 *)(iVar15 + 0x1550),
                   (double)*(float *)(iVar15 + 0x1530),*(undefined1 *)(iVar15 + 0x1535),uVar6);
      FUN_10124092(*(undefined4 *)(iVar15 + 0x1528));
      pcVar20 = "NULL";
      pcVar14 = "NULL";
      if (*(int *)(iVar15 + 0x154c) != 0) {
        pcVar14 = *(char **)(*(int *)(iVar15 + 0x154c) + 4);
      }
      FUN_1012d08c("ActiveIdWindow: \'%s\'",pcVar14);
      iVar15 = local_24;
      FUN_1012d08c("ActiveIdUsing: AllKeyboardKeys: %d, NavDirMask: %X",
                   *(undefined1 *)(local_24 + 0x1e34),*(undefined4 *)(local_24 + 0x1e30));
      FUN_1012d08c("HoveredId: 0x%08X (%.2f sec), AllowOverlap: %d",*(undefined4 *)(iVar15 + 0x1514)
                   ,(double)*(float *)(iVar15 + 0x151c),*(undefined1 *)(iVar15 + 0x1524));
      FUN_1012d08c("HoverItemDelayId: 0x%08X, Timer: %.2f, ClearTimer: %.2f",
                   *(undefined4 *)(iVar15 + 0x2448),(double)*(float *)(iVar15 + 0x2450),
                   (double)*(float *)(iVar15 + 0x2454));
      FUN_1012d08c("DragDrop: %d, SourceId = 0x%08X, Payload \"%s\" (%d bytes)",
                   *(undefined1 *)(iVar15 + 0x2250),*(undefined4 *)(iVar15 + 0x2268),iVar15 + 0x2274
                   ,*(undefined4 *)(iVar15 + 0x2264));
      FUN_10124092(*(undefined4 *)(iVar15 + 0x2268));
      FUN_101151af(0);
      FUN_1012d08c("NAV,FOCUS");
      FUN_10115158(0);
      if (*(int *)(iVar15 + 0x2048) != 0) {
        pcVar20 = *(char **)(*(int *)(iVar15 + 0x2048) + 4);
      }
      FUN_1012d08c("NavWindow: \'%s\'",pcVar20);
      iVar15 = local_24;
      FUN_1012d08c("NavId: 0x%08X, NavLayer: %d",*(undefined4 *)(local_24 + 0x2044),
                   *(undefined4 *)(local_24 + 0x2050));
      FUN_10124092(*(undefined4 *)(iVar15 + 0x2044));
      uVar6 = FUN_1012441b();
      FUN_1012d08c("NavInputSource: %s",uVar6);
      FUN_1012d08c("NavLastValidSelectionUserData = %lld (0x%llX)",*(undefined4 *)(iVar15 + 0x2090),
                   *(undefined4 *)(iVar15 + 0x2094),*(undefined4 *)(iVar15 + 0x2090),
                   *(undefined4 *)(iVar15 + 0x2094));
      FUN_1012d08c("NavActive: %d, NavVisible: %d",*(undefined1 *)(iVar15 + 0xc1),
                   *(undefined1 *)(iVar15 + 0xc2));
      FUN_1012d08c("NavActivateId/DownId/PressedId: %08X/%08X/%08X",*(undefined4 *)(iVar15 + 0x2058)
                   ,*(undefined4 *)(iVar15 + 0x205c),*(undefined4 *)(iVar15 + 0x2060));
      FUN_1012d08c("NavActivateFlags: %04X",*(undefined4 *)(iVar15 + 0x2064));
      FUN_1012d08c("NavCursorVisible: %d, NavHighlightItemUnderNav: %d",
                   *(undefined1 *)(iVar15 + 0x2040),*(undefined1 *)(iVar15 + 0x2041));
      FUN_1012d08c("NavFocusScopeId = 0x%08X",*(undefined4 *)(iVar15 + 0x204c));
      FUN_1012d08c("NavFocusRoute[] = ");
      if (0 < *(int *)(iVar15 + 0x2068)) {
        uVar22 = *(int *)(iVar15 + 0x2068) + 1;
        do {
          iVar21 = *(int *)(iVar15 + 0x2070);
          FUN_10114a0e(0,0);
          FUN_1012d08c("0x%08X/",*(undefined4 *)(iVar21 + -0x10 + uVar22 * 8));
          iVar21 = FUN_1010cbc5(*(undefined4 *)(iVar21 + -0xc + uVar22 * 8));
          FUN_10115d65("In window \"%s\"",*(undefined4 *)(iVar21 + 4));
          uVar22 = uVar22 - 1;
        } while (1 < uVar22);
      }
      if (*(int *)(iVar15 + 0x221c) == 0) {
        pcVar14 = "NULL";
      }
      else {
        pcVar14 = *(char **)(*(int *)(iVar15 + 0x221c) + 4);
      }
      FUN_1012d08c("NavWindowingTarget: \'%s\'",pcVar14);
      FUN_101151af(0);
      FUN_10149387();
    }
    if (((*(char *)(local_24 + 0x2802) != '\0') || (*(char *)(local_24 + 0x2803) == '\x01')) &&
       (local_38 = *(char **)(local_24 + 0x1484), local_38 != (char *)0x0)) {
      local_4c = *(float *)(local_24 + 0x148c);
      local_38 = (char *)((int)local_38 << 2);
      pcVar14 = (char *)0x0;
      do {
        iVar15 = *(int *)(pcVar14 + (int)local_4c);
        if (*(char *)(iVar15 + 0xfa) == '\x01') {
          local_14 = 0xffffffff;
          piVar11 = (int *)FUN_100fe900(*(undefined4 *)(iVar15 + 0x3c));
          if (*(char *)(local_24 + 0x2802) == '\x01') {
            local_28 = piVar11;
            FUN_101227ae(*local_5c);
            piVar11 = local_28;
            FUN_1018b762(&local_10c,&fStack_104,_DAT_102b8f50,_UNK_102b8f54,_UNK_102b8f58,
                         _UNK_102b8f5c);
          }
          if ((*(char *)(local_24 + 0x2803) == '\x01') && ((*(byte *)(iVar15 + 0xf) & 1) == 0)) {
            local_28 = piVar11;
            FUN_100fa4b1(&local_10c,0x20,&DAT_1033b386,(int)*(short *)(iVar15 + 0x10e));
            fVar25 = (float10)FUN_10111f20();
            local_78 = (float)fVar25;
            local_6c = CONCAT44(local_78 +
                                (float)((ulonglong)*(undefined8 *)(iVar15 + 0x50) >> 0x20),
                                local_78 + (float)*(undefined8 *)(iVar15 + 0x50));
            FUN_1018b85a(iVar15 + 0x50,&local_6c,0xff6464c8,0,0);
            FUN_1018d05c(iVar15 + 0x50,0xffffffff,&local_10c,0);
          }
        }
        pcVar14 = pcVar14 + 4;
      } while (local_38 != pcVar14);
    }
    if ((*(char *)(local_24 + 0x2804) == '\x01') && (0 < *(int *)(local_24 + 0x232c))) {
      fVar13 = 0.0;
      do {
        iVar15 = *(int *)(*(int *)(local_24 + 0x2334) + 4 + (int)fVar13 * 8);
        local_4c = fVar13;
        if (((iVar15 != -1) && (*(int *)(local_24 + 9000) != 0)) &&
           (iVar15 = *(int *)(local_24 + 9000) + iVar15 * 0x204,
           *(int *)(local_24 + 4) + -1 <= *(int *)(iVar15 + 0x3c))) {
          local_14 = 0xffffffff;
          pcVar14 = (char *)FUN_100fe900(*(undefined4 *)(*(int *)(iVar15 + 0x154) + 0x3c));
          if (*local_50 < 6) {
            FUN_10122862(*local_50,0xffffffff);
            FUN_1018b762(&local_10c,&fStack_104,_DAT_102b8f50,_UNK_102b8f54,_UNK_102b8f58,
                         _UNK_102b8f5c);
          }
          else if (0 < *(int *)(iVar15 + 0x40)) {
            iVar21 = 0;
            local_38 = pcVar14;
            do {
              FUN_10122862(*local_50,iVar21);
              bVar24 = iVar21 == *(short *)(iVar15 + 0x1be);
              uVar6 = 0xff8000ff;
              if (bVar24) {
                uVar6 = 0xff80ffff;
              }
              FUN_1018b762(&local_10c,&fStack_104,uVar6,0,
                           *(undefined4 *)(&DAT_102b8f60 + (uint)bVar24 * 4),0);
              iVar21 = iVar21 + 1;
            } while (iVar21 < *(int *)(iVar15 + 0x40));
          }
        }
        fVar13 = (float)((int)local_4c + 1);
      } while ((int)fVar13 < *(int *)(local_24 + 0x232c));
    }
    if (((*(char *)(local_24 + 0x2809) == '\x01') && (*(char *)(local_24 + 0x104) == '\x01')) &&
       (puVar12 = *(undefined4 **)(local_24 + 0x2894), puVar12 != (undefined4 *)0x0)) {
      local_dc = 0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
      local_ec = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      local_fc = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      local_10c = 0;
      fStack_104 = 0.0;
      fStack_100 = 0.0;
      if (puVar12[0x1e] == 0) {
        uVar6 = FUN_1010ad36();
      }
      else {
        uVar6 = *(undefined4 *)(puVar12[0x1e] + 0x3c);
      }
      local_14 = 0xffffffff;
      local_24 = FUN_100fe900(uVar6);
      pcVar14 = " *CentralNode*";
      if (((uint)puVar12[4] >> 0xb & 1) == 0) {
        pcVar14 = "";
      }
      local_38 = (char *)FUN_100fa4b1(&local_10c,0x40,"DockId: %X%s\n",*puVar12,pcVar14);
      iVar16 = (int)&local_10c + (int)local_38;
      iVar15 = FUN_100fa4b1(iVar16,0x40 - (int)local_38,"WindowClass: %08X\n",puVar12[0x15]);
      iVar16 = iVar16 + iVar15;
      iVar15 = iVar15 + (int)local_38;
      iVar21 = FUN_100fa4b1(iVar16,0x40 - iVar15,"Size: (%.0f, %.0f)\n",(double)(float)puVar12[0xf],
                            (double)(float)puVar12[0x10]);
      FUN_100fa4b1(iVar16 + iVar21,0x40 - (iVar15 + iVar21),"SizeRef: (%.0f, %.0f)\n",
                   (double)(float)puVar12[0x11],(double)(float)puVar12[0x12]);
      iVar15 = -1;
      puVar10 = puVar12;
      do {
        puVar10 = (undefined4 *)puVar10[6];
        iVar15 = iVar15 + 1;
      } while (puVar10 != (undefined4 *)0x0);
      local_38 = (char *)((float)iVar15 * DAT_102b6c58);
      fVar13 = (float)*(undefined8 *)(puVar12 + 0xd);
      fVar26 = (float)((ulonglong)*(undefined8 *)(puVar12 + 0xd) >> 0x20);
      local_6c = CONCAT44(((float)((ulonglong)*(undefined8 *)(puVar12 + 0xf) >> 0x20) + fVar26) -
                          (float)local_38,
                          ((float)*(undefined8 *)(puVar12 + 0xf) + fVar13) - (float)local_38);
      local_58 = CONCAT44(fVar26 + (float)local_38,fVar13 + (float)local_38);
      local_14 = 0xffffffff;
      fStack_34 = (float)local_38;
      fStack_30 = (float)local_38;
      fStack_2c = (float)local_38;
      FUN_1018b762(&local_58,&local_6c,_DAT_102b8f70,_UNK_102b8f74,_UNK_102b8f78,_UNK_102b8f7c);
      local_38 = (char *)((float)*(undefined8 *)(puVar12 + 0xd) + (float)local_38);
      fStack_34 = (float)((ulonglong)*(undefined8 *)(puVar12 + 0xd) >> 0x20) + fStack_34;
      fStack_30 = fStack_30 + 0.0;
      fStack_2c = fStack_2c + 0.0;
      local_6c = CONCAT44(fStack_34,local_38);
      FUN_100fdb2e(&local_74,&local_10c,0,0,0xbf800000);
      local_58 = CONCAT44((float)((ulonglong)local_74 >> 0x20) + fStack_34 + DAT_102b70a0._4_4_,
                          (float)local_74 + (float)local_38 + (float)DAT_102b70a0);
      local_148 = CONCAT44(fStack_34 + DAT_102b89a0._4_4_,(float)local_38 + (float)DAT_102b89a0);
      FUN_1018b85a(&local_148,&local_58,0xff6464c8,0,0);
      FUN_1018c69a(0,0,&local_6c,0xffffffff,&local_10c,0,0,0);
    }
    local_14 = 0xffffffff;
    FUN_1010ad44();
    *unaff_FS_OFFSET = local_1c;
  }
  return;
}

