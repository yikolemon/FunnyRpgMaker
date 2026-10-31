/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e5f89 */

undefined8 FUN_1801e5f89(undefined8 *param_1,uint param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  longlong lVar5;
  uint *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  short *psVar11;
  uint uVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  byte *pbVar18;
  ulonglong uVar19;
  byte *pbVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  short **local_a0;
  short *local_98;
  ulonglong local_90;
  longlong local_88;
  uint *local_80;
  undefined8 local_78;
  ulonglong local_70;
  short *local_68;
  ulonglong local_60;
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_c8;
  uVar19 = (ulonglong)param_2;
  puVar17 = (uint *)(param_1 + uVar19 * 0x113 + 9);
  lVar10 = param_1[0x230];
  uVar22 = param_1[uVar19 * 0x113 + 10];
  if (uVar22 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = uVar22 + (ulonglong)*puVar17 * 0x48;
  }
  local_78 = *param_1;
  *(undefined4 *)(param_1 + uVar19 * 0x113 + 0xb) = 0;
  local_88 = (longlong)*(int *)(param_1 + (ulonglong)(param_2 != 0) + 1);
  iVar7 = *(int *)(uVar19 * 0x1c4 + lVar10 + 0x110);
  if (0x10 < (int)((ulonglong)(iVar7 * local_88 + (iVar7 * local_88 >> 0x3f) + 0x8000) >> 0x10)) {
    iVar7 = FUN_1801cc3a4(0x10,local_88);
  }
  puVar6 = puVar17;
  if (uVar22 < local_90) {
    do {
      local_80 = puVar6;
      if ((ulonglong)puVar17[4] == 0) {
LAB_1801e6156:
        local_a0 = &local_68;
        local_a8 = local_78;
        uVar8 = FUN_1801e637a(puVar17,(int)*(short *)(uVar22 + 2),(int)*(char *)(uVar22 + 1),0);
        if ((int)uVar8 != 0) goto LAB_1801e633f;
        local_68[0x10] = 0;
        local_68[0x11] = 0;
        local_68[0x12] = 0;
        local_68[0x13] = 0;
        local_68[0x14] = 0;
        local_68[0x15] = 0;
        local_68[0x16] = 0;
        local_68[0x17] = 0;
        local_68[8] = 0;
        local_68[9] = 0;
        local_68[10] = 0;
        local_68[0xb] = 0;
        local_68[0xc] = 0;
        local_68[0xd] = 0;
        local_68[0xe] = 0;
        local_68[0xf] = 0;
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[6] = 0;
        local_68[7] = 0;
        local_68[0x18] = 0;
        local_68[0x19] = 0;
        local_68[0x1a] = 0;
        local_68[0x1b] = 0;
        *(ulonglong *)(local_68 + 0x1c) = uVar22;
        *(ulonglong *)(local_68 + 0x20) = uVar22;
        *(undefined1 *)((longlong)local_68 + 0xd) = *(undefined1 *)(uVar22 + 1);
        sVar2 = *(short *)(uVar22 + 2);
        *local_68 = sVar2;
        lVar10 = sVar2 * local_88;
        uVar9 = (undefined4)((ulonglong)(lVar10 + (lVar10 >> 0x3f) + 0x8000) >> 0x10);
        *(undefined4 *)(local_68 + 2) = uVar9;
        *(undefined4 *)(local_68 + 4) = uVar9;
        *(ulonglong *)(uVar22 + 0x18) = uVar22;
      }
      else {
        iVar23 = 0xffff;
        uVar19 = 0;
        local_98 = (short *)0x0;
        do {
          if (*(char *)(*(longlong *)(puVar17 + 6) + 0xd + uVar19 * 0x48) == *(char *)(uVar22 + 1))
          {
            psVar11 = (short *)(*(longlong *)(puVar17 + 6) + uVar19 * 0x48);
            iVar15 = (int)*(short *)(uVar22 + 2) - (int)*psVar11;
            iVar14 = -iVar15;
            if (iVar14 < 0) {
              iVar14 = iVar15;
            }
            if (iVar14 < iVar23 && iVar14 < iVar7) {
              if (*(longlong *)(uVar22 + 0x20) != 0) {
                iVar15 = 0;
                lVar10 = *(longlong *)(psVar11 + 0x1c);
                do {
                  if (*(longlong *)(lVar10 + 0x20) != 0) {
                    sVar2 = *(short *)(*(longlong *)(uVar22 + 0x20) + 2);
                    sVar3 = *(short *)(*(longlong *)(lVar10 + 0x20) + 2);
                    iVar15 = (int)sVar3 - (int)sVar2;
                    if (sVar3 < sVar2) {
                      iVar15 = (int)sVar2 - (int)sVar3;
                    }
                    if (iVar7 <= iVar15) break;
                  }
                  lVar10 = *(longlong *)(lVar10 + 0x18);
                } while (lVar10 != *(longlong *)(psVar11 + 0x1c));
                if (iVar7 <= iVar15) goto LAB_1801e6122;
              }
              local_98 = psVar11;
              iVar23 = iVar14;
            }
          }
LAB_1801e6122:
          uVar19 = uVar19 + 1;
        } while (uVar19 != puVar17[4]);
        puVar17 = local_80;
        local_70 = uVar22;
        if (local_98 == (short *)0x0) goto LAB_1801e6156;
        *(undefined8 *)(uVar22 + 0x18) = *(undefined8 *)(local_98 + 0x1c);
        *(ulonglong *)(*(longlong *)(local_98 + 0x20) + 0x18) = uVar22;
        *(ulonglong *)(local_98 + 0x20) = uVar22;
      }
      uVar22 = uVar22 + 0x48;
      puVar6 = local_80;
    } while (uVar22 < local_90);
  }
  psVar11 = *(short **)(puVar17 + 6);
  uVar8 = 0;
  if ((psVar11 != (short *)0x0) && ((ulonglong)puVar17[4] != 0)) {
    local_98 = psVar11 + (ulonglong)puVar17[4] * 0x24;
    psVar13 = psVar11;
    do {
      lVar10 = *(longlong *)(psVar13 + 0x1c);
      if (lVar10 != 0) {
        do {
          *(short **)(lVar10 + 0x10) = psVar13;
          lVar10 = *(longlong *)(lVar10 + 0x18);
        } while (lVar10 != *(longlong *)(psVar13 + 0x1c));
      }
      psVar13 = psVar13 + 0x24;
    } while (psVar13 < local_98);
    do {
      pbVar18 = *(byte **)(psVar11 + 0x1c);
      uVar12 = 0;
      if (pbVar18 != (byte *)0x0) {
        uVar16 = 0;
        pbVar20 = pbVar18;
        do {
          bVar1 = *pbVar20;
          lVar10 = *(longlong *)(pbVar20 + 0x28);
          if (lVar10 == 0) {
            lVar5 = *(longlong *)(pbVar20 + 0x20);
            if (*(longlong *)(pbVar20 + 0x20) != 0) {
LAB_1801e6286:
              lVar10 = lVar5;
              bVar4 = false;
              psVar13 = psVar11 + 0x10;
              goto LAB_1801e628b;
            }
          }
          else if ((*(longlong *)(pbVar20 + 0x20) != 0) || (*(short **)(lVar10 + 0x10) != psVar11))
          {
            lVar5 = *(longlong *)(pbVar20 + 0x20);
            if (*(short **)(lVar10 + 0x10) == psVar11) goto LAB_1801e6286;
            bVar4 = true;
            psVar13 = psVar11 + 0x14;
LAB_1801e628b:
            psVar13 = *(short **)psVar13;
            if (psVar13 == (short *)0x0) {
LAB_1801e62cf:
              psVar13 = *(short **)(lVar10 + 0x10);
            }
            else {
              iVar23 = (int)*psVar11;
              iVar7 = (int)*psVar13;
              uVar21 = iVar7 - iVar23;
              if (iVar7 < iVar23) {
                uVar21 = iVar23 - iVar7;
              }
              sVar2 = *(short *)(pbVar20 + 2);
              sVar3 = *(short *)(lVar10 + 2);
              iVar7 = (int)sVar3 - (int)sVar2;
              if (sVar3 < sVar2) {
                iVar7 = (int)sVar2 - (int)sVar3;
              }
              if (iVar7 < (int)(uVar21 & 0xffff)) goto LAB_1801e62cf;
            }
            if (bVar4) {
              *(short **)(psVar11 + 0x14) = psVar13;
              *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 2;
              pbVar18 = *(byte **)(psVar11 + 0x1c);
            }
            else {
              *(short **)(psVar11 + 0x10) = psVar13;
            }
          }
          uVar12 = uVar12 + (bVar1 & 1);
          uVar16 = uVar16 + (byte)((byte)(bVar1 & 1) ^ 1);
          pbVar20 = *(byte **)(pbVar20 + 0x18);
        } while (pbVar20 != pbVar18);
        uVar12 = (uint)(uVar12 != 0 && uVar16 <= uVar12);
      }
      *(char *)(psVar11 + 6) = (char)uVar12;
      if ((*(longlong *)(psVar11 + 0x14) != 0) && (*(longlong *)(psVar11 + 0x10) != 0)) {
        psVar11[0x14] = 0;
        psVar11[0x15] = 0;
        psVar11[0x16] = 0;
        psVar11[0x17] = 0;
      }
      psVar11 = psVar11 + 0x24;
    } while (psVar11 < local_98);
    uVar8 = 0;
  }
LAB_1801e633f:
  if (DAT_180402640 != (local_60 ^ (ulonglong)auStack_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_60 ^ (ulonglong)auStack_c8);
  }
  return uVar8;
}

