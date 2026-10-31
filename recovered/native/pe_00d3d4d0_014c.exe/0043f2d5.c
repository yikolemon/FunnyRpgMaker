/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043f2d5 */

void __fastcall FUN_0043f2d5(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *local_30;
  uint *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_30;
  local_18 = 0;
  local_20 = *(int *)(param_1 + 100);
  puVar11 = *(undefined4 **)(param_1 + 0x2e0);
  local_2c = (uint *)puVar11[3];
  uVar7 = *local_2c;
  if (uVar7 <= param_2) {
    param_2 = uVar7;
  }
  puVar5 = local_2c;
  local_24 = param_1;
  if (param_2 != 0) {
    puVar10 = (undefined4 *)(local_2c[3] + 0xc);
    uVar7 = 0;
    local_28 = puVar11;
    do {
      iVar3 = *(int *)(param_3 + uVar7 * 4);
      iVar8 = puVar10[-1];
      if (iVar3 - iVar8 == 0 || iVar3 < iVar8) {
        iVar2 = 0;
        if (iVar3 < iVar8) {
          local_30 = (uint *)puVar10[-2];
          iVar2 = -0x10000;
          if ((int)local_30 < iVar3) {
            uVar4 = iVar8 - (int)local_30;
            goto LAB_0043f368;
          }
        }
      }
      else {
        local_30 = (uint *)*puVar10;
        iVar2 = 0x10000;
        if (iVar3 < (int)local_30) {
          uVar4 = (int)local_30 - iVar8;
LAB_0043f368:
          iVar2 = FUN_0041eaa0(iVar3 - iVar8,uVar4);
        }
      }
      *(int *)(param_4 + uVar7 * 4) = iVar2;
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 6;
    } while (param_2 != uVar7);
    uVar7 = *local_2c;
    puVar5 = local_2c;
    puVar11 = local_28;
  }
  for (; param_2 < uVar7; param_2 = param_2 + 1) {
    *(undefined4 *)(param_4 + param_2 * 4) = 0;
    uVar7 = *puVar5;
  }
  puVar11 = (undefined4 *)puVar11[7];
  if (puVar11 != (undefined4 *)0x0) {
    puVar5 = (uint *)*puVar11;
    local_28 = puVar11;
    if (puVar5 != (uint *)0x0) {
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar4 = 0;
        do {
          if (1 < (ushort)*puVar5) {
            iVar3 = *(int *)(param_4 + uVar4 * 4);
            uVar6 = puVar5[1];
            iVar8 = 0;
            do {
              iVar2 = *(int *)(uVar6 + 8 + iVar8 * 8);
              local_30 = puVar5;
              if (iVar3 < iVar2) {
                iVar1 = *(int *)(uVar6 + iVar8 * 8);
                iVar3 = FUN_0041dcda(iVar3 - iVar1,
                                     *(int *)(uVar6 + 0xc + iVar8 * 8) -
                                     *(int *)(uVar6 + 4 + iVar8 * 8),iVar2 - iVar1);
                *(int *)(param_4 + uVar4 * 4) = iVar3 + *(int *)(local_30[1] + 4 + iVar8 * 8);
                uVar7 = *local_2c;
                puVar5 = local_30;
                break;
              }
              iVar8 = iVar8 + 1;
            } while ((ushort)*puVar5 - 1 != iVar8);
          }
          uVar4 = uVar4 + 1;
          puVar5 = puVar5 + 2;
        } while (uVar4 < uVar7);
      }
    }
    puVar11 = local_28;
    if ((local_28[2] != 0) && (iVar3 = FUN_0041efcd(local_20,4,0,uVar7,0,&local_18), local_18 == 0))
    {
      uVar9 = *(undefined4 *)(*(int *)(local_24 + 0x2e0) + 8);
      *(int *)(*(int *)(local_24 + 0x2e0) + 8) = param_4;
      if (*local_2c != 0) {
        local_30 = puVar11 + 1;
        uVar7 = 0;
        local_1c = uVar9;
        do {
          uVar4 = 0;
          uVar6 = uVar7;
          if (puVar11[8] != 0) {
            uVar6 = puVar11[6] - 1;
            if (uVar7 < (uint)puVar11[6]) {
              uVar6 = uVar7;
            }
            uVar4 = *(uint *)(puVar11[7] + uVar6 * 4);
            uVar6 = *(uint *)(puVar11[8] + uVar6 * 4);
          }
          iVar8 = *(int *)(param_4 + uVar7 * 4);
          iVar2 = FUN_0043d9b0(local_24,local_30,uVar4,uVar6);
          iVar8 = iVar2 * 4 + iVar8;
          if (iVar8 < -0xffff) {
            iVar8 = -0x10000;
          }
          if (0xffff < iVar8) {
            iVar8 = 0x10000;
          }
          *(int *)(iVar3 + uVar7 * 4) = iVar8;
          uVar7 = uVar7 + 1;
        } while (uVar7 < *local_2c);
        uVar9 = local_1c;
        if (*local_2c != 0) {
          uVar7 = 0;
          do {
            *(undefined4 *)(param_4 + uVar7 * 4) = *(undefined4 *)(iVar3 + uVar7 * 4);
            uVar7 = uVar7 + 1;
          } while (uVar7 < *local_2c);
        }
      }
      *(undefined4 *)(*(int *)(local_24 + 0x2e0) + 8) = uVar9;
      FUN_0041c607(local_20,iVar3);
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_30);
  }
  return;
}

