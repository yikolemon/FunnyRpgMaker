/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140379900 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140379900(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  short sVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  lVar20 = DAT_14062a630;
  local_c0 = ram0x000140613b10 ^ (ulonglong)auStack_f8;
  lVar13 = *(longlong *)(DAT_14062a630 + 0x24f8);
  if (lVar13 == 0) {
    if (ram0x000140613b10 == (local_c0 ^ (ulonglong)auStack_f8)) {
      FUN_140312b68(
                   "Manager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake === undefined) {\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake = time;\n            }\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake += (time - SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal) * window.__FunnyGame__GlobalSpeedRatio__;\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n            return SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake;\n        };\n    }\n}\nif (SceneManager.determineRepeatNumber) {\n    if (!SceneManager.determineRepeatNumber_Game_Backup) {\n        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;\n        SceneManager.determineRepeatNumber = function (deltaTime) {\n            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
                   );
      return;
    }
    goto LAB_14037a22a;
  }
  if (*(char *)(lVar13 + 0x239) == '\0') {
    FUN_140377b0a(lVar13);
  }
  uVar12 = *(uint *)(lVar13 + 4);
  lVar18 = *(longlong *)(lVar13 + 0x188);
  lVar7 = *(longlong *)(lVar13 + 0x180);
  lVar8 = *(longlong *)(lVar13 + 0x10);
  if (*(char *)(lVar13 + 0x23a) == '\x01') {
    FUN_14037a238(lVar13);
  }
  if (((((uVar12 & 0x20) != 0) && (*(short *)(lVar13 + 0x20a) != -1)) &&
      (cVar10 = FUN_140322114(), cVar10 == '\0')) && (cVar10 = FUN_14032a241(1), cVar10 != '\0')) {
    FUN_14037a822((int)*(short *)(lVar13 + 0x20a));
  }
  if ((longlong)*(short *)(lVar13 + 0x78) == 0) {
    piVar19 = (int *)(lVar13 + 0x1a8);
  }
  else {
    piVar19 = (int *)(*(longlong *)(lVar13 + 0x1c8) + (longlong)*(short *)(lVar13 + 0x78) * 0x18 +
                     -0x18);
  }
  *(undefined8 *)(lVar18 + 0x188) = *(undefined8 *)(lVar8 + 0x60);
  *(undefined8 *)(lVar18 + 0x180) = *(undefined8 *)(lVar8 + 0x68);
  *(undefined8 *)(lVar18 + 0x170) = *(undefined8 *)(lVar8 + 0x70);
  uVar25 = FUN_1404951a0(*(undefined4 *)(lVar13 + 0x80));
  if (lVar18 == lVar7) {
    if ((uVar12 >> 0x11 & 1) == 0) {
      uVar21 = FUN_140313933(*(undefined4 *)(lVar13 + 0xfc),uVar25);
      *(undefined4 *)(lVar13 + 0x10c) = uVar21;
      *(undefined4 *)(lVar13 + 0xfc) = uVar21;
    }
  }
  else {
    *(float *)(lVar18 + 0x174) = (float)uVar25;
  }
  uVar21 = FUN_140313933(*(undefined4 *)(lVar13 + 0x11c),*(undefined4 *)(lVar13 + 0xfc));
  *(undefined4 *)(lVar13 + 0x11c) = uVar21;
  piVar19[1] = (int)(*(float *)(lVar13 + 0xfc) - *(float *)(lVar13 + 0xf4));
  if ((*(uint *)(lVar13 + 4) >> 0x18 & 1) != 0) {
    fVar22 = *(float *)(lVar18 + 0x170);
    if ((longlong)*(short *)(lVar13 + 0x220) != -1) {
      fVar22 = 0.0;
      if ((*(uint *)(lVar13 + 4) >> 10 & 1) != 0) {
        fVar22 = DAT_1404bda40;
      }
      fVar22 = (float)FUN_140313933(*(longlong *)(lVar13 + 0x18),
                                    (*(float *)(*(longlong *)(lVar13 + 0x18) + 0x3c +
                                               (longlong)*(short *)(lVar13 + 0x220) * 0x74) +
                                     *(float *)(lVar13 + 0xc0) + *(float *)(lVar13 + 0xbc)) - fVar22
                                   );
    }
    if (*(short *)(lVar13 + 0x212) != -1) {
      fVar22 = (float)FUN_140313933(fVar22,*(undefined4 *)(lVar13 + 0xe0));
    }
    *(float *)(lVar18 + 0x170) = fVar22 + *(float *)(*(longlong *)(lVar13 + 0x10) + 0xc);
  }
  if ((uVar12 >> 0x14 & 1) == 0) {
    FUN_1403a0c20(*(undefined8 *)(lVar18 + 800));
  }
  lVar16 = *(longlong *)(lVar18 + 800);
  puVar1 = (undefined4 *)
           (*(longlong *)(lVar16 + 0xa8) + -0x10 + (longlong)*(int *)(lVar16 + 0xa0) * 0x10);
  uVar21 = puVar1[1];
  uVar5 = puVar1[2];
  uVar24 = puVar1[3];
  *(undefined4 *)(lVar18 + 0x2b8) = *puVar1;
  *(undefined4 *)(lVar18 + 700) = uVar21;
  *(undefined4 *)(lVar18 + 0x2c0) = uVar5;
  *(undefined4 *)(lVar18 + 0x2c4) = uVar24;
  if ((uVar12 & 0x780) != 0) {
    FUN_14037a886(lVar13);
    lVar16 = *(longlong *)(lVar18 + 800);
  }
  uVar26 = *(undefined8 *)(lVar13 + 0x1a0);
  FUN_1403a6a12(uVar26,lVar16,0);
  if ((*(byte *)(lVar13 + 6) & 0x10) == 0) {
    FUN_14037acf4(lVar13);
  }
  local_d8 = lVar20;
  local_d0 = piVar19;
  FUN_1403a0192(uVar26,*(undefined8 *)(lVar18 + 800));
  if (*(int *)(lVar13 + 0x6c) < 1) {
    uVar26 = 0;
    fVar22 = 0.0;
    fVar27 = 0.0;
  }
  else {
    fVar27 = 0.0;
    uVar17 = 0;
    lVar20 = 0;
    fVar22 = 0.0;
    uVar26 = 0;
    do {
      if ((*(uint *)(*(longlong *)(lVar13 + 0x50) + (uVar17 >> 5 & 0x7ffffff) * 4) >>
           ((uint)uVar17 & 0x1f) & 1) != 0) {
        lVar16 = *(longlong *)(lVar13 + 0x18);
        uVar12 = *(uint *)(lVar16 + lVar20);
        if ((uVar12 & 0x30) == 0x10) {
          fVar23 = *(float *)(lVar16 + 0x10 + lVar20);
        }
        else {
          fVar23 = (float)FUN_140378c8b(lVar13,(uint *)(lVar16 + lVar20));
          uVar12 = *(uint *)(lVar16 + lVar20);
        }
        if ((uVar12 & 0x10) == 0) {
          fVar22 = fVar22 + fVar23;
        }
        else {
          fVar27 = fVar27 + fVar23;
        }
        if ((~uVar12 & 0x28) == 0) {
          uVar26 = FUN_140313933((int)uVar26,
                                 fVar23 / (*(float *)(lVar16 + 0x1c + lVar20) /
                                          *(float *)(lVar13 + 0xd8)));
        }
      }
      uVar17 = uVar17 + 1;
      lVar20 = lVar20 + 0x74;
    } while ((longlong)uVar17 < (longlong)*(int *)(lVar13 + 0x6c));
  }
  fVar23 = *(float *)(lVar13 + 0xc4);
  fVar2 = *(float *)(lVar13 + 200);
  sVar6 = *(short *)(lVar13 + 0x202);
  fVar3 = *(float *)(lVar13 + 0xbc);
  fVar4 = *(float *)(lVar13 + 0xc0);
  fVar22 = (float)FUN_140313933(fVar22,uVar26);
  piVar19 = local_d0;
  lVar20 = local_d8;
  *(float *)(lVar13 + 0xd4) =
       (float)(int)sVar6 * (fVar4 + fVar4) + fVar3 + fVar3 + (float)(sVar6 + -1) * (fVar23 + fVar2)
       + fVar27 + fVar22;
  if ((lVar18 == lVar7) || ((*(uint *)(lVar13 + 4) & 0x1000000) != 0)) {
    if ((((longlong)*(short *)(lVar13 + 0x214) != -1) &&
        ((*(short *)(lVar13 + 0x212) == -1 && (*(char *)(lVar18 + 0x104) == '\x01')))) &&
       (*(short *)(lVar13 + 0x7a) == *(short *)(lVar13 + 0x78))) {
      fVar27 = *(float *)(lVar13 + 0xc0) + *(float *)(lVar13 + 0xc0) + *(float *)(lVar13 + 0xb8);
      fVar22 = *(float *)(*(longlong *)(lVar13 + 0x18) + 0xc +
                         (longlong)*(short *)(lVar13 + 0x214) * 0x74);
      if (*(float *)(lVar13 + 0x120) <= fVar22) {
        if (fVar22 < *(float *)(lVar13 + 0x128) || fVar22 == *(float *)(lVar13 + 0x128))
        goto LAB_140379df1;
        fVar27 = fVar27 + (fVar22 - *(float *)(lVar18 + 0x60));
      }
      else {
        fVar27 = (fVar22 - *(float *)(lVar18 + 0x60)) - fVar27;
      }
      FUN_14032bb57(lVar18,fVar27,DAT_1404bda40);
    }
  }
  else {
    *(undefined4 *)(lVar18 + 0xd4) = 0;
  }
LAB_140379df1:
  if (((longlong)*(short *)(lVar13 + 0x212) != -1) &&
     (*(short *)(lVar13 + 0x78) == *(short *)(lVar13 + 0x7a))) {
    *(float *)(lVar13 + 0xdc) =
         (float)(int)(((((float)(int)(*(float *)(lVar20 + 0x1330) * DAT_1404ed020) +
                        (*(float *)(lVar20 + 0x118) - *(float *)(lVar20 + 0x1694))) -
                       *(float *)(*(longlong *)(lVar13 + 0x18) + 8 +
                                 (longlong)*(short *)(lVar13 + 0x212) * 0x74)) -
                      *(float *)(lVar13 + 0xc4)) -
                     (*(float *)(lVar13 + 0xc0) + *(float *)(lVar13 + 0xc0)));
  }
  if (*(int *)(lVar20 + 0x1680) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(lVar13 + 0x247) ^ 1;
  }
  *(byte *)(lVar13 + 0x248) = bVar11;
  if (*(int *)(*(longlong *)(lVar18 + 0x150) + -4 + (longlong)*(int *)(lVar18 + 0x148) * 4) !=
      *piVar19) {
    FUN_140312b68(
                 "er.determineRepeatNumber_Game_Backup) {\n        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;\n        SceneManager.determineRepeatNumber = function (deltaTime) {\n            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
                 );
  }
  if (*(int *)(lVar7 + 0x248) < *(int *)(lVar8 + 0x80)) {
    FUN_140312b68(
                 "houtMobileSafari_Game_Backup = SceneManager._getTimeInMsWithoutMobileSafari;\n        SceneManager._getTimeInMsWithoutMobileSafari = function () {\n            var time = SceneManager._getTimeInMsWithoutMobileSafari_Game_Backup.apply(this, arguments);\n            if (SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal === undefined || !SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake === undefined) {\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n                SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake = time;\n            }\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake += (time - SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal) * window.__FunnyGame__GlobalSpeedRatio__;\n            SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeReal = time;\n            return SceneManager._getTimeInMsWithoutMobileSafari_Game_LastTimeFake;\n        };\n    }\n}\nif (SceneManager.determineRepeatNumber) {\n    if (!SceneManager.determineRepeatNumber_Game_Backup) {\n        SceneManager.determineRepeatNumber_Game_Backup = SceneManager.determineRepeatNumber;\n        SceneManager.determineRepeatNumber = function (deltaTime) {\n            deltaTime *= window.__FunnyGame__GlobalSpeedRatio__;\n\t\t\treturn SceneManager.determineRepeatNumber_Game_Backup.apply(this, arguments);\n\t\t};\n    }\n}\n"
                 );
  }
  if (0 < *(short *)(lVar13 + 0x78)) {
    FUN_14032981f();
  }
  FUN_14032981f();
  uVar21 = *(undefined4 *)(lVar7 + 0x170);
  uVar5 = *(undefined4 *)(lVar7 + 0x174);
  uVar26 = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)(lVar18 + 0x298) = *(undefined8 *)(lVar8 + 0x40);
  *(undefined8 *)(lVar18 + 0x2a0) = uVar26;
  uVar26 = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 *)(lVar18 + 0x2a8) = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(lVar18 + 0x2b0) = uVar26;
  *(undefined1 *)(lVar18 + 0x10e) = *(undefined1 *)(lVar13 + 0x24c);
  *(undefined8 *)(lVar7 + 0x158) = *(undefined8 *)(lVar13 + 0xf0);
  *(undefined4 *)(lVar7 + 0x23c) = *(undefined4 *)(lVar8 + 0x7c);
  *(undefined4 *)(lVar7 + 0x248) = *(undefined4 *)(lVar8 + 0x80);
  *(undefined4 *)(lVar7 + 0x1a0) = *(undefined4 *)(lVar8 + 0x78);
  if (lVar18 == lVar7) {
    *(int *)(lVar18 + 0x1e0) = *(int *)(lVar18 + 0x1e0) + -1;
    local_c8 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar13 + 0xf8) >> 0x20) -
                        (float)((ulonglong)*(undefined8 *)(lVar13 + 0xf0) >> 0x20),
                        (float)*(undefined8 *)(lVar13 + 0xf8) -
                        (float)*(undefined8 *)(lVar13 + 0xf0));
    FUN_1403229e4();
    FUN_140322b86(lVar13 + 0xf0,0,0,0);
  }
  else {
    uVar9 = (ushort)*(undefined4 *)(lVar18 + 0x1b4);
    *(ushort *)(lVar18 + 0x1b4) = uVar9 | (ushort)(1 << (*(byte *)(lVar13 + 0x238) & 0x1f));
    *(undefined8 *)(lVar20 + 0x24f8) = 0;
    FUN_140322809();
    *(longlong *)(lVar20 + 0x24f8) = lVar13;
    *(ushort *)(lVar18 + 0x1b4) = uVar9;
  }
  if ((*(byte *)(lVar13 + 6) & 1) == 0) {
    fVar22 = 0.0;
    if (*(float *)(lVar8 + 0x20) <= 0.0) {
      if (lVar18 != lVar7) {
        fVar22 = *(float *)(lVar18 + 0xfc);
      }
      fVar22 = *(float *)(lVar13 + 0xf0) + *(float *)(lVar13 + 0xd4) +
               *(float *)(*(longlong *)(lVar13 + 0x10) + 0xc) + fVar22;
      uVar24 = FUN_140313933(*(undefined4 *)(lVar7 + 0x178),fVar22 - *(float *)(lVar8 + 0x20));
      *(undefined4 *)(lVar7 + 0x178) = uVar24;
      FUN_1403000b2(*(undefined4 *)(lVar13 + 0xf8),fVar22);
    }
  }
  uVar21 = FUN_140313933(uVar21);
  *(undefined4 *)(lVar7 + 0x170) = uVar21;
  fVar22 = 0.0;
  if (*(float *)(lVar8 + 0x24) <= 0.0) {
    pfVar15 = (float *)(lVar18 + 0x16c);
    if (lVar18 == lVar7) {
      pfVar15 = (float *)(lVar13 + 0x104);
    }
    if (lVar18 != lVar7) {
      fVar22 = *(float *)(lVar18 + 0x100);
    }
    fVar22 = ((float)uVar25 - *pfVar15) + *(float *)(lVar13 + 0xf4) + fVar22;
    uVar21 = FUN_140313933(*(undefined4 *)(lVar7 + 0x17c),fVar22 - *(float *)(lVar8 + 0x24));
    *(undefined4 *)(lVar7 + 0x17c) = uVar21;
    uVar17 = FUN_1403000b2(*(undefined4 *)(lVar13 + 0xfc),fVar22);
  }
  else {
    uVar17 = (ulonglong)*(uint *)(lVar13 + 0xfc);
  }
  uVar21 = FUN_140313933(uVar5,uVar17);
  *(undefined4 *)(lVar7 + 0x174) = uVar21;
  if (*(char *)(lVar13 + 0x241) == '\x01') {
    FUN_14037b4cb(lVar13);
  }
  *(undefined1 *)(lVar13 + 0x23b) = 0;
  iVar14 = *(int *)(lVar20 + 0x2504);
  *(int *)(lVar20 + 0x2504) = iVar14 + -1;
  if ((longlong)iVar14 < 2) {
LAB_14037a1b5:
    *(undefined8 *)(lVar20 + 0x24f8) = 0;
    iVar14 = -1;
  }
  else {
    lVar13 = (longlong)iVar14 * 0x88 + *(longlong *)(lVar20 + 0x2510);
    piVar19 = (int *)(lVar13 + -0x110);
    if ((piVar19 == (int *)0x0) || (*piVar19 != *(int *)(lVar7 + 0x10))) goto LAB_14037a1b5;
    lVar18 = (longlong)*(int *)(lVar13 + -0x10c) * 0x250 + *(longlong *)(lVar20 + 0x2520);
    *(longlong *)(lVar20 + 0x24f8) = lVar18;
    iVar14 = -1;
    if (*(longlong *)(lVar20 + 0x2520) != 0) {
      *(int **)(lVar18 + 0x10) = piVar19;
      *(longlong *)(*(longlong *)(lVar20 + 0x24f8) + 0x1a0) = lVar13 + -0xe8;
      if (*(longlong *)(lVar20 + 0x24f8) != 0) {
        iVar14 = (int)((ulonglong)(*(longlong *)(lVar20 + 0x24f8) - *(longlong *)(lVar20 + 0x2520))
                      >> 4) * -0x6eb3e453;
      }
    }
  }
  *(int *)(lVar7 + 0x210) = iVar14;
  FUN_14032d607();
  if (ram0x000140613b10 == (local_c0 ^ (ulonglong)auStack_f8)) {
    return;
  }
LAB_14037a22a:
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_c0 ^ (ulonglong)auStack_f8);
}

