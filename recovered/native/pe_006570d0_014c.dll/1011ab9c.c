/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011ab9c */

void __fastcall FUN_1011ab9c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint *local_54;
  int local_50;
  uint local_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_54;
  param_1[0x23] = *(undefined4 *)(DAT_1039d74c + 4);
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfb;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  if (param_1[6] == 0) {
    FUN_1012a1ea();
  }
  if ((param_1[0xc] != 0) && ((*(byte *)((int)param_1 + 0x11) & 0x10) != 0)) {
    FUN_1012a1ce();
  }
  local_4c = param_1[4];
  bVar16 = (local_4c & 0x400) != 0;
  if (bVar16 || param_1[6] != 0) {
LAB_1011ac3f:
    bVar1 = *(byte *)(param_1 + 0x2b);
    if ((((bVar1 & 1) == 0) || ((bVar16 || param_1[6] != 0) || param_1[0x1e] != 0)) ||
       (param_1[7] != 0)) {
LAB_1011ac5f:
      iVar15 = param_1[9];
      iVar14 = param_1[0xb];
      *(byte *)(param_1 + 0x2b) = bVar1 & 0xe7 | ((local_4c >> 0xe & 1) == 0 && 0 < iVar15) << 4;
      if (iVar15 != 0) {
        iVar11 = 0;
        do {
          iVar2 = *(int *)(iVar14 + iVar11);
          *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | *(char *)(iVar2 + 0x104) << 3;
          uVar8 = CONCAT11(*(undefined1 *)(iVar2 + 0x409),1 < (int)param_1[9]) & 0xfffffeff;
          *(byte *)(iVar2 + 0x409) = (byte)(uVar8 >> 8) | (byte)uVar8;
          iVar11 = iVar11 + 4;
        } while (iVar15 << 2 != iVar11);
      }
      if (((short)local_4c < 0) || (*(char *)(iVar4 + 0xde8) == '\0')) {
        *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xf7;
      }
      if ((*(byte *)((int)param_1 + 0x11) & 4) == 0) {
        if (param_1[6] == 0) {
          iVar14 = 0;
          iVar15 = 0;
          if ((*(byte *)(param_1 + 0x2b) & 1) != 0) {
            if ((int)param_1[9] < 1) {
              iVar15 = param_1[0x2a] << 0x1d;
              bVar16 = false;
              local_50 = 0;
LAB_1011aede:
              if (iVar15 == 0x20000000) {
                local_28 = 0;
                FUN_10111d56(param_1 + 0xd,0,&local_28);
              }
            }
            else {
              local_50 = *(int *)param_1[0xb];
              iVar15 = param_1[0x2a] << 0x1d;
              bVar16 = local_50 != 0;
              if (iVar15 != 0x40000000 || !bVar16) goto LAB_1011aede;
              local_28 = 0;
              FUN_10111d56(local_50 + 0x50,0,&local_28);
              bVar16 = true;
            }
            puVar13 = param_1 + 0x2a;
            iVar15 = (int)(*puVar13 << 0x1a) >> 0x1d;
            if ((iVar15 == 2) && (bVar16)) {
              puVar7 = (undefined4 *)(local_50 + 0x60);
LAB_1011af25:
              FUN_10107cf6(puVar7,0);
            }
            else if (iVar15 == 1) {
              puVar7 = param_1 + 0xf;
              goto LAB_1011af25;
            }
            uVar8 = *puVar13;
            if ((bool)((uVar8 & 0x38) == 0x10 & bVar16)) {
              FUN_10111e3a(*(undefined1 *)(local_50 + 0xfc),0);
              uVar8 = *puVar13;
            }
            local_54 = puVar13;
            if ((bool)((uVar8 & 0x1c0) == 0x80 & bVar16)) {
              iVar15 = *(int *)(local_50 + 0x40);
LAB_1011af8d:
              FUN_10111e7d(iVar15);
            }
            else if (((uVar8 & 0x1c0) == 0x80) && (iVar15 = param_1[0x29], iVar15 != 0))
            goto LAB_1011af8d;
            FUN_10111ec3(param_1 + 0x15);
            FUN_1012985e();
            FUN_10111e62(0);
            local_38 = 0;
            FUN_100fd3bc(2,&local_38);
            FUN_10107d2b(&local_28,0,0x821139);
            FUN_100fd4c4(1);
            iVar15 = *(int *)(iVar4 + 0x14cc);
            FUN_1011c696();
            uVar9 = *(undefined4 *)(iVar15 + 0x54);
            *(undefined4 *)(iVar15 + 0x148) = uVar9;
            *(undefined4 *)(iVar15 + 0x144) = *(undefined4 *)(iVar15 + 0x50);
            param_1[0xd] = *(undefined4 *)(iVar15 + 0x50);
            param_1[0xe] = uVar9;
            *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(iVar15 + 0x58);
            if (*(char *)(param_1[0x1e] + 0x100) == '\x01') {
              FUN_10114ada(param_1[0x1e]);
            }
            *local_54 = *local_54 & 0xfffffe00;
            iVar14 = 1;
          }
        }
        else {
          iVar15 = *(int *)(param_1[6] + 0x78);
          param_1[0x1e] = iVar15;
          param_1[0x2a] = param_1[0x2a] & 0xfffffe00;
          iVar14 = 0;
        }
        if (((*(byte *)((int)param_1 + 0xad) & 1) != 0) && (param_1[0x1e] != 0)) {
          FUN_1012a324();
        }
      }
      else {
        iVar15 = param_1[0x1e];
        iVar14 = 0;
      }
      param_1[0x29] = 0;
      local_50 = iVar14;
      if (param_1[6] == 0) {
        iVar14 = *(int *)(iVar4 + 0x2048);
        while( true ) {
          if (((iVar14 == 0) || (*(int *)(iVar14 + 0x3a8) == 0)) ||
             (puVar7 = *(undefined4 **)(*(int *)(iVar14 + 0x3a8) + 0x430), puVar5 = puVar7,
             puVar7 == (undefined4 *)0x0)) goto LAB_1011b0b4;
          do {
            puVar12 = puVar5;
            puVar5 = (undefined4 *)puVar12[6];
          } while ((undefined4 *)puVar12[6] != (undefined4 *)0x0);
          if (puVar12 == param_1) break;
          iVar14 = puVar12[0x1e];
        }
        param_1[0x26] = *puVar7;
LAB_1011b0b4:
        if (iVar15 != 0) {
          local_54 = (uint *)param_1[0x20];
          if ((local_54 != (uint *)0x0 & (byte)(local_4c >> 3) & 0x1f) == 1) {
            bVar3 = false;
            if ((local_54[7] == 0) && (local_54[9] == 0)) {
              iVar14 = FUN_101182bb();
              puVar13 = local_54;
              if ((iVar14 != 0) &&
                 ((*(int *)(iVar14 + 0x10) != -1 &&
                  (iVar14 = _strcmp("_IMWINDOW",(char *)(iVar14 + 0x14)), puVar13 = local_54,
                  iVar14 == 0)))) {
                cVar6 = FUN_1011cd74();
                bVar3 = true;
                puVar13 = local_54;
                if (cVar6 != '\0') goto LAB_1011b1c1;
              }
              do {
                puVar10 = puVar13;
                puVar13 = (uint *)puVar10[6];
              } while ((uint *)puVar10[6] != (uint *)0x0);
              fVar18 = (float)local_54[0xd];
              fVar17 = (float)local_54[0xe];
              fVar19 = (float)*(undefined8 *)(local_54 + 0xf) +
                       (float)*(undefined8 *)(local_54 + 0xd);
              fVar21 = (float)((ulonglong)*(undefined8 *)(local_54 + 0xf) >> 0x20) +
                       (float)((ulonglong)*(undefined8 *)(local_54 + 0xd) >> 0x20);
              if ((float)puVar10[0xd] < fVar18) {
                fVar18 = fVar18 + *(float *)(iVar4 + 0x14c4);
              }
              if (fVar19 < (float)puVar10[0xf] + (float)puVar10[0xd]) {
                fVar19 = fVar19 - *(float *)(iVar4 + 0x14c4);
              }
              fVar20 = (float)local_54[0xe];
              if ((float)puVar10[0xe] < fVar17) {
                fVar17 = fVar17 + *(float *)(iVar4 + 0x14c4);
                fVar20 = fVar17;
              }
              local_28 = CONCAT44(fVar20,fVar18);
              fVar20 = fVar21;
              if (fVar21 < (float)puVar10[0x10] + (float)puVar10[0xe]) {
                fVar20 = fVar21 - *(float *)(iVar4 + 0x14c4);
              }
              _fStack_20 = CONCAT44(fVar20,fVar19);
              if ((fVar18 <= fVar19) && (fVar17 <= fVar20)) {
                local_38 = CONCAT44(fVar20 - fVar17,fVar19 - fVar18);
                local_48 = fVar19;
                fStack_44 = fVar20;
                fStack_40 = fVar21;
                fStack_3c = fVar21;
                FUN_10111cd7(iVar15,&local_28,&local_38);
                if (*(int *)(iVar15 + 0x3a0) != 0) {
                  local_38 = CONCAT44(fStack_44 - (float)((ulonglong)local_28 >> 0x20),
                                      local_48 - (float)local_28);
                  FUN_10111cd7(*(int *)(iVar15 + 0x3a0),&local_28,&local_38);
                }
              }
              bVar3 = true;
              puVar13 = local_54;
              if (param_1[6] != 0) goto LAB_1011b230;
            }
          }
          else {
            bVar3 = false;
          }
LAB_1011b1c1:
          FUN_10129d4e(*(undefined4 *)(iVar15 + 0x5c));
          FUN_100fcd80(0x1c,iVar4 + 0xe50);
          FUN_100fcd80(0x1e,iVar4 + 0x1010);
          FUN_100fcd80(0x1d,iVar4 + 0x1000);
          FUN_1012a387();
          FUN_100fce8e(3);
          puVar13 = local_54;
          goto LAB_1011b230;
        }
        bVar16 = false;
LAB_1011b3b4:
        param_1[0x28] = 0;
        *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xbd;
      }
      else {
        bVar16 = false;
        bVar3 = false;
        if (iVar15 == 0) goto LAB_1011b3b4;
        puVar13 = (uint *)param_1[0x20];
LAB_1011b230:
        if (((param_1[7] == 0) && (param_1[9] == 0)) && ((*(byte *)(param_1 + 0x2b) & 1) != 0)) {
          local_54 = puVar13;
          FUN_1018de6c(*(undefined4 *)(iVar15 + 0x2e8),0);
          if ((local_4c & 8) == 0) {
            iVar14 = FUN_100fcb39(0x2b,0x3f800000);
            param_1[0x14] = iVar14;
            if (iVar14 != 0) {
              local_28 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xf) >> 0x20) +
                                  (float)((ulonglong)*(undefined8 *)(param_1 + 0xd) >> 0x20),
                                  (float)*(undefined8 *)(param_1 + 0xf) +
                                  (float)*(undefined8 *)(param_1 + 0xd));
              FUN_1018b85a(param_1 + 0xd,&local_28,iVar14,0,0);
            }
          }
          else {
            param_1[0x14] = 0;
          }
          *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 4;
          puVar13 = local_54;
        }
        if ((((byte)((local_4c & 8) >> 3) & param_1[6] == 0) == 1) &&
           ((*(byte *)(param_1 + 0x2b) & 1) != 0)) {
          local_54 = puVar13;
          FUN_1018de6c(*(undefined4 *)(iVar15 + 0x2e8),0);
          if (bVar3) {
            uVar9 = FUN_100fcb39(2,0x3f800000);
            local_28 = *(undefined8 *)(local_54 + 0xd);
            _fStack_20 = CONCAT44((float)((ulonglong)*(undefined8 *)(local_54 + 0xf) >> 0x20) +
                                  (float)local_54[0xe],
                                  (float)*(undefined8 *)(local_54 + 0xf) + (float)local_54[0xd]);
            local_38 = *(undefined8 *)(param_1 + 0xd);
            fStack_30 = (float)*(undefined8 *)(param_1 + 0xf) + (float)param_1[0xd];
            fStack_2c = (float)((ulonglong)*(undefined8 *)(param_1 + 0xf) >> 0x20) +
                        (float)param_1[0xe];
            FUN_10194ac6(*(undefined4 *)(iVar15 + 0x2e8),&local_38,&local_28,uVar9,0);
          }
          else {
            uVar9 = FUN_100fcb39(2,0x3f800000);
            local_28 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0xf) >> 0x20) +
                                (float)((ulonglong)*(undefined8 *)(param_1 + 0xd) >> 0x20),
                                (float)*(undefined8 *)(param_1 + 0xf) +
                                (float)*(undefined8 *)(param_1 + 0xd));
            FUN_1018b85a(param_1 + 0xd,&local_28,uVar9,0,0);
          }
        }
        FUN_1018de6c(*(undefined4 *)(iVar15 + 0x2e8),1);
        if ((int)param_1[9] < 1) {
          bVar16 = true;
          goto LAB_1011b3b4;
        }
        FUN_1012a98c();
        bVar16 = true;
      }
      iVar14 = local_50;
      if ((param_1[0xc] == 0) || (iVar11 = *(int *)(param_1[0xc] + 0x18), iVar11 == 0)) {
        if (0 < (int)param_1[9]) {
          iVar11 = *(int *)(*(int *)param_1[0xb] + 0xb8);
          goto LAB_1011b3e4;
        }
      }
      else {
LAB_1011b3e4:
        param_1[0x27] = iVar11;
      }
      if (bVar16) {
        if ((((*(byte *)(param_1 + 0x2b) & 1) != 0) && (param_1[6] == 0)) &&
           ((*(int *)(iVar4 + 0x14dc) == 0 || (*(int *)(*(int *)(iVar4 + 0x14dc) + 0x3b0) != iVar15)
            ))) {
          FUN_10110e4b(iVar15);
        }
        param_1[0x24] = *(undefined4 *)(iVar4 + 4);
        if (param_1[7] != 0) {
          FUN_1011ab9c();
        }
        if (param_1[8] != 0) {
          FUN_1011ab9c();
        }
        if (param_1[6] == 0) {
          FUN_101268c4();
        }
      }
      else {
        param_1[0x24] = *(undefined4 *)(iVar4 + 4);
      }
      if ((char)iVar14 != '\0') {
        FUN_1010ad44();
      }
    }
    else {
      if ((param_1[0x27] == 0) || (iVar15 = FUN_1012a362(), iVar15 == 0)) {
        iVar15 = *(int *)param_1[0xb];
      }
      if ((*(char *)(iVar15 + 0x118) < '\x01') && (*(char *)(iVar15 + 0x119) < '\x01'))
      goto LAB_1011ac5f;
      param_1[5] = 2;
    }
  }
  else {
    iVar15 = param_1[9];
    if (((iVar15 < 2) && (param_1[7] == 0)) && (*(char *)(iVar4 + 0x6f) == '\0')) {
      if (iVar15 != 0) {
        if (*(char *)(*(int *)param_1[0xb] + 0x34) == '\x01') goto LAB_1011ac32;
        goto LAB_1011ad07;
      }
    }
    else {
LAB_1011ac32:
      if (param_1[0x22] != 0) goto LAB_1011ac3f;
LAB_1011ad07:
      if (iVar15 == 1) {
        iVar14 = param_1[0x1e];
        iVar15 = *(int *)param_1[0xb];
        *(undefined8 *)(param_1 + 0xd) = *(undefined8 *)(iVar15 + 0x50);
        uVar9 = *(undefined4 *)(iVar15 + 0x60);
        param_1[0x10] = *(undefined4 *)(iVar15 + 100);
        param_1[0xf] = uVar9;
        param_1[0x2a] = param_1[0x2a] & 0xfffffe00 | 0x92;
        if (iVar14 != 0) {
          if (*(int *)(iVar4 + 0x2048) == iVar14) {
            FUN_101034e2(iVar15,0);
            iVar14 = param_1[0x1e];
            if (iVar14 == 0) goto LAB_1011adb6;
          }
          if ((*(byte *)(iVar4 + 0x27b5) & 8) != 0) {
            FUN_100f99e6("[viewport] Node %08X transfer Viewport %08X->%08X to Window \'%s\'\n",
                         *param_1,**(undefined4 **)(iVar14 + 0x3c),*(undefined4 *)(iVar15 + 8),
                         *(undefined4 *)(iVar15 + 4));
            iVar14 = param_1[0x1e];
          }
          puVar7 = *(undefined4 **)(iVar14 + 0x3c);
          *(undefined4 **)(iVar15 + 0x3c) = puVar7;
          *(undefined4 *)(iVar15 + 0x40) = *(undefined4 *)(param_1[0x1e] + 0x40);
          if (*(char *)(param_1[0x1e] + 0xf8) == '\x01') {
            *puVar7 = *(undefined4 *)(iVar15 + 8);
            *(int *)(*(int *)(iVar15 + 0x3c) + 0x58) = iVar15;
            *(undefined1 *)(iVar15 + 0xf8) = 1;
          }
        }
LAB_1011adb6:
        param_1[0x29] = *(undefined4 *)(iVar15 + 0x40);
      }
    }
    FUN_1012a2e4();
    param_1[5] = 1;
    param_1[0x28] = 0;
    *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xa7;
    param_1[0x24] = *(undefined4 *)(iVar4 + 4);
    if (((*(byte *)((int)param_1 + 0xad) & 1) != 0) && (param_1[9] == 1)) {
      if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
        FUN_1012a324();
        return;
      }
      goto LAB_1011b51d;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
    return;
  }
LAB_1011b51d:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

