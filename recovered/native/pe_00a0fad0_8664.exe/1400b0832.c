/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b0832 */

uint FUN_1400b0832(ushort *param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  ushort *puVar12;
  byte bVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_4f8 [44];
  uint local_4cc;
  byte *local_4c8;
  uint local_4bc;
  longlong local_4b8;
  uint local_4ac;
  uint local_4a8;
  int local_4a4;
  ulonglong local_4a0;
  ulonglong local_498;
  uint local_490;
  uint local_48c;
  longlong local_488;
  ulonglong local_480;
  ulonglong local_478;
  longlong local_470;
  longlong local_468;
  uint *local_460;
  ulonglong local_458;
  longlong *local_450;
  uint local_448 [256];
  ulonglong local_48;
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_4f8;
  uVar3 = 0x10000;
  if (param_2 < 0x300000) {
    uVar3 = 0x5555;
  }
  local_4ac = 1;
  if (0x18fff < param_2) {
    local_4ac = uVar3;
  }
  uVar16 = 0x100000;
  if (param_2 < 0x100000) {
    uVar3 = 0x100000;
    do {
      uVar16 = (ulonglong)uVar3;
      if (uVar3 < 0x202) break;
      uVar3 = uVar3 >> 1;
    } while (param_2 < uVar3);
  }
  uVar8 = (ulonglong)(local_4ac * 0x400);
  local_4cc = param_2;
  local_4b8 = _malloc_base(local_4ac * 0x400 + 0x50000 + (int)uVar16 * 0x18);
  lVar7 = local_4b8 + 0x10000;
  lVar14 = local_4b8 + 0x50000;
  FUN_1401366a0(local_4b8,0,0x10000);
  local_488 = lVar14;
  FUN_1401366a0(lVar14,0,uVar8);
  local_468 = lVar7;
  FUN_1401366a0(lVar7,0,0x40000);
  if ((uVar16 & 0xfffffff8) != 0) {
    lVar7 = local_4b8 + uVar8;
    lVar14 = 0;
    do {
      *(undefined4 *)(lVar7 + 0x500b8 + lVar14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x500a0 + lVar14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x50088 + lVar14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x50070 + lVar14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x50058 + lVar14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x50040 + lVar14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x50028 + lVar14) = 0xffffffff;
      *(undefined4 *)(lVar7 + 0x50010 + lVar14) = 0xffffffff;
      lVar14 = lVar14 + 0xc0;
    } while ((int)(uVar16 >> 3) * 0xc0 != (int)lVar14);
  }
  FUN_1401366a0(local_448,0,0x400);
  uVar4 = local_4cc & 0xfffffff8;
  puVar12 = param_1;
  for (uVar3 = local_4cc >> 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    local_448[(byte)*puVar12] = local_448[(byte)*puVar12] + 1;
    local_448[*(byte *)((longlong)puVar12 + 1)] = local_448[*(byte *)((longlong)puVar12 + 1)] + 1;
    local_448[(byte)puVar12[1]] = local_448[(byte)puVar12[1]] + 1;
    local_448[*(byte *)((longlong)puVar12 + 3)] = local_448[*(byte *)((longlong)puVar12 + 3)] + 1;
    local_448[(byte)puVar12[2]] = local_448[(byte)puVar12[2]] + 1;
    local_448[*(byte *)((longlong)puVar12 + 5)] = local_448[*(byte *)((longlong)puVar12 + 5)] + 1;
    local_448[(byte)puVar12[3]] = local_448[(byte)puVar12[3]] + 1;
    local_448[*(byte *)((longlong)puVar12 + 7)] = local_448[*(byte *)((longlong)puVar12 + 7)] + 1;
    puVar12 = puVar12 + 4;
  }
  if (uVar4 != local_4cc) {
    do {
      local_448[(byte)*puVar12] = local_448[(byte)*puVar12] + 1;
      uVar4 = uVar4 + 1;
      puVar12 = (ushort *)((longlong)puVar12 + 1);
    } while (uVar4 < local_4cc);
  }
  uVar3 = (int)uVar16 - 1;
  local_470 = local_4b8 + uVar8 + 0x50000;
  uVar8 = 1;
  uVar16 = 0;
  do {
    bVar11 = (byte)uVar16;
    uVar16 = uVar16 & 0xff;
    if (local_448[uVar8] <= local_448[0]) {
      bVar11 = (byte)(uVar8 & 0xffffffff);
      local_448[0] = local_448[uVar8];
      uVar16 = uVar8 & 0xffffffff;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x100);
  *param_3 = local_4cc;
  *(byte *)(param_3 + 2) = bVar11;
  if (local_4cc == 0) {
    uVar4 = 9;
  }
  else {
    local_4c8 = (byte *)((longlong)param_3 + 9);
    local_490 = (uint)uVar16 & 0xff;
    local_458 = 3 - (longlong)param_1;
    uVar16 = 0;
    local_4bc = 0;
    uVar8 = 0;
    uVar19 = 0;
    local_498 = local_458;
    do {
      uVar1 = (uint)uVar19;
      if (uVar1 + 4 < local_4cc) {
        uVar9 = (ulonglong)*param_1;
        plVar10 = (longlong *)(local_468 + uVar9 * 4);
        if (*(char *)(local_4b8 + uVar9) == '\x01') {
          plVar10 = (longlong *)((ulonglong)(byte)param_1[1] * 4 + *plVar10);
        }
        else if (local_4bc < local_4ac) {
          lVar7 = (ulonglong)local_4bc * 0x400 + local_488;
          *(longlong *)(local_4b8 + 0x10000 + uVar9 * 4) = lVar7;
          plVar10 = (longlong *)(lVar7 + (ulonglong)(byte)param_1[1] * 4);
          *(undefined1 *)(local_4b8 + uVar9) = 1;
          local_4bc = local_4bc + 1;
        }
        plVar18 = (longlong *)*plVar10;
        if (plVar18 == (longlong *)0x0) {
          uVar19 = 0xffffffff;
          iVar21 = -2;
        }
        else {
          local_48c = uVar1 + 0x2003;
          uVar4 = 0;
          local_4a4 = -1;
          local_4a0 = 0xffffffff;
          iVar21 = -1;
          do {
            iVar5 = uVar1 - (int)plVar18[2];
            if (iVar5 < 0x1000000) {
              if (local_48c < local_4cc) {
                iVar20 = 0x800;
                puVar12 = param_1;
                do {
                  if (*(int *)((longlong)puVar12 + (longlong)-iVar5) != *(int *)puVar12)
                  goto LAB_1400b0c3a;
                  puVar12 = puVar12 + 2;
                  iVar20 = iVar20 + -1;
                } while (iVar20 != 0);
                iVar20 = 0;
                puVar12 = param_1 + 0x1000;
LAB_1400b0c3a:
                iVar20 = iVar20 * 4 + 3;
                lVar7 = 0;
                do {
                  if (*(byte *)((longlong)puVar12 + lVar7 + -iVar5) !=
                      *(byte *)((longlong)puVar12 + lVar7)) goto LAB_1400b0c5a;
                  lVar7 = lVar7 + 1;
                  iVar20 = iVar20 + -1;
                } while (iVar20 != 0);
                iVar20 = 0;
LAB_1400b0c5a:
                uVar17 = (ulonglong)(0x2003 - iVar20);
              }
              else {
                if (local_4cc <= uVar1) goto LAB_1400b0cc4;
                uVar9 = 0;
                do {
                  uVar17 = uVar9;
                  if ((*(byte *)((longlong)param_1 + (uVar9 - (longlong)iVar5)) !=
                       *(byte *)((longlong)param_1 + uVar9)) || (uVar17 = uVar9 + 1, 0x2001 < uVar9)
                     ) break;
                  pbVar15 = (byte *)(uVar9 + uVar19 + 1);
                  uVar9 = uVar17;
                } while (pbVar15 < (byte *)(ulonglong)local_4cc);
              }
              uVar6 = (uint)uVar17;
              if (3 < (int)uVar6) {
                uVar2 = (0xffff < iVar5) + 1;
                if (iVar5 < 0x100) {
                  uVar2 = 0;
                }
                iVar20 = (uVar6 - uVar2) + ((uVar6 < 0x24) - 4);
                if (local_4a4 < iVar20) {
                  local_498 = (ulonglong)(0x23 < uVar6);
                  iVar21 = iVar5;
                  local_4a8 = uVar2;
                  local_4a4 = iVar20;
                  local_4a0 = uVar17;
                }
              }
            }
            else {
              lVar7 = *plVar18;
              if ((longlong *)plVar18[1] != (longlong *)0x0) {
                *(longlong *)plVar18[1] = lVar7;
              }
              if (lVar7 != 0) {
                *(longlong *)(lVar7 + 8) = plVar18[1];
              }
              *(undefined4 *)(plVar18 + 2) = 0xffffffff;
            }
LAB_1400b0cc4:
            if (0x3e < uVar4) break;
            uVar4 = uVar4 + 1;
            plVar18 = (longlong *)*plVar18;
          } while (plVar18 != (longlong *)0x0);
          iVar21 = iVar21 + -1;
          uVar19 = local_4a0;
          local_450 = plVar10;
        }
        plVar18 = (longlong *)(local_470 + uVar8 * 0x18);
        if ((int)plVar18[2] != -1) {
          lVar7 = *plVar18;
          if ((longlong *)plVar18[1] != (longlong *)0x0) {
            *(longlong *)plVar18[1] = lVar7;
          }
          if (lVar7 != 0) {
            *(longlong *)(lVar7 + 8) = plVar18[1];
          }
        }
        *(uint *)(plVar18 + 2) = uVar1;
        plVar18[1] = (longlong)plVar10;
        lVar7 = *plVar10;
        *plVar18 = lVar7;
        if (lVar7 != 0) {
          *(longlong **)(lVar7 + 8) = plVar18;
        }
        *plVar10 = (longlong)plVar18;
        uVar8 = (ulonglong)((int)uVar8 + 1U & uVar3);
        iVar5 = (int)uVar19;
        local_480 = uVar16;
        if (iVar5 == -1) goto LAB_1400b0daf;
        *local_4c8 = bVar11;
        iVar20 = (int)local_498;
        uVar4 = iVar20 * 4 | iVar5 * 8 - 0x20U | local_4a8;
        local_4c8[1] = ((char)uVar4 + '\x01') - ((uVar4 & 0xff) < local_490);
        if (iVar20 == 1) {
          local_4c8[2] = (byte)(iVar5 - 4U >> 5);
          local_4c8 = local_4c8 + 3;
        }
        else {
          local_4c8 = local_4c8 + 2;
        }
        *local_4c8 = (byte)iVar21;
        if ((int)local_4a8 < 1) {
          local_4c8 = local_4c8 + 1;
        }
        else {
          local_4c8[1] = (byte)((uint)iVar21 >> 8);
          if (local_4a8 == 2) {
            local_4c8[2] = (byte)((uint)iVar21 >> 0x10);
            local_4c8 = local_4c8 + 3;
          }
          else {
            local_4c8 = local_4c8 + 2;
          }
        }
        uVar6 = iVar5 + uVar1;
        if (1 < iVar5 && uVar6 < local_4cc) {
          lVar7 = 0;
          do {
            if ((byte *)(ulonglong)local_4cc <= (byte *)((longlong)param_1 + lVar7 + local_458))
            break;
            uVar9 = (ulonglong)*(ushort *)((longlong)param_1 + lVar7 + 1);
            plVar10 = (longlong *)(local_468 + uVar9 * 4);
            if (*(char *)(local_4b8 + uVar9) == '\x01') {
              plVar10 = (longlong *)
                        ((ulonglong)*(byte *)((longlong)param_1 + lVar7 + 3) * 4 + *plVar10);
            }
            else if (local_4bc < local_4ac) {
              lVar14 = (ulonglong)local_4bc * 0x400 + local_488;
              *(longlong *)(local_4b8 + 0x10000 + uVar9 * 4) = lVar14;
              plVar10 = (longlong *)
                        (lVar14 + (ulonglong)*(byte *)((longlong)param_1 + lVar7 + 3) * 4);
              *(undefined1 *)(local_4b8 + uVar9) = 1;
              local_4bc = local_4bc + 1;
            }
            plVar18 = (longlong *)(local_470 + uVar8 * 0x18);
            if ((int)plVar18[2] != -1) {
              lVar14 = *plVar18;
              if ((longlong *)plVar18[1] != (longlong *)0x0) {
                *(longlong *)plVar18[1] = lVar14;
              }
              if (lVar14 != 0) {
                *(longlong *)(lVar14 + 8) = plVar18[1];
              }
            }
            *(uint *)(plVar18 + 2) = uVar1 + 1 + (int)lVar7;
            plVar18[1] = (longlong)plVar10;
            lVar14 = *plVar10;
            *plVar18 = lVar14;
            if (lVar14 != 0) {
              *(longlong **)(lVar14 + 8) = plVar18;
            }
            *plVar10 = (longlong)plVar18;
            uVar8 = (ulonglong)((int)uVar8 + 1U & uVar3);
            lVar7 = lVar7 + 1;
          } while (iVar5 + -1 != (int)lVar7);
        }
        uVar4 = (int)uVar16 + local_4a8 + iVar20 + 3;
        param_1 = (ushort *)((longlong)param_1 + (uVar19 & 0xffffffff));
        local_4a0 = uVar19;
      }
      else {
LAB_1400b0daf:
        bVar13 = (byte)*param_1;
        if (bVar13 == bVar11) {
          local_4c8[1] = bVar11;
          pbVar15 = local_4c8 + 2;
          iVar21 = 2;
          bVar13 = bVar11;
        }
        else {
          pbVar15 = local_4c8 + 1;
          iVar21 = 1;
        }
        uVar4 = (int)uVar16 + iVar21;
        *local_4c8 = bVar13;
        param_1 = (ushort *)((longlong)param_1 + 1);
        uVar6 = uVar1 + 1;
        local_4c8 = pbVar15;
      }
      uVar16 = (ulonglong)uVar4;
      uVar19 = (ulonglong)uVar6;
    } while (uVar6 < local_4cc);
    uVar4 = uVar4 + 9;
    local_478 = (ulonglong)uVar3;
    local_460 = param_3;
  }
  param_3[1] = uVar4;
  thunk_FUN_1401212e0(local_4b8);
  if (DAT_1401c9640 != (local_48 ^ (ulonglong)auStack_4f8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_48 ^ (ulonglong)auStack_4f8);
  }
  return uVar4;
}

