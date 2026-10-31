/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10177649 */

undefined4 __fastcall FUN_10177649(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_cc;
  int local_c8;
  int local_bc;
  undefined1 local_a0 [136];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_10177e4e();
  if (*(int *)(param_1 + 0x47cc) == 0) {
    if (*(int *)(param_1 + 0x47f0) != 1) {
      iVar7 = *(int *)(param_1 + 0x4690);
      uVar3 = 1;
      if (0 < iVar7) {
        iVar8 = *(int *)(param_1 + 0x468c);
        local_c8 = 0;
        do {
          if (0 < iVar8) {
            local_bc = 0;
            do {
              iVar7 = *(int *)(param_1 + 0x47f0);
              if (0 < iVar7) {
                iVar8 = 0;
                do {
                  iVar2 = *(int *)(param_1 + 0x47f4 + iVar8 * 4);
                  iVar4 = *(int *)(param_1 + 0x46a4 + iVar2 * 0x48);
                  if (0 < iVar4) {
                    iVar7 = param_1 + 0x469c + iVar2 * 0x48;
                    iVar9 = *(int *)(iVar7 + 4);
                    local_d8 = 0;
                    do {
                      if (0 < iVar9) {
                        local_cc = 0;
                        do {
                          iVar4 = *(int *)(iVar7 + 8);
                          iVar5 = FUN_10177ea0(*(int *)(iVar7 + 0x10) * 0x690 + param_1 + 4,
                                               *(int *)(iVar7 + 0x14) * 0x690 + param_1 + 0x1a44,
                                               *(int *)(iVar7 + 0x14) * 0x400 + param_1 + 0x3684,
                                               iVar2,*(int *)(iVar7 + 0xc) * 0x80 + param_1 + 0x3484
                                              );
                          if (iVar5 == 0) goto LAB_10177c50;
                          (**(code **)(param_1 + 0x480c))
                                    ((iVar4 * local_c8 + local_d8) * *(int *)(iVar7 + 0x24) * 8 +
                                     *(int *)(iVar7 + 0x2c) + (iVar9 * local_bc + local_cc) * 8,
                                     *(int *)(iVar7 + 0x24),local_a0);
                          local_cc = local_cc + 1;
                          iVar9 = *(int *)(iVar7 + 4);
                        } while (local_cc < iVar9);
                        iVar4 = *(int *)(iVar7 + 8);
                      }
                      local_d8 = local_d8 + 1;
                    } while (local_d8 < iVar4);
                    iVar7 = *(int *)(param_1 + 0x47f0);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < iVar7);
              }
              piVar1 = (int *)(param_1 + 0x4808);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0 || SBORROW4(iVar7,1) != *piVar1 < 0) {
                if (*(int *)(param_1 + 0x47c0) < 0x18) {
                  FUN_10178283();
                }
                if ((*(byte *)(param_1 + 0x47c4) & 0xf8) != 0xd0) goto LAB_10177911;
                FUN_10177e4e();
              }
              local_bc = local_bc + 1;
              iVar8 = *(int *)(param_1 + 0x468c);
            } while (local_bc < iVar8);
            iVar7 = *(int *)(param_1 + 0x4690);
          }
          uVar3 = 1;
          local_c8 = local_c8 + 1;
        } while (local_c8 < iVar7);
      }
      goto LAB_10177c52;
    }
    iVar7 = *(int *)(param_1 + 0x47f4);
    iVar8 = *(int *)(param_1 + 0x46bc + iVar7 * 0x48) + 7 >> 3;
    uVar3 = 1;
    if (iVar8 < 1) goto LAB_10177c52;
    iVar2 = param_1 + iVar7 * 0x48;
    iVar4 = *(int *)(iVar2 + 0x46b8) + 7 >> 3;
    local_d8 = 0;
    iVar9 = 0;
    do {
      if (0 < iVar4) {
        iVar10 = 0;
        iVar5 = iVar4;
        do {
          iVar6 = FUN_10177ea0(*(int *)(iVar2 + 0x46ac) * 0x690 + param_1 + 4,
                               *(int *)(iVar2 + 0x46b0) * 0x690 + param_1 + 0x1a44,
                               *(int *)(iVar2 + 0x46b0) * 0x400 + param_1 + 0x3684,iVar7,
                               *(int *)(iVar2 + 0x46a8) * 0x80 + param_1 + 0x3484);
          if (iVar6 == 0) goto LAB_10177c50;
          (**(code **)(param_1 + 0x480c))
                    (local_d8 * *(int *)(iVar2 + 0x46c0) + *(int *)(iVar2 + 0x46c8) + iVar10,
                     *(int *)(iVar2 + 0x46c0),local_a0);
          piVar1 = (int *)(param_1 + 0x4808);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0 || SBORROW4(iVar6,1) != *piVar1 < 0) {
            if (*(int *)(param_1 + 0x47c0) < 0x18) {
              FUN_10178283();
            }
            if ((*(byte *)(param_1 + 0x47c4) & 0xf8) != 0xd0) goto LAB_10177911;
            FUN_10177e4e();
          }
          iVar10 = iVar10 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      iVar9 = iVar9 + 1;
      local_d8 = local_d8 + 8;
    } while (iVar9 != iVar8);
  }
  else {
    if (*(int *)(param_1 + 0x47f0) != 1) {
      iVar7 = *(int *)(param_1 + 0x4690);
      uVar3 = 1;
      if (0 < iVar7) {
        iVar8 = *(int *)(param_1 + 0x468c);
        local_dc = 0;
        do {
          if (0 < iVar8) {
            local_d4 = 0;
            do {
              iVar7 = *(int *)(param_1 + 0x47f0);
              if (0 < iVar7) {
                iVar8 = 0;
                do {
                  iVar2 = *(int *)(param_1 + 0x47f4 + iVar8 * 4);
                  iVar4 = *(int *)(param_1 + 0x46a4 + iVar2 * 0x48);
                  if (0 < iVar4) {
                    iVar7 = param_1 + 0x469c + iVar2 * 0x48;
                    iVar9 = *(int *)(iVar7 + 4);
                    iVar5 = 0;
                    do {
                      if (0 < iVar9) {
                        iVar4 = 0;
                        do {
                          iVar9 = FUN_10178384(*(int *)(iVar7 + 0x10) * 0x690 + param_1 + 4,iVar2);
                          if (iVar9 == 0) goto LAB_10177c50;
                          iVar4 = iVar4 + 1;
                          iVar9 = *(int *)(iVar7 + 4);
                        } while (iVar4 < iVar9);
                        iVar4 = *(int *)(iVar7 + 8);
                      }
                      iVar5 = iVar5 + 1;
                    } while (iVar5 < iVar4);
                    iVar7 = *(int *)(param_1 + 0x47f0);
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < iVar7);
              }
              piVar1 = (int *)(param_1 + 0x4808);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0 || SBORROW4(iVar7,1) != *piVar1 < 0) {
                if (*(int *)(param_1 + 0x47c0) < 0x18) {
                  FUN_10178283();
                }
                if ((*(byte *)(param_1 + 0x47c4) & 0xf8) != 0xd0) goto LAB_10177911;
                FUN_10177e4e();
              }
              local_d4 = local_d4 + 1;
              iVar8 = *(int *)(param_1 + 0x468c);
            } while (local_d4 < iVar8);
            iVar7 = *(int *)(param_1 + 0x4690);
          }
          uVar3 = 1;
          local_dc = local_dc + 1;
        } while (local_dc < iVar7);
      }
      goto LAB_10177c52;
    }
    iVar7 = *(int *)(param_1 + 0x47f4);
    iVar8 = *(int *)(param_1 + 0x46bc + iVar7 * 0x48) + 7 >> 3;
    uVar3 = 1;
    if (iVar8 < 1) goto LAB_10177c52;
    iVar2 = param_1 + iVar7 * 0x48;
    iVar4 = *(int *)(iVar2 + 0x46b8) + 7 >> 3;
    local_dc = 0;
    do {
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          if (*(int *)(param_1 + 0x47d0) == 0) {
            iVar5 = FUN_10178384(*(int *)(iVar2 + 0x46ac) * 0x690 + param_1 + 4,iVar7);
          }
          else {
            iVar5 = FUN_101785ea(*(int *)(iVar2 + 0x46b0) * 0x690 + param_1 + 0x1a44,
                                 *(int *)(iVar2 + 0x46b0) * 0x400 + param_1 + 0x3684);
          }
          if (iVar5 == 0) goto LAB_10177c50;
          piVar1 = (int *)(param_1 + 0x4808);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0 || SBORROW4(iVar5,1) != *piVar1 < 0) {
            if (*(int *)(param_1 + 0x47c0) < 0x18) {
              FUN_10178283();
            }
            if ((*(byte *)(param_1 + 0x47c4) & 0xf8) != 0xd0) goto LAB_10177911;
            FUN_10177e4e();
          }
          iVar9 = iVar9 + 1;
        } while (iVar4 != iVar9);
      }
      local_dc = local_dc + 1;
    } while (local_dc != iVar8);
  }
LAB_10177911:
  uVar3 = 1;
LAB_10177c52:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar3;
LAB_10177c50:
  uVar3 = 0;
  goto LAB_10177c52;
}

