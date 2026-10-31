/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10176042 */

bool __fastcall FUN_10176042(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  int *local_78;
  uint local_74;
  int *local_70;
  uint local_6c;
  int *local_68;
  int local_64;
  int *local_60;
  int *local_5c;
  int local_58;
  uint local_54 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_78;
  local_78 = param_1;
  if ((int)param_2 < 0xdd) {
    if (param_2 == 0xc4) {
      uVar7 = FUN_10171b39();
      iVar12 = uVar7 - 2;
      if (2 < uVar7) {
        local_68 = param_1 + 0x691;
        local_5c = param_1 + 1;
        local_60 = param_1 + 0xda1;
        do {
          iVar13 = *param_1;
          puVar8 = *(undefined1 **)(iVar13 + 0xac);
          local_58 = iVar12;
          if (puVar8 < *(undefined1 **)(iVar13 + 0xb0)) {
LAB_10176228:
            *(undefined1 **)(iVar13 + 0xac) = puVar8 + 1;
            piVar11 = (int *)CONCAT31((int3)((uint)(puVar8 + 1) >> 8),*puVar8);
          }
          else {
            if (*(int *)(iVar13 + 0x20) != 0) {
              FUN_10170e8c();
              puVar8 = *(undefined1 **)(iVar13 + 0xac);
              param_1 = local_78;
              goto LAB_10176228;
            }
            piVar11 = (int *)0x0;
          }
          if ((0x1f < (byte)piVar11) || (bVar3 = (byte)piVar11 & 0xf, 3 < bVar3)) goto LAB_10176479;
          local_6c = (uint)bVar3;
          iVar12 = 0;
          uVar7 = 0;
          local_70 = piVar11;
          do {
            uVar14 = uVar7;
            iVar13 = *param_1;
            pbVar10 = *(byte **)(iVar13 + 0xac);
            if (pbVar10 < *(byte **)(iVar13 + 0xb0)) {
LAB_1017627d:
              *(byte **)(iVar13 + 0xac) = pbVar10 + 1;
              uVar15 = (uint)*pbVar10;
            }
            else {
              if (*(int *)(iVar13 + 0x20) != 0) {
                FUN_10170e8c();
                pbVar10 = *(byte **)(iVar13 + 0xac);
                param_1 = local_78;
                goto LAB_1017627d;
              }
              uVar15 = 0;
            }
            uVar2 = local_6c;
            local_54[iVar12] = uVar15;
            uVar7 = uVar14 + uVar15;
            iVar12 = iVar12 + 1;
          } while (iVar12 != 0x10);
          local_74 = uVar14;
          if (0x100 < uVar7) goto LAB_10176479;
          if ((byte)local_70 < 0x10) {
            iVar13 = FUN_10176a51();
            iVar12 = 4;
          }
          else {
            iVar13 = FUN_10176a51();
            iVar12 = 0x1a44;
          }
          piVar11 = local_78;
          if (iVar13 == 0) goto LAB_1017647e;
          local_64 = uVar2 * 0x690;
          param_1 = local_78;
          if (uVar7 != 0) {
            iVar12 = local_64 + iVar12;
            local_74 = local_74 + uVar15;
            uVar14 = 0;
            do {
              iVar13 = *param_1;
              puVar8 = *(undefined1 **)(iVar13 + 0xac);
              if (puVar8 < *(undefined1 **)(iVar13 + 0xb0)) {
LAB_1017633a:
                *(undefined1 **)(iVar13 + 0xac) = puVar8 + 1;
                uVar4 = *puVar8;
              }
              else {
                if (*(int *)(iVar13 + 0x20) != 0) {
                  FUN_10170e8c();
                  puVar8 = *(undefined1 **)(iVar13 + 0xac);
                  param_1 = local_78;
                  goto LAB_1017633a;
                }
                uVar4 = 0;
              }
              *(undefined1 *)((int)piVar11 + uVar14 + iVar12 + 0x400) = uVar4;
              uVar14 = uVar14 + 1;
            } while (local_74 != uVar14);
          }
          if (0xf < (byte)local_70) {
            FUN_10176b99();
            param_1 = local_78;
          }
          iVar12 = (local_58 + -0x11) - uVar7;
        } while (iVar12 != 0 && (int)uVar7 <= local_58 + -0x11);
      }
    }
    else {
      if (param_2 != 0xdb) {
LAB_101761a0:
        if (((param_2 != 0xfe) && ((param_2 & 0xf0) != 0xe0)) || (uVar7 = FUN_10171b39(), uVar7 < 2)
           ) goto LAB_10176479;
        if (uVar7 < 7 || param_2 != 0xe0) {
          if (0xd < uVar7 && param_2 == 0xee) {
            bVar16 = true;
            iVar12 = -6;
            piVar11 = local_78;
            local_74 = uVar7;
            do {
              iVar13 = *piVar11;
              pcVar9 = *(char **)(iVar13 + 0xac);
              if (pcVar9 < *(char **)(iVar13 + 0xb0)) {
LAB_101764d2:
                *(char **)(iVar13 + 0xac) = pcVar9 + 1;
                cVar5 = *pcVar9;
              }
              else {
                if (*(int *)(iVar13 + 0x20) != 0) {
                  FUN_10170e8c();
                  pcVar9 = *(char **)(iVar13 + 0xac);
                  piVar11 = local_78;
                  goto LAB_101764d2;
                }
                cVar5 = '\0';
              }
              if (cVar5 != (&DAT_102bb04e)[iVar12]) {
                bVar16 = false;
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 != 0);
            if (bVar16) {
              iVar12 = *piVar11;
              uVar7 = *(uint *)(iVar12 + 0xac);
              if (uVar7 < *(uint *)(iVar12 + 0xb0)) {
LAB_10176547:
                *(uint *)(iVar12 + 0xac) = uVar7 + 1;
              }
              else if (*(int *)(iVar12 + 0x20) != 0) {
                FUN_10170e8c();
                uVar7 = *(uint *)(iVar12 + 0xac);
                goto LAB_10176547;
              }
              FUN_10171b39();
              FUN_10171b39();
              iVar12 = *local_78;
              pbVar10 = *(byte **)(iVar12 + 0xac);
              if (pbVar10 < *(byte **)(iVar12 + 0xb0)) {
LAB_10176588:
                *(byte **)(iVar12 + 0xac) = pbVar10 + 1;
                uVar7 = (uint)*pbVar10;
              }
              else {
                if (*(int *)(iVar12 + 0x20) != 0) {
                  FUN_10170e8c();
                  pbVar10 = *(byte **)(iVar12 + 0xac);
                  goto LAB_10176588;
                }
                uVar7 = 0;
              }
              local_78[0x11fa] = uVar7;
            }
          }
        }
        else {
          bVar16 = true;
          iVar12 = -5;
          piVar11 = local_78;
          local_74 = uVar7;
          do {
            iVar13 = *piVar11;
            pcVar9 = *(char **)(iVar13 + 0xac);
            if (pcVar9 < *(char **)(iVar13 + 0xb0)) {
LAB_10176446:
              *(char **)(iVar13 + 0xac) = pcVar9 + 1;
              cVar5 = *pcVar9;
            }
            else {
              if (*(int *)(iVar13 + 0x20) != 0) {
                FUN_10170e8c();
                pcVar9 = *(char **)(iVar13 + 0xac);
                piVar11 = local_78;
                goto LAB_10176446;
              }
              cVar5 = '\0';
            }
            if (cVar5 != (&DAT_102bb048)[iVar12]) {
              bVar16 = false;
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 != 0);
          if (bVar16) {
            piVar11[0x11f9] = 1;
          }
        }
        FUN_10171ace();
LAB_101765af:
        bVar16 = true;
        goto LAB_101765b1;
      }
      uVar7 = FUN_10171b39();
      iVar12 = uVar7 - 2;
      if (2 < uVar7) {
        local_70 = param_1 + 0xd21;
        do {
          iVar13 = *param_1;
          pbVar10 = *(byte **)(iVar13 + 0xac);
          if (pbVar10 < *(byte **)(iVar13 + 0xb0)) {
LAB_101760ca:
            *(byte **)(iVar13 + 0xac) = pbVar10 + 1;
            bVar3 = *pbVar10;
            if (0x1f < bVar3) goto LAB_10176479;
            uVar7 = bVar3 & 0xf;
            local_74 = CONCAT31(local_74._1_3_,bVar3 < 0x10);
            if (3 < (byte)uVar7) goto LAB_10176479;
          }
          else {
            if (*(int *)(iVar13 + 0x20) != 0) {
              FUN_10170e8c();
              pbVar10 = *(byte **)(iVar13 + 0xac);
              param_1 = local_78;
              goto LAB_101760ca;
            }
            uVar7 = 0;
            local_74 = CONCAT31(local_74._1_3_,1);
          }
          piVar11 = local_70;
          iVar13 = -0x40;
          do {
            iVar1 = *param_1;
            if ((char)local_74 == '\0') {
              uVar6 = FUN_10171b39();
              param_1 = local_78;
            }
            else {
              pbVar10 = *(byte **)(iVar1 + 0xac);
              if (*(byte **)(iVar1 + 0xb0) <= pbVar10) {
                if (*(int *)(iVar1 + 0x20) == 0) {
                  uVar6 = 0;
                  goto LAB_10176145;
                }
                FUN_10170e8c();
                pbVar10 = *(byte **)(iVar1 + 0xac);
                param_1 = local_78;
              }
              *(byte **)(iVar1 + 0xac) = pbVar10 + 1;
              uVar6 = (ushort)*pbVar10;
            }
LAB_10176145:
            *(ushort *)((int)piVar11 + (uint)(byte)(&UNK_102bb034)[iVar13] * 2 + uVar7 * 0x80) =
                 uVar6;
            iVar13 = iVar13 + 1;
          } while (iVar13 != 0);
          iVar12 = iVar12 + (local_74 & 0xff) * 0x40 + -0x81;
        } while (0 < iVar12);
      }
    }
    bVar16 = iVar12 == 0;
  }
  else {
    if (param_2 == 0xdd) {
      iVar12 = FUN_10171b39();
      if (iVar12 == 4) {
        iVar12 = FUN_10171b39();
        param_1[0x1201] = iVar12;
        goto LAB_101765af;
      }
    }
    else if (param_2 != 0xff) goto LAB_101761a0;
LAB_10176479:
    FUN_10170e07();
LAB_1017647e:
    bVar16 = false;
  }
LAB_101765b1:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_78)) {
    return bVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

