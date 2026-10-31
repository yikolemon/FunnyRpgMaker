/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020df28 */

int __fastcall FUN_1020df28(uint *param_1,ushort *param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *local_44;
  uint local_40;
  uint *local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_44;
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
  uVar10 = *param_4;
  param_1[4] = uVar10;
  local_44 = param_2;
  uVar4 = FUN_101c2a50(uVar10,0x2c,0,param_2[1],0,&local_18);
  param_1[2] = uVar4;
  iVar6 = local_18;
  if (local_18 == 0) {
    puVar5 = (undefined4 *)FUN_101c2a50(uVar10,8,0,*local_44,0,&local_18);
    param_1[3] = (uint)puVar5;
    iVar6 = local_18;
    if (local_18 == 0) {
      uVar4 = (uint)local_44[1];
      *param_1 = uVar4;
      uVar1 = *local_44;
      param_1[1] = (uint)uVar1;
      if (uVar1 != 0) {
        local_40 = param_1[2];
        local_38 = local_40 + 0x2c;
        uVar13 = 0;
        uVar4 = 0;
        do {
          uVar9 = *(ushort *)(*(int *)(local_44 + 6) + uVar13 * 2) + 1;
          uVar12 = uVar9 - uVar4;
          piVar11 = (int *)(local_40 + uVar4 * 0x2c);
          *puVar5 = piVar11;
          puVar5[1] = uVar12;
          if (uVar12 != 0) {
            *piVar11 = uVar9 * 0x2c + local_40 + -0x2c;
            piVar11[2] = (int)puVar5;
            piVar8 = piVar11;
            if (uVar12 != 1) {
              piVar3 = (int *)(uVar4 * 0x2c + local_38);
              do {
                piVar8 = piVar3;
                piVar8[-10] = (int)piVar8;
                *piVar8 = (int)(piVar8 + -0xb);
                piVar8[2] = (int)puVar5;
                uVar12 = uVar12 - 1;
                piVar3 = piVar8 + 0xb;
              } while (1 < uVar12);
            }
            piVar8[1] = (int)piVar11;
            local_34 = uVar9;
          }
          puVar5 = puVar5 + 2;
          uVar13 = uVar13 + 1;
          uVar4 = uVar9;
        } while (uVar13 < param_1[1]);
        uVar4 = *param_1;
      }
      puVar14 = local_44;
      local_3c = param_1;
      local_30 = uVar10;
      if (uVar4 != 0) {
        local_2c = *(int *)(local_44 + 2);
        local_40 = param_1[2];
        piVar11 = (int *)(local_40 + 0x18);
        uVar10 = 0;
        do {
          iVar2 = local_2c;
          piVar11[-3] = 0;
          local_34 = *(byte *)(*(int *)(puVar14 + 4) + uVar10) & 1;
          local_1c = local_34 ^ 1;
          piVar11[-3] = local_1c;
          iVar6 = (piVar11[-6] - local_40 >> 2) * -0x2e8ba2e8;
          local_20 = *(int *)(local_2c + uVar10 * 8) - *(int *)(local_2c + iVar6);
          local_24 = *(int *)(local_2c + 4 + uVar10 * 8) - *(int *)(local_2c + 4 + iVar6);
          uVar4 = piVar11[-5] - local_40;
          local_38 = FUN_1020eb60();
          piVar11[-1] = local_38;
          iVar7 = (uVar4 >> 2) * -0x2e8ba2e8;
          iVar6 = *(int *)(iVar2 + 4 + iVar7);
          local_28 = *(int *)(iVar2 + iVar7) - *(int *)(iVar2 + uVar10 * 8);
          iVar2 = *(int *)(iVar2 + 4 + uVar10 * 8);
          iVar7 = FUN_1020eb60();
          puVar14 = local_44;
          *piVar11 = iVar7;
          if (local_34 == 0) {
            uVar4 = 3;
LAB_1020e13c:
            piVar11[-3] = uVar4;
          }
          else if (local_38 == iVar7) {
            uVar4 = local_1c;
            if (local_38 == 0) {
              iVar6 = FUN_101c5782(local_20,local_24,local_28,iVar6 - iVar2);
              if (iVar6 == 0) goto LAB_1020e13f;
              uVar4 = piVar11[-3];
            }
            uVar4 = uVar4 | 2;
            goto LAB_1020e13c;
          }
LAB_1020e13f:
          uVar10 = uVar10 + 1;
          piVar11 = piVar11 + 0xb;
        } while (uVar10 < *local_3c);
      }
      uVar10 = local_30;
      local_3c[5] = (uint)puVar14;
      local_3c[6] = (uint)param_4;
      iVar6 = FUN_1020eba1(param_3 + 0x1c,local_30);
      local_18 = iVar6;
      if (iVar6 == 0) {
        iVar6 = FUN_1020eba1(param_3 + 0x40,uVar10);
      }
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_44)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar6;
}

