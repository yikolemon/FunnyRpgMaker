/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10168604 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10168604(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  byte *pbVar11;
  byte bVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_2b4 [3];
  char local_2b1;
  float local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  int local_294;
  int local_290;
  undefined4 local_28c;
  uint local_288;
  char *local_284;
  char *local_280;
  char *local_27c;
  undefined4 local_278;
  double local_274;
  double local_26c;
  double local_264;
  double local_25c;
  double local_254;
  double local_24c;
  double local_244;
  double local_23c;
  double local_234;
  double local_22c;
  undefined8 local_224;
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_214 [512];
  uint local_14;
  
  iVar15 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_2b4;
  iVar10 = param_1[0xf];
  iVar14 = *(int *)(DAT_1039d74c + 4) + -2;
  pcVar7 = "";
  if (iVar10 < iVar14) {
    uVar8 = FUN_100fcbfd(1);
    FUN_100fcd80(0,uVar8);
    pcVar7 = " *Inactive*";
  }
  cVar5 = FUN_10147c9d(param_1,"Table 0x%08X (%d columns, in \'%s\')%s",*param_1,param_1[0x10],
                       *(undefined4 *)(param_1[0x55] + 4),pcVar7);
  if (iVar10 < iVar14) {
    FUN_100fce8e(1);
  }
  cVar6 = FUN_10102a1a(0);
  if (cVar6 != '\0') {
    FUN_100fe900(*(undefined4 *)(param_1[0x55] + 0x3c));
    FUN_1018b762(param_1 + 0x31,param_1 + 0x33,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,
                 _UNK_102b8bcc);
  }
  cVar6 = FUN_1010bfe8();
  if ((cVar6 != '\0') && (*(short *)((int)param_1 + 0x1be) != -1)) {
    FUN_100fe900(*(undefined4 *)(param_1[0x55] + 0x3c));
    FUN_1010c049(local_214);
    FUN_1010c032(&local_224);
    FUN_1018b762(&local_224,local_214,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,_UNK_102b8bcc);
  }
  if (cVar5 != '\0') {
    if (0 < (short)*(ushort *)(param_1 + 0x13)) {
      FUN_1012d08c("** %d instances of same table! Some data below will refer to last instance.",
                   *(ushort *)(param_1 + 0x13) + 1);
    }
    if (*(char *)(iVar15 + 0xa0) == '\x01') {
      cVar5 = FUN_10124192("**DebugBreak**","in BeginTable()");
      if (cVar5 != '\0') {
        *(undefined4 *)(iVar15 + 0x230c) = *param_1;
      }
      FUN_10114a0e(0,0xbf800000);
    }
    local_2b1 = FUN_1012e1ca("Clear settings");
    FUN_10168eba();
    FUN_1012d551();
    fVar1 = (float)param_1[0x28];
    pcVar7 = " (auto)";
    if (fVar1 != 0.0) {
      pcVar7 = "";
    }
    if (NAN(fVar1)) {
      pcVar7 = "";
    }
    FUN_1012d551("ColumnsGivenWidth: %.1f, ColumnsAutoFitWidth: %.1f, InnerWidth: %.1f%s",
                 (double)(float)param_1[0x29],(double)(float)param_1[0x2a],(double)fVar1,pcVar7);
    FUN_1012d551("CellPaddingX: %.1f, CellSpacingX: %.1f/%.1f, OuterPaddingX: %.1f",
                 (double)(float)param_1[0x25],(double)(float)param_1[0x26],
                 (double)(float)param_1[0x27],(double)(float)param_1[0x24]);
    FUN_1012d551("HoveredColumnBody: %d, HoveredColumnBorder: %d",
                 (int)*(short *)((int)param_1 + 0x1be),(int)*(short *)(param_1 + 0x70));
    FUN_1012d551("ResizedColumn: %d, HeldHeaderColumn: %d, ReorderColumn: %d",
                 (int)*(short *)(param_1 + 0x72),(int)*(short *)(param_1 + 0x73),
                 (int)*(short *)((int)param_1 + 0x1ce));
    if (-1 < *(short *)(param_1 + 0x13)) {
      iVar15 = -0x18;
      iVar10 = 0;
      do {
        puVar9 = param_1 + 0x5b;
        if (iVar10 != 0) {
          puVar9 = (undefined4 *)(param_1[99] + iVar15);
        }
        FUN_1012d551("Instance %d: HoveredRow: %d, LastOuterHeight: %.2f",iVar10,puVar9[4],
                     (double)(float)puVar9[1]);
        iVar15 = iVar15 + 0x18;
        bVar4 = iVar10 < *(short *)(param_1 + 0x13);
        iVar10 = iVar10 + 1;
      } while (bVar4);
    }
    iVar10 = param_1[0x10];
    if (0 < iVar10) {
      pbVar11 = (byte *)param_1[4];
      local_2b0 = 0.0;
      do {
        if ((*pbVar11 & 8) != 0) {
          local_2b0 = local_2b0 + *(float *)(pbVar11 + 0x1c);
        }
        pbVar11 = pbVar11 + 0x74;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar10 = 0x71;
      iVar15 = 0;
      do {
        iVar14 = param_1[4];
        local_278 = FUN_10165174(param_1,iVar15);
        local_288 = *(uint *)(iVar14 + -0x71 + iVar10);
        local_27c = "NoResize ";
        pcVar7 = "";
        if ((local_288 & 0x20) == 0) {
          local_27c = "";
        }
        local_280 = "WidthFixed ";
        if ((local_288 & 0x10) == 0) {
          local_280 = "";
        }
        local_284 = "WidthStretch ";
        if ((local_288 & 8) == 0) {
          local_284 = "";
        }
        bVar12 = *(byte *)(iVar14 + iVar10) & 3;
        if (bVar12 == 2) {
          pcVar7 = " (Des)";
        }
        if (bVar12 == 1) {
          pcVar7 = " (Asc)";
        }
        fVar1 = *(float *)(iVar14 + -0x39 + iVar10);
        local_22c = (double)(*(float *)(iVar14 + -0x21 + iVar10) - fVar1);
        local_234 = (double)(*(float *)(iVar14 + -0x25 + iVar10) - fVar1);
        local_23c = (double)(*(float *)(iVar14 + -0x29 + iVar10) - fVar1);
        local_244 = (double)(*(float *)(iVar14 + -0x2d + iVar10) - fVar1);
        local_28c = *(undefined4 *)(iVar14 + -0x3d + iVar10);
        fVar1 = *(float *)(iVar14 + -0x45 + iVar10);
        local_24c = (double)fVar1;
        fVar2 = *(float *)(iVar14 + -0x4d + iVar10);
        local_264 = (double)(fVar1 - fVar2);
        local_25c = (double)fVar2;
        fVar1 = *(float *)(iVar14 + -0x65 + iVar10);
        fVar2 = *(float *)(iVar14 + -0x69 + iVar10);
        local_26c = (double)(fVar1 - fVar2);
        fVar3 = *(float *)(iVar14 + -0x55 + iVar10);
        local_290 = (int)*(short *)(iVar14 + -0x13 + iVar10);
        local_254 = (double)fVar2;
        if (0.0 < fVar3) {
          local_274 = (double)((fVar3 / local_2b0) * DAT_102b8c10);
        }
        else {
          local_274 = 0.0;
        }
        local_298 = (uint)*(ushort *)(iVar14 + -0xd + iVar10);
        local_29c = (uint)*(ushort *)(iVar14 + -0xf + iVar10);
        local_2a0 = (uint)*(byte *)(iVar14 + -5 + iVar10);
        local_2a4 = (uint)*(byte *)(iVar14 + -6 + iVar10);
        local_2a8 = (uint)*(byte *)(iVar14 + -7 + iVar10);
        local_2ac = (uint)*(byte *)(iVar14 + -8 + iVar10);
        pcVar13 = "";
        if (iVar15 < *(short *)(param_1 + 0x78)) {
          pcVar13 = " (Frozen)";
        }
        local_294 = (int)*(short *)(iVar14 + -0x1b + iVar10);
        FUN_100fa4b1(local_214,0x200,
                     "Column %d order %d \'%s\': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s.."
                     ,iVar15,local_294,local_278,(double)(fVar2 - (float)param_1[0x39]),
                     (double)(fVar1 - (float)param_1[0x39]),pcVar13,
                     *(undefined1 *)(iVar14 + -0xb + iVar10),local_2ac,local_2a8,local_2a4,local_2a0
                     ,local_29c,local_298,(double)*(float *)(iVar14 + -0x6d + iVar10),
                     (double)*(float *)(iVar14 + -0x61 + iVar10),
                     (double)*(float *)(iVar14 + -0x5d + iVar10),(double)fVar3,local_274,local_254,
                     (double)fVar1,local_26c,local_25c,local_24c,local_264,local_244,local_23c,
                     local_234,local_22c,local_290,pcVar7,local_28c,local_288,local_284,local_280,
                     local_27c);
        FUN_101316d8();
        local_224 = 0;
        FUN_10133727(local_214,0,0,&local_224);
        cVar5 = FUN_10102a1a(0);
        if (cVar5 != '\0') {
          local_218 = param_1[0x34];
          local_21c = *(undefined4 *)(iVar14 + -0x65 + iVar10);
          local_224 = CONCAT44(param_1[0x32],*(undefined4 *)(iVar14 + -0x69 + iVar10));
          FUN_100fe900(*(undefined4 *)(param_1[0x55] + 0x3c));
          FUN_1018b762(&local_224,&local_21c,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,_UNK_102b8bcc
                      );
        }
        iVar15 = iVar15 + 1;
        iVar10 = iVar10 + 0x74;
      } while (iVar15 < (int)param_1[0x10]);
    }
    iVar10 = FUN_10167bbb(param_1);
    if (iVar10 != 0) {
      FUN_10168edd(iVar10);
    }
    if (local_2b1 != '\0') {
      *(undefined1 *)((int)param_1 + 0x1f7) = 1;
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_2b4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

