/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e3b7d */

int FUN_1801e3b7d(undefined8 *param_1,ushort *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  longlong lVar7;
  ushort *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  byte *pbVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  byte *pbVar22;
  ushort uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  ushort *puVar28;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  int *local_a0;
  undefined8 *local_90;
  int local_84;
  undefined8 *local_80;
  ushort *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_c8;
  local_4c = 0;
  iVar12 = *(int *)(param_1 + 1);
  iVar24 = *(int *)(param_1 + 2);
  local_80 = (undefined8 *)CONCAT44(local_80._4_4_,*(undefined4 *)((longlong)param_1 + 0xc));
  local_84 = *(int *)((longlong)param_1 + 0x14);
  uVar5 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  uVar23 = *param_2;
  local_90 = param_1;
  if (uVar23 < 9) {
    if (param_1[6] == 0) {
      param_1[6] = param_1 + 0x231;
      param_1[7] = param_1 + 0x239;
      param_1[8] = param_1 + 0x23d;
      uVar20 = 8;
LAB_1801e3c1d:
      *(uint *)(local_90 + 5) = uVar20;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 5);
    if (iVar3 < (int)(uint)uVar23) {
      local_a8 = (undefined8 *)param_1[6];
      if (local_a8 == param_1 + 0x231) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        local_a8 = (undefined8 *)0x0;
      }
      uVar20 = uVar23 + 3 & 0xfffffffc;
      local_a0 = &local_4c;
      uVar4 = FUN_1801c9c3f(uVar5,8,iVar3,uVar20);
      param_1[6] = uVar4;
      if (local_4c != 0) goto LAB_1801e4296;
      local_a8 = (undefined8 *)local_90[7];
      local_a0 = &local_4c;
      uVar4 = FUN_1801c9c3f(uVar5,4,iVar3,uVar20);
      local_90[7] = uVar4;
      if (local_4c != 0) goto LAB_1801e4296;
      local_a8 = (undefined8 *)local_90[8];
      local_a0 = &local_4c;
      uVar4 = FUN_1801c9c3f(uVar5,4,iVar3,uVar20);
      local_90[8] = uVar4;
      if (local_4c != 0) goto LAB_1801e4296;
      goto LAB_1801e3c1d;
    }
  }
  uVar23 = param_2[1];
  if (uVar23 < 0x5f) {
    if (local_90[4] == 0) {
      local_90[4] = local_90 + 0x241;
      uVar20 = 0x60;
LAB_1801e3d85:
      *(uint *)(local_90 + 3) = uVar20;
    }
  }
  else if (*(int *)(local_90 + 3) < (int)(uVar23 + 2)) {
    local_a8 = (undefined8 *)local_90[4];
    if (local_a8 == local_90 + 0x241) {
      local_90[4] = 0;
      local_a8 = (undefined8 *)0x0;
    }
    uVar20 = uVar23 + 0xb & 0xfffffff8;
    local_a0 = &local_4c;
    uVar5 = FUN_1801c9c3f(uVar5,0x30,*(int *)(local_90 + 3),uVar20);
    local_90[4] = uVar5;
    if (local_4c != 0) goto LAB_1801e4296;
    goto LAB_1801e3d85;
  }
  *(uint *)((longlong)local_90 + 0x1c) = (uint)param_2[1];
  *(uint *)((longlong)local_90 + 0x2c) = (uint)*param_2;
  *(undefined4 *)(local_90 + 0xd) = 2;
  *(undefined4 *)(local_90 + 0x120) = 0xffffffff;
  iVar3 = FUN_1801cdd13(param_2);
  if (iVar3 == 1) {
    *(undefined4 *)(local_90 + 0xd) = 0xfffffffe;
    *(undefined4 *)(local_90 + 0x120) = 1;
  }
  *(int *)(local_90 + 1) = iVar12;
  *(int *)(local_90 + 2) = iVar24;
  *(int *)((longlong)local_90 + 0xc) = (int)local_80;
  *(int *)((longlong)local_90 + 0x14) = local_84;
  lVar7 = (longlong)*(int *)((longlong)local_90 + 0x1c);
  if (lVar7 != 0) {
    puVar28 = (ushort *)local_90[4];
    local_78 = puVar28 + lVar7 * 0x18;
    uVar20 = (uint)*(ushort *)(*(longlong *)(local_90[0x230] + 8) + 0x68) * 0x14 >> 0xb;
    puVar8 = *(ushort **)(param_2 + 0xc);
    if (0 < *(int *)((longlong)local_90 + 0x1c)) {
      local_58 = (longlong)iVar12;
      local_60 = (longlong)iVar24;
      uVar11 = (uint)*puVar8;
      puVar8 = (ushort *)((ulonglong)(uVar11 * 0x30) + (longlong)puVar28);
      lVar17 = *(longlong *)(param_2 + 4);
      local_68 = *(longlong *)(param_2 + 8);
      iVar12 = 0;
      lVar21 = 0;
      puVar6 = puVar8;
      puVar13 = puVar28;
      do {
        puVar13[1] = 0x404;
        puVar13[6] = *(ushort *)(lVar17 + lVar21 * 8);
        puVar13[7] = *(ushort *)(lVar17 + 4 + lVar21 * 8);
        lVar27 = *(int *)(lVar17 + lVar21 * 8) * local_58;
        iVar24 = (int)((ulonglong)(lVar27 + 0x8000 + (lVar27 >> 0x3f)) >> 0x10) + (int)local_80;
        *(int *)(puVar13 + 8) = iVar24;
        *(int *)(puVar13 + 2) = iVar24;
        lVar27 = *(int *)(lVar17 + 4 + lVar21 * 8) * local_60;
        iVar24 = (int)((ulonglong)(lVar27 + 0x8000 + (lVar27 >> 0x3f)) >> 0x10) + local_84;
        *(int *)(puVar13 + 10) = iVar24;
        *(int *)(puVar13 + 4) = iVar24;
        puVar6[6] = *(ushort *)(*(longlong *)(param_2 + 4) + (ulonglong)(uVar11 << 3));
        puVar6[7] = *(ushort *)(*(longlong *)(param_2 + 4) + 4 + (ulonglong)(uVar11 << 3));
        bVar18 = *(byte *)(local_68 + lVar21) & 3;
        uVar23 = (ushort)(bVar18 == 2) * 2;
        if (bVar18 == 0) {
          uVar23 = 1;
        }
        *puVar13 = uVar23;
        iVar24 = (int)(short)puVar13[6];
        iVar25 = (int)(short)puVar8[6];
        iVar19 = (int)(short)puVar13[7];
        iVar3 = (int)(short)puVar8[7];
        uVar26 = iVar25 - iVar24;
        if (iVar25 < iVar24) {
          uVar26 = iVar24 - iVar25;
        }
        uVar15 = iVar3 - iVar19;
        if (iVar3 < iVar19) {
          uVar15 = iVar19 - iVar3;
        }
        if ((uVar15 & 0xffff) + (uVar26 & 0xffff) < uVar20) {
          *(byte *)puVar8 = (byte)*puVar8 | 0x20;
        }
        *(ushort **)(puVar13 + 0x14) = puVar8;
        *(ushort **)(puVar8 + 0x10) = puVar13;
        puVar8 = puVar13;
        if ((puVar13 == puVar6) &&
           (iVar12 = iVar12 + 1, puVar6 = puVar13, iVar12 < (int)(uint)*param_2)) {
          uVar11 = (uint)*(ushort *)(*(longlong *)(param_2 + 0xc) + (longlong)iVar12 * 2);
          puVar8 = (ushort *)((ulonglong)(uVar11 * 0x30) + (longlong)puVar28);
          puVar6 = puVar8;
        }
        puVar13 = puVar13 + 0x18;
        lVar21 = lVar21 + 1;
      } while (puVar13 < local_78);
      puVar8 = *(ushort **)(param_2 + 0xc);
    }
    local_70 = lVar7;
    if (0 < (longlong)*(int *)((longlong)local_90 + 0x2c)) {
      puVar9 = (undefined8 *)local_90[6];
      puVar16 = puVar9 + *(int *)((longlong)local_90 + 0x2c);
      lVar7 = 0;
      do {
        *puVar9 = puVar28 + lVar7 * 0x18;
        lVar7 = (ulonglong)*puVar8 + 1;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      } while (puVar9 < puVar16);
      if (0 < (longlong)*(int *)((longlong)local_90 + 0x2c)) {
        puVar16 = (undefined8 *)local_90[6];
        local_80 = puVar16 + *(int *)((longlong)local_90 + 0x2c);
        do {
          pbVar14 = (byte *)*puVar16;
          do {
            pbVar10 = pbVar14;
            pbVar14 = *(byte **)(pbVar10 + 0x28);
            if (pbVar14 == (byte *)*puVar16) break;
            iVar12 = (int)*(short *)(pbVar10 + 0xc);
            iVar24 = (int)*(short *)(pbVar14 + 0xc);
            iVar3 = (int)*(short *)(pbVar10 + 0xe);
            iVar19 = (int)*(short *)(pbVar14 + 0xe);
            uVar11 = iVar24 - iVar12;
            if (iVar24 < iVar12) {
              uVar11 = iVar12 - iVar24;
            }
            uVar26 = iVar19 - iVar3;
            if (iVar19 < iVar3) {
              uVar26 = iVar3 - iVar19;
            }
          } while ((int)((uVar26 & 0xffff) + (uVar11 & 0xffff)) < (int)(uVar20 * 2 + -1));
          pbVar10[0x18] = 0;
          pbVar10[0x19] = 0;
          pbVar10[0x1a] = 0;
          pbVar10[0x1b] = 0;
          pbVar10[0x1c] = 0;
          pbVar10[0x1d] = 0;
          pbVar10[0x1e] = 0;
          pbVar10[0x1f] = 0;
          iVar12 = 0;
          iVar24 = 0;
          pbVar14 = pbVar10;
          pbVar22 = pbVar10;
          do {
            pbVar1 = pbVar14 + 0xc;
            pbVar2 = pbVar14 + 0xe;
            pbVar14 = *(byte **)(pbVar14 + 0x20);
            iVar12 = ((int)*(short *)(pbVar14 + 0xc) - (int)*(short *)pbVar1) + iVar12;
            iVar24 = ((int)*(short *)(pbVar14 + 0xe) - (int)*(short *)pbVar2) + iVar24;
            iVar3 = -iVar12;
            if (-iVar12 < 0) {
              iVar3 = iVar12;
            }
            iVar19 = -iVar24;
            if (-iVar24 < 0) {
              iVar19 = iVar24;
            }
            if ((uint)(iVar19 + iVar3) < uVar20) {
              *pbVar14 = *pbVar14 | 0x10;
            }
            else {
              iVar12 = (int)((ulonglong)((longlong)pbVar14 - (longlong)pbVar22) >> 4);
              *(int *)(pbVar22 + 0x18) = iVar12 * -0x55555555;
              *(int *)(pbVar14 + 0x1c) = iVar12 * 0x55555555;
              bVar18 = FUN_1801e4e87();
              while( true ) {
                pbVar22[3] = bVar18;
                pbVar22 = *(byte **)(pbVar22 + 0x20);
                if (pbVar22 == pbVar14) break;
                pbVar22[2] = bVar18;
              }
              pbVar14[2] = bVar18;
              iVar12 = (int)((ulonglong)((longlong)pbVar10 - (longlong)pbVar22) >> 4);
              *(int *)(pbVar22 + 0x18) = iVar12 * -0x55555555;
              *(int *)(pbVar10 + 0x1c) = iVar12 * 0x55555555;
              iVar12 = 0;
              iVar24 = 0;
            }
          } while (pbVar14 != pbVar10);
          puVar16 = puVar16 + 1;
        } while (puVar16 < local_80);
      }
    }
    puVar8 = local_78;
    puVar6 = puVar28;
    if (0 < (int)local_70) {
      do {
        if ((((*puVar6 & 0x10) == 0) && ((byte)puVar6[1] == 4)) &&
           (*(byte *)((longlong)puVar6 + 3) == 4)) {
          lVar7 = (longlong)*(int *)(puVar6 + 0xc);
          lVar17 = (longlong)*(int *)(puVar6 + 0xe);
          if ((-1 < ((int)(short)puVar6[6] - (int)(short)puVar6[lVar17 * 0x18 + 6] ^
                    (int)(short)puVar6[lVar7 * 0x18 + 6] - (int)(short)puVar6[6])) &&
             (-1 < ((int)(short)puVar6[7] - (int)(short)puVar6[lVar17 * 0x18 + 7] ^
                   (int)(short)puVar6[lVar7 * 0x18 + 7] - (int)(short)puVar6[7]))) {
            *puVar6 = *puVar6 | 0x10;
            iVar12 = (int)((ulonglong)(lVar7 * 0x30 + lVar17 * -0x30) >> 4);
            *(int *)(puVar6 + lVar17 * 0x18 + 0xc) = iVar12 * -0x55555555;
            *(int *)(puVar6 + lVar7 * 0x18 + 0xe) = iVar12 * 0x55555555;
          }
        }
        puVar6 = puVar6 + 0x18;
      } while (puVar6 < local_78);
      do {
        uVar23 = *puVar28;
        if ((uVar23 & 0x10) == 0) {
          if ((uVar23 & 3) == 0) {
            bVar18 = *(byte *)((longlong)puVar28 + 3);
            if (bVar18 == (byte)puVar28[1]) {
              if (bVar18 == 4) {
                lVar7 = (longlong)*(int *)(puVar28 + 0xc);
                lVar17 = (longlong)*(int *)(puVar28 + 0xe);
                iVar12 = FUN_1801cf921((int)(short)puVar28[6] -
                                       (int)(short)puVar28[lVar17 * 0x18 + 6],
                                       (int)(short)puVar28[7] -
                                       (int)(short)puVar28[lVar17 * 0x18 + 7],
                                       (int)(short)puVar28[lVar7 * 0x18 + 6] -
                                       (int)(short)puVar28[6],
                                       (int)(short)puVar28[lVar7 * 0x18 + 7] -
                                       (int)(short)puVar28[7]);
                if (iVar12 == 0) goto LAB_1801e428d;
                iVar12 = (int)((ulonglong)(lVar7 * 0x30 + lVar17 * -0x30) >> 4);
                *(int *)(puVar28 + lVar17 * 0x18 + 0xc) = iVar12 * -0x55555555;
                *(int *)(puVar28 + lVar7 * 0x18 + 0xe) = iVar12 * 0x55555555;
                uVar23 = *puVar28;
              }
            }
            else if ((int)(char)(byte)puVar28[1] + (int)(char)bVar18 != 0) goto LAB_1801e428d;
          }
          *puVar28 = uVar23 | 0x10;
        }
LAB_1801e428d:
        puVar28 = puVar28 + 0x18;
      } while (puVar28 < puVar8);
    }
  }
LAB_1801e4296:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_c8);
  }
  return local_4c;
}

