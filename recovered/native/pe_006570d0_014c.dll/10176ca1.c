/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10176ca1 */

int __fastcall FUN_10176ca1(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 unaff_EBX;
  undefined3 uVar12;
  int iVar10;
  int *piVar11;
  int *local_dc;
  uint *local_d8;
  int *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 *local_c4;
  int local_c0;
  int local_bc;
  int *local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4 [32];
  int local_24 [3];
  int *piStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_dc;
  *(undefined4 *)(*param_1 + 8) = 0;
  iVar4 = FUN_1017715e();
  if (iVar4 == 0) {
    FUN_1017725a();
  }
  else {
    iVar4 = ((int *)*param_1)[2];
    if (iVar4 == 3) {
      uVar12 = (undefined3)((uint)unaff_EBX >> 8);
      iVar10 = CONCAT31(uVar12,1);
      if (param_1[0x11fb] != 3) {
        if (param_1[0x11fa] == 0) {
          iVar10 = CONCAT31(uVar12,param_1[0x11f9] == 0);
        }
        else {
          iVar10 = 0;
        }
      }
    }
    else {
      iVar10 = 0;
      if (iVar4 < 1) {
        FUN_1017725a();
        goto LAB_1017710b;
      }
    }
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    piStack_18 = (int *)0x0;
    piVar9 = local_a4 + 7;
    piVar11 = param_1 + 0x11a8;
    local_dc = (int *)*param_1;
    local_d4 = param_1;
    local_c4 = param_2;
    local_bc = iVar10;
    local_a8 = iVar4;
    do {
      iVar10 = FUN_1017207d();
      piVar11[0xd] = iVar10;
      if (iVar10 == 0) goto LAB_101770f6;
      uVar5 = local_d4[0x11a1] / *piVar11;
      piVar9[-4] = uVar5;
      iVar6 = local_d4[0x11a2] / piVar11[1];
      piVar9[-3] = iVar6;
      piVar9[-1] = iVar6 >> 1;
      local_d8 = (uint *)*local_dc;
      piVar9[-2] = ((int)local_d8 + (uVar5 - 1)) / uVar5;
      *piVar9 = 0;
      iVar10 = piVar11[10];
      piVar9[-5] = iVar10;
      piVar9[-6] = iVar10;
      if (uVar5 == 2) {
        if (iVar6 == 1) {
          pcVar7 = (code *)&LAB_1017729e;
        }
        else {
          if (iVar6 != 2) goto LAB_10176de5;
          pcVar7 = (code *)local_d4[0x1205];
        }
      }
      else if (uVar5 == 1) {
        pcVar7 = (code *)&LAB_10177346;
        if (iVar6 == 2) {
          pcVar7 = (code *)&LAB_10177264;
        }
        if (iVar6 == 1) {
          pcVar7 = FUN_10152814;
        }
      }
      else {
LAB_10176de5:
        pcVar7 = (code *)&LAB_10177346;
      }
      piVar9[-7] = (int)pcVar7;
      piVar9 = piVar9 + 8;
      piVar11 = piVar11 + 0x12;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    iVar4 = local_dc[1];
    local_d0 = FUN_10173127(iVar4,1);
    if (local_d0 != 0) {
      if (iVar4 != 0) {
        local_b8 = local_d4 + 0x11af;
        local_c0 = local_d0 + 3;
        uVar5 = 0;
        local_cc = 0;
        piVar9 = local_dc;
        do {
          local_c8 = *piVar9;
          local_dc = (int *)(local_d0 + uVar5 * local_c8 * 4);
          piVar9 = local_a4 + 7;
          iVar4 = 0;
          piVar11 = local_b8;
          local_b4 = uVar5;
          do {
            iVar10 = piVar9[-1];
            local_d8 = (uint *)piVar9[-3];
            iVar8 = (*(code *)piVar9[-7])
                              (piVar11[6],piVar9[((int)local_d8 >> 1 <= iVar10) - 6],
                               piVar9[(iVar10 < (int)local_d8 >> 1) - 6],piVar9[-2],piVar9[-4]);
            iVar6 = local_c8;
            piVar2 = local_d4;
            local_24[iVar4] = iVar8;
            piVar9[-1] = iVar10 + 1;
            if ((int)local_d8 <= iVar10 + 1) {
              piVar9[-1] = 0;
              iVar10 = *piVar9;
              piVar9[-6] = piVar9[-5];
              *piVar9 = iVar10 + 1;
              if (iVar10 + 1 < *piVar11) {
                piVar9[-5] = piVar9[-5] + piVar11[1];
              }
            }
            iVar4 = iVar4 + 1;
            piVar9 = piVar9 + 8;
            piVar11 = piVar11 + 0x12;
          } while (local_a8 != iVar4);
          puVar1 = (uint *)*local_d4;
          if (puVar1[2] == 3) {
            if ((char)local_bc == '\0') {
LAB_1017702a:
              (*(code *)local_d4[0x1204])(local_dc,local_24[0],local_24[1],local_24[2],*puVar1,4);
            }
            else if (*puVar1 != 0) {
              iVar4 = local_c8 * local_cc + local_d0;
              uVar5 = 0;
              do {
                *(undefined1 *)(iVar4 + uVar5 * 4) = *(undefined1 *)(local_24[0] + uVar5);
                *(undefined1 *)(iVar4 + 1 + uVar5 * 4) = *(undefined1 *)(local_24[1] + uVar5);
                *(undefined1 *)(iVar4 + 2 + uVar5 * 4) = *(undefined1 *)(local_24[2] + uVar5);
                *(undefined1 *)(iVar4 + 3 + uVar5 * 4) = 0xff;
                uVar5 = uVar5 + 1;
              } while (uVar5 < *puVar1);
            }
          }
          else if (puVar1[2] == 4) {
            if (local_d4[0x11fa] == 2) {
              (*(code *)local_d4[0x1204])(local_dc,local_24[0],local_24[1],local_24[2],*puVar1,4);
              if (*(uint *)*piVar2 != 0) {
                local_dc = piStack_18;
                iVar4 = iVar6 * local_cc + local_d0;
                uVar5 = 0;
                local_d8 = (uint *)*piVar2;
                do {
                  uVar3 = FUN_10177381();
                  *(undefined1 *)(iVar4 + uVar5 * 4) = uVar3;
                  uVar3 = FUN_10177381();
                  *(undefined1 *)(iVar4 + 1 + uVar5 * 4) = uVar3;
                  uVar3 = FUN_10177381();
                  *(undefined1 *)(iVar4 + 2 + uVar5 * 4) = uVar3;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *local_d8);
              }
            }
            else {
              if (local_d4[0x11fa] != 0) goto LAB_1017702a;
              if (*puVar1 != 0) {
                local_dc = piStack_18;
                local_ac = local_24[1];
                local_b0 = local_24[2];
                iVar4 = local_c8 * local_cc + local_d0;
                uVar5 = 0;
                local_d8 = puVar1;
                do {
                  uVar3 = FUN_10177381();
                  *(undefined1 *)(iVar4 + uVar5 * 4) = uVar3;
                  uVar3 = FUN_10177381();
                  *(undefined1 *)(iVar4 + 1 + uVar5 * 4) = uVar3;
                  uVar3 = FUN_10177381();
                  *(undefined1 *)(iVar4 + 2 + uVar5 * 4) = uVar3;
                  *(undefined1 *)(iVar4 + 3 + uVar5 * 4) = 0xff;
                  uVar5 = uVar5 + 1;
                } while (uVar5 < *local_d8);
              }
            }
          }
          else if (*puVar1 != 0) {
            iVar4 = local_c8 * local_cc + local_c0;
            uVar5 = 0;
            do {
              uVar3 = *(undefined1 *)(local_24[0] + uVar5);
              *(undefined1 *)(iVar4 + -1 + uVar5 * 4) = uVar3;
              *(undefined1 *)(iVar4 + -2 + uVar5 * 4) = uVar3;
              *(undefined1 *)(iVar4 + -3 + uVar5 * 4) = uVar3;
              *(undefined1 *)(iVar4 + uVar5 * 4) = 0xff;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *puVar1);
          }
          uVar5 = local_b4 + 1;
          piVar9 = (int *)*local_d4;
          local_cc = local_cc + 4;
        } while (uVar5 < (uint)piVar9[1]);
      }
      piVar9 = local_d4;
      FUN_1017725a();
      *local_c4 = *(undefined4 *)*piVar9;
      *param_3 = *(undefined4 *)(*piVar9 + 4);
      iVar10 = local_d0;
      goto LAB_1017710b;
    }
LAB_101770f6:
    FUN_1017725a();
    FUN_10170e07();
  }
  iVar10 = 0;
LAB_1017710b:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_dc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar10;
}

