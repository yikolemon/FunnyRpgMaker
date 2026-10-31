/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10172b60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_10172b60(int *param_1,byte *param_2,uint param_3,int param_4,uint param_5,uint param_6,
            int param_7,int param_8)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  byte *local_64;
  byte local_59;
  int local_54;
  byte *local_44;
  
  bVar19 = param_7 == 0x10;
  iVar9 = param_5 * param_4 << bVar19;
  iVar2 = *(int *)(*param_1 + 8);
  iVar10 = iVar2 << bVar19;
  iVar6 = FUN_10173127(param_4 << bVar19,0);
  param_1[3] = iVar6;
  if ((iVar6 != 0) && (iVar6 = FUN_1017315f(param_7,7), iVar6 != 0)) {
    uVar16 = iVar2 * param_5;
    uVar17 = uVar16 * param_7 + 7 >> 3;
    iVar6 = FUN_1017319f(uVar17);
    if ((iVar6 != 0) &&
       (((uVar17 + 1) * param_6 <= param_3 && (iVar6 = FUN_101731c8(0), iVar6 != 0)))) {
      if (param_7 < 8) {
        iVar10 = 1;
      }
      if (param_6 != 0) {
        uVar12 = param_5;
        if (param_7 < 8) {
          uVar12 = uVar17;
        }
        iVar18 = uVar12 * iVar10;
        iVar15 = (uVar12 - 1) * iVar10;
        iVar11 = iVar6 + iVar10;
        local_44 = param_2 + iVar10 + 1;
        local_59 = 1;
        uVar12 = 0;
        local_54 = 0;
        do {
          uVar13 = 0;
          if ((uVar12 & 1) != 0) {
            uVar13 = uVar17;
          }
          bVar4 = *param_2;
          if (4 < bVar4) {
            FUN_10170e07();
            thunk_FUN_10274120(iVar6);
            return 0;
          }
          if (uVar12 == 0) {
            bVar4 = (&DAT_102bafa4)[bVar4];
          }
          local_64 = (byte *)(iVar6 + uVar13);
          iVar3 = param_1[3];
          pbVar1 = param_2 + 1;
          if (bVar4 < 6) {
            iVar8 = iVar6 + local_59 * uVar17;
            switch(bVar4) {
            case 0:
              FUN_1025b2d0(local_64,pbVar1,iVar18);
              break;
            case 1:
              FUN_1025b2d0(local_64,pbVar1,iVar10);
              if (iVar10 < iVar18) {
                iVar8 = 0;
                do {
                  *(byte *)(uVar13 + iVar11 + iVar8) = local_64[iVar8] + local_44[iVar8];
                  iVar8 = iVar8 + 1;
                } while (iVar15 != iVar8);
              }
              break;
            case 2:
              if (0 < iVar18) {
                iVar7 = 0;
                do {
                  local_64[iVar7] = *(char *)(iVar8 + iVar7) + param_2[iVar7 + 1];
                  iVar7 = iVar7 + 1;
                } while (iVar18 != iVar7);
              }
              break;
            case 3:
              if (0 < iVar10) {
                iVar7 = 0;
                do {
                  local_64[iVar7] = (*(byte *)(iVar8 + iVar7) >> 1) + param_2[iVar7 + 1];
                  iVar7 = iVar7 + 1;
                } while (iVar10 != iVar7);
              }
              if (iVar10 < iVar18) {
                iVar8 = 0;
                do {
                  *(byte *)(uVar13 + iVar11 + iVar8) =
                       (char)((uint)local_64[iVar8] +
                              (uint)*(byte *)(local_59 * uVar17 + iVar11 + iVar8) >> 1) +
                       local_44[iVar8];
                  iVar8 = iVar8 + 1;
                } while (iVar15 != iVar8);
              }
              break;
            case 4:
              if (0 < iVar10) {
                iVar7 = 0;
                do {
                  local_64[iVar7] = *(char *)(iVar8 + iVar7) + param_2[iVar7 + 1];
                  iVar7 = iVar7 + 1;
                } while (iVar10 != iVar7);
              }
              if (iVar10 < iVar18) {
                iVar7 = 0;
                do {
                  bVar4 = local_44[iVar7];
                  cVar5 = FUN_101731f5(*(undefined1 *)(iVar8 + iVar7));
                  *(byte *)(uVar13 + iVar11 + iVar7) = cVar5 + bVar4;
                  iVar7 = iVar7 + 1;
                } while (iVar15 != iVar7);
              }
              break;
            case 5:
              FUN_1025b2d0(local_64,pbVar1,iVar10);
              if (iVar10 < iVar18) {
                iVar8 = 0;
                do {
                  *(byte *)(uVar13 + iVar11 + iVar8) = (local_64[iVar8] >> 1) + local_44[iVar8];
                  iVar8 = iVar8 + 1;
                } while (iVar15 != iVar8);
              }
            }
          }
          if (param_7 < 8) {
            bVar4 = 1;
            if (param_8 == 0) {
              bVar4 = (&DAT_102babe0)[param_7];
            }
            if (param_7 == 4) {
              if (uVar16 != 0) {
                bVar14 = 0;
                uVar13 = 0;
                do {
                  if ((uVar13 & 1) == 0) {
                    bVar14 = *local_64;
                    local_64 = local_64 + 1;
                  }
                  *(byte *)(iVar3 + local_54 + uVar13) = (bVar14 >> 4) * bVar4;
                  bVar14 = bVar14 << 4;
                  uVar13 = uVar13 + 1;
                } while (uVar16 != uVar13);
              }
            }
            else if (param_7 == 2) {
              if (uVar16 != 0) {
                bVar14 = 0;
                uVar13 = 0;
                do {
                  if ((uVar13 & 3) == 0) {
                    bVar14 = *local_64;
                    local_64 = local_64 + 1;
                  }
                  *(byte *)(iVar3 + local_54 + uVar13) = (bVar14 >> 6) * bVar4;
                  bVar14 = bVar14 << 2;
                  uVar13 = uVar13 + 1;
                } while (uVar16 != uVar13);
              }
            }
            else if (uVar16 != 0) {
              bVar14 = 0;
              uVar13 = 0;
              do {
                if ((uVar13 & 7) == 0) {
                  bVar14 = *local_64;
                  local_64 = local_64 + 1;
                }
                *(byte *)(iVar3 + local_54 + uVar13) = (char)bVar14 >> 7 & bVar4;
                bVar14 = bVar14 * '\x02';
                uVar13 = uVar13 + 1;
              } while (uVar16 != uVar13);
            }
            if (iVar2 != param_4) {
LAB_1017301f:
              FUN_10173219(param_5,iVar2);
            }
          }
          else if (param_7 == 8) {
            if (iVar2 != param_4) goto LAB_1017301f;
            FUN_1025b2d0(uVar12 * iVar9 + iVar3,local_64,uVar16);
          }
          else if (param_7 == 0x10) {
            if (iVar2 == param_4) {
              if (uVar16 != 0) {
                uVar13 = 0;
                do {
                  *(ushort *)(iVar3 + local_54 + uVar13 * 2) =
                       *(ushort *)(local_64 + uVar13 * 2) << 8 |
                       *(ushort *)(local_64 + uVar13 * 2) >> 8;
                  uVar13 = uVar13 + 1;
                } while (uVar16 != uVar13);
              }
            }
            else if (iVar2 == 1) {
              if (param_5 != 0) {
                uVar13 = 0;
                do {
                  *(ushort *)(iVar3 + local_54 + uVar13 * 4) =
                       *(ushort *)(local_64 + uVar13 * 2) << 8 |
                       *(ushort *)(local_64 + uVar13 * 2) >> 8;
                  *(undefined2 *)(iVar3 + local_54 + 2 + uVar13 * 4) = 0xffff;
                  uVar13 = uVar13 + 1;
                } while (param_5 != uVar13);
              }
            }
            else if (param_5 != 0) {
              uVar13 = 0;
              do {
                *(ulonglong *)(iVar3 + local_54 + uVar13 * 8) =
                     (ulonglong)local_64[1] | (ulonglong)local_64[3] << 0x10 |
                     (ulonglong)local_64[5] << 0x20 |
                     CONCAT26(-_UNK_102bb496,
                              CONCAT24((ushort)local_64[4] * _UNK_102bb494,
                                       CONCAT22((ushort)local_64[2] * _UNK_102bb492,
                                                (ushort)*local_64 * _DAT_102bb490)));
                uVar13 = uVar13 + 1;
                local_64 = local_64 + 6;
              } while (param_5 != uVar13);
            }
          }
          param_2 = pbVar1 + iVar18;
          uVar12 = uVar12 + 1;
          local_44 = local_44 + iVar18 + 1;
          local_59 = local_59 ^ 1;
          local_54 = local_54 + iVar9;
        } while (uVar12 != param_6);
      }
      thunk_FUN_10274120(iVar6);
      return 1;
    }
  }
  FUN_10170e07();
  return 0;
}

