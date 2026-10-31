/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e35cf */

void FUN_1801e35cf(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  undefined1 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  char *pcVar21;
  int iVar23;
  int iVar24;
  int *piVar25;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  uint local_23c;
  undefined1 *local_238;
  longlong local_230;
  longlong *local_228;
  int *local_220;
  ulonglong local_218;
  ulonglong local_210;
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  uint local_1f0;
  undefined1 local_1ec [4];
  int local_1e8 [52];
  int local_118 [52];
  ulonglong local_48;
  char *pcVar22;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_268;
  piVar25 = (int *)(&DAT_180332300 + (longlong)*(int *)(*param_1 + 0xc) * 8);
  lVar5 = param_1[6];
  cVar7 = FUN_1801e2736(lVar5);
  if (cVar7 == '\0') {
    puVar8 = local_1ec;
  }
  else {
    puVar8 = (undefined1 *)FUN_1801e2cf4(lVar5);
  }
  iVar10 = *piVar25;
  if (iVar10 != 0x159b) {
    local_200 = (longlong *)((longlong)param_1 + 0x44);
    local_208 = param_1 + 0x41;
    local_238 = puVar8;
    local_230 = param_2;
    local_228 = param_1;
    do {
      local_23c = (uint)*(ushort *)(piVar25 + 1);
      local_1f8 = local_200;
      if ((*(ushort *)(piVar25 + 1) & 2) == 0) {
        local_1f8 = local_208;
      }
      cVar7 = (&DAT_180330d60)[iVar10];
      uVar18 = 0;
      uVar13 = 0;
      if (cVar7 != '\0') {
        local_240 = 0x80330d01;
        uVar13 = 0;
        uVar19 = 0;
        pcVar22 = &DAT_180330d60 + iVar10;
        local_220 = piVar25;
        do {
          while( true ) {
            pcVar21 = pcVar22 + 1;
            if (cVar7 != ' ') break;
            cVar7 = *pcVar21;
            pcVar22 = pcVar21;
          }
          uVar18 = uVar19;
          if (cVar7 == '|') {
            local_240 = 0;
          }
          else {
            pcVar21 = (char *)FUN_1801e2d68(pcVar22,param_1,puVar8,&local_1f0);
            if (local_1f0 < 2) {
              local_248 = 0;
              iVar10 = FUN_1801e3120(param_1,puVar8,0,0);
              if (((iVar10 != 0) && (iVar10 = FUN_1801caef1(param_2,iVar10,1), iVar10 == 0)) &&
                 (lVar5 = *(longlong *)(param_2 + 0x78), 2 < *(ushort *)(lVar5 + 0x9a))) {
                if ((ulonglong)*(ushort *)(lVar5 + 0x98) == 0) {
                  iVar10 = 0;
                }
                else {
                  lVar6 = *(longlong *)(lVar5 + 0xa0);
                  iVar10 = 0;
                  uVar16 = 0xffffffff;
                  uVar15 = 0;
                  iVar23 = -1;
                  do {
                    iVar24 = (int)uVar16;
                    iVar11 = iVar24 + 1;
                    uVar2 = *(ushort *)(*(longlong *)(lVar5 + 0xb0) + uVar15 * 2);
                    uVar16 = (ulonglong)uVar2;
                    if (iVar11 < (int)(uint)uVar2) {
                      lVar20 = (longlong)iVar11;
                      if ((local_23c & 2) == 0) {
                        if ((local_23c & 1) == 0) {
                          lVar14 = 0;
                          do {
                            iVar3 = *(int *)(lVar6 + 0xc + (longlong)iVar24 * 8 + lVar14 * 8);
                            if (iVar3 < iVar10 || iVar23 < 0) {
                              iVar23 = (int)lVar14 + iVar11;
                              iVar10 = iVar3;
                            }
                            lVar1 = lVar14 + (lVar20 - uVar16);
                            lVar14 = lVar14 + 1;
                          } while (lVar1 != 0);
                        }
                        else {
                          lVar14 = 0;
                          do {
                            iVar3 = *(int *)(lVar6 + 0xc + (longlong)iVar24 * 8 + lVar14 * 8);
                            if (iVar10 < iVar3 || iVar23 < 0) {
                              iVar23 = (int)lVar14 + iVar11;
                              iVar10 = iVar3;
                            }
                            lVar1 = lVar14 + (lVar20 - uVar16);
                            lVar14 = lVar14 + 1;
                          } while (lVar1 != 0);
                        }
                      }
                      else if ((local_23c & 1) == 0) {
                        lVar14 = uVar16 - (longlong)iVar24;
                        iVar24 = iVar23;
                        do {
                          iVar11 = *(int *)(lVar6 + lVar20 * 8);
                          iVar23 = (int)lVar20;
                          if (iVar10 <= iVar11 && -1 < iVar24) {
                            iVar23 = iVar24;
                            iVar11 = iVar10;
                          }
                          iVar10 = iVar11;
                          lVar20 = lVar20 + 1;
                          lVar14 = lVar14 + -1;
                          iVar24 = iVar23;
                        } while (lVar14 != 0);
                      }
                      else {
                        lVar14 = uVar16 - (longlong)iVar24;
                        iVar24 = iVar23;
                        do {
                          iVar11 = *(int *)(lVar6 + lVar20 * 8);
                          iVar23 = (int)lVar20;
                          if (iVar11 <= iVar10 && -1 < iVar24) {
                            iVar23 = iVar24;
                            iVar11 = iVar10;
                          }
                          iVar10 = iVar11;
                          lVar20 = lVar20 + 1;
                          lVar14 = lVar14 + -1;
                          iVar24 = iVar23;
                        } while (lVar14 != 0);
                      }
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar15 != *(ushort *)(lVar5 + 0x98));
                }
                puVar8 = local_238;
                param_1 = local_228;
                param_2 = local_230;
                piVar25 = local_220;
                local_218 = uVar13;
                local_210 = uVar19;
                if ((char)local_240 == '\0') {
                  uVar18 = (ulonglong)((int)uVar19 + 1);
                  local_1e8[uVar19] = iVar10;
                  local_240 = 0;
                }
                else {
                  local_118[uVar13] = iVar10;
                  local_240 = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
                  uVar13 = (ulonglong)((int)uVar13 + 1);
                }
              }
            }
          }
          cVar7 = *pcVar21;
          uVar19 = uVar18;
          pcVar22 = pcVar21;
        } while (cVar7 != '\0');
      }
      uVar17 = (uint)uVar18;
      uVar12 = (uint)uVar13;
      if (uVar17 != 0 || uVar12 != 0) {
        FUN_1801e5033(uVar13,local_118);
        FUN_1801e5033(uVar18,local_1e8);
        uVar4 = *(uint *)(local_1f8 + 0x1b);
        piVar9 = (int *)((longlong)local_1f8 + (ulonglong)uVar4 * 0x1c + 0xdc);
        *(uint *)(local_1f8 + 0x1b) = uVar4 + 1;
        if (uVar17 == 0) {
          iVar10 = local_118[uVar12 >> 1];
LAB_1801e39ce:
          *(int *)((longlong)local_1f8 + (ulonglong)uVar4 * 0x1c + 0xe8) = iVar10;
          *piVar9 = iVar10;
        }
        else {
          if (uVar12 == 0) {
            iVar10 = local_1e8[uVar17 >> 1];
            goto LAB_1801e39ce;
          }
          iVar10 = local_118[uVar12 >> 1];
          *piVar9 = iVar10;
          iVar23 = local_1e8[uVar17 >> 1];
          *(int *)((longlong)local_1f8 + (ulonglong)uVar4 * 0x1c + 0xe8) = iVar23;
          if ((iVar23 != iVar10) && (((iVar10 <= iVar23 ^ (byte)local_23c) & 1) == 0)) {
            iVar10 = (iVar10 + iVar23) / 2;
            goto LAB_1801e39ce;
          }
        }
        *(uint *)((longlong)local_1f8 + (ulonglong)uVar4 * 0x1c + 0xf4) = local_23c * 2 & 2;
      }
      iVar10 = piVar25[2];
      piVar25 = piVar25 + 2;
    } while (iVar10 != 0x159b);
  }
  FUN_1801e2d29(param_1[6],puVar8);
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_268)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_268);
}

