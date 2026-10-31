/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012a280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18012a280(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  bool bVar16;
  char *pcVar17;
  byte bVar18;
  char *pcVar19;
  char *pcVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined8 local_68;
  ulonglong local_60;
  
  lVar21 = DAT_180419160;
  local_60 = DAT_180402640 ^ (ulonglong)auStack_c8;
  if (param_1 == 0) {
    FUN_180133606("%s: NULL",param_2);
  }
  else {
    bVar22 = param_1 == *(longlong *)(DAT_180419160 + 0x2200);
    pcVar17 = "";
    if (*(char *)(param_1 + 0x10a) == '\0') {
      uVar14 = FUN_18010136d(1);
      FUN_1801014f9(0,uVar14);
      local_a8 = *(char **)(param_1 + 8);
      local_a0 = " *Inactive*";
      cVar9 = FUN_18014d00f(param_2,bVar22,"%s \'%s\'%s",param_2);
      FUN_180101625(1);
      FUN_18010759c(0);
    }
    else {
      local_a8 = *(char **)(param_1 + 8);
      local_a0 = "";
      cVar9 = FUN_18014d00f(param_2,bVar22,"%s \'%s\'%s",param_2);
      cVar10 = FUN_18010759c(0);
      if (cVar10 != '\0') {
        uVar14 = FUN_180103228(*(undefined8 *)(param_1 + 0x48));
        local_68 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20) +
                            (float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20),
                            (float)*(undefined8 *)(param_1 + 0x68) +
                            (float)*(undefined8 *)(param_1 + 0x60));
        local_98 = (char *)((ulonglong)local_98 & 0xffffffff00000000);
        local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
        local_a0 = (char *)CONCAT44(local_a0._4_4_,0x3f800000);
        FUN_180192c0a(uVar14,param_1 + 0x60,&local_68,0xff00ffff);
      }
    }
    if (cVar9 != '\0') {
      if (*(char *)(param_1 + 0x494) == '\x01') {
        FUN_18013320f("Note: some memory buffers have been compacted/freed.");
      }
      if ((*(char *)(lVar21 + 0xb4) == '\x01') &&
         (cVar9 = FUN_180129e69("**DebugBreak**","in Begin()"), cVar9 != '\0')) {
        *(undefined4 *)(lVar21 + 0x1600) = *(undefined4 *)(param_1 + 0x10);
      }
      uVar5 = *(uint *)(param_1 + 0x14);
      FUN_1801284ac(param_1,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 800),
                    "DrawList");
      local_88 = (char *)(double)*(float *)(param_1 + 0x84);
      local_90 = (char *)(double)*(float *)(param_1 + 0x80);
      local_98 = (char *)(double)*(float *)(param_1 + 0x7c);
      local_a0 = (char *)(double)*(float *)(param_1 + 0x78);
      local_a8 = (char *)(double)*(float *)(param_1 + 0x6c);
      FUN_180133606("Pos: (%.1f,%.1f), Size: (%.1f,%.1f), ContentSize (%.1f,%.1f) Ideal (%.1f,%.1f)"
                    ,(double)*(float *)(param_1 + 0x60),(double)*(float *)(param_1 + 100),
                    (double)*(float *)(param_1 + 0x68));
      local_78 = "AlwaysAutoResize";
      if ((uVar5 & 0x40) == 0) {
        local_78 = "";
      }
      auVar25._0_4_ = -(uint)((uVar5 & _DAT_1802dea90) == 0);
      auVar25._4_4_ = -(uint)((uVar5 & _UNK_1802dea94) == 0);
      auVar25._8_4_ = -(uint)((uVar5 & _UNK_1802dea98) == 0);
      auVar25._12_4_ = -(uint)((uVar5 & _UNK_1802dea9c) == 0);
      auVar24._0_4_ = -(uint)((_DAT_1802dea80 & uVar5) == 0);
      auVar24._4_4_ = -(uint)((_UNK_1802dea84 & uVar5) == 0);
      auVar24._8_4_ = -(uint)((_UNK_1802dea88 & uVar5) == 0);
      auVar24._12_4_ = -(uint)((_UNK_1802dea8c & uVar5) == 0);
      auVar25 = packssdw(auVar24,auVar25);
      auVar25 = packsswb(auVar25,auVar25);
      bVar18 = SUB161(auVar25 >> 7,0) & 1;
      local_80 = "NoNavInputs";
      if ((SUB161(auVar25 >> 0x3f,0) & 1) != 0) {
        local_80 = "";
      }
      local_88 = "NoMouseInputs";
      if ((SUB161(auVar25 >> 0x37,0) & 1) != 0) {
        local_88 = "";
      }
      local_90 = "NoSavedSettings ";
      if ((SUB161(auVar25 >> 0x2f,0) & 1) != 0) {
        local_90 = "";
      }
      local_98 = "ChildMenu ";
      if ((SUB161(auVar25 >> 0x27,0) & 1) != 0) {
        local_98 = "";
      }
      local_a0 = "Modal ";
      if ((SUB161(auVar25 >> 0x1f,0) & 1) != 0) {
        local_a0 = "";
      }
      local_a8 = "Popup ";
      if ((SUB161(auVar25 >> 0x17,0) & 1) != 0) {
        local_a8 = "";
      }
      pcVar20 = "Tooltip ";
      if ((SUB161(auVar25 >> 0xf,0) & 1) != 0) {
        pcVar20 = "";
      }
      pcVar19 = "Child ";
      if (bVar18 != 0) {
        pcVar19 = "";
      }
      uVar11 = FUN_180133606("Flags: 0x%08X (%s%s%s%s%s%s%s%s%s..)",uVar5,pcVar19,pcVar20);
      if (bVar18 == 0) {
        uVar5 = *(uint *)(param_1 + 0x1c);
        auVar23._0_4_ = -(uint)((uVar5 & _DAT_1802deaa0) == 0);
        auVar23._4_4_ = -(uint)((uVar5 & _UNK_1802deaa4) == 0);
        auVar23._8_4_ = -(uint)((uVar5 & _UNK_1802deaa8) == 0);
        auVar23._12_4_ = -(uint)((uVar5 & _UNK_1802deaac) == 0);
        uVar12 = movmskps(uVar11,auVar23);
        local_a0 = "NavFlattened ";
        if ((uVar12 & 8) != 0) {
          local_a0 = "";
        }
        local_a8 = "ResizeY ";
        if ((uVar12 & 4) != 0) {
          local_a8 = "";
        }
        pcVar20 = "ResizeX ";
        if ((uVar12 & 2) != 0) {
          pcVar20 = "";
        }
        pcVar19 = "Borders ";
        if ((uVar12 & 1) != 0) {
          pcVar19 = "";
        }
        FUN_180133606("ChildFlags: 0x%08X (%s%s%s%s..)",uVar5,pcVar19,pcVar20);
      }
      FUN_180133606("WindowClassId: 0x%08X",*(undefined4 *)(param_1 + 0x20));
      local_98 = "Y";
      if (*(char *)(param_1 + 0x105) == '\0') {
        local_98 = "";
      }
      local_a0 = "X";
      if (*(char *)(param_1 + 0x104) == '\0') {
        local_a0 = "";
      }
      local_a8 = (char *)(double)*(float *)(param_1 + 0xe0);
      FUN_180133606("Scroll: (%.2f/%.2f,%.2f/%.2f) Scrollbar:%s%s",
                    (double)*(float *)(param_1 + 0xd4),(double)*(float *)(param_1 + 0xdc),
                    (double)*(float *)(param_1 + 0xd8));
      bVar18 = *(byte *)(param_1 + 0x10a);
      if (((*(byte *)(param_1 + 0x109) | bVar18) & 1) == 0) {
        iVar13 = -1;
        bVar18 = 0;
      }
      else {
        iVar13 = (int)*(short *)(param_1 + 0x11e);
      }
      local_a8._0_4_ = iVar13;
      FUN_180133606("Active: %d/%d, WriteAccessed: %d, BeginOrderWithinContext: %d",
                    *(byte *)(param_1 + 0x109),bVar18,*(undefined1 *)(param_1 + 0x10b));
      local_a0 = (char *)CONCAT44(local_a0._4_4_,(uint)*(byte *)(param_1 + 0x10e));
      local_a8 = (char *)CONCAT44(local_a8._4_4_,(int)*(char *)(param_1 + 300));
      FUN_180133606("Appearing: %d, Hidden: %d (CanSkip %d Cannot %d), SkipItems: %d",
                    *(undefined1 *)(param_1 + 0x110),*(undefined1 *)(param_1 + 0x111),
                    (int)*(char *)(param_1 + 299));
      lVar21 = 0;
      bVar22 = true;
      do {
        bVar16 = bVar22;
        lVar15 = lVar21 * 0x10;
        fVar1 = *(float *)(param_1 + 0x458 + lVar15);
        fVar2 = *(float *)(param_1 + 0x45c + lVar15);
        fVar3 = *(float *)(param_1 + 0x460 + lVar15);
        fVar4 = *(float *)(param_1 + 0x464 + lVar15);
        if ((fVar1 < fVar3) || (fVar2 < fVar4)) {
          local_98 = (char *)(double)fVar4;
          local_a0 = (char *)(double)fVar3;
          local_a8 = (char *)(double)fVar2;
          FUN_180133606("NavLastIds[%d]: 0x%08X at +(%.1f,%.1f)(%.1f,%.1f)",lVar21,
                        *(undefined4 *)(param_1 + 0x450 + lVar21 * 4),(double)fVar1);
        }
        else {
          FUN_180133606("NavLastIds[%d]: 0x%08X",lVar21,
                        *(undefined4 *)(param_1 + 0x450 + lVar21 * 4));
        }
        FUN_180129d64(*(undefined4 *)(param_1 + 0x450 + lVar21 * 4));
        dVar8 = DAT_1802deab0;
        fVar1 = DAT_1802de564;
        lVar21 = 1;
        bVar22 = false;
      } while (bVar16);
      lVar21 = 0;
      bVar22 = true;
      do {
        bVar16 = bVar22;
        fVar2 = *(float *)(param_1 + 0x47c + lVar21 * 8);
        dVar6 = (double)fVar2;
        if ((fVar2 == fVar1) && (!NAN(fVar2) && !NAN(fVar1))) {
          dVar6 = dVar8;
        }
        fVar2 = *(float *)(param_1 + 0x478 + lVar21 * 8);
        dVar7 = (double)fVar2;
        if ((fVar2 == fVar1) && (!NAN(fVar2) && !NAN(fVar1))) {
          dVar7 = dVar8;
        }
        FUN_180133606("NavPreferredScoringPosRel[%d] = (%.1f,%.1f)",lVar21,dVar7,dVar6);
        lVar21 = 1;
        bVar22 = false;
      } while (bVar16);
      if (*(longlong *)(param_1 + 0x448) == 0) {
        pcVar20 = "NULL";
      }
      else {
        pcVar20 = *(char **)(*(longlong *)(param_1 + 0x448) + 8);
      }
      FUN_180133606("NavLayersActiveMask: %X, NavLastChildNavWindow: %s",
                    (int)*(short *)(param_1 + 0x1b4),pcVar20);
      local_a0 = (char *)(double)*(float *)(param_1 + 0x58);
      local_a8 = (char *)(double)*(float *)(param_1 + 0x54);
      if (*(char *)(param_1 + 0x108) != '\0') {
        pcVar17 = " (Owned)";
      }
      iVar13 = -1;
      uVar11 = 0xffffffff;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x80);
      }
      FUN_180133606("Viewport: %d%s, ViewportId: 0x%08X, ViewportPos: (%.1f,%.1f)",uVar11,pcVar17,
                    *(undefined4 *)(param_1 + 0x50));
      if (*(longlong *)(param_1 + 0x48) != 0) {
        iVar13 = (int)*(short *)(*(longlong *)(param_1 + 0x48) + 0xaa);
      }
      FUN_180133606("ViewportMonitor: %d",iVar13);
      local_a8 = (char *)(CONCAT44(local_a8._4_4_,(uint)(*(byte *)(param_1 + 0x495) >> 2)) &
                         0xffffffff00000001);
      FUN_180133606("DockId: 0x%04X, DockOrder: %d, Act: %d, Vis: %d",
                    *(undefined4 *)(param_1 + 0x4d0),(int)*(short *)(param_1 + 0x496),
                    *(byte *)(param_1 + 0x495) & 1);
      lVar21 = *(longlong *)(param_1 + 0x4c8);
      if (*(longlong *)(param_1 + 0x4c0) != 0 || lVar21 != 0) {
        pcVar17 = "DockNodeAsHost";
        if (lVar21 == 0) {
          pcVar17 = "DockNode";
          lVar21 = *(longlong *)(param_1 + 0x4c0);
        }
        FUN_1801298a6(lVar21,pcVar17);
      }
      lVar21 = param_1;
      if (*(longlong *)(param_1 + 0x418) != param_1) {
        FUN_18012a280(*(longlong *)(param_1 + 0x418),"RootWindow");
        lVar21 = *(longlong *)(param_1 + 0x418);
      }
      if (*(longlong *)(param_1 + 0x428) != lVar21) {
        FUN_18012a280(*(longlong *)(param_1 + 0x428),"RootWindowDockTree");
      }
      if (*(longlong *)(param_1 + 0x408) != 0) {
        FUN_18012a280(*(longlong *)(param_1 + 0x408),"ParentWindow");
      }
      if (*(longlong *)(param_1 + 0x440) != 0) {
        FUN_18012a280(*(longlong *)(param_1 + 0x440),"ParentWindowForFocusRoute");
      }
      if (0 < *(int *)(param_1 + 0x1f0)) {
        FUN_180128360(param_1 + 0x1f0,"ChildWindows");
      }
      if ((0 < *(int *)(param_1 + 0x300)) &&
         (cVar9 = FUN_18014c0b4("Columns","Columns sets (%d)"), cVar9 != '\0')) {
        if ((longlong)*(int *)(param_1 + 0x300) != 0) {
          lVar21 = *(longlong *)(param_1 + 0x308);
          lVar15 = (longlong)*(int *)(param_1 + 0x300) * 0x88;
          do {
            FUN_18012a189(lVar21);
            lVar21 = lVar21 + 0x88;
            lVar15 = lVar15 + -0x88;
          } while (lVar15 != 0);
        }
        FUN_18014d7a9();
      }
      FUN_18012b3a9(param_1 + 0x2f0,"Storage");
      FUN_18014d7a9();
    }
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_c8);
}

