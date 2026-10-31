/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016d9a1 */

void FUN_18016d9a1(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auStack_478 [32];
  char *local_458;
  char *local_450;
  double local_448;
  double local_440;
  char *local_438;
  uint local_430;
  uint local_428;
  uint local_420;
  uint local_418;
  uint local_410;
  uint local_408;
  uint local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  int local_380;
  char *local_378;
  undefined4 local_370;
  uint local_368;
  char *local_360;
  char *local_358;
  char *local_350;
  char local_341;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  int local_330;
  float local_32c;
  undefined4 *local_328;
  double local_320;
  double local_318;
  char *local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined1 local_2f8 [520];
  ulonglong local_f0;
  
  lVar12 = DAT_180419160;
  local_f0 = DAT_180402640 ^ (ulonglong)auStack_478;
  iVar4 = param_1[0x1a];
  iVar13 = *(int *)(DAT_180419160 + 4) + -2;
  if (iVar4 < iVar13) {
    uVar9 = FUN_18010136d(1);
    FUN_1801014f9(0,uVar9);
    local_450 = " *Inactive*";
  }
  else {
    local_450 = "";
  }
  local_458 = *(char **)(*(longlong *)(param_1 + 0x60) + 8);
  cVar7 = FUN_18014c1c1(param_1,"Table 0x%08X (%d columns, in \'%s\')%s",*param_1,param_1[0x1b]);
  if (iVar4 < iVar13) {
    FUN_180101625(1);
  }
  cVar8 = FUN_18010759c(0);
  if (cVar8 != '\0') {
    uVar9 = FUN_180103228(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48));
    local_448 = (double)((ulonglong)local_448 & 0xffffffff00000000);
    local_458 = (char *)((ulonglong)local_458 & 0xffffffff00000000);
    local_450 = (char *)CONCAT44(local_450._4_4_,0x3f800000);
    FUN_180192c0a(uVar9,param_1 + 0x3c,param_1 + 0x3e,0xff00ffff);
  }
  cVar8 = FUN_180110c74();
  if ((cVar8 != '\0') && (*(short *)((longlong)param_1 + 0x20a) != -1)) {
    uVar9 = FUN_180103228(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x48));
    FUN_180110cdb(local_2f8);
    FUN_180110cc6(&local_308);
    local_448 = (double)((ulonglong)local_448 & 0xffffffff00000000);
    local_458 = (char *)((ulonglong)local_458 & 0xffffffff00000000);
    local_450 = (char *)CONCAT44(local_450._4_4_,0x3f800000);
    FUN_180192c0a(uVar9,&local_308,local_2f8,0xff00ffff);
  }
  if (cVar7 != '\0') {
    if (0 < (short)*(ushort *)(param_1 + 0x1e)) {
      FUN_1801330a5("** %d instances of same table! Some data below will refer to last instance.",
                    *(ushort *)(param_1 + 0x1e) + 1);
    }
    if (*(char *)(lVar12 + 0xb4) == '\x01') {
      cVar7 = FUN_180129e69("**DebugBreak**","in BeginTable()");
      if (cVar7 != '\0') {
        *(undefined4 *)(lVar12 + 0x2500) = *param_1;
      }
      FUN_180119893(0,DAT_1802bb8e0);
    }
    local_341 = FUN_18013425f("Clear settings");
    local_450 = (char *)FUN_18016e293(param_1[1]);
    local_458 = (char *)(double)((float)param_1[0x3f] - (float)param_1[0x3d]);
    FUN_180133606("OuterRect: Pos: (%.1f,%.1f) Size: (%.1f,%.1f) Sizing: \'%s\'",
                  (double)(float)param_1[0x3c],(double)(float)param_1[0x3d],
                  (double)((float)param_1[0x3e] - (float)param_1[0x3c]));
    fVar15 = (float)param_1[0x33];
    local_458 = " (auto)";
    if (fVar15 != 0.0) {
      local_458 = "";
    }
    if (NAN(fVar15)) {
      local_458 = "";
    }
    FUN_180133606("ColumnsGivenWidth: %.1f, ColumnsAutoFitWidth: %.1f, InnerWidth: %.1f%s",
                  (double)(float)param_1[0x34],(double)(float)param_1[0x35],(double)fVar15);
    local_458 = (char *)(double)(float)param_1[0x2f];
    FUN_180133606("CellPaddingX: %.1f, CellSpacingX: %.1f/%.1f, OuterPaddingX: %.1f",
                  (double)(float)param_1[0x30],(double)(float)param_1[0x31],
                  (double)(float)param_1[0x32]);
    FUN_180133606("HoveredColumnBody: %d, HoveredColumnBorder: %d",
                  (int)*(short *)((longlong)param_1 + 0x20a),(int)*(short *)(param_1 + 0x83));
    FUN_180133606("ResizedColumn: %d, HeldHeaderColumn: %d, ReorderColumn: %d",
                  (int)*(short *)(param_1 + 0x85),(int)*(short *)(param_1 + 0x86),
                  (int)*(short *)((longlong)param_1 + 0x21a));
    if (-1 < *(short *)(param_1 + 0x1e)) {
      lVar12 = -0x18;
      uVar14 = 0;
      do {
        puVar10 = param_1 + 0x6a;
        if (uVar14 != 0) {
          puVar10 = (undefined4 *)(*(longlong *)(param_1 + 0x72) + lVar12);
        }
        FUN_180133606("Instance %d: HoveredRow: %d, LastOuterHeight: %.2f",uVar14 & 0xffffffff,
                      puVar10[4],(double)(float)puVar10[1]);
        lVar12 = lVar12 + 0x18;
        bVar6 = (longlong)uVar14 < (longlong)*(short *)(param_1 + 0x1e);
        uVar14 = uVar14 + 1;
      } while (bVar6);
    }
    if (0 < (longlong)(int)param_1[0x1b]) {
      fVar15 = 0.0;
      lVar12 = 0;
      do {
        if ((*(byte *)(*(longlong *)(param_1 + 6) + lVar12) & 8) != 0) {
          fVar15 = fVar15 + *(float *)(*(longlong *)(param_1 + 6) + 0x1c + lVar12);
        }
        lVar12 = lVar12 + 0x74;
      } while ((longlong)(int)param_1[0x1b] * 0x74 - lVar12 != 0);
      lVar12 = 0x71;
      uVar14 = 0;
      local_328 = param_1;
      do {
        lVar5 = *(longlong *)(param_1 + 6);
        local_450 = (char *)FUN_18016a483(param_1,uVar14 & 0xffffffff);
        param_1 = local_328;
        local_368 = *(uint *)(lVar5 + -0x71 + lVar12);
        local_350 = "NoResize ";
        local_378 = "";
        if ((local_368 & 0x20) == 0) {
          local_350 = "";
        }
        local_358 = "WidthFixed ";
        if ((local_368 & 0x10) == 0) {
          local_358 = "";
        }
        local_360 = "WidthStretch ";
        if ((local_368 & 8) == 0) {
          local_360 = "";
        }
        bVar11 = *(byte *)(lVar5 + lVar12) & 3;
        if (bVar11 == 2) {
          local_378 = " (Des)";
        }
        if (bVar11 == 1) {
          local_378 = " (Asc)";
        }
        fVar1 = *(float *)(lVar5 + -0x39 + lVar12);
        local_388 = (double)(*(float *)(lVar5 + -0x21 + lVar12) - fVar1);
        local_390 = (double)(*(float *)(lVar5 + -0x25 + lVar12) - fVar1);
        local_398 = (double)(*(float *)(lVar5 + -0x29 + lVar12) - fVar1);
        local_3a0 = (double)(*(float *)(lVar5 + -0x2d + lVar12) - fVar1);
        fVar1 = *(float *)(lVar5 + -0x45 + lVar12);
        local_3b0 = (double)fVar1;
        fVar2 = *(float *)(lVar5 + -0x4d + lVar12);
        local_3a8 = (double)(fVar1 - fVar2);
        local_3b8 = (double)fVar2;
        fVar1 = *(float *)(lVar5 + -0x65 + lVar12);
        fVar2 = *(float *)(lVar5 + -0x69 + lVar12);
        local_3c0 = (double)(fVar1 - fVar2);
        local_3c8 = (double)fVar1;
        local_3d0 = (double)fVar2;
        local_370 = *(undefined4 *)(lVar5 + -0x3d + lVar12);
        fVar3 = *(float *)(lVar5 + -0x55 + lVar12);
        local_380 = (int)*(short *)(lVar5 + -0x13 + lVar12);
        if (0.0 < fVar3) {
          local_3d8 = (double)((fVar3 / fVar15) * DAT_1802dbb34);
        }
        else {
          local_3d8 = 0.0;
        }
        local_3e0 = (double)fVar3;
        local_3e8 = (double)*(float *)(lVar5 + -0x5d + lVar12);
        local_3f0 = (double)*(float *)(lVar5 + -0x61 + lVar12);
        local_3f8 = (double)*(float *)(lVar5 + -0x6d + lVar12);
        local_418 = (uint)*(byte *)(lVar5 + -6 + lVar12);
        local_420 = (uint)*(byte *)(lVar5 + -7 + lVar12);
        local_428 = (uint)*(byte *)(lVar5 + -8 + lVar12);
        local_430 = (uint)*(byte *)(lVar5 + -0xb + lVar12);
        local_438 = "";
        if ((longlong)uVar14 < (longlong)*(short *)(local_328 + 0x8b)) {
          local_438 = " (Frozen)";
        }
        local_440 = (double)(fVar1 - (float)local_328[0x44]);
        local_448 = (double)(fVar2 - (float)local_328[0x44]);
        local_400 = (uint)*(ushort *)(lVar5 + -0xd + lVar12);
        local_408 = (uint)*(ushort *)(lVar5 + -0xf + lVar12);
        local_410 = (uint)*(byte *)(lVar5 + -5 + lVar12);
        local_458 = (char *)CONCAT44(local_458._4_4_,(int)*(short *)(lVar5 + -0x1b + lVar12));
        local_340 = local_430;
        local_33c = local_428;
        local_338 = local_420;
        local_334 = local_418;
        local_330 = local_380;
        local_32c = fVar15;
        local_320 = local_390;
        local_318 = local_388;
        local_310 = local_450;
        FUN_1800fead5(local_2f8,0x200,
                      "Column %d order %d \'%s\': offset %+.2f to %+.2f%s\nEnabled: %d, VisibleX/Y: %d/%d, RequestOutput: %d, SkipItems: %d, DrawChannels: %d,%d\nWidthGiven: %.1f, Request/Auto: %.1f/%.1f, StretchWeight: %.3f (%.1f%%)\nMinX: %.1f, MaxX: %.1f (%+.1f), ClipRect: %.1f to %.1f (+%.1f)\nContentWidth: %.1f,%.1f, HeadersUsed/Ideal %.1f/%.1f\nSort: %d%s, UserID: 0x%08X, Flags: 0x%04X: %s%s%s.."
                      ,uVar14 & 0xffffffff);
        FUN_1801371f5();
        local_308 = 0;
        FUN_1801391f6(local_2f8,0,0,&local_308);
        cVar7 = FUN_18010759c(0);
        if (cVar7 != '\0') {
          local_2fc = param_1[0x3f];
          local_300 = *(undefined4 *)(lVar5 + -0x65 + lVar12);
          local_308 = CONCAT44(param_1[0x3d],*(undefined4 *)(lVar5 + -0x69 + lVar12));
          uVar9 = FUN_180103228();
          local_448 = (double)((ulonglong)local_448 & 0xffffffff00000000);
          local_458 = (char *)((ulonglong)local_458 & 0xffffffff00000000);
          local_450 = (char *)CONCAT44(local_450._4_4_,0x3f800000);
          FUN_180192c0a(uVar9,&local_308,&local_300,0xff00ffff);
        }
        uVar14 = uVar14 + 1;
        lVar12 = lVar12 + 0x74;
        fVar15 = local_32c;
      } while ((longlong)uVar14 < (longlong)(int)param_1[0x1b]);
    }
    lVar12 = FUN_18016ce72(param_1);
    if (lVar12 != 0) {
      FUN_18016e2be(lVar12);
    }
    if (local_341 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x243) = 1;
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_f0 ^ (ulonglong)auStack_478)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_f0 ^ (ulonglong)auStack_478);
}

