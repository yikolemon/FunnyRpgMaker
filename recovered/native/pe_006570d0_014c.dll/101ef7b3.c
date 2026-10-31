/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ef7b3 */

undefined4 FUN_101ef7b3(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  uint local_58;
  undefined4 local_54 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_68;
  iVar6 = *(int *)(param_1 + 0x214);
  if (iVar6 == 0) {
    uVar7 = 6;
  }
  else {
    local_68 = *(uint *)(iVar6 + 4);
    local_58 = param_2;
    if (local_68 <= param_2) {
      local_58 = local_68;
    }
    if (local_68 == 0) {
      local_68 = 0;
    }
    else {
      local_60 = iVar6 + 0x58;
      uVar9 = 0;
      local_5c = iVar6;
      do {
        pbVar1 = (byte *)(local_60 + uVar9 * 0xc);
        piVar4 = *(int **)(pbVar1 + 4);
        if (uVar9 < local_58) {
          iVar6 = *(int *)(param_3 + uVar9 * 4);
          bVar3 = *pbVar1;
          local_64 = (uint)bVar3;
        }
        else {
          bVar3 = *pbVar1;
          local_64 = (uint)bVar3;
          iVar6 = (piVar4[local_64 - 1] - *piVar4) / 2;
        }
        puVar5 = *(undefined4 **)(local_60 + 8 + uVar9 * 0xc);
        if (bVar3 == 0) {
LAB_101ef8a6:
          uVar7 = *puVar5;
        }
        else {
          iVar8 = -1;
          do {
            if (iVar6 == piVar4[iVar8 + 1]) {
              uVar7 = puVar5[iVar8 + 1];
              goto LAB_101ef8a8;
            }
            if (iVar6 < piVar4[iVar8 + 1]) {
              if (iVar8 < 0) goto LAB_101ef8a6;
              uVar7 = FUN_101c16ea(iVar6 - piVar4[iVar8],puVar5[iVar8 + 1] - puVar5[iVar8],
                                   piVar4[iVar8 + 1] - piVar4[iVar8]);
              local_68 = *(uint *)(local_5c + 4);
              goto LAB_101ef8a8;
            }
            iVar2 = iVar8 - local_64;
            iVar8 = iVar8 + 1;
          } while (iVar2 != -2);
          uVar7 = puVar5[local_64 - 1];
        }
LAB_101ef8a8:
        local_54[uVar9] = uVar7;
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_68);
    }
    uVar7 = FUN_101efef8(local_54);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar7;
}

