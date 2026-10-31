/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013936c */

undefined8 FUN_14013936c(ulonglong *param_1,uint param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  longlong *plVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  short *psVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  ulonglong uVar19;
  uint uVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  byte *pbVar30;
  bool bVar31;
  undefined1 auStack_a8 [32];
  short *local_88;
  short **local_80;
  int local_78;
  undefined4 local_74;
  short *local_70;
  short *local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  uVar11 = (ulonglong)param_2;
  plVar4 = (longlong *)param_1[0x230];
  uVar19 = param_1[uVar11 * 0x113 + 10];
  if (uVar19 == 0) {
    uVar29 = 0;
  }
  else {
    uVar29 = (ulonglong)(uint)param_1[uVar11 * 0x113 + 9] * 0x48 + uVar19;
  }
  local_70 = (short *)*param_1;
  puVar5 = (&PTR_DAT_140e97f90)[*(int *)(*plVar4 + 8)];
  *(undefined4 *)(param_1 + uVar11 * 0x113 + 0xb) = 0;
  iVar17 = (int)param_1[(ulonglong)(param_2 != 0) + 1];
  if (param_2 == 0) {
    iVar27 = FUN_14012b378(0x40,(int)param_1[2]);
    local_74 = 0;
  }
  else {
    local_74 = (undefined4)CONCAT71((int7)((ulonglong)puVar5 >> 8),puVar5[0x18]);
    iVar27 = 0;
  }
  iVar9 = FUN_14012b378(0x20,iVar17);
  lVar12 = (longlong)*(int *)((longlong)plVar4 + uVar11 * 0x204 + 0x110) * (longlong)iVar17;
  iVar16 = (int)((ulonglong)(lVar12 + (lVar12 >> 0x3f) + 0x8000) >> 0x10);
  iVar10 = 0x10;
  if (iVar16 < 0x10) {
    iVar10 = iVar16;
  }
  iVar10 = FUN_14012b378(iVar10,iVar17);
  if (uVar19 < uVar29) {
    iVar16 = iVar27 * 3;
    uVar26 = uVar19;
    local_78 = iVar16;
    do {
      if ((iVar27 <= *(short *)(uVar26 + 10)) && (*(short *)(uVar26 + 4) <= iVar9)) {
        cVar1 = *(char *)(uVar26 + 1);
        if ((cVar1 != 4) &&
           ((*(longlong *)(uVar26 + 0x28) == 0 || (iVar16 <= *(short *)(uVar26 + 10) * 2)))) {
          if ((ulonglong)(uint)param_1[uVar11 * 0x113 + 0xb] == 0) {
            iVar16 = (int)*(short *)(uVar26 + 2);
          }
          else {
            uVar6 = param_1[uVar11 * 0x113 + 0xc];
            iVar16 = (int)*(short *)(uVar26 + 2);
            lVar12 = 0;
            do {
              iVar22 = (int)*(short *)(uVar6 + lVar12);
              iVar7 = iVar22 - iVar16;
              if (iVar22 < iVar16) {
                iVar7 = iVar16 - iVar22;
              }
              if ((iVar7 < iVar10) && (*(char *)(uVar6 + 0xd + lVar12) == cVar1)) {
                *(undefined8 *)(uVar26 + 0x18) = *(undefined8 *)(uVar6 + 0x38 + lVar12);
                *(ulonglong *)(*(longlong *)(uVar6 + 0x40 + lVar12) + 0x18) = uVar26;
                *(ulonglong *)(uVar6 + 0x40 + lVar12) = uVar26;
                iVar16 = local_78;
                goto LAB_1401395af;
              }
              lVar12 = lVar12 + 0x48;
            } while ((ulonglong)(uint)param_1[uVar11 * 0x113 + 0xb] * 0x48 != lVar12);
          }
          local_80 = &local_68;
          local_88 = local_70;
          uVar13 = FUN_140135a66(param_1 + uVar11 * 0x113 + 9,iVar16,(int)cVar1,local_74);
          if ((int)uVar13 != 0) goto LAB_140139789;
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
          *(ulonglong *)(local_68 + 0x1c) = uVar26;
          *(ulonglong *)(local_68 + 0x20) = uVar26;
          *(undefined1 *)((longlong)local_68 + 0xd) = *(undefined1 *)(uVar26 + 1);
          sVar3 = *(short *)(uVar26 + 2);
          *local_68 = sVar3;
          lVar12 = (longlong)sVar3 * (longlong)iVar17;
          uVar14 = (undefined4)((ulonglong)(lVar12 + (lVar12 >> 0x3f) + 0x8000) >> 0x10);
          *(undefined4 *)(local_68 + 2) = uVar14;
          *(undefined4 *)(local_68 + 4) = uVar14;
          *(ulonglong *)(uVar26 + 0x18) = uVar26;
          iVar16 = local_78;
        }
      }
LAB_1401395af:
      uVar26 = uVar26 + 0x48;
    } while (uVar26 < uVar29);
    do {
      if ((*(char *)(uVar19 + 1) == '\x04') && ((ulonglong)(uint)param_1[uVar11 * 0x113 + 0xb] != 0)
         ) {
        uVar26 = param_1[uVar11 * 0x113 + 0xc];
        iVar17 = (int)*(short *)(uVar19 + 2);
        lVar12 = 0;
        do {
          iVar9 = (int)*(short *)(uVar26 + lVar12);
          iVar27 = iVar9 - iVar17;
          if (iVar9 < iVar17) {
            iVar27 = iVar17 - iVar9;
          }
          if (iVar27 < iVar10) {
            *(undefined8 *)(uVar19 + 0x18) = *(undefined8 *)(uVar26 + 0x38 + lVar12);
            *(ulonglong *)(*(longlong *)(uVar26 + 0x40 + lVar12) + 0x18) = uVar19;
            *(ulonglong *)(uVar26 + 0x40 + lVar12) = uVar19;
            break;
          }
          lVar12 = lVar12 + 0x48;
        } while ((ulonglong)(uint)param_1[uVar11 * 0x113 + 0xb] * 0x48 != lVar12);
      }
      uVar19 = uVar19 + 0x48;
    } while (uVar19 < uVar29);
  }
  psVar15 = (short *)param_1[uVar11 * 0x113 + 0xc];
  uVar13 = 0;
  if ((psVar15 != (short *)0x0) && ((ulonglong)(uint)param_1[uVar11 * 0x113 + 0xb] != 0)) {
    local_70 = psVar15 + (ulonglong)(uint)param_1[uVar11 * 0x113 + 0xb] * 0x24;
    psVar18 = psVar15;
    do {
      lVar12 = *(longlong *)(psVar18 + 0x1c);
      if (lVar12 != 0) {
        do {
          *(short **)(lVar12 + 0x10) = psVar18;
          lVar12 = *(longlong *)(lVar12 + 0x18);
        } while (lVar12 != *(longlong *)(psVar18 + 0x1c));
      }
      psVar18 = psVar18 + 0x24;
    } while (psVar18 < local_70);
    do {
      pbVar21 = *(byte **)(psVar15 + 0x1c);
      plVar4 = (longlong *)(psVar15 + 0x10);
      uVar23 = 0;
      uVar20 = 0;
      pbVar24 = pbVar21;
      do {
        if ((*(longlong *)(pbVar21 + 0x28) == 0) ||
           (psVar18 = *(short **)(*(longlong *)(pbVar21 + 0x28) + 0x10), psVar18 == (short *)0x0)) {
          bVar31 = false;
        }
        else {
          bVar31 = psVar18 != psVar15;
        }
        bVar2 = *pbVar21;
        if (*(longlong *)(pbVar21 + 0x20) == 0) {
          if (bVar31) goto LAB_1401396ba;
        }
        else if ((bVar31) || (*(longlong *)(*(longlong *)(pbVar21 + 0x20) + 0x10) != 0)) {
LAB_1401396ba:
          pbVar30 = pbVar21 + 0x28;
          plVar8 = (longlong *)(psVar15 + 0x14);
          if (!bVar31) {
            pbVar30 = pbVar21 + 0x20;
            plVar8 = plVar4;
          }
          psVar18 = (short *)*plVar8;
          if (psVar18 == (short *)0x0) {
LAB_140139713:
            psVar18 = *(short **)(*(longlong *)pbVar30 + 0x10);
          }
          else {
            iVar17 = (int)*psVar15;
            iVar27 = (int)*psVar18;
            uVar28 = iVar27 - iVar17;
            if (iVar27 < iVar17) {
              uVar28 = iVar17 - iVar27;
            }
            iVar17 = (int)*(short *)(pbVar21 + 2);
            iVar27 = (int)*(short *)(*(longlong *)pbVar30 + 2);
            uVar25 = iVar27 - iVar17;
            if (iVar27 < iVar17) {
              uVar25 = iVar17 - iVar27;
            }
            if ((uVar25 & 0xffff) < (uVar28 & 0xffff)) goto LAB_140139713;
          }
          if (bVar31) {
            *(short **)(psVar15 + 0x14) = psVar18;
            *(byte *)(psVar18 + 6) = *(byte *)(psVar18 + 6) | 2;
            pbVar24 = *(byte **)(psVar15 + 0x1c);
          }
          else {
            *plVar4 = (longlong)psVar18;
          }
        }
        uVar23 = uVar23 + (bVar2 & 1);
        uVar20 = uVar20 + (byte)((byte)(bVar2 & 1) ^ 1);
        pbVar21 = *(byte **)(pbVar21 + 0x18);
      } while (pbVar21 != pbVar24);
      *(bool *)(psVar15 + 6) = uVar20 <= uVar23 && uVar23 != 0;
      if ((*(longlong *)(psVar15 + 0x14) != 0) && (*plVar4 != 0)) {
        psVar15[0x14] = 0;
        psVar15[0x15] = 0;
        psVar15[0x16] = 0;
        psVar15[0x17] = 0;
      }
      psVar15 = psVar15 + 0x24;
    } while (psVar15 < local_70);
    uVar13 = 0;
  }
LAB_140139789:
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_a8)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_a8);
}

