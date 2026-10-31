/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e7b65 */

void __fastcall FUN_101e7b65(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  ushort *puVar12;
  ushort *local_30;
  uint *local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  local_18 = 0;
  local_20 = *(undefined4 *)(param_1 + 100);
  puVar10 = *(undefined4 **)(param_1 + 0x2e0);
  local_2c = (uint *)puVar10[3];
  uVar8 = *local_2c;
  if (uVar8 <= param_2) {
    param_2 = uVar8;
  }
  puVar7 = local_2c;
  local_24 = param_1;
  if (param_2 != 0) {
    puVar9 = (undefined4 *)(local_2c[3] + 0xc);
    uVar8 = 0;
    local_28 = puVar10;
    do {
      iVar4 = *(int *)(param_3 + uVar8 * 4);
      iVar5 = puVar9[-1];
      if (iVar4 - iVar5 == 0 || iVar4 < iVar5) {
        uVar3 = 0;
        if (iVar4 < iVar5) {
          local_30 = (ushort *)puVar9[-2];
          uVar3 = 0xffff0000;
          if ((int)local_30 < iVar4) {
            iVar6 = iVar5 - (int)local_30;
            goto LAB_101e7bf8;
          }
        }
      }
      else {
        local_30 = (ushort *)*puVar9;
        uVar3 = 0x10000;
        if (iVar4 < (int)local_30) {
          iVar6 = (int)local_30 - iVar5;
LAB_101e7bf8:
          uVar3 = FUN_101c2523(iVar4 - iVar5,iVar6);
        }
      }
      *(undefined4 *)(param_4 + uVar8 * 4) = uVar3;
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 6;
    } while (param_2 != uVar8);
    uVar8 = *local_2c;
    puVar7 = local_2c;
    puVar10 = local_28;
  }
  for (; param_2 < uVar8; param_2 = param_2 + 1) {
    *(undefined4 *)(param_4 + param_2 * 4) = 0;
    uVar8 = *puVar7;
  }
  puVar10 = (undefined4 *)puVar10[7];
  if (puVar10 != (undefined4 *)0x0) {
    puVar12 = (ushort *)*puVar10;
    local_28 = puVar10;
    if (puVar12 != (ushort *)0x0) {
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        uVar11 = 0;
        do {
          if (1 < *puVar12) {
            iVar4 = *(int *)(param_4 + uVar11 * 4);
            iVar5 = *(int *)(puVar12 + 2);
            iVar6 = 0;
            do {
              iVar1 = *(int *)(iVar5 + 8 + iVar6 * 8);
              local_30 = puVar12;
              if (iVar4 < iVar1) {
                iVar2 = *(int *)(iVar5 + iVar6 * 8);
                iVar4 = FUN_101c16ea(iVar4 - iVar2,
                                     *(int *)(iVar5 + 0xc + iVar6 * 8) -
                                     *(int *)(iVar5 + 4 + iVar6 * 8),iVar1 - iVar2);
                *(int *)(param_4 + uVar11 * 4) =
                     iVar4 + *(int *)(*(int *)(local_30 + 2) + 4 + iVar6 * 8);
                uVar8 = *local_2c;
                puVar12 = local_30;
                break;
              }
              iVar6 = iVar6 + 1;
            } while (*puVar12 - 1 != iVar6);
          }
          uVar11 = uVar11 + 1;
          puVar12 = puVar12 + 4;
        } while (uVar11 < uVar8);
      }
    }
    puVar10 = local_28;
    if ((local_28[2] != 0) && (iVar4 = FUN_101c2a50(local_20,4,0,uVar8,0,&local_18), local_18 == 0))
    {
      uVar3 = *(undefined4 *)(*(int *)(local_24 + 0x2e0) + 8);
      *(int *)(*(int *)(local_24 + 0x2e0) + 8) = param_4;
      if (*local_2c != 0) {
        local_30 = (ushort *)(puVar10 + 1);
        uVar8 = 0;
        local_1c = uVar3;
        do {
          uVar3 = 0;
          uVar11 = uVar8;
          if (puVar10[8] != 0) {
            uVar11 = puVar10[6] - 1;
            if (uVar8 < (uint)puVar10[6]) {
              uVar11 = uVar8;
            }
            uVar3 = *(undefined4 *)(puVar10[7] + uVar11 * 4);
            uVar11 = *(uint *)(puVar10[8] + uVar11 * 4);
          }
          iVar5 = *(int *)(param_4 + uVar8 * 4);
          iVar6 = FUN_101e6240(local_24,local_30,uVar3,uVar11);
          iVar5 = iVar6 * 4 + iVar5;
          if (iVar5 < -0xffff) {
            iVar5 = -0x10000;
          }
          if (0xffff < iVar5) {
            iVar5 = 0x10000;
          }
          *(int *)(iVar4 + uVar8 * 4) = iVar5;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *local_2c);
        uVar3 = local_1c;
        if (*local_2c != 0) {
          uVar8 = 0;
          do {
            *(undefined4 *)(param_4 + uVar8 * 4) = *(undefined4 *)(iVar4 + uVar8 * 4);
            uVar8 = uVar8 + 1;
          } while (uVar8 < *local_2c);
        }
      }
      *(undefined4 *)(*(int *)(local_24 + 0x2e0) + 8) = uVar3;
      FUN_101c0017(local_20,iVar4);
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

