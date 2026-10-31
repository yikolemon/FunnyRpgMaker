/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400548f7 */

int FUN_1400548f7(longlong param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStackY_b8 [32];
  uint local_80;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  lVar5 = *(longlong *)(param_1 + 0x98);
  plVar6 = *(longlong **)(param_1 + 0x1e8);
  lVar18 = *(longlong *)(param_1 + 0xe0);
  puVar9 = (uint *)0x0;
  puVar8 = (uint *)FUN_14001c617(lVar5,0x10,0,*(uint *)(param_1 + 0x1b0),0,&local_4c);
  *(uint **)(param_1 + 0x1d0) = puVar8;
  if (local_4c == 0) {
    uVar19 = *(uint *)(param_1 + 0x1b0);
    local_80 = 0;
    if (uVar19 == 0) {
      puVar9 = (uint *)0x0;
    }
    else {
      uVar13 = 0;
      puVar9 = (uint *)0x0;
      do {
        lVar17 = *(longlong *)(param_1 + 0x1b8);
        lVar16 = uVar13 * 0xfc;
        uVar3 = *(uint *)(lVar17 + 0xf0 + lVar16);
        uVar14 = (ulonglong)uVar3;
        if (uVar14 != 0) {
          iVar4 = *(int *)(lVar17 + 4 + lVar16);
          uVar19 = uVar3 + 1;
          if (local_80 < uVar19) {
            uVar15 = (uVar3 & 0xfffffffc) + 4;
            if (local_80 < uVar15) {
              puVar9 = (uint *)FUN_14001f231(lVar5,4,local_80,uVar15,(longlong)puVar9,&local_4c);
              local_80 = uVar15;
              iVar7 = local_4c;
              if (local_4c == 0) goto LAB_140054a46;
            }
            else {
              iVar7 = 0xa0;
            }
          }
          else {
LAB_140054a46:
            lVar17 = lVar17 + lVar16;
            uVar10 = FUN_140020a41((longlong)plVar6,
                                   *(int *)(lVar17 + 0xf4) + *(int *)(param_1 + 0x1c0));
            local_4c = (int)uVar10;
            iVar7 = local_4c;
            if ((local_4c == 0) &&
               (local_4c = FUN_140021063(plVar6,*(int *)(lVar17 + 0xf8) * uVar19), iVar7 = local_4c,
               local_4c == 0)) {
              local_58 = plVar6[7];
              uVar12 = 0;
              do {
                uVar15 = FUN_140053e87(&local_58,*(uint *)(lVar17 + 0xf8));
                puVar9[uVar12] = uVar15;
                uVar15 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar15;
              } while (uVar15 <= uVar3);
              FUN_140021187(plVar6);
              uVar12 = 1;
              uVar15 = *puVar9;
              do {
                puVar2 = puVar9 + uVar12;
                iVar7 = 3;
                if (*puVar2 < uVar15) goto LAB_140054c3e;
                uVar11 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
                uVar15 = *puVar2;
              } while (uVar11 <= uVar3);
              if (puVar9[uVar14] <= (uint)((int)plVar6[1] - *(int *)(param_1 + 0x1c0))) {
                uVar15 = puVar9[uVar14] - *puVar9;
                lVar17 = FUN_14001f231(lVar5,8,0,uVar19,0,&local_4c);
                *(longlong *)(puVar8 + 2) = lVar17;
                iVar7 = local_4c;
                if (local_4c == 0) {
                  lVar17 = FUN_14001e961(lVar5,uVar15,&local_4c);
                  **(longlong **)(puVar8 + 2) = lVar17;
                  iVar7 = local_4c;
                  if (local_4c == 0) {
                    uVar10 = FUN_140020a41((longlong)plVar6,*puVar9 + *(int *)(param_1 + 0x1c0));
                    local_4c = (int)uVar10;
                    iVar7 = local_4c;
                    if (local_4c == 0) {
                      local_4c = FUN_140020a85(plVar6,(undefined8 *)**(undefined8 **)(puVar8 + 2),
                                               uVar15);
                      iVar7 = local_4c;
                      if (local_4c == 0) {
                        if (uVar19 < 3) {
                          uVar19 = 2;
                        }
                        uVar12 = 1;
                        do {
                          *(ulonglong *)(*(longlong *)(puVar8 + 2) + uVar12 * 8) =
                               (ulonglong)(puVar9[uVar12] - puVar9[uVar12 - 1]) +
                               *(longlong *)(*(longlong *)(puVar8 + 2) + -8 + uVar12 * 8);
                          uVar12 = uVar12 + 1;
                        } while (uVar19 != uVar12);
                        if (-1 < iVar4) {
                          uVar12 = 0;
                          do {
                            uVar1 = uVar12 + 1;
                            (**(code **)(lVar18 + 0x20))
                                      (*(undefined8 *)(*(longlong *)(puVar8 + 2) + uVar12 * 8),
                                       puVar9[uVar12 + 1] - puVar9[uVar12],0x10ea);
                            uVar12 = uVar1;
                          } while (uVar14 != uVar1);
                        }
                        *puVar8 = uVar3;
                        uVar19 = *(uint *)(param_1 + 0x1b0);
                        goto LAB_140054c17;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_140054c3e:
          local_4c = iVar7;
          lVar18 = *(longlong *)(param_1 + 0x1d0);
          if (lVar18 != 0) {
            if (*(int *)(param_1 + 0x1b0) != 0) {
              lVar18 = 8;
              uVar13 = 0;
              do {
                plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x1d0) + lVar18);
                if (plVar6 == (longlong *)0x0) {
                  lVar17 = 0;
                }
                else {
                  FUN_14001c53d(lVar5,*plVar6);
                  **(undefined8 **)(*(longlong *)(param_1 + 0x1d0) + lVar18) = 0;
                  lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + lVar18);
                }
                FUN_14001c53d(lVar5,lVar17);
                *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + lVar18) = 0;
                uVar13 = uVar13 + 1;
                lVar18 = lVar18 + 0x10;
              } while (uVar13 < *(uint *)(param_1 + 0x1b0));
              lVar18 = *(longlong *)(param_1 + 0x1d0);
            }
            FUN_14001c53d(lVar5,lVar18);
            *(undefined8 *)(param_1 + 0x1d0) = 0;
          }
          break;
        }
LAB_140054c17:
        uVar13 = uVar13 + 1;
        puVar8 = puVar8 + 4;
      } while (uVar13 < uVar19);
    }
  }
  FUN_14001c53d(lVar5,(longlong)puVar9);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_b8);
  }
  return local_4c;
}

