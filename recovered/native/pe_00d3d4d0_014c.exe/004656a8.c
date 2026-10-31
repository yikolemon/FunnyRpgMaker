/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004656a8 */

int __fastcall FUN_004656a8(uint *param_1,ushort *param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined3 extraout_var;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  ushort *local_44;
  uint local_40;
  uint *local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_44;
  param_1[0x1c] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar11 = *param_4;
  param_1[4] = uVar11;
  local_44 = param_2;
  uVar5 = FUN_0041efcd(uVar11,0x2c,0,(uint)param_2[1],0,&local_18);
  param_1[2] = uVar5;
  iVar8 = local_18;
  if (local_18 == 0) {
    puVar6 = (undefined4 *)FUN_0041efcd(uVar11,8,0,(uint)*local_44,0,&local_18);
    param_1[3] = (uint)puVar6;
    iVar8 = local_18;
    if (local_18 == 0) {
      uVar5 = (uint)local_44[1];
      *param_1 = uVar5;
      uVar1 = *local_44;
      param_1[1] = (uint)uVar1;
      if (uVar1 != 0) {
        local_40 = param_1[2];
        local_38 = local_40 + 0x2c;
        uVar14 = 0;
        uVar5 = 0;
        do {
          uVar10 = *(ushort *)(*(int *)(local_44 + 6) + uVar14 * 2) + 1;
          uVar13 = uVar10 - uVar5;
          piVar12 = (int *)(local_40 + uVar5 * 0x2c);
          *puVar6 = piVar12;
          puVar6[1] = uVar13;
          if (uVar13 != 0) {
            *piVar12 = uVar10 * 0x2c + local_40 + -0x2c;
            piVar12[2] = (int)puVar6;
            piVar9 = piVar12;
            if (uVar13 != 1) {
              piVar3 = (int *)(uVar5 * 0x2c + local_38);
              do {
                piVar9 = piVar3;
                piVar9[-10] = (int)piVar9;
                *piVar9 = (int)(piVar9 + -0xb);
                piVar9[2] = (int)puVar6;
                uVar13 = uVar13 - 1;
                piVar3 = piVar9 + 0xb;
              } while (1 < uVar13);
            }
            piVar9[1] = (int)piVar12;
            local_34 = uVar10;
          }
          puVar6 = puVar6 + 2;
          uVar14 = uVar14 + 1;
          uVar5 = uVar10;
        } while (uVar14 < param_1[1]);
        uVar5 = *param_1;
      }
      puVar15 = local_44;
      local_3c = param_1;
      local_30 = uVar11;
      if (uVar5 != 0) {
        local_2c = *(int *)(local_44 + 2);
        local_40 = param_1[2];
        piVar12 = (int *)(local_40 + 0x18);
        uVar11 = 0;
        do {
          iVar8 = local_2c;
          piVar12[-3] = 0;
          local_34 = *(byte *)(*(int *)(puVar15 + 4) + uVar11) & 1;
          local_1c = local_34 ^ 1;
          piVar12[-3] = local_1c;
          iVar7 = (piVar12[-6] - local_40 >> 2) * -0x2e8ba2e8;
          local_20 = *(int *)(local_2c + uVar11 * 8) - *(int *)(local_2c + iVar7);
          local_24 = *(int *)(local_2c + 4 + uVar11 * 8) - *(int *)(local_2c + 4 + iVar7);
          uVar5 = piVar12[-5] - local_40;
          local_38 = FUN_004662e0(local_20,local_24);
          piVar12[-1] = local_38;
          iVar7 = (uVar5 >> 2) * -0x2e8ba2e8;
          local_28 = *(int *)(iVar8 + iVar7) - *(int *)(iVar8 + uVar11 * 8);
          uVar5 = *(int *)(iVar8 + 4 + iVar7) - *(int *)(iVar8 + 4 + uVar11 * 8);
          iVar8 = FUN_004662e0(local_28,uVar5);
          puVar15 = local_44;
          *piVar12 = iVar8;
          if (local_34 == 0) {
            uVar14 = 3;
LAB_004658bc:
            piVar12[-3] = uVar14;
          }
          else if (local_38 == iVar8) {
            uVar14 = local_1c;
            if (local_38 == 0) {
              bVar4 = FUN_004217fa(local_20,local_24,local_28,uVar5);
              if (CONCAT31(extraout_var,bVar4) == 0) goto LAB_004658bf;
              uVar14 = piVar12[-3];
            }
            uVar14 = uVar14 | 2;
            goto LAB_004658bc;
          }
LAB_004658bf:
          uVar11 = uVar11 + 1;
          piVar12 = piVar12 + 0xb;
        } while (uVar11 < *local_3c);
      }
      uVar11 = local_30;
      puVar2 = local_3c;
      local_3c[5] = (uint)puVar15;
      local_3c[6] = (uint)param_4;
      iVar8 = FUN_00466321(local_3c + 7,(uint *)(param_3 + 0x10),(int *)(param_3 + 0x1c),local_30);
      local_18 = iVar8;
      if (iVar8 == 0) {
        iVar8 = FUN_00466321(puVar2 + 0x11,(uint *)(param_3 + 0x34),(int *)(param_3 + 0x40),uVar11);
      }
    }
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_44)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_44);
  }
  return iVar8;
}

