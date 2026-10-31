/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180124b8f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180124b8f(undefined8 param_1)

{
  byte *pbVar1;
  short sVar2;
  undefined2 uVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  int iVar19;
  char *pcVar20;
  undefined4 uVar21;
  int iVar22;
  char *pcVar23;
  undefined *puVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  float fVar30;
  undefined4 extraout_XMM0_Da;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  char *in_stack_fffffffffffffda8;
  char *in_stack_fffffffffffffdb0;
  ulonglong uVar38;
  char *in_stack_fffffffffffffdb8;
  double in_stack_fffffffffffffdc0;
  undefined8 in_stack_fffffffffffffdd0;
  undefined8 local_218 [6];
  undefined8 auStack_1e8 [8];
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined *local_198;
  undefined *puStack_190;
  undefined *local_188;
  undefined *puStack_180;
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  int *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  
  local_90 = 0xfffffffffffffffe;
  lVar10 = DAT_180419160 + 0x2b24;
  local_98 = DAT_180419160;
  if (*(char *)(DAT_180419160 + 0x2b24) == '\x01') {
    FUN_180127852(lVar10);
  }
  lVar28 = local_98 + 0x2b25;
  if (*(char *)(local_98 + 0x2b25) == '\x01') {
    FUN_180127c81(lVar28);
  }
  cVar5 = FUN_18010ca66("Dear ImGui Metrics/Debugger",param_1,0);
  lVar27 = DAT_180419160;
  if ((cVar5 != '\0') &&
     (*(undefined1 *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10b) = 1,
     *(short *)(*(longlong *)(lVar27 + 0x1608) + 0x118) < 2)) {
    FUN_1801280a6();
    FUN_1801330a5("Dear ImGui %s (%d)","1.92.9 WIP",0x4b51);
    lVar27 = local_98;
    if (*(char *)(local_98 + 0x20) != '\0') {
      lVar9 = local_98 + 0x20;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_1801330a5("(Context Name: \"%s\")",lVar9);
    }
    FUN_1801330a5("Application average %.3f ms/frame (%.1f FPS)",
                  (double)(DAT_1802de9b0 / *(float *)(lVar27 + 0xf0)),
                  (double)*(float *)(lVar27 + 0xf0));
    FUN_1801330a5("%d vertices, %d indices (%d triangles)",*(undefined4 *)(lVar27 + 0xf4),
                  (longlong)*(int *)(lVar27 + 0xf8),*(int *)(lVar27 + 0xf8) / 3);
    FUN_1801330a5("%d visible windows, %d current allocations",*(undefined4 *)(lVar27 + 0xfc),
                  *(int *)(lVar27 + 0x2b8c) - *(int *)(lVar27 + 0x2b90));
    FUN_180137ca1();
    local_178 = PTR_s_ContentIdeal_1802ddef0;
    puStack_170 = PTR_s_ContentRegionRect_1802ddef8;
    local_188 = PTR_s_WorkRect_180362377_7_1802ddee0;
    puStack_180 = PTR_s_Content_1802ddee8;
    local_198 = PTR_s_InnerRect_1802dded0;
    puStack_190 = PTR_s_InnerClipRect_1802dded8;
    local_1a8._0_4_ = PTR_s_OuterRect_1802ddec0._0_4_;
    local_1a8._4_4_ = PTR_s_OuterRect_1802ddec0._4_4_;
    uStack_1a0 = PTR_s_OuterRectClipped_1802ddec8._0_4_;
    uStack_19c = PTR_s_OuterRectClipped_1802ddec8._4_4_;
    ppuVar16 = &PTR_s_OuterRect_1802ddf00;
    puVar13 = local_218;
    for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar13 = *ppuVar16;
      ppuVar16 = ppuVar16 + 1;
      puVar13 = puVar13 + 1;
    }
    local_d0 = (undefined4 *)(lVar27 + 0x2b30);
    if (*(int *)(lVar27 + 0x2b30) < 0) {
      *(undefined4 *)(lVar27 + 0x2b30) = 4;
    }
    local_a8 = (int *)(lVar27 + 0x2b34);
    if (*(int *)(lVar27 + 0x2b34) < 0) {
      *local_a8 = 2;
    }
    cVar5 = FUN_18014c2cb("Tools");
    if (cVar5 != '\0') {
      uVar8 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffda8 >> 0x20),0xbf800000);
      FUN_1801023ca(&local_158,&DAT_18037972e,0,0,uVar8);
      lVar27 = local_98;
      uVar21 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_180137d08(0,"Debug breaks",0,(float)local_158 + *(float *)(local_98 + 0xeb8));
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Will call the IM_DEBUG_BREAK() macro to break in debugger.\nWarning: If you don\'t have a debugger attached, this will probably crash."
                   );
      cVar5 = FUN_180135c3a("Show Item Picker",(char *)(lVar27 + 0x2b09));
      if ((cVar5 != '\0') && (*(char *)(lVar27 + 0x2b09) == '\x01')) {
        FUN_18011993e();
      }
      lVar27 = local_98;
      FUN_180135c3a("Show \"Debug Break\" buttons in other sections (io.ConfigDebugIsDebuggerPresent)"
                    ,local_98 + 0xb4);
      FUN_1801380f1("Visualize");
      FUN_180135c3a("Show Debug Log",lVar10);
      uVar12 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("You can also call ImGui::ShowDebugLogWindow() from your code.");
      FUN_180135c3a("Show ID Stack Tool",lVar28);
      FUN_180119893(0,uVar12);
      FUN_180124063("You can also call ImGui::ShowIDStackToolWindow() from your code.");
      FUN_180135c3a("Show windows begin order",lVar27 + 0x2b27);
      FUN_180135c3a("Show windows rectangles",lVar27 + 0x2b26);
      FUN_180119893(0,uVar12);
      fVar30 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar30 * DAT_1802de988);
      uVar8 = CONCAT44(uVar21,8);
      bVar6 = FUN_18013995e("##show_windows_rect_type",local_d0,&local_1a8,8,uVar8);
      uVar21 = (undefined4)((ulonglong)uVar8 >> 0x20);
      pbVar1 = (byte *)(lVar27 + 0x2b26);
      *pbVar1 = *pbVar1 | bVar6;
      if ((*pbVar1 != 0) && (*(longlong *)(lVar27 + 0x2200) != 0)) {
        FUN_180133606("\'%s\':",*(undefined8 *)(*(longlong *)(lVar27 + 0x2200) + 8));
        FUN_180119fae(0);
        uVar17 = 0;
        do {
          FUN_1801280c2(&local_158,*(undefined8 *)(lVar27 + 0x2200),uVar17 & 0xffffffff);
          in_stack_fffffffffffffdc0 = (double)(&local_1a8)[uVar17];
          dVar32 = (double)uStack_150._4_4_;
          in_stack_fffffffffffffdb8 = (char *)(double)(uStack_150._4_4_ - local_158._4_4_);
          in_stack_fffffffffffffdb0 = (char *)(double)((float)uStack_150 - (float)local_158);
          FUN_1801330a5("(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s",(double)(float)local_158
                        ,(double)local_158._4_4_,(double)(float)uStack_150,dVar32,
                        in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8,
                        in_stack_fffffffffffffdc0);
          uVar21 = (undefined4)((ulonglong)dVar32 >> 0x20);
          uVar17 = uVar17 + 1;
        } while (uVar17 != 8);
        FUN_18011a002(0);
      }
      FUN_180135c3a("Show tables rectangles",lVar27 + 0x2b28);
      FUN_180119893(0,DAT_1802bb8e0);
      fVar30 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar30 * DAT_1802de988);
      in_stack_fffffffffffffda8 = (char *)CONCAT44(uVar21,0xd);
      bVar6 = FUN_18013995e("##show_table_rects_type",local_a8,local_218,0xd,
                            in_stack_fffffffffffffda8);
      pbVar1 = (byte *)(lVar27 + 0x2b28);
      *pbVar1 = *pbVar1 | bVar6;
      fVar4 = DAT_1802de550._4_4_;
      fVar33 = (float)DAT_1802de550;
      fVar31 = DAT_1802dc280._4_4_;
      fVar30 = (float)DAT_1802dc280;
      if (((*pbVar1 != 0) && (*(longlong *)(local_98 + 0x2200) != 0)) &&
         (iVar19 = *(int *)(local_98 + 0x2528), 0 < iVar19)) {
        puVar13 = (undefined8 *)0x0;
        do {
          lVar10 = (longlong)
                   *(int *)(*(longlong *)(local_98 + 0x2530) + 8 + (longlong)puVar13 * 0x10);
          local_c8 = puVar13;
          if (((lVar10 != -1) && (*(longlong *)(local_98 + 0x2520) != 0)) &&
             (puVar18 = (undefined4 *)(*(longlong *)(local_98 + 0x2520) + lVar10 * 0x250),
             *(int *)(local_98 + 4) + -1 <= (int)puVar18[0x1a])) {
            if ((*(longlong *)(puVar18 + 0x60) == *(longlong *)(local_98 + 0x2200)) ||
               (*(longlong *)(puVar18 + 0x62) == *(longlong *)(local_98 + 0x2200))) {
              FUN_180133606("Table 0x%08X (%d columns, in \'%s\')",*puVar18,puVar18[0x1b],
                            *(undefined8 *)(*(longlong *)(puVar18 + 0x60) + 8));
              cVar5 = FUN_18010759c(0);
              uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
              if (cVar5 != '\0') {
                uVar8 = FUN_180103228(*(undefined8 *)(*(longlong *)(puVar18 + 0x60) + 0x48));
                local_158 = CONCAT44((float)((ulonglong)*(undefined8 *)(puVar18 + 0x3e) >> 0x20) +
                                     fVar31,(float)*(undefined8 *)(puVar18 + 0x3e) + fVar30);
                local_c0[0] = CONCAT44((float)((ulonglong)*(undefined8 *)(puVar18 + 0x3c) >> 0x20) +
                                       fVar4,(float)*(undefined8 *)(puVar18 + 0x3c) + fVar33);
                in_stack_fffffffffffffdb8 =
                     (char *)((ulonglong)in_stack_fffffffffffffdb8 & 0xffffffff00000000);
                in_stack_fffffffffffffda8 =
                     (char *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffff00000000);
                in_stack_fffffffffffffdb0 = (char *)CONCAT44(uVar21,0x40000000);
                FUN_180192c0a(uVar8,local_c0,&local_158,0xff00ffff,in_stack_fffffffffffffda8,
                              in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8);
              }
              FUN_180119fae(0);
              uVar17 = 0;
              do {
                if (uVar17 < 6) {
                  FUN_180128186(local_c0,puVar18,uVar17 & 0xffffffff,0xffffffff);
                  in_stack_fffffffffffffdd0 = local_218[uVar17];
                  fVar34 = (float)local_c0[0];
                  fVar35 = (float)((ulonglong)local_c0[0] >> 0x20);
                  fVar36 = (float)local_c0[1];
                  fVar37 = (float)((ulonglong)local_c0[1] >> 0x20);
                  in_stack_fffffffffffffdb8 = (char *)(double)fVar37;
                  in_stack_fffffffffffffdc0 = (double)(fVar36 - fVar34);
                  in_stack_fffffffffffffdb0 = (char *)(double)fVar36;
                  in_stack_fffffffffffffda8 = (char *)(double)fVar35;
                  FUN_1800fead5(&local_158,0x80,"(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) %s",
                                (double)fVar34,in_stack_fffffffffffffda8,in_stack_fffffffffffffdb0,
                                in_stack_fffffffffffffdb8,in_stack_fffffffffffffdc0,
                                (double)(fVar37 - fVar35),in_stack_fffffffffffffdd0);
                  local_a0 = 0;
                  FUN_1801391f6(&local_158,0,0,&local_a0);
                  cVar5 = FUN_18010759c(0);
                  uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
                  if (cVar5 != '\0') {
                    uVar8 = FUN_180103228(*(undefined8 *)(*(longlong *)(puVar18 + 0x60) + 0x48));
                    local_a0 = CONCAT44(fVar37 + fVar31,fVar36 + fVar30);
                    local_b0 = CONCAT44(fVar35 + fVar4,fVar34 + fVar33);
                    in_stack_fffffffffffffdb8 =
                         (char *)((ulonglong)in_stack_fffffffffffffdb8 & 0xffffffff00000000);
                    in_stack_fffffffffffffda8 =
                         (char *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffff00000000);
                    in_stack_fffffffffffffdb0 = (char *)CONCAT44(uVar21,0x40000000);
                    FUN_180192c0a(uVar8,&local_b0,&local_a0,0xff00ffff,in_stack_fffffffffffffda8,
                                  in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8);
                  }
                }
                else if (((uVar17 == 8) || ((int)uVar17 == 6)) && (0 < (int)puVar18[0x1b])) {
                  iVar19 = 0;
                  do {
                    uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdd0 >> 0x20);
                    FUN_180128186(local_c0,puVar18,uVar17 & 0xffffffff,iVar19);
                    fVar34 = (float)local_c0[0];
                    fVar35 = (float)((ulonglong)local_c0[0] >> 0x20);
                    fVar36 = (float)local_c0[1];
                    fVar37 = (float)((ulonglong)local_c0[1] >> 0x20);
                    in_stack_fffffffffffffdb8 = (char *)(double)fVar37;
                    in_stack_fffffffffffffdc0 = (double)(fVar36 - fVar34);
                    in_stack_fffffffffffffdb0 = (char *)(double)fVar36;
                    in_stack_fffffffffffffda8 = (char *)(double)fVar35;
                    in_stack_fffffffffffffdd0 = CONCAT44(uVar21,iVar19);
                    FUN_1800fead5(&local_158,0x80,
                                  "(%6.1f,%6.1f) (%6.1f,%6.1f) Size (%6.1f,%6.1f) Col %d %s",
                                  (double)fVar34,in_stack_fffffffffffffda8,in_stack_fffffffffffffdb0
                                  ,in_stack_fffffffffffffdb8,in_stack_fffffffffffffdc0,
                                  (double)(fVar37 - fVar35),in_stack_fffffffffffffdd0,
                                  local_218[uVar17]);
                    local_a0 = 0;
                    FUN_1801391f6(&local_158,0,0,&local_a0);
                    cVar5 = FUN_18010759c(0);
                    uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
                    if (cVar5 != '\0') {
                      uVar8 = FUN_180103228(*(undefined8 *)(*(longlong *)(puVar18 + 0x60) + 0x48));
                      local_a0 = CONCAT44(fVar37 + fVar31,fVar36 + fVar30);
                      local_b0 = CONCAT44(fVar35 + fVar4,fVar34 + fVar33);
                      in_stack_fffffffffffffdb8 =
                           (char *)((ulonglong)in_stack_fffffffffffffdb8 & 0xffffffff00000000);
                      in_stack_fffffffffffffda8 =
                           (char *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffff00000000);
                      in_stack_fffffffffffffdb0 = (char *)CONCAT44(uVar21,0x40000000);
                      FUN_180192c0a(uVar8,&local_b0,&local_a0,0xff00ffff,in_stack_fffffffffffffda8,
                                    in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8);
                    }
                    iVar19 = iVar19 + 1;
                  } while (iVar19 < (int)puVar18[0x1b]);
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 != 0xd);
              FUN_18011a002(0);
              iVar19 = *(int *)(local_98 + 0x2528);
            }
          }
          puVar13 = (undefined8 *)((longlong)local_c8 + 1);
        } while ((longlong)puVar13 < (longlong)iVar19);
      }
      lVar10 = local_98;
      FUN_180135c3a("Show groups rectangles",local_98 + 0x20e0);
      FUN_1801380f1("Validate");
      FUN_180135c3a("Debug Begin/BeginChild return value",lVar10 + 0xb8);
      uVar21 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Some calls to Begin()/BeginChild() will return false.\n\nWill cycle through window depths then repeat. Windows should be flickering while running."
                   );
      FUN_180135c3a("UTF-8 Encoding viewer",lVar10 + 0x2b2b);
      FUN_180119893(0,uVar21);
      FUN_180124063(
                   "You can also call ImGui::DebugTextEncoding() from your code with a given string to test that your UTF-8 encoding settings are correct."
                   );
      if (*(char *)(lVar10 + 0x2b2b) == '\x01') {
        FUN_1800ffdb5(DAT_1802de9b4);
        in_stack_fffffffffffffda8 = (char *)0x0;
        in_stack_fffffffffffffdb0 = (char *)0x0;
        FUN_180145e1f("##DebugTextEncodingBuf",&DAT_180419180,0x40,0,0,0);
        if (DAT_180419180 != '\0') {
          FUN_180123473(&DAT_180419180);
        }
      }
      FUN_18014d7a9();
    }
    lVar10 = local_98;
    cVar5 = FUN_18014c0b4("Windows","Windows (%d)",*(undefined4 *)(local_98 + 0x15a8));
    if (cVar5 != '\0') {
      FUN_180128360(lVar10 + 0x15a8,"By display order");
      FUN_180128360(lVar10 + 0x15b8);
      cVar5 = FUN_18014c2cb("By submission order (begin stack)");
      lVar10 = local_98;
      if (cVar5 != '\0') {
        if (*(int *)(local_98 + 0x15cc) < 0) {
          uVar8 = FUN_1800fe7f8(0);
          if (*(longlong *)(lVar10 + 0x15d0) != 0) {
            FUN_1802a82f0(uVar8,*(longlong *)(lVar10 + 0x15d0),
                          (longlong)*(int *)(lVar10 + 0x15c8) << 3);
            FUN_1800fe8d4(*(undefined8 *)(lVar10 + 0x15d0));
          }
          *(undefined8 *)(lVar10 + 0x15d0) = uVar8;
          *(undefined4 *)(lVar10 + 0x15cc) = 0;
        }
        *(undefined4 *)(lVar10 + 0x15c8) = 0;
        iVar19 = *(int *)(lVar10 + 0x15a8);
        if ((longlong)iVar19 == 0) {
          uVar8 = *(undefined8 *)(lVar10 + 0x15d0);
          uVar15 = 0;
        }
        else {
          lVar10 = *(longlong *)(lVar10 + 0x15b0);
          uVar15 = 0;
          lVar28 = 0;
          do {
            lVar27 = *(longlong *)(lVar10 + lVar28);
            if (*(int *)(local_98 + 4) <= *(int *)(lVar27 + 0x2e0) + 1) {
              if (uVar15 == *(uint *)(local_98 + 0x15cc)) {
                if (uVar15 == 0) {
                  iVar7 = 8;
                }
                else {
                  iVar7 = (int)uVar15 / 2 + uVar15;
                }
                iVar22 = uVar15 + 1;
                if ((int)(uVar15 + 1) < iVar7) {
                  iVar22 = iVar7;
                }
                lVar9 = FUN_1800fe7f8((longlong)iVar22 << 3);
                lVar26 = local_98;
                if (*(longlong *)(local_98 + 0x15d0) != 0) {
                  FUN_1802a82f0(lVar9,*(longlong *)(local_98 + 0x15d0),
                                (longlong)*(int *)(local_98 + 0x15c8) << 3);
                  FUN_1800fe8d4(*(undefined8 *)(lVar26 + 0x15d0));
                }
                *(longlong *)(lVar26 + 0x15d0) = lVar9;
                *(int *)(lVar26 + 0x15cc) = iVar22;
                uVar15 = *(uint *)(lVar26 + 0x15c8);
              }
              else {
                lVar9 = *(longlong *)(local_98 + 0x15d0);
                lVar26 = local_98;
              }
              *(longlong *)(lVar9 + (longlong)(int)uVar15 * 8) = lVar27;
              uVar15 = *(int *)(lVar26 + 0x15c8) + 1;
              *(uint *)(lVar26 + 0x15c8) = uVar15;
            }
            lVar27 = local_98;
            lVar28 = lVar28 + 8;
          } while ((longlong)iVar19 * 8 != lVar28);
          uVar8 = *(undefined8 *)(local_98 + 0x15d0);
          if (1 < uVar15) {
            FUN_180289570(uVar8,(longlong)(int)uVar15,8,&LAB_1801283d6);
            uVar15 = *(uint *)(lVar27 + 0x15c8);
            uVar8 = *(undefined8 *)(lVar27 + 0x15d0);
          }
        }
        FUN_1801283ed(uVar8,uVar15,0);
        FUN_18014d7a9();
      }
      FUN_18014d7a9();
      lVar10 = local_98;
    }
    if ((longlong)*(int *)(lVar10 + 0x2178) == 0) {
      iVar19 = 0;
    }
    else {
      iVar19 = 0;
      lVar28 = 0;
      do {
        iVar19 = iVar19 + *(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x2180) + lVar28) + 0xd8);
        lVar28 = lVar28 + 8;
      } while ((longlong)*(int *)(lVar10 + 0x2178) * 8 != lVar28);
    }
    cVar5 = FUN_18014c0b4("DrawLists","DrawLists (%d)",iVar19);
    lVar10 = local_98;
    if (cVar5 != '\0') {
      FUN_180135c3a("Show ImDrawCmd mesh when hovering",local_98 + 0x2b29);
      FUN_180135c3a("Show ImDrawCmd bounding boxes when hovering",lVar10 + 0x2b2a);
      lVar10 = (longlong)*(int *)(lVar10 + 0x2178);
      if (lVar10 != 0) {
        puVar13 = *(undefined8 **)(local_98 + 0x2180);
        local_c8 = puVar13 + lVar10;
        do {
          puVar18 = (undefined4 *)*puVar13;
          iVar19 = puVar18[0x36];
          if ((longlong)iVar19 != 0) {
            lVar10 = *(longlong *)(puVar18 + 0x38);
            lVar28 = 0;
            bVar29 = false;
            do {
              uVar8 = *(undefined8 *)(lVar10 + lVar28);
              if (!bVar29) {
                FUN_1801330a5("Active DrawLists in Viewport #%d, ID: 0x%08X",puVar18[0x20],*puVar18)
                ;
              }
              FUN_1801284ac(0,puVar18,uVar8,"DrawList");
              lVar28 = lVar28 + 8;
              bVar29 = true;
            } while ((longlong)iVar19 * 8 != lVar28);
          }
          puVar13 = puVar13 + 1;
        } while (puVar13 != local_c8);
      }
      FUN_18014d7a9();
    }
    lVar10 = local_98;
    cVar5 = FUN_18014c0b4("Viewports","Viewports (%d)",*(undefined4 *)(local_98 + 0x2178));
    if (cVar5 != '\0') {
      *(undefined4 *)(lVar10 + 0x2b38) = 0xffffffff;
      cVar5 = FUN_18014c0b4("Monitors","Monitors (%d)",*(undefined4 *)(lVar10 + 0xd78));
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Dear ImGui uses monitor data:\n- to query DPI settings on a per monitor basis\n- to position popup/tooltips so they don\'t straddle monitors."
                   );
      lVar10 = local_98;
      if (cVar5 != '\0') {
        if (0 < *(int *)(local_98 + 0xd78)) {
          uVar17 = 0;
          lVar28 = 0;
          do {
            FUN_180128c1a(*(longlong *)(lVar10 + 0xd80) + lVar28,"Monitor",uVar17 & 0xffffffff);
            cVar5 = FUN_18010759c(0);
            if (cVar5 != '\0') {
              *(int *)(lVar10 + 0x2b38) = (int)uVar17;
            }
            uVar17 = uVar17 + 1;
            lVar28 = lVar28 + 0x30;
          } while ((longlong)uVar17 < (longlong)*(int *)(lVar10 + 0xd78));
        }
        FUN_180128c1a(lVar10 + 0x21a8,"Fallback",0);
        FUN_18014d7a9();
      }
      FUN_18014d8bf(1,2);
      cVar5 = FUN_18014c2cb("Windows Minimap");
      if (cVar5 != '\0') {
        FUN_180128d91();
        FUN_18014d7a9();
      }
      *(undefined4 *)(local_98 + 0x2b3c) = 0;
      uVar12 = 0;
      uVar21 = 0;
      if (*(undefined4 **)(local_98 + 0x2198) != (undefined4 *)0x0) {
        uVar21 = **(undefined4 **)(local_98 + 0x2198);
      }
      if (*(undefined4 **)(local_98 + 0x2190) != (undefined4 *)0x0) {
        uVar12 = **(undefined4 **)(local_98 + 0x2190);
      }
      FUN_180133606("MouseViewport: 0x%08X (UserHovered 0x%08X, LastHovered 0x%08X)",uVar12,
                    *(undefined4 *)(local_98 + 0x134),uVar21);
      cVar5 = FUN_18014c2cb("Inferred Z order (front-to-back)");
      if (cVar5 != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2c) < DAT_1804191d0) &&
           (FUN_18023d500(&DAT_1804191d0), DAT_1804191d0 == -1)) {
          _DAT_1804191c0 = 0;
          DAT_1804191c8 = 0;
          FUN_18023d710(&LAB_180129083);
          _Init_thread_footer(&DAT_1804191d0);
        }
        uVar15 = *(uint *)(local_98 + 0x2178);
        uVar14 = uVar15;
        if (DAT_1804191c4 < (int)uVar15) {
          if (DAT_1804191c4 == 0) {
            uVar14 = 8;
          }
          else {
            uVar14 = DAT_1804191c4 / 2 + DAT_1804191c4;
          }
          if ((int)uVar14 <= (int)uVar15) {
            uVar14 = uVar15;
          }
          lVar10 = FUN_1800fe7f8((longlong)(int)uVar14 << 3);
          if (DAT_1804191c8 != 0) {
            FUN_1802a82f0(lVar10,DAT_1804191c8,(longlong)(int)DAT_1804191c0 << 3);
            FUN_1800fe8d4(DAT_1804191c8);
          }
          _DAT_1804191c0 = (ulonglong)uVar14 << 0x20;
          uVar14 = *(uint *)(local_98 + 0x2178);
          DAT_1804191c8 = lVar10;
        }
        _DAT_1804191c0 = CONCAT44(DAT_1804191c4,uVar15);
        FUN_1802a82f0(DAT_1804191c8,*(undefined8 *)(local_98 + 0x2180),(longlong)(int)(uVar14 << 3))
        ;
        if (1 < (int)uVar15) {
          FUN_180289570(DAT_1804191c8,uVar15,8,&LAB_180129094);
          uVar15 = DAT_1804191c0;
        }
        lVar10 = DAT_1804191c8;
        if (uVar15 != 0) {
          lVar28 = 0;
          do {
            puVar18 = *(undefined4 **)(lVar10 + lVar28);
            in_stack_fffffffffffffdb0 = "N/A";
            if (*(longlong *)(puVar18 + 0x1e) != 0) {
              in_stack_fffffffffffffdb0 = *(char **)(*(longlong *)(puVar18 + 0x1e) + 8);
            }
            in_stack_fffffffffffffda8 = "N/A";
            if ((*(code **)(local_98 + 0xcf8) != (code *)0x0) &&
               (in_stack_fffffffffffffda8 = "N/A", *(char *)(puVar18 + 0x1c) == '\x01')) {
              cVar5 = (**(code **)(local_98 + 0xcf8))(puVar18);
              in_stack_fffffffffffffda8 = "0";
              if (cVar5 != '\0') {
                in_stack_fffffffffffffda8 = "1";
              }
            }
            FUN_180133606("Viewport #%d, ID: 0x%08X, LastFocused = %08d, PlatformFocused = %s, Window: \"%s\""
                          ,puVar18[0x20],*puVar18,puVar18[0x22],in_stack_fffffffffffffda8,
                          in_stack_fffffffffffffdb0);
            cVar5 = FUN_18010759c(0);
            if (cVar5 != '\0') {
              *(undefined4 *)(local_98 + 0x2b3c) = *puVar18;
            }
            lVar28 = lVar28 + 8;
          } while ((longlong)(int)uVar15 * 8 != lVar28);
        }
        FUN_18014d7a9();
      }
      iVar19 = *(int *)(local_98 + 0x2178);
      if ((longlong)iVar19 != 0) {
        lVar10 = *(longlong *)(local_98 + 0x2180);
        lVar28 = 0;
        do {
          FUN_1801290a7(*(undefined8 *)(lVar10 + lVar28));
          lVar28 = lVar28 + 8;
        } while ((longlong)iVar19 * 8 != lVar28);
      }
      FUN_18014d7a9();
      lVar10 = local_98;
    }
    iVar19 = *(int *)(lVar10 + 0x1300);
    if ((longlong)iVar19 != 0) {
      lVar10 = *(longlong *)(local_98 + 0x1308);
      lVar28 = 0;
      do {
        lVar27 = *(longlong *)(lVar10 + lVar28);
        cVar5 = FUN_18014c1c1(lVar27,"Fonts (%d), Textures (%d)",*(undefined4 *)(lVar27 + 0x68),
                              *(undefined4 *)(lVar27 + 0x40));
        if (cVar5 != '\0') {
          FUN_18012374b(lVar27);
          FUN_18014d7a9();
        }
        lVar28 = lVar28 + 8;
      } while ((longlong)iVar19 * 8 != lVar28);
    }
    lVar10 = local_98;
    cVar5 = FUN_18014c0b4("Popups","Popups (%d)",*(undefined4 *)(local_98 + 0x2148));
    if (cVar5 != '\0') {
      lVar10 = (longlong)*(int *)(lVar10 + 0x2148);
      if (lVar10 != 0) {
        lVar28 = *(longlong *)(local_98 + 0x2150);
        lVar27 = 0;
        do {
          lVar9 = *(longlong *)(lVar28 + 8 + lVar27);
          in_stack_fffffffffffffdb8 = "NULL";
          if (lVar9 != 0) {
            in_stack_fffffffffffffdb8 = "NULL";
            if (*(longlong *)(lVar9 + 0x408) != 0) {
              in_stack_fffffffffffffdb8 = *(char **)(*(longlong *)(lVar9 + 0x408) + 8);
            }
          }
          lVar26 = *(longlong *)(lVar28 + 0x10 + lVar27);
          in_stack_fffffffffffffdb0 = "NULL";
          if (lVar26 != 0) {
            in_stack_fffffffffffffdb0 = *(char **)(lVar26 + 8);
          }
          pcVar23 = "";
          in_stack_fffffffffffffda8 = "";
          pcVar20 = "NULL";
          if (lVar9 != 0) {
            in_stack_fffffffffffffda8 = "Menu;";
            if ((*(uint *)(lVar9 + 0x14) >> 0x1c & 1) == 0) {
              in_stack_fffffffffffffda8 = "";
            }
            pcVar23 = "Child;";
            if ((*(uint *)(lVar9 + 0x14) >> 0x18 & 1) == 0) {
              pcVar23 = "";
            }
            pcVar20 = *(char **)(lVar9 + 8);
          }
          FUN_180133606("PopupID: %08x, Window: \'%s\' (%s%s), RestoreNavWindow \'%s\', ParentWindow \'%s\'"
                        ,*(undefined4 *)(lVar28 + lVar27),pcVar20,pcVar23,in_stack_fffffffffffffda8,
                        in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8);
          lVar27 = lVar27 + 0x38;
        } while (lVar10 * 0x38 - lVar27 != 0);
      }
      FUN_18014d7a9();
      lVar10 = local_98;
    }
    cVar5 = FUN_18014c0b4("TabBars","Tab Bars (%d)",*(undefined4 *)(lVar10 + 0x258c));
    if (cVar5 != '\0') {
      iVar19 = *(int *)(lVar10 + 0x2578);
      if (0 < iVar19) {
        lVar10 = 8;
        lVar28 = 0;
        do {
          lVar27 = (longlong)*(int *)(*(longlong *)(local_98 + 0x2580) + lVar10);
          if ((lVar27 != -1) && (*(longlong *)(local_98 + 0x2570) != 0)) {
            lVar27 = *(longlong *)(local_98 + 0x2570) + lVar27 * 0xb0;
            FUN_180118054(lVar27);
            FUN_1801294dd(lVar27,"TabBar");
            FUN_18011834f();
            iVar19 = *(int *)(local_98 + 0x2578);
          }
          lVar28 = lVar28 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar28 < iVar19);
      }
      FUN_18014d7a9();
      lVar10 = local_98;
    }
    cVar5 = FUN_18014c0b4("Tables","Tables (%d)",*(undefined4 *)(lVar10 + 0x253c));
    if (cVar5 != '\0') {
      iVar19 = *(int *)(local_98 + 0x2528);
      if (0 < iVar19) {
        lVar10 = 8;
        lVar28 = 0;
        do {
          lVar27 = (longlong)*(int *)(*(longlong *)(local_98 + 0x2530) + lVar10);
          if ((lVar27 != -1) && (*(longlong *)(local_98 + 0x2520) != 0)) {
            FUN_18016d9a1(*(longlong *)(local_98 + 0x2520) + lVar27 * 0x250);
            iVar19 = *(int *)(local_98 + 0x2528);
          }
          lVar28 = lVar28 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar28 < iVar19);
      }
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("InputText");
    if (cVar5 != '\0') {
      FUN_18014810b(local_98 + 0x26a8);
      FUN_18014d7a9();
    }
    lVar10 = local_98;
    cVar5 = FUN_18014c0b4("TypingSelect","TypingSelect (%d)",*(char *)(local_98 + 0x28a8) != '\0');
    if (cVar5 != '\0') {
      FUN_18014db15(lVar10 + 0x2890);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c0b4("MultiSelect","MultiSelect (%d)",*(undefined4 *)(lVar10 + 0x267c));
    lVar10 = local_98;
    if (cVar5 != '\0') {
      FUN_180133606("BoxSelect ID=0x%08X, Starting = %d, Active %d",
                    *(undefined4 *)(local_98 + 0x25b0),*(undefined1 *)(local_98 + 0x25b5),
                    *(undefined1 *)(local_98 + 0x25b4));
      iVar19 = *(int *)(lVar10 + 0x2668);
      if (0 < iVar19) {
        lVar10 = 8;
        lVar28 = 0;
        do {
          lVar27 = (longlong)*(int *)(*(longlong *)(local_98 + 0x2670) + lVar10);
          if ((lVar27 != -1) && (*(longlong *)(local_98 + 0x2660) != 0)) {
            FUN_18014f490(*(longlong *)(local_98 + 0x2660) + lVar27 * 0x28);
            iVar19 = *(int *)(local_98 + 0x2668);
          }
          lVar28 = lVar28 + 1;
          lVar10 = lVar10 + 0x10;
        } while (lVar28 < iVar19);
      }
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Docking");
    if (cVar5 != '\0') {
      FUN_180135c3a("List root nodes",&DAT_1804039b0);
      FUN_180135c3a("Ctrl shows window dock info",local_98 + 0x2b2d);
      cVar5 = FUN_18013425f("Clear nodes");
      if (cVar5 != '\0') {
        FUN_18011f19a(extraout_XMM0_Da,0,1);
      }
      FUN_180119893(0,DAT_1802bb8e0);
      cVar5 = FUN_18013425f("Rebuild all");
      if (cVar5 != '\0') {
        *(undefined1 *)(local_98 + 0x2960) = 1;
      }
      iVar19 = *(int *)(local_98 + 0x2930);
      if (0 < iVar19) {
        lVar28 = 8;
        lVar10 = 0;
        do {
          lVar27 = *(longlong *)(*(longlong *)(local_98 + 0x2938) + lVar28);
          if ((lVar27 != 0) && ((DAT_1804039b0 != '\x01' || (*(longlong *)(lVar27 + 0x18) == 0)))) {
            FUN_1801298a6(lVar27,"Node");
            iVar19 = *(int *)(local_98 + 0x2930);
          }
          lVar10 = lVar10 + 1;
          lVar28 = lVar28 + 0x10;
        } while (lVar10 < iVar19);
      }
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Settings");
    if (cVar5 != '\0') {
      cVar5 = FUN_18013425f("Clear");
      if (cVar5 != '\0') {
        FUN_18011d53f();
      }
      FUN_180119893(0,DAT_1802bb8e0);
      cVar5 = FUN_18013425f("Save to memory");
      if (cVar5 != '\0') {
        FUN_18011d898(0);
      }
      FUN_180119893(0,DAT_1802bb8e0);
      cVar5 = FUN_18013425f("Save to disk");
      if (cVar5 != '\0') {
        FUN_180106514(*(undefined8 *)(local_98 + 0x50));
      }
      FUN_180119893(0,DAT_1802bb8e0);
      if (*(longlong *)(local_98 + 0x50) == 0) {
        FUN_18013309a("<NULL>",0);
      }
      else {
        FUN_1801330a5(&DAT_18037a845);
      }
      lVar10 = local_98;
      FUN_180135c3a("io.ConfigDebugIniSettings",local_98 + 0xba);
      FUN_1801330a5("SettingsDirtyTimer %.2f",(double)*(float *)(lVar10 + 0x2974));
      cVar5 = FUN_18014c0b4("SettingsHandlers","Settings handlers: (%d)",
                            *(undefined4 *)(lVar10 + 0x2988));
      if (cVar5 != '\0') {
        iVar19 = *(int *)(lVar10 + 0x2988);
        if ((longlong)iVar19 != 0) {
          lVar10 = *(longlong *)(local_98 + 0x2990);
          lVar28 = 0;
          do {
            FUN_180133606(&DAT_18037a845,*(undefined8 *)(lVar10 + lVar28));
            lVar28 = lVar28 + 0x48;
          } while ((longlong)iVar19 * 0x48 != lVar28);
        }
        FUN_18014d7a9();
        lVar10 = local_98;
      }
      cVar5 = FUN_18014c0b4("SettingsWindows","Settings packed data: Windows: %d bytes",
                            *(undefined4 *)(lVar10 + 0x2998));
      if (cVar5 != '\0') {
        if (*(longlong *)(lVar10 + 0x29a0) != 0) {
          lVar28 = *(longlong *)(lVar10 + 0x29a0) + 4;
          do {
            FUN_180129ce3(lVar28);
            lVar28 = lVar28 + *(int *)(lVar28 + -4);
          } while (lVar28 != *(longlong *)(lVar10 + 0x29a0) + (longlong)*(int *)(lVar10 + 0x2998) +
                             4);
        }
        FUN_18014d7a9();
      }
      cVar5 = FUN_18014c0b4("SettingsTables","Settings packed data: Tables: %d bytes",
                            *(undefined4 *)(lVar10 + 0x29a8));
      lVar10 = local_98;
      if (cVar5 != '\0') {
        if (*(longlong *)(local_98 + 0x29b0) != 0) {
          lVar28 = *(longlong *)(local_98 + 0x29b0) + 4;
          do {
            FUN_18016e2be(lVar28);
            lVar28 = lVar28 + *(int *)(lVar28 + -4);
          } while (lVar28 != *(longlong *)(lVar10 + 0x29b0) + (longlong)*(int *)(lVar10 + 0x29a8) +
                             4);
        }
        FUN_18014d7a9();
      }
      cVar5 = FUN_18014c0b4("SettingsDocking","Settings packed data: Docking");
      if (cVar5 != '\0') {
        FUN_1801330a5("In SettingsWindows:");
        lVar28 = local_98;
        lVar10 = *(longlong *)(local_98 + 0x29a0);
        if (lVar10 != 0) {
          lVar27 = lVar10 + 4;
          do {
            if (*(int *)(lVar27 + 0x14) != 0) {
              FUN_180133606("Window \'%s\' -> DockId %08X DockOrder=%d",lVar27 + 0x24,
                            *(int *)(lVar27 + 0x14),(int)*(short *)(lVar27 + 0x1c));
              lVar10 = *(longlong *)(lVar28 + 0x29a0);
            }
            lVar27 = lVar27 + *(int *)(lVar27 + -4);
          } while (lVar27 != *(int *)(lVar28 + 0x2998) + lVar10 + 4);
        }
        FUN_1801330a5("In SettingsNodes:");
        if (0 < *(int *)(local_98 + 0x2950)) {
          lVar10 = 0;
          lVar28 = 0;
          do {
            lVar27 = *(longlong *)(local_98 + 0x2958);
            iVar19 = *(int *)(lVar27 + 0xc + lVar10);
            in_stack_fffffffffffffda8 = "";
            if (iVar19 != 0) {
              lVar9 = FUN_1801118dd(iVar19);
              if (lVar9 == 0) {
                lVar9 = FUN_18011db05(iVar19);
                in_stack_fffffffffffffda8 = (char *)(lVar9 + 0x24);
                if (lVar9 == 0) {
                  in_stack_fffffffffffffda8 = "N/A";
                }
              }
              else {
                in_stack_fffffffffffffda8 = *(char **)(lVar9 + 8);
                if (in_stack_fffffffffffffda8 == (char *)0x0) {
                  in_stack_fffffffffffffda8 = "N/A";
                }
              }
            }
            FUN_180133606("Node %08X, Parent %08X, SelectedTab %08X (\'%s\')",
                          *(undefined4 *)(lVar27 + lVar10),*(undefined4 *)(lVar27 + 4 + lVar10),
                          iVar19,in_stack_fffffffffffffda8);
            lVar28 = lVar28 + 1;
            lVar10 = lVar10 + 0x24;
          } while (lVar28 < *(int *)(local_98 + 0x2950));
        }
        FUN_18014d7a9();
      }
      cVar5 = FUN_18014c0b4("SettingsIniData","Settings unpacked data (.ini): %d bytes",
                            *(int *)(local_98 + 0x2978) + -1 +
                            (uint)(*(int *)(local_98 + 0x2978) == 0));
      uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
      if (cVar5 != '\0') {
        fVar30 = (float)FUN_180116c08();
        local_158 = CONCAT44(fVar30 * DAT_1802dbb4c,0x80800000);
        puVar24 = &DAT_180419168;
        if (*(undefined **)(local_98 + 0x2980) != (undefined *)0x0) {
          puVar24 = *(undefined **)(local_98 + 0x2980);
        }
        in_stack_fffffffffffffdb0 = (char *)0x0;
        in_stack_fffffffffffffdb8 = (char *)0x0;
        in_stack_fffffffffffffda8 = (char *)CONCAT44(uVar21,0x200);
        FUN_1801462d7("##Ini",puVar24,(longlong)*(int *)(local_98 + 0x2978),&local_158,
                      in_stack_fffffffffffffda8,0,0);
        FUN_18014d7a9();
      }
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Memory allocations");
    lVar10 = local_98;
    if (cVar5 != '\0') {
      FUN_1801330a5("%d current allocations",
                    *(int *)(local_98 + 0x2b8c) - *(int *)(local_98 + 0x2b90));
      FUN_1801330a5("Releasing selected unused buffers after: %.2f secs",
                    (double)*(float *)(lVar10 + 0x98));
      cVar5 = FUN_18013425f("GC now");
      if (cVar5 != '\0') {
        *(undefined1 *)(local_98 + 0x20e1) = 1;
      }
      FUN_1801330a5("Recent frames with allocations:");
      lVar10 = local_98;
      iVar19 = 1;
      do {
        lVar28 = (longlong)((*(short *)(lVar10 + 0x2b94) + iVar19) % 6);
        iVar7 = (int)*(short *)(lVar10 + 0x2b9e + lVar28 * 8);
        iVar22 = (int)*(short *)(lVar10 + 0x2b9c + lVar28 * 8);
        in_stack_fffffffffffffda8 =
             (char *)CONCAT44((int)((ulonglong)in_stack_fffffffffffffda8 >> 0x20),iVar7);
        FUN_180133606("Frame %06d: %+3d ( %2d alloc, %2d free )",
                      *(undefined4 *)(lVar10 + 0x2b98 + lVar28 * 8),iVar22 - iVar7,iVar22,
                      in_stack_fffffffffffffda8);
        iVar19 = iVar19 + 1;
      } while (iVar19 != 7);
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_1801330a5("<- %d frames ago",*(int *)(lVar10 + 4) - *(int *)(lVar10 + 0x2b98 + lVar28 * 8)
                   );
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Inputs");
    if (cVar5 != '\0') {
      FUN_1801330a5("KEYBOARD/GAMEPAD/MOUSE KEYS");
      FUN_180119fae(0);
      FUN_1801330a5("Keys down:");
      uVar21 = DAT_1802bb8e0;
      iVar19 = 0x200;
      do {
        cVar5 = FUN_180118a7b(iVar19);
        if (cVar5 != '\0') {
          FUN_180119893(0,uVar21);
          uVar8 = FUN_180118405(iVar19);
          FUN_1801330a5(&DAT_18037a845,uVar8,iVar19);
          FUN_180119893(0,uVar21);
          lVar10 = FUN_1800fdb8a(DAT_180419160,iVar19);
          FUN_1801330a5("(%.02f)",(double)*(float *)(lVar10 + 4));
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x29b);
      FUN_1801330a5("Keys pressed:");
      uVar21 = DAT_1802bb8e0;
      iVar19 = 0x200;
      do {
        cVar5 = FUN_180118b7f(iVar19,1);
        if (cVar5 != '\0') {
          FUN_180119893(0,uVar21);
          uVar8 = FUN_180118405(iVar19);
          FUN_1801330a5(&DAT_18037a845,uVar8,iVar19);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x29b);
      FUN_1801330a5("Keys released:");
      uVar21 = DAT_1802bb8e0;
      iVar19 = 0x200;
      do {
        cVar5 = FUN_180118d09(iVar19);
        if (cVar5 != '\0') {
          FUN_180119893(0,uVar21);
          uVar8 = FUN_180118405(iVar19);
          FUN_1801330a5(&DAT_18037a845,uVar8,iVar19);
        }
        lVar10 = local_98;
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x29b);
      in_stack_fffffffffffffda8 = "Super ";
      if (*(char *)(local_98 + 0x13b) == '\0') {
        in_stack_fffffffffffffda8 = "";
      }
      puVar24 = &DAT_18037b841;
      if (*(char *)(local_98 + 0x13a) == '\0') {
        puVar24 = &DAT_1803861e4;
      }
      pcVar20 = "Shift ";
      if (*(char *)(local_98 + 0x139) == '\0') {
        pcVar20 = "";
      }
      pcVar23 = "Ctrl ";
      if (*(char *)(local_98 + 0x138) == '\0') {
        pcVar23 = "";
      }
      FUN_1801330a5("Keys mods: %s%s%s%s",pcVar23,pcVar20,puVar24,in_stack_fffffffffffffda8);
      FUN_1801330a5("Chars queue:");
      uVar21 = DAT_1802bb8e0;
      if (0 < *(int *)(lVar10 + 0xc18)) {
        lVar28 = 0;
        do {
          sVar2 = *(short *)(*(longlong *)(lVar10 + 0xc20) + lVar28 * 2);
          FUN_180119893(0,uVar21);
          iVar19 = (int)(char)sVar2;
          if (0xde < (ushort)(sVar2 - 0x21U)) {
            iVar19 = 0x3f;
          }
          FUN_1801330a5("\'%c\' (0x%04X)",iVar19,sVar2);
          lVar28 = lVar28 + 1;
        } while (lVar28 < *(int *)(lVar10 + 0xc18));
      }
      uVar8 = FUN_180116bd5();
      FUN_1801230e1(uVar8);
      FUN_18011a002(0);
      FUN_1801330a5("MOUSE STATE");
      FUN_180119fae(0);
      cVar5 = FUN_1801088d4(0);
      lVar10 = local_98;
      if (cVar5 == '\0') {
        FUN_1801330a5("Mouse pos: <INVALID>");
        lVar10 = local_98;
      }
      else {
        FUN_1801330a5("Mouse pos: (%g, %g)",(double)*(float *)(local_98 + 0x118),
                      (double)*(float *)(local_98 + 0x11c));
      }
      FUN_1801330a5("Mouse delta: (%g, %g)",(double)*(float *)(lVar10 + 0x104),
                    (double)*(float *)(lVar10 + 0x108));
      FUN_1801330a5("Mouse down:");
      uVar21 = DAT_1802bb8e0;
      uVar17 = 0;
      do {
        cVar5 = FUN_18010fd4d(uVar17 & 0xffffffff);
        if (cVar5 != '\0') {
          FUN_180119893(0,uVar21);
          FUN_1801330a5("b%d (%.02f secs)",uVar17 & 0xffffffff,
                        (double)*(float *)(local_98 + 0xbac + uVar17 * 4));
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 5);
      FUN_1801330a5("Mouse clicked:");
      uVar21 = DAT_1802bb8e0;
      uVar17 = 0;
      do {
        cVar5 = FUN_1801083d6(uVar17 & 0xffffffff,0);
        if (cVar5 != '\0') {
          FUN_180119893(0,uVar21);
          FUN_1801330a5("b%d (%d)",uVar17 & 0xffffffff,
                        *(undefined2 *)(local_98 + 0xb5a + uVar17 * 2));
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != 5);
      FUN_1801330a5("Mouse released:");
      uVar21 = DAT_1802bb8e0;
      iVar19 = 0;
      do {
        cVar5 = FUN_180118d71(iVar19);
        if (cVar5 != '\0') {
          FUN_180119893(0,uVar21);
          FUN_1801330a5(&DAT_18036abce,iVar19);
        }
        lVar10 = local_98;
        iVar19 = iVar19 + 1;
      } while (iVar19 != 5);
      FUN_1801330a5("Mouse wheel: %.1f",(double)*(float *)(local_98 + 0x128));
      FUN_1801330a5("MouseStationaryTimer: %.2f",(double)*(float *)(lVar10 + 0x269c));
      uVar8 = FUN_180129d49(*(undefined4 *)(lVar10 + 0x130));
      FUN_1801330a5("Mouse source: %s",uVar8);
      FUN_1801330a5("Pen Pressure: %.1f",(double)*(float *)(lVar10 + 0xc10));
      FUN_18011a002(0);
      FUN_1801330a5("MOUSE WHEELING");
      FUN_180119fae(0);
      if (*(longlong *)(lVar10 + 0x1630) == 0) {
        pcVar20 = "NULL";
      }
      else {
        pcVar20 = *(char **)(*(longlong *)(lVar10 + 0x1630) + 8);
      }
      FUN_1801330a5("WheelingWindow: \'%s\'",pcVar20);
      lVar10 = local_98;
      FUN_1801330a5("WheelingWindowReleaseTimer: %.2f",(double)*(float *)(local_98 + 0x1648));
      fVar30 = *(float *)(lVar10 + 0x1654);
      fVar31 = *(float *)(lVar10 + 0x1658);
      pcVar20 = "<none>";
      if (fVar30 < fVar31) {
        pcVar20 = "Y";
      }
      pcVar23 = "X";
      if (fVar30 <= fVar31) {
        pcVar23 = pcVar20;
      }
      FUN_1801330a5("WheelingAxisAvg[] = { %.3f, %.3f }, Main Axis: %s",(double)fVar30,
                    (double)fVar31,pcVar23);
      FUN_18011a002(0);
      FUN_1801330a5("KEY OWNERS");
      FUN_180119fae(0);
      fVar30 = (float)FUN_18011a43e();
      local_158 = CONCAT44(fVar30 * DAT_1802de98c,0x80800000);
      cVar5 = FUN_180110d11("##owners",&local_158,0x88,0x100);
      lVar10 = local_98;
      if (cVar5 != '\0') {
        iVar19 = 0x200;
        lVar28 = 0;
        do {
          iVar7 = *(int *)(lVar10 + 0x16f4 + lVar28);
          if (iVar7 != -1) {
            pcVar20 = " LockUntilRelease";
            if ((*(char *)(lVar10 + 0x16fd + lVar28) == '\0') &&
               (pcVar20 = "", *(char *)(lVar10 + 0x16fc + lVar28) != '\0')) {
              pcVar20 = " LockThisFrame";
            }
            uVar8 = FUN_180118405(iVar19);
            FUN_1801330a5("%s: 0x%08X%s",uVar8,iVar7,pcVar20);
            FUN_180129d64(*(undefined4 *)(lVar10 + 0x16f4 + lVar28));
          }
          iVar19 = iVar19 + 1;
          lVar28 = lVar28 + 0xc;
        } while (lVar28 != 0x744);
      }
      FUN_180111339();
      FUN_18011a002(0);
      FUN_1801330a5("SHORTCUT ROUTING");
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063("Declared shortcut routes automatically set key owner when mods matches.");
      FUN_180119fae(0);
      fVar30 = (float)FUN_18011a43e();
      local_158 = CONCAT44(fVar30 * DAT_1802de98c,0x80800000);
      cVar5 = FUN_180110d11("##routes",&local_158,0x88,0x100);
      lVar10 = local_98;
      uVar21 = DAT_1802bb8e0;
      if (cVar5 != '\0') {
        lVar28 = 0x200;
        do {
          sVar2 = *(short *)(local_98 + 0x1a38 + lVar28 * 2);
          while (sVar2 != -1) {
            lVar27 = *(longlong *)(lVar10 + 0x1f78);
            lVar9 = (longlong)sVar2 * 0x10;
            uVar15 = (uint)*(ushort *)(lVar27 + 2 + lVar9) | (uint)lVar28;
            uVar3 = *(undefined2 *)(lVar27 + 4 + lVar9);
            uVar12 = *(undefined4 *)(lVar27 + 8 + lVar9);
            uVar8 = FUN_180107c4e(uVar15);
            FUN_1801330a5("%s: 0x%08X (scored %d)",uVar8,uVar12,uVar3);
            FUN_180129d64(*(undefined4 *)(lVar27 + 8 + lVar9));
            if (*(char *)(lVar10 + 0xb4) == '\x01') {
              FUN_180119893(0,uVar21);
              cVar5 = FUN_180129e69("**DebugBreak**","in SetShortcutRouting() for this KeyChord");
              if (cVar5 != '\0') {
                *(uint *)(local_98 + 0x1f98) = uVar15;
              }
            }
            sVar2 = *(short *)(lVar27 + lVar9);
          }
          lVar28 = lVar28 + 1;
        } while (lVar28 != 0x29b);
      }
      FUN_180111339();
      FUN_1801330a5("(ActiveIdUsing: AllKeyboardKeys: %d, NavDirMask: 0x%X)",
                    *(undefined1 *)(local_98 + 0x1f94),*(undefined4 *)(local_98 + 0x1f90));
      FUN_18011a002(0);
      FUN_18014d7a9();
    }
    cVar5 = FUN_18014c2cb("Internal state");
    uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffda8 >> 0x20);
    if (cVar5 != '\0') {
      FUN_1801330a5("WINDOWING");
      FUN_180119fae(0);
      pcVar23 = "NULL";
      pcVar20 = "NULL";
      if (*(longlong *)(local_98 + 0x1610) != 0) {
        pcVar20 = *(char **)(*(longlong *)(local_98 + 0x1610) + 8);
      }
      FUN_1801330a5("HoveredWindow: \'%s\'",pcVar20);
      pcVar20 = "NULL";
      if (*(longlong *)(local_98 + 0x1610) != 0) {
        pcVar20 = *(char **)(*(longlong *)(*(longlong *)(local_98 + 0x1610) + 0x428) + 8);
      }
      FUN_1801330a5("HoveredWindow->Root: \'%s\'",pcVar20);
      if (*(longlong *)(local_98 + 0x1618) != 0) {
        pcVar23 = *(char **)(*(longlong *)(local_98 + 0x1618) + 8);
      }
      FUN_1801330a5("HoveredWindowUnderMovingWindow: \'%s\'",pcVar23);
      if (*(undefined4 **)(local_98 + 0x2bc8) == (undefined4 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = **(undefined4 **)(local_98 + 0x2bc8);
      }
      FUN_1801330a5("HoveredDockNode: 0x%08X",uVar12);
      if (*(longlong *)(local_98 + 0x1628) == 0) {
        pcVar20 = "NULL";
      }
      else {
        pcVar20 = *(char **)(*(longlong *)(local_98 + 0x1628) + 8);
      }
      FUN_1801330a5("MovingWindow: \'%s\'",pcVar20);
      lVar10 = local_98;
      if (*(undefined4 **)(local_98 + 0x2198) == (undefined4 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = **(undefined4 **)(local_98 + 0x2198);
      }
      FUN_1801330a5("MouseViewport: 0x%08X (UserHovered 0x%08X, LastHovered 0x%08X)",
                    **(undefined4 **)(local_98 + 0x2190),*(undefined4 *)(local_98 + 0x134),uVar12);
      FUN_18011a002(0);
      FUN_1801330a5("ITEMS");
      FUN_180119fae(0);
      in_stack_fffffffffffffdb0 = (char *)FUN_18012a105(*(undefined4 *)(lVar10 + 0x169c));
      uVar8 = CONCAT44(uVar21,(uint)*(byte *)(lVar10 + 0x1689));
      FUN_1801330a5("ActiveId: 0x%08X/0x%08X (%.2f sec), AllowOverlap: %d, Source: %s",
                    *(undefined4 *)(lVar10 + 0x167c),*(undefined4 *)(lVar10 + 0x16a8),
                    (double)*(float *)(lVar10 + 0x1684),uVar8,in_stack_fffffffffffffdb0);
      FUN_180129d64(*(undefined4 *)(lVar10 + 0x167c));
      pcVar23 = "NULL";
      pcVar20 = "NULL";
      if (*(longlong *)(lVar10 + 0x16a0) != 0) {
        pcVar20 = *(char **)(*(longlong *)(lVar10 + 0x16a0) + 8);
      }
      FUN_1801330a5("ActiveIdWindow: \'%s\'",pcVar20);
      lVar10 = local_98;
      FUN_1801330a5("ActiveIdUsing: AllKeyboardKeys: %d, NavDirMask: %X",
                    *(undefined1 *)(local_98 + 0x1f94),*(undefined4 *)(local_98 + 0x1f90));
      FUN_1801330a5("HoveredId: 0x%08X (%.2f sec), AllowOverlap: %d",
                    *(undefined4 *)(lVar10 + 0x1668),(double)*(float *)(lVar10 + 0x1670),
                    *(undefined1 *)(lVar10 + 0x1678),uVar8,in_stack_fffffffffffffdb0);
      uVar21 = (undefined4)((ulonglong)uVar8 >> 0x20);
      FUN_1801330a5("HoverItemDelayId: 0x%08X, Timer: %.2f, ClearTimer: %.2f",
                    *(undefined4 *)(lVar10 + 0x2680),(double)*(float *)(lVar10 + 0x2688),
                    (double)*(float *)(lVar10 + 0x268c));
      in_stack_fffffffffffffda8 = (char *)CONCAT44(uVar21,*(undefined4 *)(lVar10 + 0x2440));
      FUN_1801330a5("DragDrop: %d, SourceId = 0x%08X, Payload \"%s\" (%d bytes)",
                    *(undefined1 *)(lVar10 + 0x2428),*(undefined4 *)(lVar10 + 0x2444),
                    lVar10 + 0x2450,in_stack_fffffffffffffda8);
      FUN_180129d64(*(undefined4 *)(lVar10 + 0x2444));
      FUN_18011a002(0);
      FUN_1801330a5("NAV,FOCUS");
      FUN_180119fae(0);
      if (*(longlong *)(lVar10 + 0x2200) != 0) {
        pcVar23 = *(char **)(*(longlong *)(lVar10 + 0x2200) + 8);
      }
      FUN_1801330a5("NavWindow: \'%s\'",pcVar23);
      lVar10 = local_98;
      FUN_1801330a5("NavId: 0x%08X, NavLayer: %d",*(undefined4 *)(local_98 + 0x21f8),
                    *(undefined4 *)(local_98 + 0x220c));
      FUN_180129d64(*(undefined4 *)(lVar10 + 0x21f8));
      uVar8 = FUN_18012a105(*(undefined4 *)(lVar10 + 0x2250));
      FUN_1801330a5("NavInputSource: %s",uVar8);
      FUN_1801330a5("NavLastValidSelectionUserData = %lld (0x%llX)",*(undefined8 *)(lVar10 + 0x2258)
                    ,*(undefined8 *)(lVar10 + 0x2258));
      FUN_1801330a5("NavActive: %d, NavVisible: %d",*(undefined1 *)(lVar10 + 0xed),
                    *(undefined1 *)(lVar10 + 0xee));
      FUN_1801330a5("NavActivateId/DownId/PressedId: %08X/%08X/%08X",
                    *(undefined4 *)(lVar10 + 0x2214),*(undefined4 *)(lVar10 + 0x2218),
                    *(undefined4 *)(lVar10 + 0x221c));
      FUN_1801330a5("NavActivateFlags: %04X",*(undefined4 *)(lVar10 + 0x2220));
      FUN_1801330a5("NavCursorVisible: %d, NavHighlightItemUnderNav: %d",
                    *(undefined1 *)(lVar10 + 0x21f4),*(undefined1 *)(lVar10 + 0x21f5));
      FUN_1801330a5("NavFocusScopeId = 0x%08X",*(undefined4 *)(lVar10 + 0x2208));
      FUN_1801330a5("NavFocusRoute[] = ");
      if (0 < (longlong)*(int *)(lVar10 + 0x2228)) {
        uVar17 = (longlong)*(int *)(lVar10 + 0x2228) + 1;
        do {
          lVar28 = *(longlong *)(lVar10 + 0x2230);
          FUN_180119893(0,0);
          FUN_1801330a5("0x%08X/",*(undefined4 *)(lVar28 + -0x10 + uVar17 * 8));
          lVar28 = FUN_1801118dd(*(undefined4 *)(lVar28 + -0xc + uVar17 * 8));
          FUN_18011ab06("In window \"%s\"",*(undefined8 *)(lVar28 + 8));
          uVar17 = uVar17 - 1;
        } while (1 < uVar17);
      }
      if (*(longlong *)(lVar10 + 0x23e8) == 0) {
        pcVar20 = "NULL";
      }
      else {
        pcVar20 = *(char **)(*(longlong *)(lVar10 + 0x23e8) + 8);
      }
      FUN_1801330a5("NavWindowingTarget: \'%s\'",pcVar20);
      FUN_18011a002(0);
      FUN_18014d7a9();
    }
    if (((*(char *)(local_98 + 0x2b26) != '\0') || (*(char *)(local_98 + 0x2b27) == '\x01')) &&
       (iVar19 = *(int *)(local_98 + 0x15a8), (longlong)iVar19 != 0)) {
      lVar10 = *(longlong *)(local_98 + 0x15b0);
      lVar28 = 0;
      do {
        lVar27 = *(longlong *)(lVar10 + lVar28);
        if (*(char *)(lVar27 + 0x10a) == '\x01') {
          uVar8 = FUN_180103228(*(undefined8 *)(lVar27 + 0x48));
          uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
          if (*(char *)(local_98 + 0x2b26) == '\x01') {
            FUN_1801280c2(&local_158,lVar27,*local_d0);
            in_stack_fffffffffffffdb8 =
                 (char *)((ulonglong)in_stack_fffffffffffffdb8 & 0xffffffff00000000);
            in_stack_fffffffffffffda8 =
                 (char *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffff00000000);
            in_stack_fffffffffffffdb0 = (char *)CONCAT44(uVar21,0x3f800000);
            FUN_180192c0a(uVar8,&local_158,&uStack_150,0xff8000ff,in_stack_fffffffffffffda8,
                          in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8);
          }
          if ((*(char *)(local_98 + 0x2b27) == '\x01') && ((*(byte *)(lVar27 + 0x17) & 1) == 0)) {
            FUN_1800fead5(&local_158,0x20,&DAT_18036b4b0,(int)*(short *)(lVar27 + 0x11e));
            fVar30 = (float)FUN_180116c08();
            local_c0[0] = CONCAT44(fVar30 + (float)((ulonglong)*(undefined8 *)(lVar27 + 0x60) >>
                                                   0x20),
                                   fVar30 + (float)*(undefined8 *)(lVar27 + 0x60));
            in_stack_fffffffffffffdb0 =
                 (char *)((ulonglong)in_stack_fffffffffffffdb0 & 0xffffffff00000000);
            FUN_180192d20(uVar8,lVar27 + 0x60,local_c0,0xff6464c8,
                          (ulonglong)in_stack_fffffffffffffda8 & 0xffffffff00000000,
                          in_stack_fffffffffffffdb0);
            in_stack_fffffffffffffda8 = (char *)0x0;
            FUN_1801945d2(uVar8,lVar27 + 0x60,0xffffffff,&local_158,0);
          }
        }
        lVar28 = lVar28 + 8;
      } while ((longlong)iVar19 * 8 != lVar28);
    }
    uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
    if ((*(char *)(local_98 + 0x2b28) == '\x01') && (0 < *(int *)(local_98 + 0x2528))) {
      lVar10 = 0;
      do {
        lVar28 = (longlong)*(int *)(*(longlong *)(local_98 + 0x2530) + 8 + lVar10 * 0x10);
        if (((lVar28 != -1) && (*(longlong *)(local_98 + 0x2520) != 0)) &&
           (lVar28 = *(longlong *)(local_98 + 0x2520) + lVar28 * 0x250,
           *(int *)(local_98 + 4) + -1 <= *(int *)(lVar28 + 0x68))) {
          uVar8 = FUN_180103228(*(undefined8 *)(*(longlong *)(lVar28 + 0x180) + 0x48));
          uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
          if (*local_a8 < 6) {
            FUN_180128186(&local_158,lVar28,*local_a8,0xffffffff);
            in_stack_fffffffffffffdb8 =
                 (char *)((ulonglong)in_stack_fffffffffffffdb8 & 0xffffffff00000000);
            in_stack_fffffffffffffda8 =
                 (char *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffff00000000);
            in_stack_fffffffffffffdb0 = (char *)CONCAT44(uVar21,0x3f800000);
            FUN_180192c0a(uVar8,&local_158,&uStack_150,0xff8000ff,in_stack_fffffffffffffda8,
                          in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8);
          }
          else if (0 < *(int *)(lVar28 + 0x6c)) {
            iVar19 = 0;
            do {
              uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
              FUN_180128186(&local_158,lVar28,*local_a8,iVar19);
              bVar29 = iVar19 == *(short *)(lVar28 + 0x20a);
              uVar25 = 0xff8000ff;
              if (bVar29) {
                uVar25 = 0xff80ffff;
              }
              in_stack_fffffffffffffdb8 =
                   (char *)((ulonglong)in_stack_fffffffffffffdb8 & 0xffffffff00000000);
              in_stack_fffffffffffffda8 =
                   (char *)((ulonglong)in_stack_fffffffffffffda8 & 0xffffffff00000000);
              in_stack_fffffffffffffdb0 =
                   (char *)CONCAT44(uVar21,*(undefined4 *)(&DAT_1802de9b8 + (ulonglong)bVar29 * 4));
              FUN_180192c0a(uVar8,&local_158,&uStack_150,uVar25,in_stack_fffffffffffffda8,
                            in_stack_fffffffffffffdb0,in_stack_fffffffffffffdb8);
              iVar19 = iVar19 + 1;
            } while (iVar19 < *(int *)(lVar28 + 0x6c));
          }
        }
        uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffdb0 >> 0x20);
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(local_98 + 0x2528));
    }
    if (((*(char *)(local_98 + 0x2b2d) == '\x01') && (*(char *)(local_98 + 0x138) == '\x01')) &&
       (puVar18 = *(undefined4 **)(local_98 + 0x2bc8), puVar18 != (undefined4 *)0x0)) {
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_158 = 0;
      uStack_150 = 0;
      if (*(longlong *)(puVar18 + 0x24) == 0) {
        uVar8 = FUN_18010f8ee();
      }
      else {
        uVar8 = *(undefined8 *)(*(longlong *)(puVar18 + 0x24) + 0x48);
      }
      uVar8 = FUN_180103228(uVar8);
      pcVar20 = " *CentralNode*";
      if (((uint)puVar18[4] >> 0xb & 1) == 0) {
        pcVar20 = "";
      }
      iVar19 = FUN_1800fead5(&local_158,0x40,"DockId: %X%s\n",*puVar18,pcVar20);
      lVar10 = (longlong)iVar19;
      iVar19 = FUN_1800fead5((longlong)&local_158 + lVar10,0x40 - lVar10,"WindowClass: %08X\n",
                             puVar18[0x1a]);
      lVar28 = (longlong)&local_158 + lVar10 + (longlong)iVar19;
      lVar10 = iVar19 + lVar10;
      iVar19 = FUN_1800fead5(lVar28,0x40 - lVar10,"Size: (%.0f, %.0f)\n",
                             (double)(float)puVar18[0x14],(double)(float)puVar18[0x15]);
      dVar32 = (double)(float)puVar18[0x17];
      FUN_1800fead5(lVar28 + iVar19,0x40 - (lVar10 + iVar19),"SizeRef: (%.0f, %.0f)\n",
                    (double)(float)puVar18[0x16],dVar32);
      iVar19 = -1;
      puVar11 = puVar18;
      do {
        puVar11 = *(undefined4 **)(puVar11 + 6);
        iVar19 = iVar19 + 1;
      } while (puVar11 != (undefined4 *)0x0);
      fVar33 = (float)iVar19 * DAT_1802dbb3c;
      fVar30 = (float)*(undefined8 *)(puVar18 + 0x12);
      fVar31 = (float)((ulonglong)*(undefined8 *)(puVar18 + 0x12) >> 0x20);
      local_c0[0] = CONCAT44(((float)((ulonglong)*(undefined8 *)(puVar18 + 0x14) >> 0x20) + fVar31)
                             - fVar33,((float)*(undefined8 *)(puVar18 + 0x14) + fVar30) - fVar33);
      local_a0 = CONCAT44(fVar31 + fVar33,fVar30 + fVar33);
      uVar17 = (ulonglong)dVar32 & 0xffffffff00000000;
      uVar38 = CONCAT44(uVar21,0x3f800000);
      FUN_180192c0a(uVar8,&local_a0,local_c0,0xff6464c8,uVar17,uVar38,
                    (ulonglong)in_stack_fffffffffffffdb8 & 0xffffffff00000000);
      fVar30 = (float)*(undefined8 *)(puVar18 + 0x12) + fVar33;
      fVar33 = (float)((ulonglong)*(undefined8 *)(puVar18 + 0x12) >> 0x20) + fVar33;
      local_c0[0] = CONCAT44(fVar33,fVar30);
      uVar17 = CONCAT44((int)(uVar17 >> 0x20),0xbf800000);
      FUN_1801023ca(&local_b0,&local_158,0,0,uVar17);
      local_a0 = CONCAT44((float)((ulonglong)local_b0 >> 0x20) + fVar33 + DAT_1802dc280._4_4_,
                          (float)local_b0 + fVar30 + (float)DAT_1802dc280);
      local_160 = CONCAT44(fVar33 + DAT_1802de550._4_4_,fVar30 + (float)DAT_1802de550);
      FUN_180192d20(uVar8,&local_160,&local_a0,0xff6464c8,uVar17 & 0xffffffff00000000,
                    uVar38 & 0xffffffff00000000);
      FUN_180193c2c(uVar8,0,0,local_c0,0xffffffff,&local_158,0,
                    (ulonglong)in_stack_fffffffffffffdc0 & 0xffffffff00000000,0);
    }
    FUN_18010f900();
    return;
  }
  FUN_18010f900();
  return;
}

