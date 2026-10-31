/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017a6c0 */

longlong FUN_18017a6c0(longlong param_1,ulonglong param_2,uint param_3,int *param_4,longlong param_5
                      )

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  int *piVar7;
  char *pcVar8;
  byte bVar9;
  ulonglong uVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar17;
  int *piVar18;
  byte bVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 local_c8 [40];
  ulonglong local_a0;
  longlong local_98;
  int *local_90;
  int local_84;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 local_6c [5];
  char local_67 [31];
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = DAT_180402640 ^ (ulonglong)local_c8;
  bVar17 = 0;
  pbVar20 = (byte *)(local_67 + 1);
  piVar18 = (int *)0x0;
  local_a0 = param_2;
  local_90 = param_4;
LAB_18017a6ff:
  if (piVar18 == (int *)0xa) goto LAB_18017ab4d;
  pbVar4 = *(byte **)(param_1 + 0xc0);
  pbVar6 = *(byte **)(param_1 + 200);
  if (pbVar4 < pbVar6) {
    *(byte **)(param_1 + 0xc0) = pbVar4 + 1;
    bVar19 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar19 = 0;
  }
  else {
    FUN_180176673(param_1);
    pbVar2 = *(byte **)(param_1 + 0xc0);
    pbVar6 = *(byte **)(param_1 + 200);
    pbVar4 = pbVar2 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar4;
    bVar19 = *pbVar2;
  }
  if (pbVar4 < pbVar6) {
    *(byte **)(param_1 + 0xc0) = pbVar4 + 1;
    bVar12 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar12 = 0;
  }
  else {
    FUN_180176673(param_1);
    pbVar2 = *(byte **)(param_1 + 0xc0);
    pbVar6 = *(byte **)(param_1 + 200);
    pbVar4 = pbVar2 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar4;
    bVar12 = *pbVar2;
  }
  pbVar20[-2] = bVar12;
  if (pbVar4 < pbVar6) {
    *(byte **)(param_1 + 0xc0) = pbVar4 + 1;
    bVar9 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else if (*(int *)(param_1 + 0x30) == 0) {
    bVar9 = 0;
  }
  else {
    FUN_180176673(param_1);
    pbVar2 = *(byte **)(param_1 + 0xc0);
    pbVar6 = *(byte **)(param_1 + 200);
    pbVar4 = pbVar2 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar4;
    bVar9 = *pbVar2;
  }
  pbVar20[-1] = bVar9;
  if (pbVar4 < pbVar6) {
LAB_18017a80a:
    *(byte **)(param_1 + 0xc0) = pbVar4 + 1;
    bVar9 = *pbVar4;
    pbVar4 = pbVar4 + 1;
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      pbVar4 = *(byte **)(param_1 + 0xc0);
      goto LAB_18017a80a;
    }
    bVar9 = 0;
  }
  *pbVar20 = bVar9;
  if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017a841:
    if (*(byte **)(param_1 + 200) <= pbVar4) goto LAB_18017ab56;
LAB_18017a84e:
    if (bVar12 != 8) goto LAB_18017ab4d;
    bVar17 = bVar17 | bVar9;
    pbVar20 = pbVar20 + 3;
    piVar18 = (int *)((longlong)piVar18 + 1);
    if (bVar19 == 0) goto LAB_18017a875;
    goto LAB_18017a6ff;
  }
  iVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
  if (iVar3 == 0) goto LAB_18017a84e;
  if (*(int *)(param_1 + 0x30) != 0) {
    pbVar4 = *(byte **)(param_1 + 0xc0);
    goto LAB_18017a841;
  }
LAB_18017ab56:
  pcVar8 = "bad file";
LAB_18017ab5d:
  FUN_1801765d0(pcVar8);
LAB_18017ab62:
  param_5 = 0;
LAB_18017ab64:
  if (DAT_180402640 != (local_48 ^ (ulonglong)local_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)local_c8);
  }
  return param_5;
LAB_18017a875:
  *local_90 = 4 - (uint)((bVar17 & 0x10) == 0);
  if (param_3 != 0) {
    local_84 = (int)local_a0 * 4;
    local_80 = (ulonglong)param_3;
    uVar10 = 0;
    do {
      local_98 = (ulonglong)(uint)(local_84 * (int)uVar10) + param_5;
      piVar7 = (int *)0x0;
      local_78 = uVar10;
      do {
        lVar22 = (longlong)piVar7 * 3;
        cVar1 = local_67[lVar22];
        local_90 = piVar7;
        if (cVar1 == '\0') {
          if ((int)local_a0 != 0) {
            cVar1 = local_67[lVar22 + 1];
            uVar10 = local_a0 & 0xffffffff;
            lVar22 = local_98;
            do {
              lVar21 = FUN_18017abaa(param_1,cVar1,lVar22);
              if (lVar21 == 0) goto LAB_18017ab62;
              lVar22 = lVar22 + 4;
              uVar14 = (int)uVar10 - 1;
              uVar10 = (ulonglong)uVar14;
            } while (uVar14 != 0);
          }
        }
        else if (cVar1 == '\x01') {
          uVar10 = local_a0 & 0xffffffff;
          lVar21 = local_98;
          if ((int)local_a0 != 0) {
            do {
              pbVar20 = *(byte **)(param_1 + 0xc0);
              if (pbVar20 < *(byte **)(param_1 + 200)) {
LAB_18017aa55:
                *(byte **)(param_1 + 0xc0) = pbVar20 + 1;
                bVar17 = *pbVar20;
                pbVar20 = pbVar20 + 1;
              }
              else {
                if (*(int *)(param_1 + 0x30) != 0) {
                  FUN_180176673(param_1);
                  pbVar20 = *(byte **)(param_1 + 0xc0);
                  goto LAB_18017aa55;
                }
                bVar17 = 0;
              }
              if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017aa89:
                if (*(byte **)(param_1 + 200) <= pbVar20) goto LAB_18017ab56;
              }
              else {
                iVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
                if (iVar3 != 0) {
                  if (*(int *)(param_1 + 0x30) != 0) {
                    pbVar20 = *(byte **)(param_1 + 0xc0);
                    goto LAB_18017aa89;
                  }
                  goto LAB_18017ab56;
                }
              }
              uVar14 = (uint)uVar10;
              uVar16 = (ulonglong)bVar17;
              if (uVar14 < bVar17) {
                uVar16 = uVar10;
              }
              lVar5 = FUN_18017abaa(param_1,local_67[lVar22 + 1],local_6c);
              if (lVar5 == 0) goto LAB_18017ab62;
              iVar3 = (int)uVar16;
              if (bVar17 != 0) {
                do {
                  FUN_18017ac55(local_67[lVar22 + 1],lVar21,local_6c);
                  lVar21 = lVar21 + 4;
                  uVar15 = (int)uVar16 - 1;
                  uVar16 = (ulonglong)uVar15;
                } while (uVar15 != 0);
              }
              uVar15 = uVar14 - iVar3;
              uVar10 = (ulonglong)uVar15;
            } while (uVar15 != 0 && iVar3 <= (int)uVar14);
          }
        }
        else {
          if (cVar1 != '\x02') goto LAB_18017ab4d;
          uVar10 = local_a0 & 0xffffffff;
          lVar21 = local_98;
          if ((int)local_a0 != 0) {
            do {
              pbVar20 = *(byte **)(param_1 + 0xc0);
              if (pbVar20 < *(byte **)(param_1 + 200)) {
LAB_18017a937:
                *(byte **)(param_1 + 0xc0) = pbVar20 + 1;
                bVar17 = *pbVar20;
                pbVar20 = pbVar20 + 1;
              }
              else {
                if (*(int *)(param_1 + 0x30) != 0) {
                  FUN_180176673(param_1);
                  pbVar20 = *(byte **)(param_1 + 0xc0);
                  goto LAB_18017a937;
                }
                bVar17 = 0;
              }
              if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_18017a96b:
                if (*(byte **)(param_1 + 200) <= pbVar20) goto LAB_18017ab56;
              }
              else {
                iVar3 = (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28));
                if (iVar3 != 0) {
                  if (*(int *)(param_1 + 0x30) != 0) {
                    pbVar20 = *(byte **)(param_1 + 0xc0);
                    goto LAB_18017a96b;
                  }
                  goto LAB_18017ab56;
                }
              }
              uVar14 = (uint)bVar17;
              uVar15 = (uint)uVar10;
              if ((char)bVar17 < '\0') {
                if (uVar14 == 0x80) {
                  uVar11 = FUN_180177505(param_1);
                }
                else {
                  uVar11 = uVar14 - 0x7f;
                }
                if (uVar15 < uVar11) goto LAB_18017ab56;
                lVar5 = FUN_18017abaa(param_1,local_67[lVar22 + 1],local_6c);
                if (lVar5 == 0) goto LAB_18017ab62;
                uVar14 = uVar11;
                if (0 < (int)uVar11) {
                  do {
                    FUN_18017ac55(local_67[lVar22 + 1],lVar21,local_6c);
                    lVar21 = lVar21 + 4;
                    uVar14 = uVar14 - 1;
                  } while (uVar14 != 0);
                }
              }
              else {
                uVar11 = uVar14 + 1;
                uVar13 = uVar11;
                if (uVar15 <= uVar14) goto LAB_18017ab56;
                do {
                  lVar5 = FUN_18017abaa(param_1,local_67[lVar22 + 1],lVar21);
                  if (lVar5 == 0) goto LAB_18017ab62;
                  lVar21 = lVar21 + 4;
                  uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
              }
              uVar10 = (ulonglong)(uVar15 - uVar11);
            } while (uVar15 - uVar11 != 0 && (int)uVar11 <= (int)uVar15);
          }
        }
        piVar7 = (int *)((longlong)local_90 + 1);
      } while (piVar18 != piVar7);
      uVar10 = local_78 + 1;
    } while (uVar10 != local_80);
  }
  goto LAB_18017ab64;
LAB_18017ab4d:
  pcVar8 = "bad format";
  goto LAB_18017ab5d;
}

