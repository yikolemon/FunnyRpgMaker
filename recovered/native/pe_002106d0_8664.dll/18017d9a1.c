/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017d9a1 */

undefined8 FUN_18017d9a1(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  int local_dc;
  ulonglong local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_118;
  FUN_18017e1c5();
  if (*(int *)(param_1 + 0x4830) == 0) {
    if (*(int *)(param_1 + 0x4854) != 1) {
      iVar10 = *(int *)(param_1 + 0x4694);
      uVar8 = 1;
      if (0 < iVar10) {
        iVar9 = *(int *)(param_1 + 0x4690);
        local_d8 = 0;
        do {
          if (0 < iVar9) {
            local_dc = 0;
            do {
              iVar10 = *(int *)(param_1 + 0x4854);
              if (0 < iVar10) {
                uVar6 = 0;
                do {
                  iVar9 = *(int *)(param_1 + 0x4858 + uVar6 * 4);
                  lVar3 = (longlong)iVar9 * 0x60;
                  iVar7 = *(int *)(param_1 + 0x46a8 + lVar3);
                  if (0 < iVar7) {
                    lVar3 = lVar3 + param_1 + 0x46a0;
                    iVar10 = *(int *)(lVar3 + 4);
                    iVar11 = 0;
                    local_d0 = uVar6;
                    do {
                      if (0 < iVar10) {
                        iVar7 = 0;
                        do {
                          iVar12 = *(int *)(lVar3 + 8);
                          local_e8 = (longlong)*(int *)(lVar3 + 0xc) * 0x80 + param_1 + 0x3488;
                          local_f8 = (longlong)*(int *)(lVar3 + 0x14) * 0x400 + param_1 + 0x3688;
                          local_f0 = iVar9;
                          iVar2 = FUN_18017e217(param_1,local_c8,
                                                (longlong)*(int *)(lVar3 + 0x10) * 0x690 +
                                                param_1 + 8,
                                                (longlong)*(int *)(lVar3 + 0x14) * 0x690 +
                                                param_1 + 0x1a48);
                          if (iVar2 == 0) goto LAB_18017df66;
                          (**(code **)(param_1 + 0x4870))
                                    ((longlong)((iVar10 * local_dc + iVar7) * 8) +
                                     (longlong)
                                     ((iVar12 * (int)local_d8 + iVar11) * *(int *)(lVar3 + 0x24) * 8
                                     ) + *(longlong *)(lVar3 + 0x30),*(int *)(lVar3 + 0x24),local_c8
                                    );
                          iVar7 = iVar7 + 1;
                          iVar10 = *(int *)(lVar3 + 4);
                        } while (iVar7 < iVar10);
                        iVar7 = *(int *)(lVar3 + 8);
                      }
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < iVar7);
                    iVar10 = *(int *)(param_1 + 0x4854);
                    uVar6 = local_d0;
                  }
                  uVar6 = uVar6 + 1;
                } while ((longlong)uVar6 < (longlong)iVar10);
              }
              piVar1 = (int *)(param_1 + 0x486c);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              uVar8 = 1;
              if (*piVar1 == 0 || SBORROW4(iVar10,1) != *piVar1 < 0) {
                if (*(int *)(param_1 + 0x4824) < 0x18) {
                  FUN_18017e6a8(param_1);
                }
                if ((*(byte *)(param_1 + 0x4828) & 0xf8) != 0xd0) goto LAB_18017df68;
                FUN_18017e1c5(param_1);
              }
              local_dc = local_dc + 1;
              iVar9 = *(int *)(param_1 + 0x4690);
            } while (local_dc < iVar9);
            iVar10 = *(int *)(param_1 + 0x4694);
          }
          uVar8 = 1;
          uVar4 = (int)local_d8 + 1;
          local_d8 = (ulonglong)uVar4;
        } while ((int)uVar4 < iVar10);
      }
      goto LAB_18017df68;
    }
    iVar10 = *(int *)(param_1 + 0x4858);
    lVar3 = (longlong)iVar10 * 0x60;
    local_dc = *(int *)(param_1 + 0x46c0 + lVar3) + 7 >> 3;
    uVar8 = 1;
    if (local_dc < 1) goto LAB_18017df68;
    lVar3 = param_1 + lVar3;
    local_d0 = (ulonglong)(uint)(*(int *)(lVar3 + 0x46bc) + 7 >> 3);
    local_d8 = local_d0 * 8;
    iVar9 = 0;
    iVar7 = 0;
    do {
      if (0 < (int)local_d0) {
        uVar6 = 0;
        do {
          local_e8 = (longlong)*(int *)(lVar3 + 0x46ac) * 0x80 + param_1 + 0x3488;
          local_f8 = (longlong)*(int *)(lVar3 + 0x46b4) * 0x400 + param_1 + 0x3688;
          local_f0 = iVar10;
          iVar11 = FUN_18017e217(param_1,local_c8,
                                 (longlong)*(int *)(lVar3 + 0x46b0) * 0x690 + param_1 + 8,
                                 (longlong)*(int *)(lVar3 + 0x46b4) * 0x690 + param_1 + 0x1a48);
          if (iVar11 == 0) goto LAB_18017df66;
          (**(code **)(param_1 + 0x4870))
                    ((longlong)(iVar9 * *(int *)(lVar3 + 0x46c4)) + *(longlong *)(lVar3 + 0x46d0) +
                     uVar6,*(int *)(lVar3 + 0x46c4),local_c8);
          piVar1 = (int *)(param_1 + 0x486c);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0 || SBORROW4(iVar11,1) != *piVar1 < 0) {
            if (*(int *)(param_1 + 0x4824) < 0x18) {
              FUN_18017e6a8(param_1);
            }
            if ((*(byte *)(param_1 + 0x4828) & 0xf8) != 0xd0) goto LAB_18017dd88;
            FUN_18017e1c5(param_1);
          }
          uVar6 = uVar6 + 8;
        } while (local_d8 != uVar6);
      }
      iVar7 = iVar7 + 1;
      iVar9 = iVar9 + 8;
    } while (iVar7 != local_dc);
  }
  else if (*(int *)(param_1 + 0x4854) == 1) {
    iVar10 = *(int *)(param_1 + 0x4858);
    lVar3 = (longlong)iVar10 * 0x60;
    iVar9 = *(int *)(param_1 + 0x46c0 + lVar3) + 7 >> 3;
    uVar8 = 1;
    if (iVar9 < 1) goto LAB_18017df68;
    lVar3 = param_1 + lVar3;
    iVar7 = *(int *)(lVar3 + 0x46bc) + 7 >> 3;
    iVar11 = 0;
    do {
      if (0 < iVar7) {
        iVar12 = 0;
        do {
          lVar5 = (longlong)((*(int *)(lVar3 + 0x46f8) * iVar11 + iVar12) * 0x40) * 2 +
                  *(longlong *)(lVar3 + 0x46f0);
          if (*(int *)(param_1 + 0x4834) == 0) {
            iVar2 = FUN_18017e7ca(param_1,lVar5,
                                  (longlong)*(int *)(lVar3 + 0x46b0) * 0x690 + param_1 + 8,iVar10);
          }
          else {
            iVar2 = FUN_18017ea6e(param_1,lVar5,
                                  (longlong)*(int *)(lVar3 + 0x46b4) * 0x690 + param_1 + 0x1a48,
                                  (longlong)*(int *)(lVar3 + 0x46b4) * 0x400 + param_1 + 0x3688);
          }
          if (iVar2 == 0) goto LAB_18017df66;
          piVar1 = (int *)(param_1 + 0x486c);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0 || SBORROW4(iVar2,1) != *piVar1 < 0) {
            if (*(int *)(param_1 + 0x4824) < 0x18) {
              FUN_18017e6a8(param_1);
            }
            if ((*(byte *)(param_1 + 0x4828) & 0xf8) != 0xd0) goto LAB_18017dd88;
            FUN_18017e1c5(param_1);
          }
          iVar12 = iVar12 + 1;
        } while (iVar7 != iVar12);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar9);
  }
  else {
    iVar10 = *(int *)(param_1 + 0x4694);
    uVar8 = 1;
    if (iVar10 < 1) goto LAB_18017df68;
    iVar9 = *(int *)(param_1 + 0x4690);
    iVar7 = 0;
    do {
      if (0 < iVar9) {
        iVar10 = 0;
        do {
          iVar9 = *(int *)(param_1 + 0x4854);
          if (0 < iVar9) {
            uVar6 = 0;
            do {
              iVar11 = *(int *)(param_1 + 0x4858 + uVar6 * 4);
              lVar3 = (longlong)iVar11 * 0x60;
              iVar12 = *(int *)(param_1 + 0x46a8 + lVar3);
              if (0 < iVar12) {
                lVar3 = lVar3 + param_1 + 0x46a0;
                iVar9 = *(int *)(lVar3 + 4);
                iVar2 = 0;
                local_d8 = uVar6;
                do {
                  if (0 < iVar9) {
                    iVar12 = 0;
                    do {
                      iVar9 = FUN_18017e7ca(param_1,(longlong)
                                                    ((iVar9 * iVar10 + iVar12 +
                                                     (*(int *)(lVar3 + 8) * iVar7 + iVar2) *
                                                     *(int *)(lVar3 + 0x58)) * 0x40) * 2 +
                                                    *(longlong *)(lVar3 + 0x50),
                                            (longlong)*(int *)(lVar3 + 0x10) * 0x690 + param_1 + 8,
                                            iVar11);
                      if (iVar9 == 0) goto LAB_18017df66;
                      iVar12 = iVar12 + 1;
                      iVar9 = *(int *)(lVar3 + 4);
                    } while (iVar12 < iVar9);
                    iVar12 = *(int *)(lVar3 + 8);
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < iVar12);
                iVar9 = *(int *)(param_1 + 0x4854);
                uVar6 = local_d8;
              }
              uVar6 = uVar6 + 1;
            } while ((longlong)uVar6 < (longlong)iVar9);
          }
          piVar1 = (int *)(param_1 + 0x486c);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0 || SBORROW4(iVar9,1) != *piVar1 < 0) {
            if (*(int *)(param_1 + 0x4824) < 0x18) {
              FUN_18017e6a8(param_1);
            }
            if ((*(byte *)(param_1 + 0x4828) & 0xf8) != 0xd0) goto LAB_18017dd88;
            FUN_18017e1c5(param_1);
          }
          iVar10 = iVar10 + 1;
          iVar9 = *(int *)(param_1 + 0x4690);
        } while (iVar10 < iVar9);
        iVar10 = *(int *)(param_1 + 0x4694);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar10);
  }
LAB_18017dd88:
  uVar8 = 1;
LAB_18017df68:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_118)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_118);
  }
  return uVar8;
LAB_18017df66:
  uVar8 = 0;
  goto LAB_18017df68;
}

