/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802072bb */

int FUN_1802072bb(longlong param_1)

{
  ulonglong uVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 auStack_b8 [32];
  uint *local_98;
  int *local_90;
  uint local_80;
  int local_7c;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  uVar13 = *(undefined8 *)(param_1 + 0x98);
  lVar17 = *(longlong *)(param_1 + 0x1e8);
  lVar15 = *(longlong *)(param_1 + 0xe0);
  local_90 = &local_4c;
  local_98 = (uint *)0x0;
  puVar9 = (uint *)0x0;
  puVar8 = (uint *)FUN_1801c9c3f(uVar13,0x10,0,*(undefined4 *)(param_1 + 0x1b0));
  *(uint **)(param_1 + 0x1d0) = puVar8;
  if (local_4c == 0) {
    uVar18 = *(uint *)(param_1 + 0x1b0);
    uVar7 = 0;
    if (uVar18 == 0) {
      puVar9 = (uint *)0x0;
    }
    else {
      uVar11 = 0;
      puVar9 = (uint *)0x0;
      local_78 = lVar17;
      local_70 = lVar15;
      local_60 = uVar13;
      do {
        lVar17 = *(longlong *)(param_1 + 0x1b8);
        lVar15 = uVar11 * 0xfc;
        uVar3 = *(uint *)(lVar17 + 0xf0 + lVar15);
        uVar12 = (ulonglong)uVar3;
        if (uVar12 != 0) {
          local_7c = *(int *)(lVar17 + 4 + lVar15);
          uVar18 = uVar3 + 1;
          local_68 = uVar11;
          if (uVar7 < uVar18) {
            uVar14 = (uVar3 & 0xfffffffc) + 4;
            if (uVar7 < uVar14) {
              local_90 = &local_4c;
              local_98 = puVar9;
              local_80 = uVar14;
              puVar9 = (uint *)FUN_1801cc8d6(uVar13,4);
              uVar7 = local_80;
              iVar6 = local_4c;
              if (local_4c == 0) goto LAB_18020740a;
            }
            else {
              iVar6 = 0xa0;
            }
          }
          else {
LAB_18020740a:
            local_80 = uVar7;
            lVar5 = local_78;
            lVar17 = lVar17 + lVar15;
            local_4c = FUN_1801ce63e(local_78,*(int *)(lVar17 + 0xf4) + *(int *)(param_1 + 0x1c0));
            iVar6 = local_4c;
            if ((local_4c == 0) &&
               (local_4c = FUN_1801cec60(lVar5,*(int *)(lVar17 + 0xf8) * uVar18), iVar6 = local_4c,
               local_4c == 0)) {
              local_58 = *(undefined8 *)(lVar5 + 0x38);
              uVar11 = 0;
              do {
                uVar7 = FUN_18020684b(&local_58,*(undefined4 *)(lVar17 + 0xf8));
                lVar15 = local_78;
                puVar9[uVar11] = uVar7;
                uVar7 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar7;
              } while (uVar7 <= uVar3);
              FUN_1801ced84(local_78);
              uVar13 = local_60;
              uVar11 = 1;
              uVar7 = *puVar9;
              do {
                puVar2 = puVar9 + uVar11;
                iVar6 = 3;
                if (*puVar2 < uVar7) goto LAB_180207602;
                uVar14 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar14;
                uVar7 = *puVar2;
              } while (uVar14 <= uVar3);
              if (puVar9[uVar12] <= (uint)(*(int *)(lVar15 + 8) - *(int *)(param_1 + 0x1c0))) {
                iVar16 = puVar9[uVar12] - *puVar9;
                local_90 = &local_4c;
                local_98 = (uint *)0x0;
                uVar10 = FUN_1801cc8d6(local_60,8,0,uVar18);
                *(undefined8 *)(puVar8 + 2) = uVar10;
                iVar6 = local_4c;
                if (local_4c == 0) {
                  uVar10 = FUN_1801cc006(uVar13,iVar16,&local_4c);
                  **(undefined8 **)(puVar8 + 2) = uVar10;
                  iVar6 = local_4c;
                  if ((local_4c == 0) &&
                     (local_4c = FUN_1801ce63e(lVar15,*puVar9 + *(int *)(param_1 + 0x1c0)),
                     iVar6 = local_4c, local_4c == 0)) {
                    local_4c = FUN_1801ce682(lVar15,**(undefined8 **)(puVar8 + 2),iVar16);
                    lVar17 = local_70;
                    iVar6 = local_4c;
                    if (local_4c == 0) {
                      if (uVar18 < 3) {
                        uVar18 = 2;
                      }
                      uVar11 = 1;
                      do {
                        *(ulonglong *)(*(longlong *)(puVar8 + 2) + uVar11 * 8) =
                             (ulonglong)(puVar9[uVar11] - puVar9[uVar11 - 1]) +
                             *(longlong *)(*(longlong *)(puVar8 + 2) + -8 + uVar11 * 8);
                        uVar11 = uVar11 + 1;
                      } while (uVar18 != uVar11);
                      if (-1 < local_7c) {
                        uVar11 = 0;
                        do {
                          uVar1 = uVar11 + 1;
                          (**(code **)(lVar17 + 0x20))
                                    (*(undefined8 *)(*(longlong *)(puVar8 + 2) + uVar11 * 8),
                                     puVar9[uVar11 + 1] - puVar9[uVar11],0x10ea);
                          uVar11 = uVar1;
                        } while (uVar12 != uVar1);
                      }
                      *puVar8 = uVar3;
                      uVar18 = *(uint *)(param_1 + 0x1b0);
                      uVar11 = local_68;
                      uVar7 = local_80;
                      goto LAB_1802075db;
                    }
                  }
                }
              }
            }
          }
LAB_180207602:
          local_4c = iVar6;
          lVar17 = *(longlong *)(param_1 + 0x1d0);
          if (lVar17 != 0) {
            if (*(int *)(param_1 + 0x1b0) != 0) {
              lVar17 = 8;
              uVar11 = 0;
              do {
                puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x1d0) + lVar17);
                if (puVar4 == (undefined8 *)0x0) {
                  uVar10 = 0;
                }
                else {
                  FUN_1801c9b65(uVar13,*puVar4);
                  **(undefined8 **)(*(longlong *)(param_1 + 0x1d0) + lVar17) = 0;
                  uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + lVar17);
                }
                FUN_1801c9b65(uVar13,uVar10);
                *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + lVar17) = 0;
                uVar11 = uVar11 + 1;
                lVar17 = lVar17 + 0x10;
              } while (uVar11 < *(uint *)(param_1 + 0x1b0));
              lVar17 = *(longlong *)(param_1 + 0x1d0);
            }
            FUN_1801c9b65(uVar13,lVar17);
            *(undefined8 *)(param_1 + 0x1d0) = 0;
          }
          break;
        }
LAB_1802075db:
        uVar11 = uVar11 + 1;
        puVar8 = puVar8 + 4;
      } while (uVar11 < uVar18);
    }
  }
  FUN_1801c9b65(uVar13,puVar9);
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
  }
  return local_4c;
}

