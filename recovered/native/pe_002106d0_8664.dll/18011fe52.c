/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011fe52 */

void FUN_18011fe52(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 local_80;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  ulonglong local_50;
  
  lVar5 = DAT_180419160;
  local_50 = DAT_180402640 ^ (ulonglong)auStack_a8;
  param_1[0x2d] = *(undefined4 *)(DAT_180419160 + 4);
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xfb;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  if (*(longlong *)(param_1 + 6) == 0) {
    FUN_18013022d(param_1);
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) && ((*(byte *)((longlong)param_1 + 0x11) & 0x10) != 0)) {
    FUN_180130209(param_1);
  }
  uVar2 = param_1[4];
  if ((uVar2 >> 10 & 1) != 0 || *(longlong *)(param_1 + 6) != 0) {
LAB_18011ff13:
    bVar1 = *(byte *)(param_1 + 0x35);
    if ((((bVar1 & 1) == 0) ||
        (((uVar2 >> 10 & 1) != 0 || *(longlong *)(param_1 + 6) != 0) ||
         *(longlong *)(param_1 + 0x24) != 0)) || (*(longlong *)(param_1 + 8) != 0)) {
LAB_18011ff38:
      lVar12 = (longlong)(int)param_1[0xc];
      *(byte *)(param_1 + 0x35) = bVar1 & 0xe7 | ((uVar2 >> 0xe & 1) == 0 && 0 < lVar12) << 4;
      if (lVar12 != 0) {
        lVar13 = *(longlong *)(param_1 + 0xe);
        lVar17 = 0;
        do {
          lVar16 = *(longlong *)(lVar13 + lVar17);
          *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | *(char *)(lVar16 + 0x114) << 3;
          *(byte *)(lVar16 + 0x495) = *(byte *)(lVar16 + 0x495) & 0xfe | 1 < (int)param_1[0xc];
          lVar17 = lVar17 + 8;
        } while (lVar12 * 8 != lVar17);
      }
      if (((short)uVar2 < 0) || (*(char *)(lVar5 + 0xed0) == '\0')) {
        *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xf7;
      }
      if ((*(byte *)((longlong)param_1 + 0x11) & 4) == 0) {
        if (*(longlong *)(param_1 + 6) == 0) {
          if ((*(byte *)(param_1 + 0x35) & 1) == 0) {
            bVar20 = false;
            lVar12 = 0;
          }
          else {
            if ((int)param_1[0xc] < 1) {
              iVar10 = param_1[0x34] << 0x1d;
              bVar20 = false;
              lVar12 = 0;
LAB_180120215:
              if (iVar10 == 0x20000000) {
                local_68 = 0;
                FUN_180116a8b(param_1 + 0x12,0);
              }
            }
            else {
              lVar12 = **(longlong **)(param_1 + 0xe);
              iVar10 = param_1[0x34] << 0x1d;
              bVar20 = lVar12 != 0;
              if (iVar10 != 0x40000000 || !bVar20) goto LAB_180120215;
              local_68 = 0;
              FUN_180116a8b(lVar12 + 0x60,0);
              bVar20 = true;
            }
            puVar18 = param_1 + 0x34;
            iVar10 = (int)(*puVar18 << 0x1a) >> 0x1d;
            if ((iVar10 == 2) && (bVar20)) {
              puVar15 = (undefined4 *)(lVar12 + 0x70);
LAB_180120254:
              FUN_18010ca41(puVar15,0);
            }
            else if (iVar10 == 1) {
              puVar15 = param_1 + 0x14;
              goto LAB_180120254;
            }
            uVar9 = *puVar18;
            if ((bool)((uVar9 & 0x38) == 0x10 & bVar20)) {
              FUN_180116b2f(*(undefined1 *)(lVar12 + 0x10c),0);
              uVar9 = *puVar18;
            }
            if ((bool)((uVar9 & 0x1c0) == 0x80 & bVar20)) {
              iVar10 = *(int *)(lVar12 + 0x50);
LAB_1801202aa:
              FUN_180116b67(iVar10);
            }
            else if (((uVar9 & 0x1c0) == 0x80) && (iVar10 = param_1[0x33], iVar10 != 0))
            goto LAB_1801202aa;
            FUN_180116ba3(param_1 + 0x1a);
            FUN_18012f979(param_1,&local_68);
            FUN_180116b50(0);
            local_78 = 0;
            FUN_180101bbb(2);
            FUN_18010ca66(&local_68,0,0x821139);
            FUN_180101ccb(1);
            lVar12 = *(longlong *)(lVar5 + 0x1608);
            FUN_180121b52(param_1,lVar12);
            *(undefined8 *)(lVar12 + 0x158) = *(undefined8 *)(lVar12 + 0x60);
            *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(lVar12 + 0x60);
            *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(lVar12 + 0x68);
            if (*(char *)(*(longlong *)(param_1 + 0x24) + 0x110) == '\x01') {
              FUN_18011994d();
            }
            *puVar18 = *puVar18 & 0xfffffe00;
            bVar20 = true;
          }
        }
        else {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 6) + 0x90);
          *(longlong *)(param_1 + 0x24) = lVar12;
          param_1[0x34] = param_1[0x34] & 0xfffffe00;
          bVar20 = false;
        }
        if (((*(byte *)((longlong)param_1 + 0xd5) & 1) != 0) && (*(longlong *)(param_1 + 0x24) != 0)
           ) {
          FUN_1801303ab(param_1);
        }
      }
      else {
        lVar12 = *(longlong *)(param_1 + 0x24);
        bVar20 = false;
      }
      param_1[0x33] = 0;
      if (*(longlong *)(param_1 + 6) == 0) {
        lVar13 = *(longlong *)(lVar5 + 0x2200);
        while( true ) {
          if (((lVar13 == 0) || (*(longlong *)(lVar13 + 0x418) == 0)) ||
             (puVar15 = *(undefined4 **)(*(longlong *)(lVar13 + 0x418) + 0x4c0), puVar6 = puVar15,
             puVar15 == (undefined4 *)0x0)) goto LAB_1801203d8;
          do {
            puVar19 = puVar6;
            puVar6 = *(undefined4 **)(puVar19 + 6);
          } while (*(undefined4 **)(puVar19 + 6) != (undefined4 *)0x0);
          if (puVar19 == param_1) break;
          lVar13 = *(longlong *)(puVar19 + 0x24);
        }
        param_1[0x30] = *puVar15;
LAB_1801203d8:
        if (lVar12 != 0) {
          lVar13 = *(longlong *)(param_1 + 0x28);
          bVar7 = false;
          if ((((lVar13 != 0 & (byte)uVar2 >> 3) == 1) &&
              (bVar7 = false, *(longlong *)(lVar13 + 0x20) == 0)) && (*(int *)(lVar13 + 0x30) == 0))
          {
            puVar14 = (undefined8 *)FUN_18011d202();
            lVar17 = lVar13;
            if (((puVar14 != (undefined8 *)0x0) && (*(int *)((longlong)puVar14 + 0x14) != -1)) &&
               (iVar10 = strcmp("_IMWINDOW",(char *)(puVar14 + 3)), iVar10 == 0)) {
              cVar8 = FUN_1801222ce(lVar12,*(undefined8 *)*puVar14);
              bVar7 = true;
              if (cVar8 != '\0') goto LAB_180120571;
            }
            do {
              lVar16 = lVar17;
              lVar17 = *(longlong *)(lVar16 + 0x18);
            } while (*(longlong *)(lVar16 + 0x18) != 0);
            local_68 = *(undefined8 *)(lVar13 + 0x48);
            fVar23 = (float)local_68;
            fVar21 = (float)*(undefined8 *)(lVar13 + 0x50) + fVar23;
            fVar24 = (float)((ulonglong)local_68 >> 0x20);
            fVar22 = (float)((ulonglong)*(undefined8 *)(lVar13 + 0x50) >> 0x20) + fVar24;
            if (*(float *)(lVar16 + 0x48) < fVar23) {
              fVar23 = fVar23 + *(float *)(lVar5 + 0x15fc);
              local_68 = CONCAT44(fVar24,fVar23);
            }
            if (fVar21 < *(float *)(lVar16 + 0x50) + *(float *)(lVar16 + 0x48)) {
              fVar21 = fVar21 - *(float *)(lVar5 + 0x15fc);
            }
            if (*(float *)(lVar16 + 0x4c) < fVar24) {
              fVar24 = fVar24 + *(float *)(lVar5 + 0x15fc);
              local_68 = CONCAT44(fVar24,(undefined4)local_68);
            }
            if (fVar22 < *(float *)(lVar16 + 0x54) + *(float *)(lVar16 + 0x4c)) {
              fVar22 = fVar22 - *(float *)(lVar5 + 0x15fc);
            }
            _fStack_60 = CONCAT44(fVar22,fVar21);
            if ((fVar23 <= fVar21) && (fVar24 <= fVar22)) {
              local_78 = CONCAT44(fVar22 - fVar24,fVar21 - fVar23);
              FUN_180116a16(lVar12,&local_68);
              if (*(longlong *)(lVar12 + 0x408) != 0) {
                local_78 = CONCAT44(fVar22 - (float)((ulonglong)local_68 >> 0x20),
                                    fVar21 - (float)local_68);
                FUN_180116a16();
              }
            }
            bVar4 = true;
            bVar7 = true;
            if (*(longlong *)(param_1 + 6) != 0) goto LAB_1801205c9;
          }
LAB_180120571:
          bVar4 = bVar7;
          FUN_18012fefb(param_1,*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)(lVar12 + 0x68));
          FUN_1801014f9(0x1c,lVar5 + 0xf38);
          FUN_1801014f9(0x1e,lVar5 + 0x10f8);
          FUN_1801014f9(0x1d,lVar5 + 0x10e8);
          FUN_18013041d(param_1);
          FUN_180101625(3);
          goto LAB_1801205c9;
        }
        bVar7 = false;
LAB_18012077c:
        param_1[0x32] = 0;
        *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xbd;
      }
      else {
        bVar7 = false;
        bVar4 = false;
        if (lVar12 == 0) goto LAB_18012077c;
        lVar13 = *(longlong *)(param_1 + 0x28);
LAB_1801205c9:
        if (((*(longlong *)(param_1 + 8) == 0) && (param_1[0xc] == 0)) &&
           ((*(byte *)(param_1 + 0x35) & 1) != 0)) {
          FUN_180195542(*(longlong *)(lVar12 + 800) + 0x88,*(longlong *)(lVar12 + 800),0);
          if ((uVar2 & 8) == 0) {
            iVar10 = FUN_18010129b(0x2b);
            param_1[0x19] = iVar10;
            if (iVar10 != 0) {
              local_68 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) +
                                  (float)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                                  (float)*(undefined8 *)(param_1 + 0x14) +
                                  (float)*(undefined8 *)(param_1 + 0x12));
              local_80 = 0;
              local_88 = local_88 & 0xffffffff00000000;
              FUN_180192d20(*(undefined8 *)(lVar12 + 800),param_1 + 0x12,&local_68,iVar10);
            }
          }
          else {
            param_1[0x19] = 0;
          }
          *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 4;
        }
        if ((((byte)((uVar2 & 8) >> 3) & *(longlong *)(param_1 + 6) == 0) == 1) &&
           ((*(byte *)(param_1 + 0x35) & 1) != 0)) {
          FUN_180195542(*(longlong *)(lVar12 + 800) + 0x88,*(longlong *)(lVar12 + 800),0);
          if (bVar4) {
            uVar11 = FUN_18010129b(2);
            local_68 = *(undefined8 *)(lVar13 + 0x48);
            _fStack_60 = CONCAT44((float)((ulonglong)*(undefined8 *)(lVar13 + 0x50) >> 0x20) +
                                  *(float *)(lVar13 + 0x4c),
                                  (float)*(undefined8 *)(lVar13 + 0x50) + *(float *)(lVar13 + 0x48))
            ;
            local_78 = *(undefined8 *)(param_1 + 0x12);
            fStack_70 = (float)*(undefined8 *)(param_1 + 0x14) + (float)param_1[0x12];
            fStack_6c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) +
                        (float)param_1[0x13];
            local_88 = local_88 & 0xffffffff00000000;
            FUN_18019c60e(*(undefined8 *)(lVar12 + 800),&local_78,&local_68,uVar11);
          }
          else {
            uVar3 = *(undefined8 *)(lVar12 + 800);
            uVar11 = FUN_18010129b(2);
            local_68 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20) +
                                (float)((ulonglong)*(undefined8 *)(param_1 + 0x12) >> 0x20),
                                (float)*(undefined8 *)(param_1 + 0x14) +
                                (float)*(undefined8 *)(param_1 + 0x12));
            local_80 = 0;
            local_88 = local_88 & 0xffffffff00000000;
            FUN_180192d20(uVar3,param_1 + 0x12,&local_68,uVar11);
          }
        }
        FUN_180195542(*(longlong *)(lVar12 + 800) + 0x88,*(longlong *)(lVar12 + 800),1);
        if ((int)param_1[0xc] < 1) {
          bVar7 = true;
          goto LAB_18012077c;
        }
        FUN_180130a66(param_1,lVar12);
        bVar7 = true;
      }
      if ((*(longlong *)(param_1 + 0x10) == 0) ||
         (iVar10 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x20), iVar10 == 0)) {
        if (0 < (int)param_1[0xc]) {
          iVar10 = *(int *)(**(longlong **)(param_1 + 0xe) + 200);
          goto LAB_1801207b0;
        }
      }
      else {
LAB_1801207b0:
        param_1[0x31] = iVar10;
      }
      if (bVar7) {
        if ((((*(byte *)(param_1 + 0x35) & 1) != 0) && (*(longlong *)(param_1 + 6) == 0)) &&
           ((*(longlong *)(lVar5 + 0x1628) == 0 ||
            (*(longlong *)(*(longlong *)(lVar5 + 0x1628) + 0x428) != lVar12)))) {
          FUN_180115a7e(lVar12);
        }
        param_1[0x2e] = *(undefined4 *)(lVar5 + 4);
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_18011fe52();
        }
        if (*(longlong *)(param_1 + 10) != 0) {
          FUN_18011fe52();
        }
        if (*(longlong *)(param_1 + 6) == 0) {
          FUN_18012c819(lVar12);
        }
      }
      else {
        param_1[0x2e] = *(undefined4 *)(lVar5 + 4);
      }
      if (bVar20) {
        FUN_18010f900();
      }
    }
    else {
      if ((param_1[0x31] == 0) || (lVar12 = FUN_1801303f4(param_1), lVar12 == 0)) {
        lVar12 = **(longlong **)(param_1 + 0xe);
      }
      if ((*(char *)(lVar12 + 0x128) < '\x01') && (*(char *)(lVar12 + 0x129) < '\x01'))
      goto LAB_18011ff38;
      param_1[5] = 2;
    }
  }
  else {
    iVar10 = param_1[0xc];
    if (((iVar10 < 2) && (*(longlong *)(param_1 + 8) == 0)) && (*(char *)(lVar5 + 0x83) == '\0')) {
      if (iVar10 != 0) {
        if (*(char *)(**(longlong **)(param_1 + 0xe) + 0x3c) == '\x01') goto LAB_18011ff06;
        goto LAB_18011fffc;
      }
    }
    else {
LAB_18011ff06:
      if (param_1[0x2c] != 0) goto LAB_18011ff13;
LAB_18011fffc:
      if (iVar10 == 1) {
        lVar13 = *(longlong *)(param_1 + 0x24);
        lVar12 = **(longlong **)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(lVar12 + 0x60);
        *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(lVar12 + 0x70);
        param_1[0x34] = param_1[0x34] & 0xfffffe00 | 0x92;
        if (lVar13 != 0) {
          if (*(longlong *)(lVar5 + 0x2200) == lVar13) {
            FUN_1801080ec(lVar12,0);
            lVar13 = *(longlong *)(param_1 + 0x24);
            if (lVar13 == 0) goto LAB_1801200ce;
          }
          if ((*(byte *)(lVar5 + 0x2acd) & 8) != 0) {
            local_88 = *(ulonglong *)(lVar12 + 8);
            FUN_1800fdfea("[viewport] Node %08X transfer Viewport %08X->%08X to Window \'%s\'\n",
                          *param_1,**(undefined4 **)(lVar13 + 0x48),*(undefined4 *)(lVar12 + 0x10));
            lVar13 = *(longlong *)(param_1 + 0x24);
          }
          puVar15 = *(undefined4 **)(lVar13 + 0x48);
          *(undefined4 **)(lVar12 + 0x48) = puVar15;
          *(undefined4 *)(lVar12 + 0x50) = *(undefined4 *)(*(longlong *)(param_1 + 0x24) + 0x50);
          if (*(char *)(*(longlong *)(param_1 + 0x24) + 0x108) == '\x01') {
            *puVar15 = *(undefined4 *)(lVar12 + 0x10);
            *(longlong *)(*(longlong *)(lVar12 + 0x48) + 0x78) = lVar12;
            *(undefined1 *)(lVar12 + 0x108) = 1;
          }
        }
LAB_1801200ce:
        param_1[0x33] = *(undefined4 *)(lVar12 + 0x50);
      }
    }
    FUN_180130359(param_1);
    param_1[5] = 1;
    param_1[0x32] = 0;
    *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xa7;
    param_1[0x2e] = *(undefined4 *)(lVar5 + 4);
    if (((*(byte *)((longlong)param_1 + 0xd5) & 1) != 0) && (param_1[0xc] == 1)) {
      if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_a8)) {
        FUN_1801303ab(param_1,**(undefined8 **)(param_1 + 0xe));
        return;
      }
      goto LAB_18012085a;
    }
  }
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_a8)) {
    return;
  }
LAB_18012085a:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_a8);
}

