/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400372b4 */

int FUN_1400372b4(longlong *param_1,uint param_2)

{
  short *psVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  longlong *plVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong lVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  short *psVar20;
  ulonglong uVar21;
  uint uVar22;
  byte *pbVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  byte *pbVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  byte *pbVar31;
  bool bVar32;
  undefined1 auStackY_a8 [32];
  short *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14012ea80 ^ (ulonglong)auStackY_a8;
  uVar8 = (ulonglong)param_2;
  plVar6 = (longlong *)param_1[0x230];
  uVar21 = param_1[uVar8 * 0x113 + 10];
  if (uVar21 == 0) {
    uVar30 = 0;
  }
  else {
    uVar30 = (ulonglong)*(uint *)(param_1 + uVar8 * 0x113 + 9) * 0x48 + uVar21;
  }
  lVar24 = *param_1;
  puVar7 = (&PTR_DAT_1400f0d50)[*(int *)(*plVar6 + 8)];
  *(undefined4 *)(param_1 + uVar8 * 0x113 + 0xb) = 0;
  uVar22 = *(uint *)(param_1 + (ulonglong)(param_2 != 0) + 1);
  if (param_2 == 0) {
    iVar19 = FUN_14001ecff(0x40,*(uint *)(param_1 + 2));
    cVar2 = '\0';
  }
  else {
    cVar2 = puVar7[0x18];
    iVar19 = 0;
  }
  iVar11 = FUN_14001ecff(0x20,uVar22);
  lVar14 = (longlong)*(int *)((longlong)plVar6 + uVar8 * 0x204 + 0x110) * (longlong)(int)uVar22;
  uVar12 = (uint)((ulonglong)(lVar14 + (lVar14 >> 0x3f) + 0x8000) >> 0x10);
  uVar26 = 0x10;
  if ((int)uVar12 < 0x10) {
    uVar26 = uVar12;
  }
  iVar13 = FUN_14001ecff(uVar26,uVar22);
  if (uVar21 < uVar30) {
    uVar29 = uVar21;
    do {
      if ((iVar19 <= *(short *)(uVar29 + 10)) && (*(short *)(uVar29 + 4) <= iVar11)) {
        cVar3 = *(char *)(uVar29 + 1);
        if ((cVar3 != 4) &&
           ((*(longlong *)(uVar29 + 0x28) == 0 || (iVar19 * 3 <= *(short *)(uVar29 + 10) * 2)))) {
          if ((ulonglong)*(uint *)(param_1 + uVar8 * 0x113 + 0xb) == 0) {
            iVar18 = (int)*(short *)(uVar29 + 2);
          }
          else {
            lVar14 = param_1[uVar8 * 0x113 + 0xc];
            iVar18 = (int)*(short *)(uVar29 + 2);
            lVar16 = 0;
            do {
              iVar25 = (int)*(short *)(lVar14 + lVar16);
              iVar9 = iVar25 - iVar18;
              if (iVar25 < iVar18) {
                iVar9 = iVar18 - iVar25;
              }
              if ((iVar9 < iVar13) && (*(char *)(lVar14 + 0xd + lVar16) == cVar3)) {
                *(undefined8 *)(uVar29 + 0x18) = *(undefined8 *)(lVar14 + 0x38 + lVar16);
                *(ulonglong *)(*(longlong *)(lVar14 + 0x40 + lVar16) + 0x18) = uVar29;
                *(ulonglong *)(lVar14 + 0x40 + lVar16) = uVar29;
                goto LAB_1400374f7;
              }
              lVar16 = lVar16 + 0x48;
            } while ((ulonglong)*(uint *)(param_1 + uVar8 * 0x113 + 0xb) * 0x48 != lVar16);
          }
          iVar18 = FUN_1400339ae((longlong)(param_1 + uVar8 * 0x113 + 9),iVar18,(int)cVar3,cVar2,
                                 lVar24,(ulonglong *)&local_68);
          if (iVar18 != 0) goto LAB_1400376d1;
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
          *(ulonglong *)(local_68 + 0x1c) = uVar29;
          *(ulonglong *)(local_68 + 0x20) = uVar29;
          *(undefined1 *)((longlong)local_68 + 0xd) = *(undefined1 *)(uVar29 + 1);
          sVar5 = *(short *)(uVar29 + 2);
          *local_68 = sVar5;
          lVar14 = (longlong)sVar5 * (longlong)(int)uVar22;
          uVar15 = (undefined4)((ulonglong)(lVar14 + (lVar14 >> 0x3f) + 0x8000) >> 0x10);
          *(undefined4 *)(local_68 + 2) = uVar15;
          *(undefined4 *)(local_68 + 4) = uVar15;
          *(ulonglong *)(uVar29 + 0x18) = uVar29;
        }
      }
LAB_1400374f7:
      uVar29 = uVar29 + 0x48;
    } while (uVar29 < uVar30);
    do {
      if ((*(char *)(uVar21 + 1) == '\x04') &&
         ((ulonglong)*(uint *)(param_1 + uVar8 * 0x113 + 0xb) != 0)) {
        lVar24 = param_1[uVar8 * 0x113 + 0xc];
        iVar19 = (int)*(short *)(uVar21 + 2);
        lVar14 = 0;
        do {
          iVar18 = (int)*(short *)(lVar24 + lVar14);
          iVar11 = iVar18 - iVar19;
          if (iVar18 < iVar19) {
            iVar11 = iVar19 - iVar18;
          }
          if (iVar11 < iVar13) {
            *(undefined8 *)(uVar21 + 0x18) = *(undefined8 *)(lVar24 + 0x38 + lVar14);
            *(ulonglong *)(*(longlong *)(lVar24 + 0x40 + lVar14) + 0x18) = uVar21;
            *(ulonglong *)(lVar24 + 0x40 + lVar14) = uVar21;
            break;
          }
          lVar14 = lVar14 + 0x48;
        } while ((ulonglong)*(uint *)(param_1 + uVar8 * 0x113 + 0xb) * 0x48 != lVar14);
      }
      uVar21 = uVar21 + 0x48;
    } while (uVar21 < uVar30);
  }
  psVar17 = (short *)param_1[uVar8 * 0x113 + 0xc];
  iVar18 = 0;
  if ((psVar17 != (short *)0x0) && ((ulonglong)*(uint *)(param_1 + uVar8 * 0x113 + 0xb) != 0)) {
    psVar1 = psVar17 + (ulonglong)*(uint *)(param_1 + uVar8 * 0x113 + 0xb) * 0x24;
    psVar20 = psVar17;
    do {
      lVar24 = *(longlong *)(psVar20 + 0x1c);
      if (lVar24 != 0) {
        do {
          *(short **)(lVar24 + 0x10) = psVar20;
          lVar24 = *(longlong *)(lVar24 + 0x18);
        } while (lVar24 != *(longlong *)(psVar20 + 0x1c));
      }
      psVar20 = psVar20 + 0x24;
    } while (psVar20 < psVar1);
    do {
      pbVar23 = *(byte **)(psVar17 + 0x1c);
      plVar6 = (longlong *)(psVar17 + 0x10);
      uVar26 = 0;
      uVar22 = 0;
      pbVar27 = pbVar23;
      do {
        if ((*(longlong *)(pbVar23 + 0x28) == 0) ||
           (psVar20 = *(short **)(*(longlong *)(pbVar23 + 0x28) + 0x10), psVar20 == (short *)0x0)) {
          bVar32 = false;
        }
        else {
          bVar32 = psVar20 != psVar17;
        }
        bVar4 = *pbVar23;
        if (*(longlong *)(pbVar23 + 0x20) == 0) {
          if (bVar32) goto LAB_140037602;
        }
        else if ((bVar32) || (*(longlong *)(*(longlong *)(pbVar23 + 0x20) + 0x10) != 0)) {
LAB_140037602:
          pbVar31 = pbVar23 + 0x28;
          plVar10 = (longlong *)(psVar17 + 0x14);
          if (!bVar32) {
            pbVar31 = pbVar23 + 0x20;
            plVar10 = plVar6;
          }
          psVar20 = (short *)*plVar10;
          if (psVar20 == (short *)0x0) {
LAB_14003765b:
            psVar20 = *(short **)(*(longlong *)pbVar31 + 0x10);
          }
          else {
            iVar19 = (int)*psVar17;
            iVar11 = (int)*psVar20;
            uVar12 = iVar11 - iVar19;
            if (iVar11 < iVar19) {
              uVar12 = iVar19 - iVar11;
            }
            iVar19 = (int)*(short *)(pbVar23 + 2);
            iVar11 = (int)*(short *)(*(longlong *)pbVar31 + 2);
            uVar28 = iVar11 - iVar19;
            if (iVar11 < iVar19) {
              uVar28 = iVar19 - iVar11;
            }
            if ((uVar28 & 0xffff) < (uVar12 & 0xffff)) goto LAB_14003765b;
          }
          if (bVar32) {
            *(short **)(psVar17 + 0x14) = psVar20;
            *(byte *)(psVar20 + 6) = *(byte *)(psVar20 + 6) | 2;
            pbVar27 = *(byte **)(psVar17 + 0x1c);
          }
          else {
            *plVar6 = (longlong)psVar20;
          }
        }
        uVar26 = uVar26 + (bVar4 & 1);
        uVar22 = uVar22 + (byte)((byte)(bVar4 & 1) ^ 1);
        pbVar23 = *(byte **)(pbVar23 + 0x18);
      } while (pbVar23 != pbVar27);
      *(bool *)(psVar17 + 6) = uVar22 <= uVar26 && uVar26 != 0;
      if ((*(longlong *)(psVar17 + 0x14) != 0) && (*plVar6 != 0)) {
        psVar17[0x14] = 0;
        psVar17[0x15] = 0;
        psVar17[0x16] = 0;
        psVar17[0x17] = 0;
      }
      psVar17 = psVar17 + 0x24;
    } while (psVar17 < psVar1);
    iVar18 = 0;
  }
LAB_1400376d1:
  if (DAT_14012ea80 == (local_60 ^ (ulonglong)auStackY_a8)) {
    return iVar18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_60 ^ (ulonglong)auStackY_a8);
}

