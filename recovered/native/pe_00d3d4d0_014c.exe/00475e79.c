/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00475e79 */

undefined4 __fastcall FUN_00475e79(byte *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  byte *local_18;
  uint local_14;
  
  iVar1 = *(int *)(param_1 + 0x58);
  iVar2 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  local_1c = *(int *)(iVar1 + param_2 * 8) * iVar10 - iVar2;
  uVar8 = *(int *)(iVar1 + 4 + param_2 * 8) * iVar10 - iVar2;
  uVar3 = *(int *)(iVar1 + param_3 * 8) * iVar10 - iVar2;
  local_14 = iVar10 * *(int *)(iVar1 + 4 + param_3 * 8) - iVar2;
  local_28 = uVar3;
  local_20 = uVar8;
  if (param_4 != 0) {
    local_28 = local_14;
    local_20 = local_1c;
    local_1c = uVar8;
    local_14 = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x5c);
  pbVar11 = (byte *)(iVar2 + param_2);
  bVar7 = *(byte *)(iVar2 + param_2);
  if ((bVar7 & 4) != 0) {
    param_1[0x28] = bVar7 >> 5;
    bVar7 = *pbVar11;
  }
  if ((bVar7 & 3) == 2) {
LAB_004761bf:
    param_1[0x24] = 0x14;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    pbVar5 = param_1;
  }
  else {
    local_18 = (byte *)(iVar1 + param_3 * 8);
    pbVar14 = (byte *)(iVar1 + param_2 * 8);
    if ((bVar7 & 3) == 0) {
      if ((*(byte *)(iVar2 + param_3) & 3) == 1) {
        local_18 = local_18 + -8;
        local_20 = local_14;
      }
      else {
        local_28 = (int)(local_28 + local_1c) / 2;
        local_20 = (int)(local_14 + local_20) / 2;
      }
      pbVar14 = pbVar14 + -8;
      pbVar11 = pbVar11 + -1;
      local_1c = local_28;
    }
    *(uint *)(param_1 + 0x2c) = local_1c;
    *(uint *)(param_1 + 0x30) = local_20;
joined_r0x00475f93:
    do {
      if (local_18 <= pbVar14) {
        pbVar5 = (byte *)FUN_0047630e(param_1,local_1c,local_20);
LAB_004761e1:
        if ((char)pbVar5 == '\0') {
          return 0;
        }
        break;
      }
      if ((pbVar11[1] & 3) != 0) {
        if ((pbVar11[1] & 3) == 1) {
          uVar3 = *(int *)(pbVar14 + 8) * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
          uVar4 = *(int *)(param_1 + 0xc) * *(int *)(pbVar14 + 0xc) - *(int *)(param_1 + 8);
          uVar8 = uVar4;
          if (param_4 != 0) {
            uVar8 = uVar3;
            uVar3 = uVar4;
          }
          pbVar5 = (byte *)FUN_0047630e(param_1,uVar3,uVar8);
          if ((char)pbVar5 != '\0') break;
          pbVar11 = pbVar11 + 1;
          pbVar14 = pbVar14 + 8;
        }
        else {
          if ((local_18 < pbVar14 + 0x10) || ((pbVar11[2] & 3) != 2)) goto LAB_004761bf;
          iVar1 = *(int *)(param_1 + 8);
          iVar2 = *(int *)(param_1 + 0xc);
          iVar9 = *(int *)(pbVar14 + 8) * iVar2 - iVar1;
          local_24 = *(int *)(pbVar14 + 0xc) * iVar2 - iVar1;
          local_28 = *(int *)(pbVar14 + 0x10) * iVar2 - iVar1;
          iVar15 = *(int *)(pbVar14 + 0x14) * iVar2 - iVar1;
          iVar10 = iVar9;
          iVar16 = iVar15;
          if (param_4 != 0) {
            iVar10 = local_24;
            iVar16 = local_28;
            local_28 = iVar15;
            local_24 = iVar9;
          }
          if (local_18 < pbVar14 + 0x18) {
            pbVar5 = (byte *)FUN_00476510(param_1,iVar10,local_24,local_28,iVar16,local_1c,local_20)
            ;
            goto LAB_004761e1;
          }
          uVar3 = *(int *)(pbVar14 + 0x18) * iVar2 - iVar1;
          uVar4 = iVar2 * *(int *)(pbVar14 + 0x1c) - iVar1;
          uVar8 = uVar4;
          if (param_4 != 0) {
            uVar8 = uVar3;
            uVar3 = uVar4;
          }
          pbVar5 = (byte *)FUN_00476510(param_1,iVar10,local_24,local_28,iVar16,uVar3,uVar8);
          if ((char)pbVar5 != '\0') break;
          pbVar11 = pbVar11 + 3;
          pbVar14 = pbVar14 + 0x18;
        }
        goto joined_r0x00475f93;
      }
      uVar3 = *(int *)(pbVar14 + 8) * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
      uVar4 = *(int *)(param_1 + 0xc) * *(int *)(pbVar14 + 0xc) - *(int *)(param_1 + 8);
      uVar8 = uVar4;
      if (param_4 != 0) {
        uVar8 = uVar3;
        uVar3 = uVar4;
      }
      pbVar11 = pbVar11 + 2;
      pbVar14 = pbVar14 + 0x10;
      while( true ) {
        if (local_18 <= pbVar14 + -8) {
          pbVar5 = (byte *)FUN_004763bf(param_1,uVar3,uVar8,local_1c,local_20);
          goto LAB_004761e1;
        }
        uVar4 = *(int *)pbVar14 * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        uVar12 = *(int *)(param_1 + 0xc) * *(int *)(pbVar14 + 4) - *(int *)(param_1 + 8);
        uVar13 = uVar12;
        if (param_4 != 0) {
          uVar13 = uVar4;
          uVar4 = uVar12;
        }
        if ((*pbVar11 & 3) != 0) break;
        pbVar5 = (byte *)FUN_004763bf(param_1,uVar3,uVar8,(int)(uVar4 + uVar3) / 2,
                                      (int)(uVar8 + uVar13) / 2);
        pbVar11 = pbVar11 + 1;
        pbVar14 = pbVar14 + 8;
        uVar3 = uVar4;
        uVar8 = uVar13;
        if ((char)pbVar5 != '\0') goto LAB_004761e5;
      }
      if ((*pbVar11 & 3) != 1) goto LAB_004761bf;
      uVar6 = FUN_004763bf(param_1,uVar3,uVar8,uVar4,uVar13);
      pbVar5 = pbVar14;
    } while ((char)uVar6 == '\0');
  }
LAB_004761e5:
  return CONCAT31((int3)((uint)pbVar5 >> 8),1);
}

