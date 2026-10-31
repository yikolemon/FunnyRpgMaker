/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014fb74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1014fb74(int param_1,char *param_2,char *param_3,uint param_4,int param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  byte bVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  size_t sVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  byte bVar28;
  float10 fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_f8;
  byte local_6a;
  byte local_69;
  float local_68;
  float local_64;
  undefined8 local_60;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  uint local_18;
  
  iVar20 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (*(char *)(param_1 + 0x7b) == '\x01') {
    local_20 = *(undefined8 *)(DAT_1039d74c + 0x1e78);
    local_30 = *(undefined4 *)(DAT_1039d74c + 0x1e68);
    uStack_2c = *(undefined4 *)(DAT_1039d74c + 0x1e6c);
    uStack_28 = *(undefined4 *)(DAT_1039d74c + 0x1e70);
    uStack_24 = *(undefined4 *)(DAT_1039d74c + 0x1e74);
    local_50 = *(float *)(DAT_1039d74c + 0x1e48);
    fStack_4c = *(float *)(DAT_1039d74c + 0x1e4c);
    uStack_48 = *(undefined8 *)(DAT_1039d74c + 0x1e50);
    local_40 = *(undefined4 *)(DAT_1039d74c + 0x1e58);
    uStack_3c = *(undefined4 *)(DAT_1039d74c + 0x1e5c);
    uStack_38 = *(undefined4 *)(DAT_1039d74c + 0x1e60);
    uStack_34 = *(undefined4 *)(DAT_1039d74c + 0x1e64);
    FUN_1014e829();
    *(undefined8 *)(iVar20 + 0x1e78) = local_20;
    *(undefined4 *)(iVar20 + 0x1e68) = local_30;
    *(undefined4 *)(iVar20 + 0x1e6c) = uStack_2c;
    *(undefined4 *)(iVar20 + 0x1e70) = uStack_28;
    *(undefined4 *)(iVar20 + 0x1e74) = uStack_24;
    *(undefined4 *)(iVar20 + 0x1e58) = local_40;
    *(undefined4 *)(iVar20 + 0x1e5c) = uStack_3c;
    *(undefined4 *)(iVar20 + 0x1e60) = uStack_38;
    *(undefined4 *)(iVar20 + 0x1e64) = uStack_34;
    *(float *)(iVar20 + 0x1e48) = local_50;
    *(float *)(iVar20 + 0x1e4c) = fStack_4c;
    *(float *)(iVar20 + 0x1e50) = (float)uStack_48;
    *(float *)(iVar20 + 0x1e54) = uStack_48._4_4_;
  }
  iVar3 = *(int *)(iVar20 + 0x14cc);
  if (*(char *)(iVar3 + 0xfe) == '\0') {
    iVar14 = FUN_1014f899();
    if ((param_3 == (char *)0x0) || (*param_3 != '\0')) {
      uVar24 = param_4 | 0x100000;
      if ((param_4 & 0x100000) != 0 || param_3 != (char *)0x0) {
        uVar24 = param_4;
      }
      piVar15 = (int *)FUN_1014f645(param_1,iVar14);
      piVar23 = piVar15;
      if (piVar15 == (int *)0x0) {
        iVar16 = *(int *)(param_1 + 4);
        if (iVar16 == *(int *)(param_1 + 8)) {
          if (iVar16 == 0) {
            iVar22 = 8;
          }
          else {
            iVar22 = iVar16 / 2 + iVar16;
          }
          iVar25 = iVar16 + 1;
          if (iVar16 + 1 < iVar22) {
            iVar25 = iVar22;
          }
          iVar22 = FUN_100fa1fa(iVar25 * 0x30);
          if (*(int *)(param_1 + 0xc) != 0) {
            FUN_1025b2d0(iVar22,*(int *)(param_1 + 0xc),*(int *)(param_1 + 4) * 0x30);
            FUN_100fa2cb(*(undefined4 *)(param_1 + 0xc));
          }
          *(int *)(param_1 + 0xc) = iVar22;
          *(int *)(param_1 + 8) = iVar25;
          iVar16 = *(int *)(param_1 + 4);
        }
        else {
          iVar22 = *(int *)(param_1 + 0xc);
        }
        iVar16 = iVar16 * 0x30;
        *(undefined4 *)(iVar22 + 8 + iVar16) = 0;
        *(undefined8 *)(iVar22 + iVar16) = 0;
        *(undefined4 *)(iVar22 + 0xc + iVar16) = 0xffffffff;
        *(undefined4 *)(iVar22 + 0x10 + iVar16) = 0xffffffff;
        *(undefined8 *)(iVar22 + 0x14 + iVar16) = 0;
        uVar18 = _UNK_102b966c;
        uVar5 = _UNK_102b9668;
        uVar4 = _UNK_102b9664;
        puVar1 = (undefined4 *)(iVar22 + 0x1c + iVar16);
        *puVar1 = _DAT_102b9660;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar18;
        *(undefined4 *)(iVar22 + 0x2c + iVar16) = 0;
        iVar16 = *(int *)(param_1 + 4);
        iVar22 = *(int *)(param_1 + 0xc);
        *(int *)(param_1 + 4) = iVar16 + 1;
        iVar16 = iVar16 * 0x30;
        *(int *)(iVar16 + iVar22) = iVar14;
        piVar23 = (int *)(iVar22 + iVar16);
        *(undefined1 *)(param_1 + 0x7d) = 1;
      }
      *(short *)(param_1 + 0x82) =
           (short)((uint)((int)piVar23 - *(int *)(param_1 + 0xc)) >> 4) * -0x5555;
      bVar21 = param_3 != (char *)0x0 && (param_4 >> 0x14 & 1) == 0;
      FUN_10150b5b(&local_58,param_2,(byte)uVar24 & 1 | bVar21);
      piVar23[8] = -0x40800000;
      if ((*(byte *)(iVar20 + 0x1e48) & 1) != 0) {
        local_58 = *(float *)(iVar20 + 0x1e60);
        piVar23[8] = (int)local_58;
      }
      fVar30 = local_58;
      if (piVar15 == (int *)0x0) {
        fVar29 = (float10)FUN_100fdbca(0x3f800000,local_58);
        piVar23[6] = (int)(float)fVar29;
      }
      piVar23[7] = (int)fVar30;
      sVar6 = (short)*(undefined4 *)(param_1 + 0x80);
      *(short *)(param_1 + 0x80) = sVar6 + 1;
      *(short *)(piVar23 + 10) = sVar6;
      iVar16 = *(int *)(iVar20 + 4);
      if ((uVar24 & 1) == 0) {
        bVar27 = false;
      }
      else {
        bVar27 = (*(byte *)(piVar23 + 1) & 1) == 0;
      }
      iVar22 = *(int *)(param_1 + 0x2c);
      iVar25 = piVar23[3];
      uVar19 = *(uint *)(param_1 + 0x10);
      piVar23[3] = iVar16;
      piVar23[1] = uVar24;
      piVar23[2] = param_5;
      if (param_5 == 0) {
        piVar23[9] = *(int *)(param_1 + 0x98) + -1 + (uint)(*(int *)(param_1 + 0x98) == 0);
        sVar17 = _strlen(param_2);
        FUN_100fb8e0(param_2,param_2 + sVar17 + 1);
      }
      else {
        piVar23[9] = -1;
      }
      iVar22 = iVar22 + 1;
      iVar25 = iVar25 + 1;
      if ((uVar24 >> 0x15 & 1) == 0) {
        if ((((iVar25 < iVar16) && ((*(byte *)(param_1 + 0x10) & 2) != 0)) &&
            (*(int *)(param_1 + 0x1c) == 0)) &&
           ((iVar16 <= iVar22 || (*(int *)(param_1 + 0x18) == 0)))) {
          FUN_1014f88b(param_1,piVar23);
        }
        if (((uVar24 & 2) != 0) && (*(int *)(param_1 + 0x18) != iVar14)) {
          FUN_1014f88b(param_1,piVar23);
        }
      }
      if (*(int *)(param_1 + 0x24) == iVar14) {
        *(undefined1 *)(param_1 + 0x7c) = 1;
        bVar28 = true;
      }
      else {
        bVar28 = false;
        if (((param_5 == 0) && (*(int *)(param_1 + 0x18) == 0)) && (iVar22 < iVar16)) {
          if (*(int *)(param_1 + 4) == 1) {
            bVar28 = (*(byte *)(param_1 + 0x10) & 2) == 0;
          }
          else {
            bVar28 = false;
          }
        }
      }
      if ((iVar25 < iVar16) && (piVar15 == (int *)0x0 || iVar16 <= iVar22)) {
        local_50 = 0.0;
        fStack_4c = 0.0;
        uStack_48 = 0;
        FUN_1010c9d8(&local_50,iVar14,0,2);
        bVar28 = (uVar24 >> 0x15 & 1) == 0 & bVar28;
        goto LAB_10150a9f;
      }
      if (*(int *)(param_1 + 0x18) == iVar14) {
        piVar23[4] = *(int *)(iVar20 + 4);
      }
      uVar4 = *(undefined4 *)(iVar3 + 0x144);
      uVar5 = *(undefined4 *)(iVar3 + 0x148);
      uVar26 = piVar23[1];
      local_58 = (float)piVar23[6];
      local_50 = (float)piVar23[5];
      if ((uVar26 & 0xc0) == 0) {
        local_50 = (float)(int)(local_50 - *(float *)(param_1 + 0x54));
      }
      local_50 = local_50 + *(float *)(param_1 + 0x30);
      fStack_4c = *(float *)(param_1 + 0x34) + 0.0;
      *(float *)(iVar3 + 0x144) = local_50;
      *(float *)(iVar3 + 0x148) = fStack_4c;
      fVar30 = local_58 + local_50;
      local_54 = local_54 + fStack_4c;
      uStack_48 = CONCAT44(local_54,fVar30);
      if ((uVar26 & 0xc0) == 0) {
        fVar31 = *(float *)(param_1 + 0x68);
        if ((*(float *)(param_1 + 100) <= local_50) && (fVar30 <= fVar31)) goto LAB_1015006d;
        local_60 = CONCAT44(local_54,fVar31);
        fVar30 = fStack_4c + DAT_102b8a50;
        fVar29 = (float10)FUN_10112cc4(local_50,*(float *)(param_1 + 100),fVar31);
        local_68 = (float)fVar29;
        local_64 = fVar30;
        FUN_1010a52a(&local_68,&local_60,1);
        fVar30 = (float)uStack_48;
        local_54 = (float)((ulonglong)uStack_48 >> 0x20);
        bVar9 = true;
      }
      else {
LAB_1015006d:
        bVar9 = false;
      }
      uVar2 = *(undefined8 *)(iVar3 + 0x15c);
      local_60 = CONCAT44(local_54 - fStack_4c,fVar30 - local_50);
      FUN_1010c810(&local_60,*(undefined4 *)(iVar20 + 0xd10));
      *(undefined8 *)(iVar3 + 0x15c) = uVar2;
      cVar12 = FUN_1010c9d8(&local_50,iVar14,0,0);
      if (cVar12 == '\0') {
        if (bVar9) {
          FUN_1010a588();
        }
        *(undefined4 *)(iVar3 + 0x144) = uVar4;
        *(undefined4 *)(iVar3 + 0x148) = uVar5;
        goto LAB_10150a9f;
      }
      uVar26 = (uVar24 >> 0x11 & 0x10) + 0x1010;
      if (*(char *)(iVar20 + 0x2250) == '\x01') {
        if (*(int *)(iVar20 + 0x2270) == -1) {
          uVar26 = uVar26 | 0x200;
        }
        else {
          iVar22 = _strcmp("_IMWINDOW",(char *)(iVar20 + 0x2274));
          if (iVar22 != 0) {
            uVar26 = uVar26 | 0x200;
          }
        }
      }
      if ((uVar24 >> 0x16 & 1) == 0) {
        bVar13 = FUN_1012d77e(&local_50,iVar14,&local_69,&local_6a,uVar26);
        if ((bVar13 != 0) && ((uVar24 & 0x200000) == 0)) {
          FUN_1014f88b(param_1,piVar23);
          bVar13 = 1;
        }
      }
      else {
        bVar13 = 0;
        local_6a = 0;
        local_69 = 0;
      }
      bVar10 = local_6a;
      if (local_6a == 1 && param_5 != 0) {
        if ((*(int *)(iVar20 + 0x1528) == iVar14) && (*(char *)(iVar20 + 0x1534) == '\x01')) {
          *(int *)(iVar20 + 0x154c) = param_5;
        }
LAB_101502d6:
        iVar22 = *(int *)(param_5 + 0x430);
        if (iVar22 == 0) goto LAB_10150326;
        if ((((*(int *)(iVar22 + 0x18) != 0) || ((*(uint *)(iVar22 + 0x10) & 0x400) != 0)) ||
            (local_6a == 0)) ||
           ((*(int *)(iVar22 + 0x24) != 1 || (cVar12 = FUN_1010378f(0,0), cVar12 == '\0'))))
        goto LAB_10150328;
        FUN_10103445(param_5);
      }
      else {
        if (param_5 != 0) goto LAB_101502d6;
LAB_10150326:
        iVar22 = 0;
LAB_10150328:
        if ((bVar10 != 0) &&
           ((iVar16 <= iVar25 && (cVar12 = FUN_1010378f(0,0xbf800000), cVar12 != '\0')))) {
          if (*(char *)(iVar20 + 0x2250) != '\0') goto LAB_10150371;
          if ((param_5 != 0) || ((*(uint *)(param_1 + 0x10) & 1) != 0)) {
            if ((0.0 <= *(float *)(iVar20 + 0xd8)) ||
               (fVar30 = *(float *)(iVar20 + 0xe4), local_50 <= fVar30)) {
              if (0.0 < *(float *)(iVar20 + 0xd8)) {
                fVar30 = *(float *)(iVar20 + 0xe4);
                if ((float)uStack_48 < fVar30) {
                  local_f8 = fVar30 - (float)uStack_48;
                  bVar7 = true;
                  bVar8 = false;
                  goto LAB_10150586;
                }
              }
LAB_10150371:
              local_f8 = 0.0;
              bVar8 = false;
              bVar7 = false;
            }
            else {
              local_f8 = local_50 - fVar30;
              bVar8 = true;
              bVar7 = false;
LAB_10150586:
              FUN_1014f8e0(param_1,piVar23,fVar30);
            }
            if (((param_5 != 0) && ((*(byte *)(param_5 + 0xc) & 4) == 0)) &&
               ((*(byte *)(iVar22 + 0x10) & 0x80) == 0)) {
              if ((*(char *)(iVar20 + 0x2250) != '\x01') || (*(int *)(iVar20 + 0x2268) != iVar14)) {
                fVar30 = *(float *)(iVar20 + 0x1228);
                fVar31 = DAT_102b9670 * fVar30;
                fVar29 = (float10)FUN_10112cc4(((float)(*(uint *)(iVar20 + 0xb9c) & _DAT_1028b410) -
                                               (fVar30 + fVar30)) * DAT_102b8c70,0,
                                               DAT_102b8cb0 * fVar30);
                fVar30 = fVar30 * DAT_102b9150 + (float)fVar29;
                fVar29 = (float10)FUN_100fdbca(fStack_4c - *(float *)(iVar20 + 0xe8),
                                               *(float *)(iVar20 + 0xe8) - uStack_48._4_4_);
                if (local_f8 <= fVar31) {
LAB_101505b4:
                  if ((float)fVar29 < fVar30) goto LAB_10150618;
                }
                else if ((!bVar8) || (piVar23 != *(int **)(param_1 + 0xc))) {
                  if (!bVar7) goto LAB_101505b4;
                  if (((float)fVar29 < fVar30) &&
                     (((int)piVar23 - *(int *)(param_1 + 0xc) >> 4) * -0x55555555 -
                      (*(int *)(param_1 + 4) + -1) != 0)) goto LAB_10150618;
                }
              }
              FUN_1011b652(iVar20,param_5);
              *(int *)(iVar20 + 0x14dc) = param_5;
              FUN_101026ba(*(undefined4 *)(param_5 + 0xb4),param_5);
              uVar2 = *(undefined8 *)(*(int *)(iVar20 + 0x14dc) + 0x50);
              *(ulonglong *)(iVar20 + 0x1540) =
                   CONCAT44((float)((ulonglong)*(undefined8 *)(iVar20 + 0x1540) >> 0x20) -
                            ((float)((ulonglong)uVar2 >> 0x20) - fStack_4c),
                            (float)*(undefined8 *)(iVar20 + 0x1540) - ((float)uVar2 - local_50));
              *(undefined1 *)(iVar20 + 0x1536) = 1;
              FUN_101036a0();
            }
          }
        }
      }
LAB_10150618:
      bVar11 = local_69;
      if (((uVar24 >> 0x16 & 1) == 0) && ((*(uint *)(iVar20 + 0x1e88) & 0x100) != 0)) {
        iVar16 = *(int *)(iVar3 + 0x2e8);
        cVar12 = '#';
        if (((bVar10 | local_69) & 1) == 0) {
          if ((bool)bVar28 == false) {
            cVar12 = ((uVar19 >> 0x15 & 1) == 0) * '\x03' + '$';
          }
          else {
            cVar12 = ((uVar19 >> 0x15 & 1) == 0) * '\x03' + '%';
          }
        }
        uVar18 = FUN_100fcb39(cVar12,0x3f800000);
        FUN_10150c41(iVar16,&local_50,uVar24,uVar18);
        if ((((bool)bVar28 != false) && ((*(byte *)(param_1 + 0x10) & 0x40) != 0)) &&
           (0.0 < *(float *)(iVar20 + 0xd80))) {
          fVar32 = local_50 + 0.0;
          fVar33 = *(float *)(iVar20 + 0x1238) + fStack_4c;
          fVar31 = (float)uStack_48 + 0.0;
          uVar18 = FUN_100fcb39(((uVar19 >> 0x15 & 1) == 0) * '\x03' + '&',0x3f800000);
          fVar30 = *(float *)(iVar20 + 0xd64);
          if (fVar30 <= 0.0) {
            local_64 = fVar33 + _UNK_102b94e4;
            local_60 = CONCAT44(local_64,fVar31 + _DAT_102b94e0);
            local_68 = fVar32 + DAT_102b8d58;
            FUN_1018b2de(&local_68,&local_60,uVar18,*(undefined4 *)(iVar20 + 0xd80));
          }
          else {
            fVar33 = fVar33 + fVar30;
            local_60 = CONCAT44(fVar33,fVar32 + fVar30);
            FUN_10189c26(&local_60,fVar30,7,9);
            local_60 = CONCAT44(fVar33,fVar31 - fVar30);
            FUN_10189c26(&local_60,fVar30,9,0xb);
            FUN_101888a4(*(undefined4 *)(iVar16 + 0x40),*(undefined4 *)(iVar16 + 0x38),uVar18,
                         *(undefined4 *)(iVar20 + 0xd80),0);
            *(undefined4 *)(iVar16 + 0x38) = 0;
          }
        }
        FUN_100fe25e(&local_50,iVar14,0);
        cVar12 = FUN_10102a1a(0x20);
        if ((cVar12 != '\0') && (*(int *)(param_1 + 0x18) != *piVar23)) {
          cVar12 = FUN_1010377a(1,0);
          if (cVar12 == '\0') {
            cVar12 = FUN_10113f33(1);
            if (cVar12 == '\0') goto LAB_10150911;
            uVar19 = uVar24 & 0x200000;
          }
          else {
            uVar19 = uVar24 >> 0x15 & 1;
          }
          if (uVar19 == 0) {
            FUN_1014f88b(param_1,piVar23);
          }
        }
LAB_10150911:
        uVar19 = *(uint *)(param_1 + 0x10);
        iVar22 = 0;
        if (bVar21) {
          iVar22 = iVar14;
          if (param_5 != 0) {
            iVar22 = *(int *)(param_5 + 8);
          }
          iVar22 = FUN_101134c2("#CLOSE",0,iVar22);
        }
        uVar26 = uVar24 & 0xffbffffe;
        if (!bVar27) {
          uVar26 = uVar24;
        }
        FUN_101510ff(iVar16,&local_50,uVar19 >> 1 & 4 | uVar26,*(undefined4 *)(param_1 + 0x88),
                     *(undefined4 *)(param_1 + 0x8c),param_2,iVar14,iVar22,bVar28,&local_60,
                     &local_68);
        if ((bVar21 & (byte)local_60) == 1) {
          *param_3 = '\0';
          FUN_1014f84b(param_1,piVar23);
        }
        if ((param_5 != 0) && (((bVar11 & 1) != 0 || (*(int *)(iVar20 + 0x1510) == iVar22)))) {
          *(byte *)(iVar20 + 0x1e88) = *(byte *)(iVar20 + 0x1e88) | 0x80;
        }
        if ((((local_68._0_1_ == '\x01') && (*(int *)(iVar20 + 0x1510) == iVar14 && bVar10 == 0)) &&
            ((*(byte *)(param_1 + 0x10) & 0x20) == 0)) && ((*(byte *)(piVar23 + 1) & 0x10) == 0)) {
          iVar20 = FUN_100fd57d(param_2,0);
          FUN_10115d65(&DAT_10334092,iVar20 - (int)param_2,param_2);
        }
      }
      if (bVar9) {
        FUN_1010a588();
      }
      *(undefined4 *)(iVar3 + 0x144) = uVar4;
      *(undefined4 *)(iVar3 + 0x148) = uVar5;
      if ((uVar24 & 0x200000) != 0) {
        bVar28 = bVar13;
      }
      goto LAB_10150a9f;
    }
    local_50 = 0.0;
    fStack_4c = 0.0;
    uStack_48 = 0;
    FUN_1010c9d8(&local_50,iVar14,0,2);
  }
  bVar28 = 0;
LAB_10150a9f:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return bVar28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

