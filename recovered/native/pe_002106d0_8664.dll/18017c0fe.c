/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017c0fe */

bool FUN_18017c0fe(longlong *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  byte bVar15;
  ulonglong unaff_RDI;
  ulonglong uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  uint local_88 [16];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  if ((int)param_2 < 0xdd) {
    if (param_2 == 0xc4) {
      uVar6 = FUN_180177505(*param_1);
      iVar14 = uVar6 - 2;
      if (2 < uVar6) {
        do {
          lVar17 = *param_1;
          puVar10 = *(undefined1 **)(lVar17 + 0xc0);
          if (puVar10 < *(undefined1 **)(lVar17 + 200)) {
LAB_18017c2da:
            *(undefined1 **)(lVar17 + 0xc0) = puVar10 + 1;
            unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),*puVar10);
          }
          else {
            if (*(int *)(lVar17 + 0x30) != 0) {
              FUN_180176673(lVar17);
              puVar10 = *(undefined1 **)(lVar17 + 0xc0);
              goto LAB_18017c2da;
            }
            unaff_RDI = 0;
          }
          bVar15 = (byte)unaff_RDI;
          if (0x1f < bVar15) {
LAB_18017c4b6:
            pcVar13 = "bad DHT header";
            goto LAB_18017c558;
          }
          uVar9 = (undefined4)unaff_RDI;
          bVar2 = bVar15 & 0xf;
          if (3 < bVar2) goto LAB_18017c4b6;
          uVar6 = 0;
          lVar17 = 0;
          do {
            lVar1 = *param_1;
            pbVar12 = *(byte **)(lVar1 + 0xc0);
            if (pbVar12 < *(byte **)(lVar1 + 200)) {
LAB_18017c331:
              *(byte **)(lVar1 + 0xc0) = pbVar12 + 1;
              uVar7 = (uint)*pbVar12;
            }
            else {
              if (*(int *)(lVar1 + 0x30) != 0) {
                FUN_180176673(lVar1);
                pbVar12 = *(byte **)(lVar1 + 0xc0);
                goto LAB_18017c331;
              }
              uVar7 = 0;
            }
            local_88[lVar17] = uVar7;
            uVar6 = uVar6 + uVar7;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x10);
          if (0x100 < uVar6) goto LAB_18017c4b6;
          uVar11 = (ulonglong)bVar2;
          if (bVar15 < 0x10) {
            iVar8 = FUN_18017cbe3(param_1 + uVar11 * 0xd2 + 1,local_88);
            lVar17 = 8;
          }
          else {
            iVar8 = FUN_18017cbe3(param_1 + uVar11 * 0xd2 + 0x349,local_88);
            lVar17 = 0x1a48;
          }
          if (iVar8 == 0) goto LAB_18017c55d;
          local_8c = uVar9;
          if (uVar6 != 0) {
            unaff_RDI = (ulonglong)uVar6;
            uVar16 = 0;
            do {
              lVar1 = *param_1;
              puVar10 = *(undefined1 **)(lVar1 + 0xc0);
              if (puVar10 < *(undefined1 **)(lVar1 + 200)) {
LAB_18017c3f2:
                *(undefined1 **)(lVar1 + 0xc0) = puVar10 + 1;
                uVar3 = *puVar10;
              }
              else {
                if (*(int *)(lVar1 + 0x30) != 0) {
                  FUN_180176673(lVar1);
                  puVar10 = *(undefined1 **)(lVar1 + 0xc0);
                  goto LAB_18017c3f2;
                }
                uVar3 = 0;
              }
              *(undefined1 *)((longlong)param_1 + uVar16 + uVar11 * 0x690 + lVar17 + 0x400) = uVar3;
              uVar16 = uVar16 + 1;
            } while (unaff_RDI != uVar16);
          }
          if (0xf < (byte)local_8c) {
            FUN_18017cd65(param_1 + (ulonglong)bVar2 * 0x80 + 0x6d1,param_1 + uVar11 * 0xd2 + 0x349)
            ;
          }
          iVar8 = iVar14 + -0x11;
          iVar14 = iVar8 - uVar6;
        } while (iVar14 != 0 && (int)uVar6 <= iVar8);
      }
    }
    else {
      if (param_2 != 0xdb) {
LAB_18017c270:
        if ((param_2 == 0xfe) || ((param_2 & 0xf0) == 0xe0)) {
          uVar6 = FUN_180177505(*param_1);
          if (1 < uVar6) {
            if (uVar6 < 7 || param_2 != 0xe0) {
              if (uVar6 < 0xe || param_2 != 0xee) {
                iVar14 = uVar6 - 2;
              }
              else {
                bVar18 = true;
                lVar17 = 0;
                do {
                  lVar1 = *param_1;
                  pcVar13 = *(char **)(lVar1 + 0xc0);
                  if (pcVar13 < *(char **)(lVar1 + 200)) {
LAB_18017c5b4:
                    *(char **)(lVar1 + 0xc0) = pcVar13 + 1;
                    cVar4 = *pcVar13;
                  }
                  else {
                    if (*(int *)(lVar1 + 0x30) != 0) {
                      FUN_180176673(lVar1);
                      pcVar13 = *(char **)(lVar1 + 0xc0);
                      goto LAB_18017c5b4;
                    }
                    cVar4 = '\0';
                  }
                  if (cVar4 != (&DAT_1802e0d54)[lVar17]) {
                    bVar18 = false;
                  }
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 6);
                if (bVar18) {
                  lVar17 = *param_1;
                  uVar11 = *(ulonglong *)(lVar17 + 0xc0);
                  if (uVar11 < *(ulonglong *)(lVar17 + 200)) {
LAB_18017c62a:
                    *(ulonglong *)(lVar17 + 0xc0) = uVar11 + 1;
                  }
                  else if (*(int *)(lVar17 + 0x30) != 0) {
                    FUN_180176673(lVar17);
                    uVar11 = *(ulonglong *)(lVar17 + 0xc0);
                    goto LAB_18017c62a;
                  }
                  FUN_180177505(*param_1);
                  FUN_180177505(*param_1);
                  lVar17 = *param_1;
                  pbVar12 = *(byte **)(lVar17 + 0xc0);
                  if (pbVar12 < *(byte **)(lVar17 + 200)) {
LAB_18017c66c:
                    *(byte **)(lVar17 + 0xc0) = pbVar12 + 1;
                    uVar7 = (uint)*pbVar12;
                  }
                  else {
                    if (*(int *)(lVar17 + 0x30) != 0) {
                      FUN_180176673(lVar17);
                      pbVar12 = *(byte **)(lVar17 + 0xc0);
                      goto LAB_18017c66c;
                    }
                    uVar7 = 0;
                  }
                  *(uint *)((longlong)param_1 + 0x484c) = uVar7;
                  iVar14 = uVar6 - 0xe;
                }
                else {
                  iVar14 = uVar6 - 8;
                }
              }
            }
            else {
              bVar18 = true;
              lVar17 = 0;
              do {
                lVar1 = *param_1;
                pcVar13 = *(char **)(lVar1 + 0xc0);
                if (pcVar13 < *(char **)(lVar1 + 200)) {
LAB_18017c518:
                  *(char **)(lVar1 + 0xc0) = pcVar13 + 1;
                  cVar4 = *pcVar13;
                }
                else {
                  if (*(int *)(lVar1 + 0x30) != 0) {
                    FUN_180176673(lVar1);
                    pcVar13 = *(char **)(lVar1 + 0xc0);
                    goto LAB_18017c518;
                  }
                  cVar4 = '\0';
                }
                if (cVar4 != (&DAT_1802e0d4f)[lVar17]) {
                  bVar18 = false;
                }
                lVar17 = lVar17 + 1;
              } while (lVar17 != 5);
              iVar14 = uVar6 - 7;
              if (bVar18) {
                *(undefined4 *)(param_1 + 0x909) = 1;
              }
            }
            FUN_180177488(*param_1,iVar14);
            goto LAB_18017c692;
          }
          if (param_2 == 0xfe) {
            pcVar13 = "bad COM len";
          }
          else {
            pcVar13 = "bad APP len";
          }
        }
        else {
          pcVar13 = "unknown marker";
        }
        goto LAB_18017c558;
      }
      uVar6 = FUN_180177505(*param_1);
      iVar14 = uVar6 - 2;
      if (2 < uVar6) {
        do {
          lVar17 = *param_1;
          pbVar12 = *(byte **)(lVar17 + 0xc0);
          if (pbVar12 < *(byte **)(lVar17 + 200)) {
LAB_18017c194:
            *(byte **)(lVar17 + 0xc0) = pbVar12 + 1;
            bVar15 = *pbVar12;
            if (0x1f < bVar15) {
              pcVar13 = "bad DQT type";
              goto LAB_18017c558;
            }
            bVar2 = bVar15 & 0xf;
            bVar18 = bVar15 < 0x10;
            if (3 < bVar2) {
              pcVar13 = "bad DQT table";
              goto LAB_18017c558;
            }
          }
          else {
            if (*(int *)(lVar17 + 0x30) != 0) {
              FUN_180176673(lVar17);
              pbVar12 = *(byte **)(lVar17 + 0xc0);
              goto LAB_18017c194;
            }
            bVar18 = true;
            bVar2 = 0;
          }
          lVar17 = 0;
          do {
            lVar1 = *param_1;
            if (bVar18 == false) {
              uVar5 = FUN_180177505(lVar1);
            }
            else {
              pbVar12 = *(byte **)(lVar1 + 0xc0);
              if (*(byte **)(lVar1 + 200) <= pbVar12) {
                if (*(int *)(lVar1 + 0x30) == 0) {
                  uVar5 = 0;
                  goto LAB_18017c210;
                }
                FUN_180176673(lVar1);
                pbVar12 = *(byte **)(lVar1 + 0xc0);
              }
              *(byte **)(lVar1 + 0xc0) = pbVar12 + 1;
              uVar5 = (ushort)*pbVar12;
            }
LAB_18017c210:
            *(ushort *)
             ((longlong)param_1 +
             (ulonglong)(byte)(&DAT_1802e0d00)[lVar17] * 2 + (ulonglong)bVar2 * 0x80 + 0x3488) =
                 uVar5;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 0x40);
          iVar14 = iVar14 + (uint)bVar18 * 0x40 + -0x81;
        } while (0 < iVar14);
      }
    }
    bVar18 = iVar14 == 0;
  }
  else {
    if (param_2 == 0xdd) {
      iVar14 = FUN_180177505(*param_1);
      if (iVar14 == 4) {
        uVar9 = FUN_180177505(*param_1);
        *(undefined4 *)(param_1 + 0x90d) = uVar9;
LAB_18017c692:
        bVar18 = true;
        goto LAB_18017c694;
      }
      pcVar13 = "bad DRI len";
    }
    else {
      if (param_2 != 0xff) goto LAB_18017c270;
      pcVar13 = "expected marker";
    }
LAB_18017c558:
    FUN_1801765d0(pcVar13);
LAB_18017c55d:
    bVar18 = false;
  }
LAB_18017c694:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_b8)) {
    return bVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
}

