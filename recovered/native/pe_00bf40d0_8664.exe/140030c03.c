/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140030c03 */

void FUN_140030c03(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  byte bVar9;
  undefined8 uVar10;
  uint *puVar11;
  longlong *plVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  byte *pbVar25;
  int iVar27;
  int iVar28;
  int *piVar29;
  undefined1 auStackY_268 [32];
  byte local_23c;
  uint local_1f0;
  uint local_1ec;
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  byte *pbVar26;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_268;
  piVar29 = (int *)(&DAT_1400ef420 + (longlong)*(int *)(*param_1 + 0xc) * 8);
  lVar6 = param_1[6];
  uVar10 = FUN_14002fd6a(lVar6);
  if ((char)uVar10 == '\0') {
    puVar11 = &local_1ec;
  }
  else {
    puVar11 = (uint *)FUN_140030328(lVar6);
  }
  iVar14 = *piVar29;
  if (iVar14 != 0x159b) {
    do {
      uVar2 = *(ushort *)(piVar29 + 1);
      plVar12 = (longlong *)((longlong)param_1 + 0x44);
      if ((uVar2 & 2) == 0) {
        plVar12 = param_1 + 0x41;
      }
      bVar9 = (&DAT_1400ede80)[iVar14];
      uVar21 = 0;
      uVar15 = 0;
      if (bVar9 != 0) {
        bVar8 = true;
        uVar17 = 0;
        uVar22 = 0;
        pbVar26 = &DAT_1400ede80 + iVar14;
        do {
          while( true ) {
            pbVar25 = pbVar26 + 1;
            if (bVar9 != 0x20) break;
            bVar9 = *pbVar25;
            pbVar26 = pbVar25;
          }
          uVar24 = uVar22;
          if (bVar9 == 0x7c) {
            bVar8 = false;
          }
          else {
            pbVar25 = (byte *)FUN_14003039c(pbVar26,param_1,puVar11,&local_1f0);
            if ((((local_1f0 < 2) &&
                 (iVar14 = FUN_140030754((longlong)param_1,puVar11,0,(undefined4 *)0x0,
                                         (undefined4 *)0x0), iVar14 != 0)) &&
                (iVar14 = FUN_14001d8c9(param_2,iVar14,1), iVar14 == 0)) &&
               (lVar6 = *(longlong *)(param_2 + 0x78), 2 < *(ushort *)(lVar6 + 0x9a))) {
              if ((ulonglong)*(ushort *)(lVar6 + 0x98) == 0) {
                iVar14 = 0;
              }
              else {
                lVar7 = *(longlong *)(lVar6 + 0xa0);
                iVar14 = 0;
                uVar20 = 0xffffffff;
                uVar19 = 0;
                iVar27 = -1;
                do {
                  iVar28 = (int)uVar20;
                  iVar16 = iVar28 + 1;
                  uVar3 = *(ushort *)(*(longlong *)(lVar6 + 0xb0) + uVar19 * 2);
                  uVar20 = (ulonglong)uVar3;
                  if (iVar16 < (int)(uint)uVar3) {
                    lVar23 = (longlong)iVar16;
                    if ((uVar2 & 2) == 0) {
                      if ((uVar2 & 1) == 0) {
                        lVar18 = 0;
                        do {
                          iVar4 = *(int *)(lVar7 + 0xc + (longlong)iVar28 * 8 + lVar18 * 8);
                          if (iVar4 < iVar14 || iVar27 < 0) {
                            iVar27 = (int)lVar18 + iVar16;
                            iVar14 = iVar4;
                          }
                          lVar1 = lVar18 + (lVar23 - uVar20);
                          lVar18 = lVar18 + 1;
                        } while (lVar1 != 0);
                      }
                      else {
                        lVar18 = 0;
                        do {
                          iVar4 = *(int *)(lVar7 + 0xc + (longlong)iVar28 * 8 + lVar18 * 8);
                          if (iVar14 < iVar4 || iVar27 < 0) {
                            iVar27 = (int)lVar18 + iVar16;
                            iVar14 = iVar4;
                          }
                          lVar1 = lVar18 + (lVar23 - uVar20);
                          lVar18 = lVar18 + 1;
                        } while (lVar1 != 0);
                      }
                    }
                    else if ((uVar2 & 1) == 0) {
                      lVar18 = uVar20 - (longlong)iVar28;
                      iVar28 = iVar27;
                      do {
                        iVar16 = *(int *)(lVar7 + lVar23 * 8);
                        iVar27 = (int)lVar23;
                        if (iVar14 <= iVar16 && -1 < iVar28) {
                          iVar27 = iVar28;
                          iVar16 = iVar14;
                        }
                        iVar14 = iVar16;
                        lVar23 = lVar23 + 1;
                        lVar18 = lVar18 + -1;
                        iVar28 = iVar27;
                      } while (lVar18 != 0);
                    }
                    else {
                      lVar18 = uVar20 - (longlong)iVar28;
                      iVar28 = iVar27;
                      do {
                        iVar16 = *(int *)(lVar7 + lVar23 * 8);
                        iVar27 = (int)lVar23;
                        if (iVar16 <= iVar14 && -1 < iVar28) {
                          iVar27 = iVar28;
                          iVar16 = iVar14;
                        }
                        iVar14 = iVar16;
                        lVar23 = lVar23 + 1;
                        lVar18 = lVar18 + -1;
                        iVar28 = iVar27;
                      } while (lVar18 != 0);
                    }
                  }
                  uVar19 = uVar19 + 1;
                } while (uVar19 != *(ushort *)(lVar6 + 0x98));
              }
              if (bVar8) {
                local_118[uVar17] = iVar14;
                bVar8 = true;
                uVar17 = (ulonglong)((int)uVar17 + 1);
              }
              else {
                uVar24 = (ulonglong)((int)uVar22 + 1);
                local_1e8[uVar22] = iVar14;
                bVar8 = false;
              }
            }
          }
          uVar15 = (uint)uVar17;
          uVar21 = (uint)uVar24;
          bVar9 = *pbVar25;
          uVar22 = uVar24;
          pbVar26 = pbVar25;
        } while (bVar9 != 0);
      }
      if (uVar21 != 0 || uVar15 != 0) {
        FUN_140032667(uVar15,(longlong)local_118);
        FUN_140032667(uVar21,(longlong)local_1e8);
        uVar5 = *(uint *)(plVar12 + 0x1b);
        piVar13 = (int *)((longlong)plVar12 + (ulonglong)uVar5 * 0x1c + 0xdc);
        *(uint *)(plVar12 + 0x1b) = uVar5 + 1;
        if (uVar21 == 0) {
          iVar14 = local_118[uVar15 >> 1];
LAB_140031002:
          *(int *)((longlong)plVar12 + (ulonglong)uVar5 * 0x1c + 0xe8) = iVar14;
          *piVar13 = iVar14;
        }
        else {
          if (uVar15 == 0) {
            iVar14 = local_1e8[uVar21 >> 1];
            goto LAB_140031002;
          }
          iVar14 = local_118[uVar15 >> 1];
          *piVar13 = iVar14;
          iVar27 = local_1e8[uVar21 >> 1];
          *(int *)((longlong)plVar12 + (ulonglong)uVar5 * 0x1c + 0xe8) = iVar27;
          if ((iVar27 != iVar14) &&
             (local_23c = (byte)uVar2, ((iVar14 <= iVar27 ^ local_23c) & 1) == 0)) {
            iVar14 = (iVar14 + iVar27) / 2;
            goto LAB_140031002;
          }
        }
        *(uint *)((longlong)plVar12 + (ulonglong)uVar5 * 0x1c + 0xf4) = (uint)uVar2 * 2 & 2;
      }
      iVar14 = piVar29[2];
      piVar29 = piVar29 + 2;
    } while (iVar14 != 0x159b);
  }
  FUN_14003035d(param_1[6],puVar11);
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStackY_268)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStackY_268);
}

