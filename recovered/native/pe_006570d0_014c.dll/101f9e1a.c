/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f9e1a */

int __fastcall FUN_101f9e1a(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int *local_4c;
  undefined4 local_48;
  int local_44;
  uint *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  uVar11 = *(undefined4 *)(param_1 + 100);
  local_3c = *(int *)(param_1 + 0x148);
  local_20 = *(int *)(param_1 + 0x88);
  puVar5 = (uint *)FUN_101c00c3(uVar11,8,0,*(undefined4 *)(param_1 + 300),0,&local_18);
  *(uint **)(param_1 + 0x13c) = puVar5;
  local_4c = (int *)0x0;
  if ((local_18 == 0) && (uVar12 = *(uint *)(param_1 + 300), local_40 = puVar5, uVar12 != 0)) {
    uVar9 = 0;
    local_30 = 0;
    local_4c = (int *)0x0;
    local_48 = uVar11;
    local_44 = param_1;
    do {
      iVar7 = *(int *)(local_44 + 0x130);
      iVar6 = uVar9 * 0xfc;
      uVar10 = *(uint *)(iVar7 + 0xf0 + iVar6);
      if (uVar10 != 0) {
        iVar1 = *(int *)(iVar7 + 4 + iVar6);
        local_38 = uVar10 + 1;
        uVar12 = local_30;
        local_34 = iVar7;
        local_2c = uVar10;
        local_24 = uVar9;
        if (local_30 < local_38) {
          uVar12 = (uVar10 & 0xfffffffc) + 4;
          if (local_30 < uVar12) {
            local_4c = (int *)FUN_101c2a50(uVar11,4,local_30,uVar12,local_4c,&local_18);
            iVar7 = local_18;
            if (local_18 == 0) goto LAB_101f9f44;
          }
          else {
            iVar7 = 0xa0;
          }
        }
        else {
LAB_101f9f44:
          iVar4 = local_3c;
          iVar6 = local_34 + iVar6;
          local_18 = FUN_101c461e(local_3c,*(int *)(iVar6 + 0xf4) + *(int *)(local_44 + 0x134));
          uVar11 = local_48;
          iVar7 = local_18;
          if ((local_18 == 0) &&
             (local_34 = iVar6, local_18 = FUN_101c4b69(iVar4,*(int *)(iVar6 + 0xf8) * local_38),
             uVar9 = local_2c, piVar3 = local_4c, uVar11 = local_48, iVar7 = local_18, local_18 == 0
             )) {
            local_1c = *(undefined4 *)(iVar4 + 0x20);
            uVar10 = 0;
            local_30 = uVar12;
            local_28 = iVar1;
            do {
              iVar7 = FUN_101f94a5();
              piVar3[uVar10] = iVar7;
              uVar10 = uVar10 + 1;
            } while (uVar10 <= uVar9);
            FUN_101c4c66(local_3c);
            uVar11 = local_48;
            uVar12 = 1;
            do {
              iVar7 = 3;
              if ((uint)piVar3[uVar12] < (uint)piVar3[uVar12 - 1]) goto LAB_101fa150;
              uVar12 = uVar12 + 1;
            } while (uVar12 <= uVar9);
            if ((uint)piVar3[uVar9] <= (uint)(*(int *)(local_3c + 4) - *(int *)(local_44 + 0x134)))
            {
              iVar6 = piVar3[uVar9] - *piVar3;
              uVar12 = FUN_101c2a50(local_48,4,0,local_38,0,&local_18);
              puVar5 = local_40;
              local_40[1] = uVar12;
              iVar7 = local_18;
              if (local_18 == 0) {
                uVar8 = FUN_101c21f6(uVar11,iVar6,&local_18);
                iVar1 = local_3c;
                *(undefined4 *)puVar5[1] = uVar8;
                iVar7 = local_18;
                if (((local_18 == 0) &&
                    (local_18 = FUN_101c461e(local_3c,*local_4c + *(int *)(local_44 + 0x134)),
                    uVar11 = local_48, iVar7 = local_18, local_18 == 0)) &&
                   (local_18 = FUN_101c4659(iVar1,*(undefined4 *)local_40[1],iVar6),
                   uVar12 = local_2c, puVar5 = local_40, piVar3 = local_4c, uVar11 = local_48,
                   iVar7 = local_18, local_18 == 0)) {
                  uVar9 = local_38;
                  if (local_38 < 3) {
                    uVar9 = 2;
                  }
                  uVar10 = 1;
                  do {
                    *(int *)(local_40[1] + uVar10 * 4) =
                         (local_4c[uVar10] - local_4c[uVar10 - 1]) +
                         *(int *)((local_40[1] - 4) + uVar10 * 4);
                    uVar10 = uVar10 + 1;
                  } while (uVar9 != uVar10);
                  if (-1 < local_28) {
                    uVar9 = 0;
                    do {
                      uVar10 = uVar9 + 1;
                      (**(code **)(local_20 + 0x10))
                                (*(undefined4 *)(puVar5[1] + uVar9 * 4),
                                 piVar3[uVar9 + 1] - piVar3[uVar9],0x10ea);
                      uVar9 = uVar10;
                    } while (uVar12 != uVar10);
                  }
                  *puVar5 = uVar12;
                  uVar12 = *(uint *)(local_44 + 300);
                  local_40 = puVar5;
                  uVar9 = local_24;
                  uVar11 = local_48;
                  goto LAB_101fa12c;
                }
              }
            }
          }
        }
LAB_101fa150:
        local_18 = iVar7;
        iVar6 = local_44;
        iVar7 = *(int *)(local_44 + 0x13c);
        if (iVar7 != 0) {
          if (*(int *)(local_44 + 300) != 0) {
            uVar12 = 0;
            do {
              puVar2 = *(undefined4 **)(*(int *)(iVar6 + 0x13c) + 4 + uVar12 * 8);
              uVar8 = 0;
              if (puVar2 != (undefined4 *)0x0) {
                FUN_101c0017(uVar11,*puVar2);
                **(undefined4 **)(*(int *)(iVar6 + 0x13c) + 4 + uVar12 * 8) = 0;
                uVar8 = *(undefined4 *)(*(int *)(iVar6 + 0x13c) + 4 + uVar12 * 8);
              }
              FUN_101c0017(uVar11,uVar8);
              *(undefined4 *)(*(int *)(iVar6 + 0x13c) + 4 + uVar12 * 8) = 0;
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(uint *)(iVar6 + 300));
            iVar7 = *(int *)(iVar6 + 0x13c);
          }
          FUN_101c0017(uVar11,iVar7);
          *(undefined4 *)(iVar6 + 0x13c) = 0;
        }
        break;
      }
LAB_101fa12c:
      uVar9 = uVar9 + 1;
      local_40 = local_40 + 2;
    } while (uVar9 < uVar12);
  }
  FUN_101c0017(uVar11,local_4c);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
}

