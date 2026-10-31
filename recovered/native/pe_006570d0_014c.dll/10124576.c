/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10124576 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10124576(int param_1,undefined4 param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 extraout_EDX;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  uint local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar12 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  if (param_1 == 0) {
    FUN_1012d551("%s: NULL",param_2);
  }
  else {
    bVar14 = param_1 == *(int *)(DAT_1039d74c + 0x2048);
    if (*(char *)(param_1 + 0xfa) == '\0') {
      uVar5 = FUN_100fcbfd();
      FUN_100fcd80(0,uVar5);
      cVar3 = FUN_10148bd4(param_2,bVar14,"%s \'%s\'%s",param_2,*(undefined4 *)(param_1 + 4),
                           " *Inactive*");
      FUN_100fce8e();
      FUN_10102a1a();
    }
    else {
      cVar3 = FUN_10148bd4(param_2,bVar14,"%s \'%s\'%s",param_2,*(undefined4 *)(param_1 + 4),
                           &DAT_10356101);
      cVar4 = FUN_10102a1a();
      if (cVar4 != '\0') {
        FUN_100fe900();
        local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                            (float)*(undefined8 *)(param_1 + 0x58) +
                            (float)*(undefined8 *)(param_1 + 0x50));
        FUN_1018b762(param_1 + 0x50,&local_1c,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,
                     _UNK_102b8bcc);
      }
    }
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x408) == '\x01') {
        FUN_1012d1be();
      }
      if ((*(char *)(iVar12 + 0xa0) == '\x01') &&
         (cVar3 = FUN_10124192("**DebugBreak**","in Begin()"), cVar3 != '\0')) {
        *(undefined4 *)(iVar12 + 0x14c8) = *(undefined4 *)(param_1 + 8);
      }
      uVar2 = *(uint *)(param_1 + 0xc);
      FUN_10122b20(param_1,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x2e8),
                   "DrawList");
      FUN_1012d551("Pos: (%.1f,%.1f), Size: (%.1f,%.1f), ContentSize (%.1f,%.1f) Ideal (%.1f,%.1f)",
                   (double)*(float *)(param_1 + 0x50),(double)*(float *)(param_1 + 0x54),
                   (double)*(float *)(param_1 + 0x58),(double)*(float *)(param_1 + 0x5c),
                   (double)*(float *)(param_1 + 0x68),(double)*(float *)(param_1 + 0x6c),
                   (double)*(float *)(param_1 + 0x70),(double)*(float *)(param_1 + 0x74));
      local_24 = "AlwaysAutoResize";
      if ((uVar2 & 0x40) == 0) {
        local_24 = "";
      }
      auVar19._0_4_ = -(uint)((uVar2 & _DAT_102b9070) == 0);
      auVar19._4_4_ = -(uint)((uVar2 & _UNK_102b9074) == 0);
      auVar19._8_4_ = -(uint)((uVar2 & _UNK_102b9078) == 0);
      auVar19._12_4_ = -(uint)((uVar2 & _UNK_102b907c) == 0);
      auVar18._0_4_ = -(uint)((_DAT_102b9060 & uVar2) == 0);
      auVar18._4_4_ = -(uint)((_UNK_102b9064 & uVar2) == 0);
      auVar18._8_4_ = -(uint)((_UNK_102b9068 & uVar2) == 0);
      auVar18._12_4_ = -(uint)((_UNK_102b906c & uVar2) == 0);
      auVar19 = packssdw(auVar18,auVar19);
      auVar19 = packsswb(auVar19,auVar19);
      local_28 = "NoNavInputs";
      if ((SUB161(auVar19 >> 0x3f,0) & 1) != 0) {
        local_28 = "";
      }
      local_2c = "NoMouseInputs";
      if ((SUB161(auVar19 >> 0x37,0) & 1) != 0) {
        local_2c = "";
      }
      local_30 = "NoSavedSettings ";
      if ((SUB161(auVar19 >> 0x2f,0) & 1) != 0) {
        local_30 = "";
      }
      local_34 = "ChildMenu ";
      if ((SUB161(auVar19 >> 0x27,0) & 1) != 0) {
        local_34 = "";
      }
      local_20 = uVar2;
      FUN_1012d551();
      if ((SUB161(auVar19 >> 7,0) & 1) == 0) {
        uVar2 = *(uint *)(param_1 + 0x14);
        auVar16._0_4_ = -(uint)((uVar2 & _DAT_102b9080) == 0);
        auVar16._4_4_ = -(uint)((uVar2 & _UNK_102b9084) == 0);
        auVar16._8_4_ = -(uint)((uVar2 & _UNK_102b9088) == 0);
        auVar16._12_4_ = -(uint)((uVar2 & _UNK_102b908c) == 0);
        uVar7 = movmskps(extraout_EDX,auVar16);
        pcVar6 = "NavFlattened ";
        if ((uVar7 & 8) != 0) {
          pcVar6 = "";
        }
        pcVar11 = "ResizeY ";
        if ((uVar7 & 4) != 0) {
          pcVar11 = "";
        }
        pcVar10 = "ResizeX ";
        if ((uVar7 & 2) != 0) {
          pcVar10 = "";
        }
        pcVar8 = "Borders ";
        if ((uVar7 & 1) != 0) {
          pcVar8 = "";
        }
        FUN_1012d551("ChildFlags: 0x%08X (%s%s%s%s..)",uVar2,pcVar8,pcVar10,pcVar11,pcVar6);
      }
      FUN_1012d551("WindowClassId: 0x%08X",*(undefined4 *)(param_1 + 0x18));
      FUN_1012d551();
      iVar12 = 0;
      FUN_1012d551();
      FUN_1012d551("Appearing: %d, Hidden: %d (CanSkip %d Cannot %d), SkipItems: %d",
                   *(undefined1 *)(param_1 + 0x100),*(undefined1 *)(param_1 + 0x101),
                   (int)*(char *)(param_1 + 0x11b),(int)*(char *)(param_1 + 0x11c),
                   *(undefined1 *)(param_1 + 0xfe));
      bVar14 = true;
      do {
        bVar9 = bVar14;
        iVar12 = iVar12 * 0x10;
        if ((*(float *)(param_1 + 0x3cc + iVar12) < *(float *)(param_1 + 0x3d4 + iVar12)) ||
           (*(float *)(param_1 + 0x3d0 + iVar12) < *(float *)(param_1 + 0x3d8 + iVar12))) {
          FUN_1012d551();
        }
        else {
          FUN_1012d551();
        }
        FUN_10124092();
        iVar12 = 1;
        bVar14 = false;
      } while (bVar9);
      iVar12 = 0;
      bVar14 = true;
      do {
        bVar9 = bVar14;
        fVar1 = *(float *)(param_1 + 0x3f0 + iVar12 * 8);
        dVar15 = (double)fVar1;
        if ((fVar1 == DAT_102b89b4) && (!NAN(fVar1) && !NAN(DAT_102b89b4))) {
          dVar15 = DAT_102b9090;
        }
        fVar1 = *(float *)(param_1 + 0x3ec + iVar12 * 8);
        dVar17 = (double)fVar1;
        if ((fVar1 == DAT_102b89b4) && (!NAN(fVar1) && !NAN(DAT_102b89b4))) {
          dVar17 = DAT_102b9090;
        }
        FUN_1012d551("NavPreferredScoringPosRel[%d] = (%.1f,%.1f)",iVar12,dVar17,dVar15);
        iVar12 = 1;
        bVar14 = false;
      } while (bVar9);
      FUN_1012d551();
      pcVar6 = "";
      if (*(char *)(param_1 + 0xf8) != '\0') {
        pcVar6 = " (Owned)";
      }
      iVar13 = -1;
      iVar12 = iVar13;
      if (*(int *)(param_1 + 0x3c) != 0) {
        iVar12 = *(int *)(*(int *)(param_1 + 0x3c) + 0x5c);
      }
      FUN_1012d551("Viewport: %d%s, ViewportId: 0x%08X, ViewportPos: (%.1f,%.1f)",iVar12,pcVar6,
                   *(undefined4 *)(param_1 + 0x40),(double)*(float *)(param_1 + 0x44),
                   (double)*(float *)(param_1 + 0x48));
      if (*(int *)(param_1 + 0x3c) != 0) {
        iVar13 = (int)*(short *)(*(int *)(param_1 + 0x3c) + 0x86);
      }
      FUN_1012d551("ViewportMonitor: %d",iVar13);
      FUN_1012d551();
      iVar12 = *(int *)(param_1 + 0x434);
      if (*(int *)(param_1 + 0x430) != 0 || iVar12 != 0) {
        pcVar6 = "DockNodeAsHost";
        if (iVar12 == 0) {
          pcVar6 = "DockNode";
          iVar12 = *(int *)(param_1 + 0x430);
        }
        FUN_10123c59(iVar12,pcVar6);
      }
      iVar12 = param_1;
      if (*(int *)(param_1 + 0x3a8) != param_1) {
        FUN_10124576(*(int *)(param_1 + 0x3a8),"RootWindow");
        iVar12 = *(int *)(param_1 + 0x3a8);
      }
      if (*(int *)(param_1 + 0x3b0) != iVar12) {
        FUN_10124576(*(int *)(param_1 + 0x3b0),"RootWindowDockTree");
      }
      if (*(int *)(param_1 + 0x3a0) != 0) {
        FUN_10124576(*(int *)(param_1 + 0x3a0),"ParentWindow");
      }
      if (*(int *)(param_1 + 0x3bc) != 0) {
        FUN_10124576(*(int *)(param_1 + 0x3bc),"ParentWindowForFocusRoute");
      }
      if (0 < *(int *)(param_1 + 0x1d8)) {
        FUN_10122a05(param_1 + 0x1d8,"ChildWindows");
      }
      if ((0 < *(int *)(param_1 + 0x2cc)) && (cVar3 = FUN_10147bc2(), cVar3 != '\0')) {
        if (*(int *)(param_1 + 0x2cc) != 0) {
          iVar12 = *(int *)(param_1 + 0x2cc) * 0x7c;
          do {
            FUN_1012448b();
            iVar12 = iVar12 + -0x7c;
          } while (iVar12 != 0);
        }
        FUN_10149387();
      }
      FUN_1012559f(param_1 + 0x2c0,"Storage");
      FUN_10149387();
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

