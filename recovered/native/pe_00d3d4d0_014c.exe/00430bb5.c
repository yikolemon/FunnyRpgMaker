/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00430bb5 */

int __fastcall FUN_00430bb5(int *param_1,ushort *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  ushort *puVar7;
  undefined3 extraout_var;
  int *piVar8;
  ushort *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ushort *local_58;
  ushort *local_54;
  int *local_50;
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
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_58;
  local_18 = 0;
  iVar6 = *param_1;
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
  uVar17 = (uint)*param_2;
  local_54 = param_2;
  local_50 = param_1;
  if (uVar17 < 9) {
    if (param_1[10] == 0) {
      param_1[10] = (int)(param_1 + 0x2b2);
      param_1[0xb] = (int)(param_1 + 0x2ba);
      param_1[0xc] = (int)(param_1 + 0x2c2);
      uVar17 = 8;
LAB_00430c3d:
      local_50[8] = uVar17;
    }
  }
  else {
    uVar13 = param_1[8];
    if ((int)uVar13 < (int)uVar17) {
      piVar5 = (int *)param_1[10];
      if (piVar5 == param_1 + 0x2b2) {
        piVar5 = (int *)0x0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
      }
      uVar17 = uVar17 + 3 & 0xfffffffc;
      iVar18 = FUN_0041c6b3(iVar6,4,uVar13,uVar17,(int)piVar5,&local_18);
      param_1[10] = iVar18;
      if (local_18 != 0) goto LAB_00431206;
      iVar18 = FUN_0041c6b3(iVar6,4,uVar13,uVar17,param_1[0xb],&local_18);
      local_50[0xb] = iVar18;
      if (local_18 != 0) goto LAB_00431206;
      iVar18 = FUN_0041c6b3(iVar6,4,uVar13,uVar17,local_50[0xc],&local_18);
      local_50[0xc] = iVar18;
      if (local_18 != 0) goto LAB_00431206;
      goto LAB_00430c3d;
    }
  }
  piVar5 = local_50;
  uVar17 = (uint)local_54[1];
  if (uVar17 < 0x5f) {
    if (local_50[7] == 0) {
      local_50[7] = (int)(local_50 + 0x2ca);
      uVar17 = 0x60;
LAB_00430d52:
      piVar5[5] = uVar17;
    }
  }
  else if (local_50[5] < (int)(uVar17 + 2)) {
    piVar8 = (int *)local_50[7];
    if (piVar8 == local_50 + 0x2ca) {
      local_50[7] = 0;
      piVar8 = (int *)0x0;
    }
    uVar17 = uVar17 + 0xb & 0xfffffff8;
    iVar6 = FUN_0041c6b3(iVar6,0x28,local_50[5],uVar17,(int)piVar8,&local_18);
    piVar5[7] = iVar6;
    if (local_18 != 0) goto LAB_00431206;
    goto LAB_00430d52;
  }
  piVar5[6] = (uint)local_54[1];
  piVar5[9] = (uint)*local_54;
  piVar5[0x13] = 2;
  piVar5[0x164] = -1;
  iVar6 = FUN_0041fe14(local_54);
  if (iVar6 == 1) {
    local_50[0x13] = -2;
    local_50[0x164] = 1;
  }
  local_50[1] = local_2c;
  local_50[3] = local_30;
  local_50[2] = local_34;
  local_50[4] = local_38;
  iVar6 = local_50[6];
  if (iVar6 != 0) {
    local_4c = (ushort *)local_50[7];
    local_44 = local_4c + iVar6 * 0x14;
    local_3c = (uint)*(ushort *)(*(int *)(local_50[0x2b1] + 4) + 0x44) * 0x14 >> 0xb;
    puVar7 = *(ushort **)(local_54 + 6);
    if (0 < iVar6) {
      local_28 = (uint)*puVar7;
      local_58 = local_4c + local_28 * 0x14;
      local_1c = *(int *)(local_54 + 2);
      local_20 = *(int *)(local_54 + 4);
      iVar18 = 0;
      puVar7 = (ushort *)0x0;
      puVar9 = local_58;
      puVar14 = local_4c;
      do {
        local_40 = puVar9;
        local_48 = puVar7;
        puVar14[1] = 0x404;
        puVar14[6] = *(ushort *)(local_1c + iVar18 * 8);
        puVar14[7] = *(ushort *)(local_1c + 4 + iVar18 * 8);
        lVar2 = (longlong)local_2c * (longlong)*(int *)(local_1c + iVar18 * 8);
        iVar15 = (int)(lVar2 >> 0x3f);
        lVar2 = lVar2 + CONCAT44(iVar15,iVar15) + 0x8000;
        iVar15 = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + local_34;
        *(int *)(puVar14 + 8) = iVar15;
        *(int *)(puVar14 + 2) = iVar15;
        lVar2 = (longlong)local_30 * (longlong)*(int *)(local_1c + 4 + iVar18 * 8);
        iVar15 = (int)(lVar2 >> 0x3f);
        lVar2 = lVar2 + CONCAT44(iVar15,iVar15) + 0x8000;
        iVar15 = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + local_38;
        *(int *)(puVar14 + 10) = iVar15;
        *(int *)(puVar14 + 4) = iVar15;
        local_40[6] = *(ushort *)(*(int *)(local_54 + 2) + local_28 * 8);
        local_40[7] = *(ushort *)(*(int *)(local_54 + 2) + 4 + local_28 * 8);
        bVar10 = *(byte *)(local_20 + iVar18) & 3;
        uVar4 = (ushort)(bVar10 == 2) * 2;
        if (bVar10 == 0) {
          uVar4 = 1;
        }
        *puVar14 = uVar4;
        iVar11 = (int)(short)puVar14[6];
        iVar15 = (int)(short)local_58[6];
        iVar16 = (int)(short)puVar14[7];
        iVar12 = (int)(short)local_58[7];
        uVar17 = iVar15 - iVar11;
        if (iVar15 < iVar11) {
          uVar17 = iVar11 - iVar15;
        }
        uVar13 = iVar12 - iVar16;
        if (iVar12 < iVar16) {
          uVar13 = iVar16 - iVar12;
        }
        if ((uVar13 & 0xffff) + (uVar17 & 0xffff) < local_3c) {
          *(byte *)local_58 = (byte)*local_58 | 0x20;
        }
        *(ushort **)(puVar14 + 0x12) = local_58;
        *(ushort **)(local_58 + 0x10) = puVar14;
        puVar7 = local_48;
        puVar9 = local_40;
        local_58 = puVar14;
        if ((puVar14 == local_40) &&
           (puVar7 = (ushort *)((int)local_48 + 1), puVar9 = puVar14,
           (int)puVar7 < (int)(uint)*local_54)) {
          local_28 = (uint)*(ushort *)(*(int *)(local_54 + 6) + 2 + (int)local_48 * 2);
          puVar9 = local_4c + local_28 * 0x14;
          local_58 = local_4c + local_28 * 0x14;
        }
        puVar14 = puVar14 + 0x14;
        iVar18 = iVar18 + 1;
      } while (puVar14 < local_44);
      puVar7 = *(ushort **)(local_54 + 6);
    }
    local_24 = iVar6;
    if (0 < local_50[9]) {
      piVar8 = (int *)local_50[10];
      piVar5 = piVar8 + local_50[9];
      iVar6 = 0;
      do {
        *piVar8 = (int)(local_4c + iVar6 * 0x14);
        iVar6 = *puVar7 + 1;
        piVar8 = piVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (piVar8 < piVar5);
      if (0 < local_50[9]) {
        puVar7 = (ushort *)local_50[10];
        local_40 = (ushort *)(local_3c * 2 + -1);
        local_54 = puVar7 + local_50[9] * 2;
        do {
          puVar9 = *(ushort **)puVar7;
          do {
            puVar14 = puVar9;
            puVar9 = *(ushort **)(puVar14 + 0x12);
            if (puVar9 == *(ushort **)puVar7) break;
            iVar18 = (int)(short)puVar14[6];
            iVar6 = (int)(short)puVar9[6];
            iVar11 = (int)(short)puVar14[7];
            iVar15 = (int)(short)puVar9[7];
            uVar17 = iVar6 - iVar18;
            if (iVar6 < iVar18) {
              uVar17 = iVar18 - iVar6;
            }
            uVar13 = iVar15 - iVar11;
            if (iVar15 < iVar11) {
              uVar13 = iVar11 - iVar15;
            }
          } while ((int)((uVar13 & 0xffff) + (uVar17 & 0xffff)) < (int)local_40);
          iVar6 = 0;
          puVar14[0xc] = 0;
          puVar14[0xd] = 0;
          puVar14[0xe] = 0;
          puVar14[0xf] = 0;
          iVar18 = 0;
          puVar9 = puVar14;
          local_58 = puVar14;
          local_48 = puVar7;
          do {
            puVar7 = puVar14 + 6;
            puVar1 = puVar14 + 7;
            puVar14 = *(ushort **)(puVar14 + 0x10);
            iVar6 = ((int)(short)puVar14[6] - (int)(short)*puVar7) + iVar6;
            iVar18 = ((int)(short)puVar14[7] - (int)(short)*puVar1) + iVar18;
            iVar15 = -iVar6;
            if (-iVar6 < 0) {
              iVar15 = iVar6;
            }
            iVar11 = -iVar18;
            if (-iVar18 < 0) {
              iVar11 = iVar18;
            }
            if ((uint)(iVar11 + iVar15) < local_3c) {
              *(byte *)puVar14 = (byte)*puVar14 | 0x10;
            }
            else {
              iVar15 = (int)puVar14 - (int)puVar9 >> 3;
              *(int *)(puVar9 + 0xc) = iVar15 * -0x33333333;
              *(int *)(puVar14 + 0xe) = iVar15 * 0x33333333;
              iVar6 = FUN_00431df6(iVar6,iVar18);
              bVar10 = (byte)iVar6;
              *(byte *)((int)puVar9 + 3) = bVar10;
              for (puVar9 = *(ushort **)(puVar9 + 0x10); puVar9 != puVar14;
                  puVar9 = *(ushort **)(puVar9 + 0x10)) {
                *(byte *)(puVar9 + 1) = bVar10;
                *(byte *)((int)puVar9 + 3) = bVar10;
              }
              *(byte *)(puVar14 + 1) = bVar10;
              iVar6 = (int)local_58 - (int)puVar9 >> 3;
              *(int *)(puVar9 + 0xc) = iVar6 * -0x33333333;
              *(int *)(local_58 + 0xe) = iVar6 * 0x33333333;
              iVar6 = 0;
              iVar18 = 0;
            }
          } while (puVar14 != local_58);
          puVar7 = local_48 + 2;
        } while (puVar7 < local_54);
      }
    }
    puVar7 = local_4c;
    if (0 < local_24) {
      do {
        if ((((*puVar7 & 0x10) == 0) && ((byte)puVar7[1] == 4)) && (*(byte *)((int)puVar7 + 3) == 4)
           ) {
          iVar6 = *(int *)(puVar7 + 0xc);
          iVar18 = *(int *)(puVar7 + 0xe);
          if ((-1 < ((int)(short)puVar7[6] - (int)(short)puVar7[iVar18 * 0x14 + 6] ^
                    (int)(short)puVar7[iVar6 * 0x14 + 6] - (int)(short)puVar7[6])) &&
             (-1 < ((int)(short)puVar7[7] - (int)(short)puVar7[iVar18 * 0x14 + 7] ^
                   (int)(short)puVar7[iVar6 * 0x14 + 7] - (int)(short)puVar7[7]))) {
            *puVar7 = *puVar7 | 0x10;
            iVar15 = iVar6 * 0x28 + iVar18 * -0x28 >> 3;
            *(int *)(puVar7 + iVar18 * 0x14 + 0xc) = iVar15 * -0x33333333;
            *(int *)(puVar7 + iVar6 * 0x14 + 0xe) = iVar15 * 0x33333333;
          }
        }
        puVar7 = puVar7 + 0x14;
        puVar9 = local_4c;
      } while (puVar7 < local_44);
      do {
        uVar4 = *puVar9;
        if ((uVar4 & 0x10) == 0) {
          if ((uVar4 & 3) == 0) {
            bVar10 = *(byte *)((int)puVar9 + 3);
            if (bVar10 == (byte)puVar9[1]) {
              if (bVar10 == 4) {
                iVar6 = *(int *)(puVar9 + 0xc);
                iVar18 = *(int *)(puVar9 + 0xe);
                local_58 = (ushort *)(iVar6 * 0x28);
                bVar3 = FUN_004217fa((int)(short)puVar9[6] - (int)(short)puVar9[iVar18 * 0x14 + 6],
                                     (int)(short)puVar9[7] - (int)(short)puVar9[iVar18 * 0x14 + 7],
                                     (int)(short)(puVar9 + 6)[iVar6 * 0x14] - (int)(short)puVar9[6],
                                     (int)(short)(puVar9 + 7)[iVar6 * 0x14] - (int)(short)puVar9[7])
                ;
                if (CONCAT31(extraout_var,bVar3) == 0) goto LAB_004311fd;
                *(int *)(puVar9 + iVar18 * 0x14 + 0xc) =
                     ((int)(local_58 + iVar18 * -0x14) >> 3) * -0x33333333;
                *(int *)((int)(puVar9 + 0xe) + (int)local_58) =
                     ((int)(local_58 + iVar18 * -0x14) >> 3) * 0x33333333;
                uVar4 = *puVar9;
              }
            }
            else if ((int)(char)(byte)puVar9[1] + (int)(char)bVar10 != 0) goto LAB_004311fd;
          }
          *puVar9 = uVar4 | 0x10;
        }
LAB_004311fd:
        puVar9 = puVar9 + 0x14;
      } while (puVar9 < local_44);
    }
  }
LAB_00431206:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_58)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_58);
}

