/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d9445 */

int __fastcall FUN_101d9445(undefined4 *param_1,ushort *param_2)

{
  ushort *puVar1;
  int *piVar2;
  longlong lVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  int *piVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  ushort *local_58;
  ushort *local_54;
  undefined4 *local_50;
  ushort *local_4c;
  ushort *local_48;
  ushort *local_44;
  ushort *local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  local_18 = 0;
  uVar7 = *param_1;
  local_2c = param_1[1];
  local_30 = param_1[3];
  local_34 = param_1[2];
  local_38 = param_1[4];
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0x15e] = 0;
  param_1[0x161] = 0;
  uVar20 = (uint)*param_2;
  local_54 = param_2;
  local_50 = param_1;
  if (uVar20 < 9) {
    if (param_1[10] == 0) {
      param_1[10] = param_1 + 0x2b2;
      param_1[0xb] = param_1 + 0x2ba;
      param_1[0xc] = param_1 + 0x2c2;
      uVar20 = 8;
LAB_101d94cd:
      local_50[8] = uVar20;
    }
  }
  else {
    iVar8 = param_1[8];
    if (iVar8 < (int)uVar20) {
      puVar5 = (undefined4 *)param_1[10];
      if (puVar5 == param_1 + 0x2b2) {
        puVar5 = (undefined4 *)0x0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
      }
      uVar20 = uVar20 + 3 & 0xfffffffc;
      uVar6 = FUN_101c00c3(uVar7,4,iVar8,uVar20,puVar5,&local_18);
      param_1[10] = uVar6;
      if (local_18 != 0) goto LAB_101d9a96;
      uVar6 = FUN_101c00c3(uVar7,4,iVar8,uVar20,param_1[0xb],&local_18);
      local_50[0xb] = uVar6;
      if (local_18 != 0) goto LAB_101d9a96;
      uVar6 = FUN_101c00c3(uVar7,4,iVar8,uVar20,local_50[0xc],&local_18);
      local_50[0xc] = uVar6;
      if (local_18 != 0) goto LAB_101d9a96;
      goto LAB_101d94cd;
    }
  }
  puVar5 = local_50;
  uVar20 = (uint)local_54[1];
  if (uVar20 < 0x5f) {
    if (local_50[7] == 0) {
      local_50[7] = local_50 + 0x2ca;
      uVar20 = 0x60;
LAB_101d95e2:
      puVar5[5] = uVar20;
    }
  }
  else if ((int)local_50[5] < (int)(uVar20 + 2)) {
    puVar10 = (undefined4 *)local_50[7];
    if (puVar10 == local_50 + 0x2ca) {
      local_50[7] = 0;
      puVar10 = (undefined4 *)0x0;
    }
    uVar20 = uVar20 + 0xb & 0xfffffff8;
    uVar7 = FUN_101c00c3(uVar7,0x28,local_50[5],uVar20,puVar10,&local_18);
    puVar5[7] = uVar7;
    if (local_18 != 0) goto LAB_101d9a96;
    goto LAB_101d95e2;
  }
  puVar5[6] = (uint)local_54[1];
  puVar5[9] = (uint)*local_54;
  puVar5[0x13] = 2;
  puVar5[0x164] = 0xffffffff;
  iVar8 = FUN_101c3d9c(local_54);
  if (iVar8 == 1) {
    local_50[0x13] = 0xfffffffe;
    local_50[0x164] = 1;
  }
  local_50[1] = local_2c;
  local_50[3] = local_30;
  local_50[2] = local_34;
  local_50[4] = local_38;
  iVar8 = local_50[6];
  if (iVar8 != 0) {
    local_4c = (ushort *)local_50[7];
    local_44 = local_4c + iVar8 * 0x14;
    local_3c = (uint)*(ushort *)(*(int *)(local_50[0x2b1] + 4) + 0x44) * 0x14 >> 0xb;
    puVar9 = *(ushort **)(local_54 + 6);
    if (0 < iVar8) {
      local_28 = (uint)*puVar9;
      local_58 = local_4c + local_28 * 0x14;
      local_1c = *(int *)(local_54 + 2);
      local_20 = *(int *)(local_54 + 4);
      iVar21 = 0;
      puVar9 = (ushort *)0x0;
      puVar11 = local_58;
      puVar17 = local_4c;
      do {
        local_40 = puVar11;
        local_48 = puVar9;
        puVar17[1] = 0x404;
        puVar17[6] = *(ushort *)(local_1c + iVar21 * 8);
        puVar17[7] = *(ushort *)(local_1c + 4 + iVar21 * 8);
        lVar3 = (longlong)local_2c * (longlong)*(int *)(local_1c + iVar21 * 8);
        iVar18 = (int)(lVar3 >> 0x3f);
        lVar3 = lVar3 + CONCAT44(iVar18,iVar18) + 0x8000;
        iVar18 = ((int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10) + local_34;
        *(int *)(puVar17 + 8) = iVar18;
        *(int *)(puVar17 + 2) = iVar18;
        lVar3 = (longlong)local_30 * (longlong)*(int *)(local_1c + 4 + iVar21 * 8);
        iVar18 = (int)(lVar3 >> 0x3f);
        lVar3 = lVar3 + CONCAT44(iVar18,iVar18) + 0x8000;
        iVar18 = ((int)((ulonglong)lVar3 >> 0x20) * 0x10000 | (uint)lVar3 >> 0x10) + local_38;
        *(int *)(puVar17 + 10) = iVar18;
        *(int *)(puVar17 + 4) = iVar18;
        local_40[6] = *(ushort *)(*(int *)(local_54 + 2) + local_28 * 8);
        local_40[7] = *(ushort *)(*(int *)(local_54 + 2) + 4 + local_28 * 8);
        bVar13 = *(byte *)(local_20 + iVar21) & 3;
        uVar4 = (ushort)(bVar13 == 2) * 2;
        if (bVar13 == 0) {
          uVar4 = 1;
        }
        *puVar17 = uVar4;
        iVar14 = (int)(short)puVar17[6];
        iVar18 = (int)(short)local_58[6];
        iVar19 = (int)(short)puVar17[7];
        iVar15 = (int)(short)local_58[7];
        uVar20 = iVar18 - iVar14;
        if (iVar18 < iVar14) {
          uVar20 = iVar14 - iVar18;
        }
        uVar16 = iVar15 - iVar19;
        if (iVar15 < iVar19) {
          uVar16 = iVar19 - iVar15;
        }
        if ((uVar16 & 0xffff) + (uVar20 & 0xffff) < local_3c) {
          *(byte *)local_58 = (byte)*local_58 | 0x20;
        }
        *(ushort **)(puVar17 + 0x12) = local_58;
        *(ushort **)(local_58 + 0x10) = puVar17;
        puVar9 = local_48;
        puVar11 = local_40;
        local_58 = puVar17;
        if ((puVar17 == local_40) &&
           (puVar9 = (ushort *)((int)local_48 + 1), puVar11 = puVar17,
           (int)puVar9 < (int)(uint)*local_54)) {
          local_28 = (uint)*(ushort *)(*(int *)(local_54 + 6) + 2 + (int)local_48 * 2);
          puVar11 = local_4c + local_28 * 0x14;
          local_58 = local_4c + local_28 * 0x14;
        }
        puVar17 = puVar17 + 0x14;
        iVar21 = iVar21 + 1;
      } while (puVar17 < local_44);
      puVar9 = *(ushort **)(local_54 + 6);
    }
    local_24 = iVar8;
    if (0 < (int)local_50[9]) {
      piVar12 = (int *)local_50[10];
      piVar2 = piVar12 + local_50[9];
      iVar8 = 0;
      do {
        *piVar12 = (int)(local_4c + iVar8 * 0x14);
        iVar8 = *puVar9 + 1;
        piVar12 = piVar12 + 1;
        puVar9 = puVar9 + 1;
      } while (piVar12 < piVar2);
      if (0 < (int)local_50[9]) {
        puVar9 = (ushort *)local_50[10];
        local_40 = (ushort *)(local_3c * 2 + -1);
        local_54 = puVar9 + local_50[9] * 2;
        do {
          puVar11 = *(ushort **)puVar9;
          do {
            puVar17 = puVar11;
            puVar11 = *(ushort **)(puVar17 + 0x12);
            if (puVar11 == *(ushort **)puVar9) break;
            iVar21 = (int)(short)puVar17[6];
            iVar8 = (int)(short)puVar11[6];
            iVar14 = (int)(short)puVar17[7];
            iVar18 = (int)(short)puVar11[7];
            uVar20 = iVar8 - iVar21;
            if (iVar8 < iVar21) {
              uVar20 = iVar21 - iVar8;
            }
            uVar16 = iVar18 - iVar14;
            if (iVar18 < iVar14) {
              uVar16 = iVar14 - iVar18;
            }
          } while ((int)((uVar16 & 0xffff) + (uVar20 & 0xffff)) < (int)local_40);
          iVar8 = 0;
          puVar17[0xc] = 0;
          puVar17[0xd] = 0;
          puVar17[0xe] = 0;
          puVar17[0xf] = 0;
          iVar21 = 0;
          puVar11 = puVar17;
          local_58 = puVar17;
          local_48 = puVar9;
          do {
            puVar9 = puVar17 + 6;
            puVar1 = puVar17 + 7;
            puVar17 = *(ushort **)(puVar17 + 0x10);
            iVar8 = ((int)(short)puVar17[6] - (int)(short)*puVar9) + iVar8;
            iVar21 = ((int)(short)puVar17[7] - (int)(short)*puVar1) + iVar21;
            iVar18 = -iVar8;
            if (-iVar8 < 0) {
              iVar18 = iVar8;
            }
            iVar14 = -iVar21;
            if (-iVar21 < 0) {
              iVar14 = iVar21;
            }
            if ((uint)(iVar14 + iVar18) < local_3c) {
              *(byte *)puVar17 = (byte)*puVar17 | 0x10;
            }
            else {
              iVar8 = (int)puVar17 - (int)puVar11 >> 3;
              *(int *)(puVar11 + 0xc) = iVar8 * -0x33333333;
              *(int *)(puVar17 + 0xe) = iVar8 * 0x33333333;
              bVar13 = FUN_101da686();
              *(byte *)((int)puVar11 + 3) = bVar13;
              for (puVar11 = *(ushort **)(puVar11 + 0x10); puVar11 != puVar17;
                  puVar11 = *(ushort **)(puVar11 + 0x10)) {
                *(byte *)(puVar11 + 1) = bVar13;
                *(byte *)((int)puVar11 + 3) = bVar13;
              }
              *(byte *)(puVar17 + 1) = bVar13;
              iVar8 = (int)local_58 - (int)puVar11 >> 3;
              *(int *)(puVar11 + 0xc) = iVar8 * -0x33333333;
              *(int *)(local_58 + 0xe) = iVar8 * 0x33333333;
              iVar8 = 0;
              iVar21 = 0;
            }
          } while (puVar17 != local_58);
          puVar9 = local_48 + 2;
        } while (puVar9 < local_54);
      }
    }
    puVar9 = local_4c;
    if (0 < local_24) {
      do {
        if ((((*puVar9 & 0x10) == 0) && ((byte)puVar9[1] == 4)) && (*(byte *)((int)puVar9 + 3) == 4)
           ) {
          iVar8 = *(int *)(puVar9 + 0xc);
          iVar21 = *(int *)(puVar9 + 0xe);
          if ((-1 < ((int)(short)puVar9[6] - (int)(short)puVar9[iVar21 * 0x14 + 6] ^
                    (int)(short)puVar9[iVar8 * 0x14 + 6] - (int)(short)puVar9[6])) &&
             (-1 < ((int)(short)puVar9[7] - (int)(short)puVar9[iVar21 * 0x14 + 7] ^
                   (int)(short)puVar9[iVar8 * 0x14 + 7] - (int)(short)puVar9[7]))) {
            *puVar9 = *puVar9 | 0x10;
            iVar18 = iVar8 * 0x28 + iVar21 * -0x28 >> 3;
            *(int *)(puVar9 + iVar21 * 0x14 + 0xc) = iVar18 * -0x33333333;
            *(int *)(puVar9 + iVar8 * 0x14 + 0xe) = iVar18 * 0x33333333;
          }
        }
        puVar9 = puVar9 + 0x14;
        puVar11 = local_4c;
      } while (puVar9 < local_44);
      do {
        uVar4 = *puVar11;
        if ((uVar4 & 0x10) == 0) {
          if ((uVar4 & 3) == 0) {
            bVar13 = *(byte *)((int)puVar11 + 3);
            if (bVar13 == (byte)puVar11[1]) {
              if (bVar13 == 4) {
                iVar8 = *(int *)(puVar11 + 0xc);
                iVar21 = *(int *)(puVar11 + 0xe);
                local_58 = (ushort *)(iVar8 * 0x28);
                iVar8 = FUN_101c5782((int)(short)puVar11[6] - (int)(short)puVar11[iVar21 * 0x14 + 6]
                                     ,(int)(short)puVar11[7] -
                                      (int)(short)puVar11[iVar21 * 0x14 + 7],
                                     (int)(short)(puVar11 + 6)[iVar8 * 0x14] -
                                     (int)(short)puVar11[6],
                                     (int)(short)(puVar11 + 7)[iVar8 * 0x14] -
                                     (int)(short)puVar11[7]);
                if (iVar8 == 0) goto LAB_101d9a8d;
                *(int *)(puVar11 + iVar21 * 0x14 + 0xc) =
                     ((int)(local_58 + iVar21 * -0x14) >> 3) * -0x33333333;
                *(int *)((int)(puVar11 + 0xe) + (int)local_58) =
                     ((int)(local_58 + iVar21 * -0x14) >> 3) * 0x33333333;
                uVar4 = *puVar11;
              }
            }
            else if ((int)(char)(byte)puVar11[1] + (int)(char)bVar13 != 0) goto LAB_101d9a8d;
          }
          *puVar11 = uVar4 | 0x10;
        }
LAB_101d9a8d:
        puVar11 = puVar11 + 0x14;
      } while (puVar11 < local_44);
    }
  }
LAB_101d9a96:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

