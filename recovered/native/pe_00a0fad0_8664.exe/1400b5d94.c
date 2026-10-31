/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b5d94 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1400b5d94(ushort *param_1,uint param_2,uint *param_3,char param_4,byte param_5)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *pbVar15;
  byte bVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auStack_528 [39];
  char local_501;
  uint local_500;
  uint local_4fc;
  longlong local_4f8;
  uint local_4ec;
  byte *local_4e8;
  ulonglong local_4e0;
  uint local_4d8;
  int local_4d4;
  uint local_4d0;
  int local_4cc;
  ulonglong local_4c8;
  ulonglong local_4c0;
  uint local_4b8;
  uint local_4b4;
  longlong local_4b0;
  ulonglong local_4a8;
  longlong local_4a0;
  longlong local_498;
  uint *local_490;
  ulonglong local_488;
  longlong *local_480;
  uint local_478 [258];
  ulonglong local_70;
  
  local_70 = DAT_1401c9640 ^ (ulonglong)auStack_528;
  uVar3 = 0x10000;
  if (param_2 < 0x300000) {
    uVar3 = 0x5555;
  }
  local_4ec = 1;
  if (0x18fff < param_2) {
    local_4ec = uVar3;
  }
  uVar22 = 0x100000;
  if (param_2 < 0x100000) {
    uVar3 = 0x100000;
    do {
      uVar22 = (ulonglong)uVar3;
      if (uVar3 < 0x202) break;
      uVar3 = uVar3 >> 1;
    } while (param_2 < uVar3);
  }
  uVar14 = (ulonglong)(local_4ec * 0x800);
  local_501 = param_4;
  local_4f8 = _malloc_base(local_4ec * 0x800 + 0x90000 + (int)uVar22 * 0x18);
  lVar6 = local_4f8 + 0x10000;
  lVar13 = local_4f8 + 0x90000;
  FUN_1401366a0(local_4f8,0,0x10000);
  local_4b0 = lVar13;
  FUN_1401366a0(lVar13,0,uVar14);
  local_498 = lVar6;
  FUN_1401366a0(lVar6,0,0x80000);
  if ((uVar22 & 0xfffffff8) != 0) {
    lVar6 = local_4f8 + uVar14;
    lVar13 = 0;
    do {
      *(undefined4 *)(lVar6 + 0x900b8 + lVar13) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x900a0 + lVar13) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x90088 + lVar13) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x90070 + lVar13) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x90058 + lVar13) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x90040 + lVar13) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x90028 + lVar13) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x90010 + lVar13) = 0xffffffff;
      lVar13 = lVar13 + 0xc0;
    } while ((int)(uVar22 >> 3) * 0xc0 != (int)lVar13);
  }
  FUN_1401366a0(local_478,0);
  uVar4 = param_2 & 0xfffffff8;
  puVar10 = param_1;
  for (uVar3 = param_2 >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    local_478[(byte)*puVar10] = local_478[(byte)*puVar10] + 1;
    local_478[*(byte *)((longlong)puVar10 + 1)] = local_478[*(byte *)((longlong)puVar10 + 1)] + 1;
    local_478[(byte)puVar10[1]] = local_478[(byte)puVar10[1]] + 1;
    local_478[*(byte *)((longlong)puVar10 + 3)] = local_478[*(byte *)((longlong)puVar10 + 3)] + 1;
    local_478[(byte)puVar10[2]] = local_478[(byte)puVar10[2]] + 1;
    local_478[*(byte *)((longlong)puVar10 + 5)] = local_478[*(byte *)((longlong)puVar10 + 5)] + 1;
    local_478[(byte)puVar10[3]] = local_478[(byte)puVar10[3]] + 1;
    local_478[*(byte *)((longlong)puVar10 + 7)] = local_478[*(byte *)((longlong)puVar10 + 7)] + 1;
    puVar10 = puVar10 + 4;
  }
  if (uVar4 != param_2) {
    do {
      local_478[(byte)*puVar10] = local_478[(byte)*puVar10] + 1;
      uVar4 = uVar4 + 1;
      puVar10 = (ushort *)((longlong)puVar10 + 1);
    } while (uVar4 < param_2);
  }
  local_4fc = -(uint)param_5 | 0x40;
  local_4a0 = local_4f8 + uVar14 + 0x90000;
  lVar6 = 1;
  uVar3 = 0;
  do {
    uVar17 = uVar3 & 0xff;
    uVar3 = (uint)lVar6;
    uVar4 = local_478[lVar6];
    if (local_478[0] < local_478[lVar6]) {
      uVar4 = local_478[0];
      uVar3 = uVar17;
    }
    local_478[0] = uVar4;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x100);
  *param_3 = param_2;
  bVar16 = (byte)uVar3;
  *(byte *)(param_3 + 2) = bVar16;
  if (local_501 != '\0') {
    FUN_1400b75dc(&DAT_14017288a);
    DAT_1401ccd38 = DAT_1401ccd38 + 10;
  }
  fVar2 = ram0x000140164f90;
  if (param_2 == 0) {
    uVar3 = 9;
  }
  else {
    pbVar15 = (byte *)(ulonglong)param_2;
    local_4b8 = uVar3 & 0xff;
    local_4c0 = 3 - (longlong)param_1;
    local_4d8 = 0x19000;
    local_4e0 = 0;
    uVar14 = 0;
    uVar21 = 0;
    uVar23 = 0;
    pbVar18 = (byte *)((longlong)param_3 + 9);
    local_4a8 = (ulonglong)((int)uVar22 - 1);
    local_490 = param_3;
    local_488 = local_4c0;
    uVar3 = local_4fc;
    do {
      local_500 = (uint)uVar14;
      uVar4 = (uint)uVar23;
      if (uVar4 + 4 < param_2) {
        uVar22 = (ulonglong)*param_1;
        plVar7 = (longlong *)(local_498 + uVar22 * 8);
        if (*(char *)(local_4f8 + uVar22) == '\x01') {
          plVar7 = (longlong *)((ulonglong)(byte)param_1[1] * 8 + *plVar7);
        }
        else if (local_500 < local_4ec) {
          lVar6 = uVar14 * 0x800 + local_4b0;
          *(longlong *)(local_4f8 + 0x10000 + uVar22 * 8) = lVar6;
          plVar7 = (longlong *)(lVar6 + (ulonglong)(byte)param_1[1] * 8);
          *(undefined1 *)(local_4f8 + uVar22) = 1;
          local_500 = local_500 + 1;
        }
        plVar20 = (longlong *)*plVar7;
        if (plVar20 == (longlong *)0x0) {
          local_4c8 = 0xffffffff;
          iVar9 = -2;
        }
        else {
          local_4b4 = uVar4 + 0x2003;
          uVar17 = 0;
          local_4cc = -1;
          local_4c8 = 0xffffffff;
          local_4d4 = -1;
          do {
            iVar9 = uVar4 - (int)plVar20[2];
            if (iVar9 < 0x1000000) {
              if (local_4b4 < param_2) {
                iVar11 = 0x800;
                puVar10 = param_1;
                do {
                  if (*(int *)((longlong)puVar10 + (longlong)-iVar9) != *(int *)puVar10)
                  goto LAB_1400b6207;
                  puVar10 = puVar10 + 2;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                iVar11 = 0;
                puVar10 = param_1 + 0x1000;
LAB_1400b6207:
                iVar11 = iVar11 * 4 + 3;
                lVar6 = 0;
                do {
                  if (*(byte *)((longlong)puVar10 + lVar6 + -iVar9) !=
                      *(byte *)((longlong)puVar10 + lVar6)) goto LAB_1400b6224;
                  lVar6 = lVar6 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                iVar11 = 0;
LAB_1400b6224:
                uVar14 = (ulonglong)(0x2003 - iVar11);
                uVar3 = local_4fc;
              }
              else {
                if (param_2 <= uVar4) goto LAB_1400b6298;
                uVar22 = 0;
                do {
                  uVar14 = uVar22;
                  if ((*(byte *)((longlong)param_1 + (uVar22 - (longlong)iVar9)) !=
                       *(byte *)((longlong)param_1 + uVar22)) ||
                     (uVar14 = uVar22 + 1, 0x2001 < uVar22)) break;
                  pbVar19 = (byte *)(uVar22 + uVar23 + 1);
                  uVar22 = uVar14;
                } while (pbVar19 < pbVar15);
              }
              uVar5 = (uint)uVar14;
              if (3 < (int)uVar5) {
                uVar12 = (0xffff < iVar9) + 1;
                if (iVar9 < 0x100) {
                  uVar12 = 0;
                }
                iVar11 = (uVar5 - uVar12) + ((uVar5 < 0x24) - 4);
                if (local_4cc < iVar11) {
                  local_4c0 = (ulonglong)(0x23 < uVar5);
                  local_4d4 = iVar9;
                  local_4d0 = uVar12;
                  local_4cc = iVar11;
                  local_4c8 = uVar14;
                }
              }
            }
            else {
              lVar6 = *plVar20;
              if ((longlong *)plVar20[1] != (longlong *)0x0) {
                *(longlong *)plVar20[1] = lVar6;
              }
              if (lVar6 != 0) {
                *(longlong *)(lVar6 + 8) = plVar20[1];
              }
              *(undefined4 *)(plVar20 + 2) = 0xffffffff;
            }
LAB_1400b6298:
            uVar17 = uVar17 + 1;
          } while ((uVar17 < uVar3) && (plVar20 = (longlong *)*plVar20, plVar20 != (longlong *)0x0))
          ;
          iVar9 = local_4d4 + -1;
          local_480 = plVar7;
        }
        plVar20 = (longlong *)(local_4a0 + uVar21 * 0x18);
        if ((int)plVar20[2] != -1) {
          lVar6 = *plVar20;
          if ((longlong *)plVar20[1] != (longlong *)0x0) {
            *(longlong *)plVar20[1] = lVar6;
          }
          if (lVar6 != 0) {
            *(longlong *)(lVar6 + 8) = plVar20[1];
          }
        }
        *(uint *)(plVar20 + 2) = uVar4;
        plVar20[1] = (longlong)plVar7;
        lVar6 = *plVar7;
        *plVar20 = lVar6;
        if (lVar6 != 0) {
          *(longlong **)(lVar6 + 8) = plVar20;
        }
        *plVar7 = (longlong)plVar20;
        uVar21 = (ulonglong)((int)uVar21 + 1U & (uint)local_4a8);
        iVar11 = (int)local_4c8;
        local_4e8 = pbVar18;
        if (iVar11 == -1) goto LAB_1400b6381;
        *pbVar18 = bVar16;
        iVar1 = (int)local_4c0;
        uVar3 = iVar1 * 4 | iVar11 * 8 - 0x20U | local_4d0;
        pbVar18[1] = ((char)uVar3 + '\x01') - ((uVar3 & 0xff) < local_4b8);
        if (iVar1 == 1) {
          pbVar18[2] = (byte)(iVar11 - 4U >> 5);
          pbVar18 = pbVar18 + 3;
        }
        else {
          pbVar18 = pbVar18 + 2;
        }
        *pbVar18 = (byte)iVar9;
        if ((int)local_4d0 < 1) {
          pbVar19 = pbVar18 + 1;
        }
        else {
          pbVar18[1] = (byte)((uint)iVar9 >> 8);
          if (local_4d0 == 2) {
            pbVar18[2] = (byte)((uint)iVar9 >> 0x10);
            pbVar19 = pbVar18 + 3;
          }
          else {
            pbVar19 = pbVar18 + 2;
          }
        }
        uVar5 = iVar11 + uVar4;
        if (1 < iVar11 && uVar5 < param_2) {
          lVar6 = 0;
          do {
            if (pbVar15 <= (byte *)((longlong)param_1 + lVar6 + local_488)) break;
            uVar22 = (ulonglong)*(ushort *)((longlong)param_1 + lVar6 + 1);
            plVar7 = (longlong *)(local_498 + uVar22 * 8);
            if (*(char *)(local_4f8 + uVar22) == '\x01') {
              plVar7 = (longlong *)
                       ((ulonglong)*(byte *)((longlong)param_1 + lVar6 + 3) * 8 + *plVar7);
            }
            else if (local_500 < local_4ec) {
              lVar13 = (ulonglong)local_500 * 0x800 + local_4b0;
              *(longlong *)(local_4f8 + 0x10000 + uVar22 * 8) = lVar13;
              plVar7 = (longlong *)
                       (lVar13 + (ulonglong)*(byte *)((longlong)param_1 + lVar6 + 3) * 8);
              *(undefined1 *)(local_4f8 + uVar22) = 1;
              local_500 = local_500 + 1;
            }
            plVar20 = (longlong *)(local_4a0 + uVar21 * 0x18);
            if ((int)plVar20[2] != -1) {
              lVar13 = *plVar20;
              if ((longlong *)plVar20[1] != (longlong *)0x0) {
                *(longlong *)plVar20[1] = lVar13;
              }
              if (lVar13 != 0) {
                *(longlong *)(lVar13 + 8) = plVar20[1];
              }
            }
            *(uint *)(plVar20 + 2) = uVar4 + 1 + (int)lVar6;
            plVar20[1] = (longlong)plVar7;
            lVar13 = *plVar7;
            *plVar20 = lVar13;
            if (lVar13 != 0) {
              *(longlong **)(lVar13 + 8) = plVar20;
            }
            *plVar7 = (longlong)plVar20;
            uVar21 = (ulonglong)((int)uVar21 + 1U & (uint)local_4a8);
            lVar6 = lVar6 + 1;
          } while (iVar11 + -1 != (int)lVar6);
        }
        uVar17 = (int)local_4e0 + local_4d0 + iVar1 + 3;
        param_1 = (ushort *)((longlong)param_1 + (local_4c8 & 0xffffffff));
        local_4e8 = pbVar19;
        uVar3 = local_4fc;
      }
      else {
LAB_1400b6381:
        bVar8 = (byte)*param_1;
        if (bVar8 == bVar16) {
          pbVar18[1] = bVar16;
          pbVar19 = pbVar18 + 2;
          iVar9 = 2;
          bVar8 = bVar16;
        }
        else {
          pbVar19 = pbVar18 + 1;
          iVar9 = 1;
        }
        uVar17 = (int)local_4e0 + iVar9;
        *pbVar18 = bVar8;
        param_1 = (ushort *)((longlong)param_1 + 1);
        uVar5 = uVar4 + 1;
      }
      local_4e0 = (ulonglong)uVar17;
      uVar23 = (ulonglong)uVar5;
      uVar14 = (ulonglong)local_500;
      if ((local_4d8 < uVar5) && (local_4d8 = uVar5 + 0x19000, local_501 != '\0')) {
        FUN_1400b75dc(&DAT_140171d09,(int)(((float)uVar23 * fVar2) / (float)(longlong)pbVar15));
        uVar14 = (ulonglong)local_500;
        uVar3 = local_4fc;
      }
      pbVar18 = pbVar19;
    } while (uVar5 < param_2);
    uVar3 = (int)local_4e0 + 9;
    param_3 = local_490;
  }
  if (local_501 != '\0') {
    FUN_1400b75dc(&DAT_140171d13);
  }
  param_3[1] = uVar3;
  thunk_FUN_1401212e0(local_4f8);
  if (DAT_1401c9640 != (local_70 ^ (ulonglong)auStack_528)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_70 ^ (ulonglong)auStack_528);
  }
  return uVar3;
}

