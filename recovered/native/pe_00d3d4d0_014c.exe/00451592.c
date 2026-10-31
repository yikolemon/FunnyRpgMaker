/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00451592 */

int __fastcall FUN_00451592(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *local_4c;
  int local_48;
  int local_44;
  uint *local_40;
  int *local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_4c;
  iVar9 = *(int *)(param_1 + 100);
  local_3c = *(int **)(param_1 + 0x148);
  local_20 = *(int *)(param_1 + 0x88);
  puVar4 = (uint *)FUN_0041c6b3(iVar9,8,0,*(uint *)(param_1 + 300),0,&local_18);
  *(uint **)(param_1 + 0x13c) = puVar4;
  local_4c = (int *)0x0;
  if ((local_18 == 0) && (uVar10 = *(uint *)(param_1 + 300), local_40 = puVar4, uVar10 != 0)) {
    uVar7 = 0;
    local_30 = 0;
    local_4c = (int *)0x0;
    local_48 = iVar9;
    local_44 = param_1;
    do {
      iVar6 = *(int *)(local_44 + 0x130);
      iVar5 = uVar7 * 0xfc;
      uVar8 = *(uint *)(iVar6 + 0xf0 + iVar5);
      if (uVar8 != 0) {
        iVar1 = *(int *)(iVar6 + 4 + iVar5);
        local_38 = uVar8 + 1;
        uVar10 = local_30;
        local_34 = iVar6;
        local_2c = uVar8;
        local_24 = uVar7;
        if (local_30 < local_38) {
          uVar10 = (uVar8 & 0xfffffffc) + 4;
          if (local_30 < uVar10) {
            local_4c = (int *)FUN_0041efcd(iVar9,4,local_30,uVar10,(int)local_4c,&local_18);
            iVar6 = local_18;
            if (local_18 == 0) goto LAB_004516bc;
          }
          else {
            iVar6 = 0xa0;
          }
        }
        else {
LAB_004516bc:
          piVar2 = local_3c;
          iVar5 = local_34 + iVar5;
          local_18 = FUN_00420696((int)local_3c,*(int *)(iVar5 + 0xf4) + *(int *)(local_44 + 0x134))
          ;
          iVar9 = local_48;
          iVar6 = local_18;
          if ((local_18 == 0) &&
             (local_34 = iVar5, local_18 = FUN_00420be1(piVar2,*(int *)(iVar5 + 0xf8) * local_38),
             uVar7 = local_2c, iVar5 = local_34, piVar3 = local_4c, iVar9 = local_48,
             iVar6 = local_18, local_18 == 0)) {
            local_1c = piVar2[8];
            uVar8 = 0;
            local_30 = uVar10;
            local_28 = iVar1;
            do {
              uVar10 = FUN_00450c1d(&local_1c,*(int *)(iVar5 + 0xf8));
              piVar3[uVar8] = uVar10;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= uVar7);
            FUN_00420cde(local_3c);
            iVar9 = local_48;
            uVar10 = 1;
            do {
              iVar6 = 3;
              if ((uint)piVar3[uVar10] < (uint)piVar3[uVar10 - 1]) goto LAB_004518c8;
              uVar10 = uVar10 + 1;
            } while (uVar10 <= uVar7);
            if ((uint)piVar3[uVar7] <= (uint)(local_3c[1] - *(int *)(local_44 + 0x134))) {
              uVar7 = piVar3[uVar7] - *piVar3;
              uVar10 = FUN_0041efcd(local_48,4,0,local_38,0,&local_18);
              puVar4 = local_40;
              local_40[1] = uVar10;
              iVar6 = local_18;
              if (local_18 == 0) {
                iVar6 = FUN_0041e773(iVar9,uVar7,&local_18);
                piVar2 = local_3c;
                *(int *)puVar4[1] = iVar6;
                iVar6 = local_18;
                if (((local_18 == 0) &&
                    (local_18 = FUN_00420696((int)local_3c,*local_4c + *(int *)(local_44 + 0x134)),
                    iVar9 = local_48, iVar6 = local_18, local_18 == 0)) &&
                   (local_18 = FUN_004206d1(piVar2,*(uint **)local_40[1],uVar7), uVar10 = local_2c,
                   puVar4 = local_40, piVar2 = local_4c, iVar9 = local_48, iVar6 = local_18,
                   local_18 == 0)) {
                  uVar7 = local_38;
                  if (local_38 < 3) {
                    uVar7 = 2;
                  }
                  uVar8 = 1;
                  do {
                    *(int *)(local_40[1] + uVar8 * 4) =
                         (local_4c[uVar8] - local_4c[uVar8 - 1]) +
                         *(int *)((local_40[1] - 4) + uVar8 * 4);
                    uVar8 = uVar8 + 1;
                  } while (uVar7 != uVar8);
                  if (-1 < local_28) {
                    uVar7 = 0;
                    do {
                      uVar8 = uVar7 + 1;
                      (**(code **)(local_20 + 0x10))
                                (*(undefined4 *)(puVar4[1] + uVar7 * 4),
                                 piVar2[uVar7 + 1] - piVar2[uVar7],0x10ea);
                      uVar7 = uVar8;
                    } while (uVar10 != uVar8);
                  }
                  *puVar4 = uVar10;
                  uVar10 = *(uint *)(local_44 + 300);
                  local_40 = puVar4;
                  uVar7 = local_24;
                  iVar9 = local_48;
                  goto LAB_004518a4;
                }
              }
            }
          }
        }
LAB_004518c8:
        local_18 = iVar6;
        iVar5 = local_44;
        iVar6 = *(int *)(local_44 + 0x13c);
        if (iVar6 != 0) {
          if (*(int *)(local_44 + 300) != 0) {
            uVar10 = 0;
            do {
              piVar2 = *(int **)(*(int *)(iVar5 + 0x13c) + 4 + uVar10 * 8);
              iVar6 = 0;
              if (piVar2 != (int *)0x0) {
                FUN_0041c607(iVar9,*piVar2);
                **(undefined4 **)(*(int *)(iVar5 + 0x13c) + 4 + uVar10 * 8) = 0;
                iVar6 = *(int *)(*(int *)(iVar5 + 0x13c) + 4 + uVar10 * 8);
              }
              FUN_0041c607(iVar9,iVar6);
              *(undefined4 *)(*(int *)(iVar5 + 0x13c) + 4 + uVar10 * 8) = 0;
              uVar10 = uVar10 + 1;
            } while (uVar10 < *(uint *)(iVar5 + 300));
            iVar6 = *(int *)(iVar5 + 0x13c);
          }
          FUN_0041c607(iVar9,iVar6);
          *(undefined4 *)(iVar5 + 0x13c) = 0;
        }
        break;
      }
LAB_004518a4:
      uVar7 = uVar7 + 1;
      local_40 = local_40 + 2;
    } while (uVar7 < uVar10);
  }
  FUN_0041c607(iVar9,(int)local_4c);
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_4c);
  }
  return local_18;
}

