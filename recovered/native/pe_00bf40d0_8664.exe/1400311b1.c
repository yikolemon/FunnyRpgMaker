/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400311b1 */

int FUN_1400311b1(longlong *param_1,ushort *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ushort *puVar10;
  undefined7 extraout_var;
  ushort *puVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  byte *pbVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  byte bVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  byte *pbVar29;
  ushort uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  longlong lVar34;
  ushort *puVar35;
  undefined1 auStackY_c8 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  local_4c = 0;
  lVar23 = param_1[1];
  lVar5 = param_1[2];
  iVar16 = *(int *)((longlong)param_1 + 0xc);
  iVar21 = *(int *)((longlong)param_1 + 0x14);
  lVar22 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  uVar30 = *param_2;
  if (uVar30 < 9) {
    if (param_1[6] == 0) {
      param_1[6] = (longlong)(param_1 + 0x231);
      param_1[7] = (longlong)(param_1 + 0x239);
      param_1[8] = (longlong)(param_1 + 0x23d);
      uVar15 = 8;
LAB_140031251:
      *(uint *)(param_1 + 5) = uVar15;
    }
  }
  else {
    uVar27 = *(uint *)(param_1 + 5);
    if ((int)uVar27 < (int)(uint)uVar30) {
      plVar7 = (longlong *)param_1[6];
      if (plVar7 == param_1 + 0x231) {
        param_1[6] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        plVar7 = (longlong *)0x0;
      }
      uVar15 = uVar30 + 3 & 0xfffffffc;
      lVar8 = FUN_14001c617(lVar22,8,uVar27,uVar15,(longlong)plVar7,&local_4c);
      param_1[6] = lVar8;
      if (local_4c != 0) goto LAB_1400318ca;
      lVar8 = FUN_14001c617(lVar22,4,uVar27,uVar15,param_1[7],&local_4c);
      param_1[7] = lVar8;
      if (local_4c != 0) goto LAB_1400318ca;
      lVar8 = FUN_14001c617(lVar22,4,uVar27,uVar15,param_1[8],&local_4c);
      param_1[8] = lVar8;
      if (local_4c != 0) goto LAB_1400318ca;
      goto LAB_140031251;
    }
  }
  uVar30 = param_2[1];
  if (uVar30 < 0x5f) {
    if (param_1[4] == 0) {
      param_1[4] = (longlong)(param_1 + 0x241);
      uVar27 = 0x60;
LAB_1400313b9:
      *(uint *)(param_1 + 3) = uVar27;
    }
  }
  else if ((int)*(uint *)(param_1 + 3) < (int)(uVar30 + 2)) {
    plVar7 = (longlong *)param_1[4];
    if (plVar7 == param_1 + 0x241) {
      param_1[4] = 0;
      plVar7 = (longlong *)0x0;
    }
    uVar27 = uVar30 + 0xb & 0xfffffff8;
    lVar22 = FUN_14001c617(lVar22,0x30,*(uint *)(param_1 + 3),uVar27,(longlong)plVar7,&local_4c);
    param_1[4] = lVar22;
    if (local_4c != 0) goto LAB_1400318ca;
    goto LAB_1400313b9;
  }
  *(uint *)((longlong)param_1 + 0x1c) = (uint)param_2[1];
  *(uint *)((longlong)param_1 + 0x2c) = (uint)*param_2;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  uVar9 = FUN_140020116(param_2);
  if ((int)uVar9 == 1) {
    *(undefined4 *)(param_1 + 0xd) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  *(int *)(param_1 + 1) = (int)lVar23;
  *(int *)(param_1 + 2) = (int)lVar5;
  *(int *)((longlong)param_1 + 0xc) = iVar16;
  *(int *)((longlong)param_1 + 0x14) = iVar21;
  iVar4 = *(int *)((longlong)param_1 + 0x1c);
  if ((longlong)iVar4 != 0) {
    puVar35 = (ushort *)param_1[4];
    puVar10 = puVar35 + (longlong)iVar4 * 0x18;
    uVar27 = (uint)*(ushort *)(*(longlong *)(param_1[0x230] + 8) + 0x68) * 0x14 >> 0xb;
    puVar11 = *(ushort **)(param_2 + 0xc);
    if (0 < iVar4) {
      uVar15 = (uint)*puVar11;
      puVar11 = (ushort *)((ulonglong)(uVar15 * 0x30) + (longlong)puVar35);
      lVar22 = *(longlong *)(param_2 + 4);
      lVar8 = *(longlong *)(param_2 + 8);
      iVar25 = 0;
      lVar28 = 0;
      puVar12 = puVar11;
      puVar17 = puVar35;
      do {
        puVar17[1] = 0x404;
        puVar17[6] = *(ushort *)(lVar22 + lVar28 * 8);
        puVar17[7] = *(ushort *)(lVar22 + 4 + lVar28 * 8);
        lVar34 = (longlong)*(int *)(lVar22 + lVar28 * 8) * (longlong)(int)lVar23;
        iVar31 = (int)((ulonglong)(lVar34 + 0x8000 + (lVar34 >> 0x3f)) >> 0x10) + iVar16;
        *(int *)(puVar17 + 8) = iVar31;
        *(int *)(puVar17 + 2) = iVar31;
        lVar34 = (longlong)*(int *)(lVar22 + 4 + lVar28 * 8) * (longlong)(int)lVar5;
        iVar31 = (int)((ulonglong)(lVar34 + 0x8000 + (lVar34 >> 0x3f)) >> 0x10) + iVar21;
        *(int *)(puVar17 + 10) = iVar31;
        *(int *)(puVar17 + 4) = iVar31;
        puVar12[6] = *(ushort *)(*(longlong *)(param_2 + 4) + (ulonglong)(uVar15 << 3));
        puVar12[7] = *(ushort *)(*(longlong *)(param_2 + 4) + 4 + (ulonglong)(uVar15 << 3));
        bVar24 = *(byte *)(lVar8 + lVar28) & 3;
        uVar30 = (ushort)(bVar24 == 2) * 2;
        if (bVar24 == 0) {
          uVar30 = 1;
        }
        *puVar17 = uVar30;
        iVar31 = (int)(short)puVar17[6];
        iVar32 = (int)(short)puVar11[6];
        iVar26 = (int)(short)puVar17[7];
        iVar19 = (int)(short)puVar11[7];
        uVar33 = iVar32 - iVar31;
        if (iVar32 < iVar31) {
          uVar33 = iVar31 - iVar32;
        }
        uVar20 = iVar19 - iVar26;
        if (iVar19 < iVar26) {
          uVar20 = iVar26 - iVar19;
        }
        if ((uVar20 & 0xffff) + (uVar33 & 0xffff) < uVar27) {
          *(byte *)puVar11 = (byte)*puVar11 | 0x20;
        }
        *(ushort **)(puVar17 + 0x14) = puVar11;
        *(ushort **)(puVar11 + 0x10) = puVar17;
        puVar11 = puVar17;
        if ((puVar17 == puVar12) &&
           (iVar25 = iVar25 + 1, puVar12 = puVar17, iVar25 < (int)(uint)*param_2)) {
          uVar15 = (uint)*(ushort *)(*(longlong *)(param_2 + 0xc) + (longlong)iVar25 * 2);
          puVar11 = (ushort *)((ulonglong)(uVar15 * 0x30) + (longlong)puVar35);
          puVar12 = puVar11;
        }
        puVar17 = puVar17 + 0x18;
        lVar28 = lVar28 + 1;
      } while (puVar17 < puVar10);
      puVar11 = *(ushort **)(param_2 + 0xc);
    }
    if (0 < (longlong)*(int *)((longlong)param_1 + 0x2c)) {
      puVar13 = (undefined8 *)param_1[6];
      puVar3 = puVar13 + *(int *)((longlong)param_1 + 0x2c);
      lVar22 = 0;
      do {
        *puVar13 = puVar35 + lVar22 * 0x18;
        lVar22 = (ulonglong)*puVar11 + 1;
        puVar13 = puVar13 + 1;
        puVar11 = puVar11 + 1;
      } while (puVar13 < puVar3);
      if (0 < (longlong)*(int *)((longlong)param_1 + 0x2c)) {
        puVar13 = (undefined8 *)param_1[6];
        puVar3 = puVar13 + *(int *)((longlong)param_1 + 0x2c);
        do {
          pbVar18 = (byte *)*puVar13;
          do {
            pbVar14 = pbVar18;
            pbVar18 = *(byte **)(pbVar14 + 0x28);
            if (pbVar18 == (byte *)*puVar13) break;
            iVar16 = (int)*(short *)(pbVar14 + 0xc);
            iVar21 = (int)*(short *)(pbVar18 + 0xc);
            iVar25 = (int)*(short *)(pbVar14 + 0xe);
            iVar31 = (int)*(short *)(pbVar18 + 0xe);
            uVar15 = iVar21 - iVar16;
            if (iVar21 < iVar16) {
              uVar15 = iVar16 - iVar21;
            }
            uVar33 = iVar31 - iVar25;
            if (iVar31 < iVar25) {
              uVar33 = iVar25 - iVar31;
            }
          } while ((int)((uVar33 & 0xffff) + (uVar15 & 0xffff)) < (int)(uVar27 * 2 + -1));
          pbVar14[0x18] = 0;
          pbVar14[0x19] = 0;
          pbVar14[0x1a] = 0;
          pbVar14[0x1b] = 0;
          pbVar14[0x1c] = 0;
          pbVar14[0x1d] = 0;
          pbVar14[0x1e] = 0;
          pbVar14[0x1f] = 0;
          iVar16 = 0;
          iVar21 = 0;
          pbVar18 = pbVar14;
          pbVar29 = pbVar14;
          do {
            pbVar1 = pbVar18 + 0xc;
            pbVar2 = pbVar18 + 0xe;
            pbVar18 = *(byte **)(pbVar18 + 0x20);
            iVar16 = ((int)*(short *)(pbVar18 + 0xc) - (int)*(short *)pbVar1) + iVar16;
            iVar21 = ((int)*(short *)(pbVar18 + 0xe) - (int)*(short *)pbVar2) + iVar21;
            iVar25 = -iVar16;
            if (-iVar16 < 0) {
              iVar25 = iVar16;
            }
            iVar31 = -iVar21;
            if (-iVar21 < 0) {
              iVar31 = iVar21;
            }
            if ((uint)(iVar31 + iVar25) < uVar27) {
              *pbVar18 = *pbVar18 | 0x10;
            }
            else {
              iVar25 = (int)((ulonglong)((longlong)pbVar18 - (longlong)pbVar29) >> 4);
              *(int *)(pbVar29 + 0x18) = iVar25 * -0x55555555;
              *(int *)(pbVar18 + 0x1c) = iVar25 * 0x55555555;
              iVar16 = FUN_1400324bb(iVar16,iVar21);
              while( true ) {
                bVar24 = (byte)iVar16;
                pbVar29[3] = bVar24;
                pbVar29 = *(byte **)(pbVar29 + 0x20);
                if (pbVar29 == pbVar18) break;
                pbVar29[2] = bVar24;
              }
              pbVar18[2] = bVar24;
              iVar16 = (int)((ulonglong)((longlong)pbVar14 - (longlong)pbVar29) >> 4);
              *(int *)(pbVar29 + 0x18) = iVar16 * -0x55555555;
              *(int *)(pbVar14 + 0x1c) = iVar16 * 0x55555555;
              iVar16 = 0;
              iVar21 = 0;
            }
          } while (pbVar18 != pbVar14);
          puVar13 = puVar13 + 1;
        } while (puVar13 < puVar3);
      }
    }
    puVar11 = puVar35;
    if (0 < iVar4) {
      do {
        if ((((*puVar11 & 0x10) == 0) && ((byte)puVar11[1] == 4)) &&
           (*(byte *)((longlong)puVar11 + 3) == 4)) {
          lVar22 = (longlong)*(int *)(puVar11 + 0xc);
          lVar23 = (longlong)*(int *)(puVar11 + 0xe);
          if ((-1 < ((int)(short)puVar11[6] - (int)(short)puVar11[lVar23 * 0x18 + 6] ^
                    (int)(short)puVar11[lVar22 * 0x18 + 6] - (int)(short)puVar11[6])) &&
             (-1 < ((int)(short)puVar11[7] - (int)(short)puVar11[lVar23 * 0x18 + 7] ^
                   (int)(short)puVar11[lVar22 * 0x18 + 7] - (int)(short)puVar11[7]))) {
            *puVar11 = *puVar11 | 0x10;
            iVar16 = (int)((ulonglong)(lVar22 * 0x30 + lVar23 * -0x30) >> 4);
            *(int *)(puVar11 + lVar23 * 0x18 + 0xc) = iVar16 * -0x55555555;
            *(int *)(puVar11 + lVar22 * 0x18 + 0xe) = iVar16 * 0x55555555;
          }
        }
        puVar11 = puVar11 + 0x18;
      } while (puVar11 < puVar10);
      do {
        uVar30 = *puVar35;
        if ((uVar30 & 0x10) == 0) {
          if ((uVar30 & 3) == 0) {
            bVar24 = *(byte *)((longlong)puVar35 + 3);
            if (bVar24 == (byte)puVar35[1]) {
              if (bVar24 == 4) {
                lVar22 = (longlong)*(int *)(puVar35 + 0xc);
                lVar23 = (longlong)*(int *)(puVar35 + 0xe);
                bVar6 = FUN_140021d24((int)(short)puVar35[6] -
                                      (int)(short)puVar35[lVar23 * 0x18 + 6],
                                      (int)(short)puVar35[7] -
                                      (int)(short)puVar35[lVar23 * 0x18 + 7],
                                      (int)(short)puVar35[lVar22 * 0x18 + 6] -
                                      (int)(short)puVar35[6],
                                      (int)(short)puVar35[lVar22 * 0x18 + 7] -
                                      (int)(short)puVar35[7]);
                if ((int)CONCAT71(extraout_var,bVar6) == 0) goto LAB_1400318c1;
                iVar16 = (int)((ulonglong)(lVar22 * 0x30 + lVar23 * -0x30) >> 4);
                *(int *)(puVar35 + lVar23 * 0x18 + 0xc) = iVar16 * -0x55555555;
                *(int *)(puVar35 + lVar22 * 0x18 + 0xe) = iVar16 * 0x55555555;
                uVar30 = *puVar35;
              }
            }
            else if ((int)(char)(byte)puVar35[1] + (int)(char)bVar24 != 0) goto LAB_1400318c1;
          }
          *puVar35 = uVar30 | 0x10;
        }
LAB_1400318c1:
        puVar35 = puVar35 + 0x18;
      } while (puVar35 < puVar10);
    }
  }
LAB_1400318ca:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_c8);
  }
  return local_4c;
}

