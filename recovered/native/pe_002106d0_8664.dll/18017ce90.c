/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017ce90 */

longlong FUN_18017ce90(longlong *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined7 uVar11;
  longlong lVar9;
  code *pcVar10;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  undefined1 auStack_1a8 [32];
  uint local_188;
  undefined4 local_180;
  int local_174;
  longlong local_170;
  undefined4 local_164;
  longlong *local_160;
  undefined4 *local_158;
  undefined4 *local_150;
  longlong local_148;
  longlong *local_140;
  ulonglong local_138;
  longlong local_130;
  undefined8 auStack_128 [3];
  int local_110 [42];
  longlong local_68 [5];
  
  local_68[4] = DAT_180402640 ^ (ulonglong)auStack_1a8;
  *(undefined4 *)(*param_1 + 8) = 0;
  uVar8 = FUN_18017d401();
  if ((int)uVar8 == 0) {
LAB_18017d376:
    FUN_18017d51e(param_1);
  }
  else {
    piVar20 = (int *)*param_1;
    uVar13 = (ulonglong)(uint)piVar20[2];
    if (uVar13 == 3) {
      uVar11 = (undefined7)((ulonglong)uVar8 >> 8);
      local_164 = (undefined4)CONCAT71(uVar11,1);
      if ((int)param_1[0x90a] != 3) {
        if (*(int *)((longlong)param_1 + 0x484c) != 0) goto LAB_18017cf12;
        local_164 = (undefined4)CONCAT71(uVar11,(int)param_1[0x909] == 0);
      }
    }
    else {
      if (piVar20[2] < 1) goto LAB_18017d376;
LAB_18017cf12:
      local_164 = 0;
    }
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    iVar17 = *piVar20;
    lVar15 = 0;
    uVar19 = uVar13;
    local_158 = param_2;
    local_150 = param_3;
    do {
      lVar9 = FUN_18012be7d(iVar17 + 3);
      *(longlong *)((longlong)param_1 + lVar15 * 2 + 0x46e8) = lVar9;
      if (lVar9 == 0) goto LAB_18017d380;
      uVar14 = (longlong)(int)param_1[0x8d1] /
               (longlong)*(int *)((longlong)param_1 + lVar15 * 2 + 0x46a4);
      iVar6 = (int)uVar14;
      *(int *)((longlong)local_110 + lVar15) = iVar6;
      iVar7 = *(int *)((longlong)param_1 + 0x468c) /
              *(int *)((longlong)param_1 + lVar15 * 2 + 0x46a8);
      *(int *)((longlong)local_110 + lVar15 + 4) = iVar7;
      *(int *)((longlong)local_110 + lVar15 + 0xc) = iVar7 >> 1;
      iVar17 = *piVar20;
      *(int *)((longlong)local_110 + lVar15 + 8) =
           (int)((ulonglong)((iVar6 + iVar17) - 1) / (uVar14 & 0xffffffff));
      *(undefined4 *)((longlong)local_110 + lVar15 + 0x10) = 0;
      uVar8 = *(undefined8 *)((longlong)param_1 + lVar15 * 2 + 0x46d0);
      *(undefined8 *)((longlong)auStack_128 + lVar15 + 0x10) = uVar8;
      *(undefined8 *)((longlong)auStack_128 + lVar15 + 8) = uVar8;
      if (iVar6 == 2) {
        pcVar10 = FUN_18017d561;
        if (iVar7 != 1) {
          if (iVar7 != 2) goto LAB_18017d01a;
          pcVar10 = (code *)param_1[0x910];
        }
      }
      else if (iVar6 == 1) {
        pcVar10 = FUN_18017d619;
        if (iVar7 == 2) {
          pcVar10 = (code *)&LAB_18017d52d;
        }
        if (iVar7 == 1) {
          pcVar10 = FUN_18017d529;
        }
      }
      else {
LAB_18017d01a:
        pcVar10 = FUN_18017d619;
      }
      *(code **)((longlong)auStack_128 + lVar15) = pcVar10;
      lVar15 = lVar15 + 0x30;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
    iVar6 = piVar20[1];
    local_170 = FUN_180178ee1(4,iVar17,iVar6,1);
    if (local_170 != 0) {
      if (iVar6 != 0) {
        local_140 = param_1 + 0x8d8;
        local_148 = local_170 + 3;
        uVar19 = 0;
        local_174 = 0;
        local_160 = param_1;
        do {
          iVar17 = *piVar20;
          lVar15 = (ulonglong)(uint)((int)uVar19 * iVar17 * 4) + local_170;
          piVar20 = local_110 + 4;
          uVar14 = 0;
          plVar16 = local_140;
          local_138 = uVar19;
          do {
            iVar6 = piVar20[-1];
            local_188 = piVar20[-4];
            iVar7 = piVar20[-3];
            iVar12 = iVar7 >> 1;
            lVar9 = (**(code **)(piVar20 + -10))
                              (plVar16[5],
                               *(undefined8 *)
                                ((longlong)piVar20 +
                                ((ulonglong)(iVar12 <= iVar6) << 3 | 0xffffffffffffffe0)),
                               *(undefined8 *)
                                ((longlong)piVar20 +
                                ((ulonglong)(iVar6 < iVar12) << 3 | 0xffffffffffffffe0)),piVar20[-2]
                              );
            plVar2 = local_160;
            local_68[uVar14] = lVar9;
            piVar20[-1] = iVar6 + 1;
            if (iVar7 <= iVar6 + 1) {
              piVar20[-1] = 0;
              *(longlong *)(piVar20 + -8) = *(longlong *)(piVar20 + -6);
              iVar6 = *piVar20;
              *piVar20 = iVar6 + 1;
              if (iVar6 + 1 < (int)*plVar16) {
                *(longlong *)(piVar20 + -6) =
                     *(longlong *)(piVar20 + -6) + (longlong)*(int *)((longlong)plVar16 + 4);
              }
            }
            lVar4 = local_68[2];
            lVar3 = local_68[1];
            lVar9 = local_68[0];
            uVar14 = uVar14 + 1;
            piVar20 = piVar20 + 0xc;
            plVar16 = plVar16 + 0xc;
          } while (uVar13 != uVar14);
          puVar1 = (uint *)*local_160;
          if (puVar1[2] == 3) {
            if ((char)local_164 == '\0') {
LAB_18017d296:
              local_188 = *puVar1;
              local_180 = 4;
              (*(code *)local_160[0x90f])(lVar15,local_68[0],local_68[1],local_68[2]);
            }
            else if (*puVar1 != 0) {
              lVar15 = (ulonglong)(uint)(iVar17 * local_174) + local_170;
              uVar19 = 0;
              do {
                *(undefined1 *)(lVar15 + uVar19 * 4) = *(undefined1 *)(local_68[0] + uVar19);
                *(undefined1 *)(lVar15 + 1 + uVar19 * 4) = *(undefined1 *)(local_68[1] + uVar19);
                *(undefined1 *)(lVar15 + 2 + uVar19 * 4) = *(undefined1 *)(local_68[2] + uVar19);
                *(undefined1 *)(lVar15 + 3 + uVar19 * 4) = 0xff;
                uVar19 = uVar19 + 1;
              } while (uVar19 < *puVar1);
            }
          }
          else if (puVar1[2] == 4) {
            if (*(int *)((longlong)local_160 + 0x484c) == 2) {
              local_188 = *puVar1;
              local_180 = 4;
              (*(code *)local_160[0x90f])(lVar15,local_68[0],local_68[1],local_68[2]);
              lVar15 = local_68[3];
              puVar1 = (uint *)*plVar2;
              if (*puVar1 != 0) {
                lVar9 = (ulonglong)(uint)(iVar17 * local_174) + local_170;
                uVar19 = 0;
                do {
                  uVar14 = CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)(lVar15 + uVar19));
                  uVar5 = FUN_18017d657(~*(byte *)(lVar9 + uVar19 * 4),uVar14 & 0xffffffff);
                  *(undefined1 *)(lVar9 + uVar19 * 4) = uVar5;
                  uVar5 = FUN_18017d657(~*(byte *)(lVar9 + 1 + uVar19 * 4),uVar14 & 0xffffffff);
                  *(undefined1 *)(lVar9 + 1 + uVar19 * 4) = uVar5;
                  uVar5 = FUN_18017d657(~*(byte *)(lVar9 + 2 + uVar19 * 4),uVar14 & 0xffffffff);
                  *(undefined1 *)(lVar9 + 2 + uVar19 * 4) = uVar5;
                  uVar19 = uVar19 + 1;
                } while (uVar19 < *puVar1);
              }
            }
            else {
              if (*(int *)((longlong)local_160 + 0x484c) != 0) goto LAB_18017d296;
              if (*puVar1 != 0) {
                local_130 = local_68[3];
                lVar15 = (ulonglong)(uint)(iVar17 * local_174) + local_170;
                uVar19 = 0;
                do {
                  uVar14 = CONCAT71((int7)(uVar14 >> 8),*(undefined1 *)(local_130 + uVar19));
                  uVar5 = FUN_18017d657(*(undefined1 *)(lVar9 + uVar19),uVar14 & 0xffffffff);
                  *(undefined1 *)(lVar15 + uVar19 * 4) = uVar5;
                  uVar5 = FUN_18017d657(*(undefined1 *)(lVar3 + uVar19),uVar14 & 0xffffffff);
                  *(undefined1 *)(lVar15 + 1 + uVar19 * 4) = uVar5;
                  uVar5 = FUN_18017d657(*(undefined1 *)(lVar4 + uVar19),uVar14 & 0xffffffff);
                  *(undefined1 *)(lVar15 + 2 + uVar19 * 4) = uVar5;
                  *(undefined1 *)(lVar15 + 3 + uVar19 * 4) = 0xff;
                  uVar19 = uVar19 + 1;
                } while (uVar19 < *puVar1);
              }
            }
          }
          else if (*puVar1 != 0) {
            lVar15 = (ulonglong)(uint)(iVar17 * local_174) + local_148;
            uVar19 = 0;
            do {
              uVar5 = *(undefined1 *)(local_68[0] + uVar19);
              *(undefined1 *)(lVar15 + -1 + uVar19 * 4) = uVar5;
              *(undefined1 *)(lVar15 + -2 + uVar19 * 4) = uVar5;
              *(undefined1 *)(lVar15 + -3 + uVar19 * 4) = uVar5;
              *(undefined1 *)(lVar15 + uVar19 * 4) = 0xff;
              uVar19 = uVar19 + 1;
            } while (uVar19 < *puVar1);
          }
          uVar18 = (int)local_138 + 1;
          uVar19 = (ulonglong)uVar18;
          piVar20 = (int *)*local_160;
          local_174 = local_174 + 4;
          param_1 = local_160;
        } while (uVar18 < (uint)piVar20[1]);
      }
      FUN_18017d51e(param_1);
      *local_158 = *(undefined4 *)*param_1;
      *local_150 = *(undefined4 *)(*param_1 + 4);
      goto LAB_18017d39d;
    }
LAB_18017d380:
    FUN_18017d51e(param_1);
    FUN_1801765d0("outofmem");
  }
  local_170 = 0;
LAB_18017d39d:
  if (DAT_180402640 != (local_68[4] ^ (ulonglong)auStack_1a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_68[4] ^ (ulonglong)auStack_1a8);
  }
  return local_170;
}

