/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400335bd */

int FUN_1400335bd(longlong *param_1,uint param_2)

{
  short *psVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  short *psVar11;
  uint uVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 auStackY_c8 [32];
  short *local_98;
  ulonglong local_90;
  short *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14012ea80 ^ (ulonglong)auStackY_c8;
  uVar6 = (ulonglong)param_2;
  lVar9 = param_1[0x230];
  uVar21 = param_1[uVar6 * 0x113 + 10];
  if (uVar21 == 0) {
    local_90 = 0;
  }
  else {
    local_90 = uVar21 + (ulonglong)*(uint *)(param_1 + uVar6 * 0x113 + 9) * 0x48;
  }
  lVar5 = *param_1;
  *(undefined4 *)(param_1 + uVar6 * 0x113 + 0xb) = 0;
  uVar12 = *(uint *)(param_1 + (ulonglong)(param_2 != 0) + 1);
  iVar8 = *(int *)(uVar6 * 0x1c4 + lVar9 + 0x110);
  lVar9 = (longlong)iVar8 * (longlong)(int)uVar12;
  if (0x10 < (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10)) {
    iVar8 = FUN_14001ecff(0x10,uVar12);
  }
  for (; uVar21 < local_90; uVar21 = uVar21 + 0x48) {
    if ((ulonglong)*(uint *)(param_1 + uVar6 * 0x113 + 0xb) == 0) {
LAB_14003378a:
      iVar22 = FUN_1400339ae((longlong)(param_1 + uVar6 * 0x113 + 9),(int)*(short *)(uVar21 + 2),
                             (int)*(char *)(uVar21 + 1),'\0',lVar5,(ulonglong *)&local_68);
      if (iVar22 != 0) goto LAB_140033973;
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
      *(ulonglong *)(local_68 + 0x1c) = uVar21;
      *(ulonglong *)(local_68 + 0x20) = uVar21;
      *(undefined1 *)((longlong)local_68 + 0xd) = *(undefined1 *)(uVar21 + 1);
      sVar3 = *(short *)(uVar21 + 2);
      *local_68 = sVar3;
      lVar9 = (longlong)sVar3 * (longlong)(int)uVar12;
      uVar10 = (undefined4)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10);
      *(undefined4 *)(local_68 + 2) = uVar10;
      *(undefined4 *)(local_68 + 4) = uVar10;
      *(ulonglong *)(uVar21 + 0x18) = uVar21;
    }
    else {
      iVar22 = 0xffff;
      uVar18 = 0;
      local_98 = (short *)0x0;
      do {
        if (*(char *)(param_1[uVar6 * 0x113 + 0xc] + 0xd + uVar18 * 0x48) == *(char *)(uVar21 + 1))
        {
          psVar11 = (short *)(param_1[uVar6 * 0x113 + 0xc] + uVar18 * 0x48);
          iVar15 = (int)*(short *)(uVar21 + 2) - (int)*psVar11;
          iVar14 = -iVar15;
          if (iVar14 < 0) {
            iVar14 = iVar15;
          }
          if (iVar14 < iVar22 && iVar14 < iVar8) {
            if (*(longlong *)(uVar21 + 0x20) != 0) {
              iVar15 = 0;
              lVar9 = *(longlong *)(psVar11 + 0x1c);
              do {
                if (*(longlong *)(lVar9 + 0x20) != 0) {
                  sVar3 = *(short *)(*(longlong *)(uVar21 + 0x20) + 2);
                  sVar4 = *(short *)(*(longlong *)(lVar9 + 0x20) + 2);
                  iVar15 = (int)sVar4 - (int)sVar3;
                  if (sVar4 < sVar3) {
                    iVar15 = (int)sVar3 - (int)sVar4;
                  }
                  if (iVar8 <= iVar15) break;
                }
                lVar9 = *(longlong *)(lVar9 + 0x18);
              } while (lVar9 != *(longlong *)(psVar11 + 0x1c));
              if (iVar8 <= iVar15) goto LAB_140033756;
            }
            local_98 = psVar11;
            iVar22 = iVar14;
          }
        }
LAB_140033756:
        uVar18 = uVar18 + 1;
      } while (uVar18 != *(uint *)(param_1 + uVar6 * 0x113 + 0xb));
      if (local_98 == (short *)0x0) goto LAB_14003378a;
      *(undefined8 *)(uVar21 + 0x18) = *(undefined8 *)(local_98 + 0x1c);
      *(ulonglong *)(*(longlong *)(local_98 + 0x20) + 0x18) = uVar21;
      *(ulonglong *)(local_98 + 0x20) = uVar21;
    }
  }
  psVar11 = (short *)param_1[uVar6 * 0x113 + 0xc];
  iVar22 = 0;
  if ((psVar11 != (short *)0x0) && ((ulonglong)*(uint *)(param_1 + uVar6 * 0x113 + 0xb) != 0)) {
    psVar1 = psVar11 + (ulonglong)*(uint *)(param_1 + uVar6 * 0x113 + 0xb) * 0x24;
    psVar13 = psVar11;
    do {
      lVar9 = *(longlong *)(psVar13 + 0x1c);
      if (lVar9 != 0) {
        do {
          *(short **)(lVar9 + 0x10) = psVar13;
          lVar9 = *(longlong *)(lVar9 + 0x18);
        } while (lVar9 != *(longlong *)(psVar13 + 0x1c));
      }
      psVar13 = psVar13 + 0x24;
    } while (psVar13 < psVar1);
    do {
      pbVar17 = *(byte **)(psVar11 + 0x1c);
      uVar12 = 0;
      if (pbVar17 != (byte *)0x0) {
        uVar16 = 0;
        pbVar19 = pbVar17;
        do {
          bVar2 = *pbVar19;
          lVar9 = *(longlong *)(pbVar19 + 0x28);
          if (lVar9 == 0) {
            lVar5 = *(longlong *)(pbVar19 + 0x20);
            if (*(longlong *)(pbVar19 + 0x20) != 0) {
LAB_1400338ba:
              lVar9 = lVar5;
              bVar7 = false;
              psVar13 = psVar11 + 0x10;
              goto LAB_1400338bf;
            }
          }
          else if ((*(longlong *)(pbVar19 + 0x20) != 0) || (*(short **)(lVar9 + 0x10) != psVar11)) {
            lVar5 = *(longlong *)(pbVar19 + 0x20);
            if (*(short **)(lVar9 + 0x10) == psVar11) goto LAB_1400338ba;
            bVar7 = true;
            psVar13 = psVar11 + 0x14;
LAB_1400338bf:
            psVar13 = *(short **)psVar13;
            if (psVar13 == (short *)0x0) {
LAB_140033903:
              psVar13 = *(short **)(lVar9 + 0x10);
            }
            else {
              iVar22 = (int)*psVar11;
              iVar8 = (int)*psVar13;
              uVar20 = iVar8 - iVar22;
              if (iVar8 < iVar22) {
                uVar20 = iVar22 - iVar8;
              }
              sVar3 = *(short *)(pbVar19 + 2);
              sVar4 = *(short *)(lVar9 + 2);
              iVar8 = (int)sVar4 - (int)sVar3;
              if (sVar4 < sVar3) {
                iVar8 = (int)sVar3 - (int)sVar4;
              }
              if (iVar8 < (int)(uVar20 & 0xffff)) goto LAB_140033903;
            }
            if (bVar7) {
              *(short **)(psVar11 + 0x14) = psVar13;
              *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 2;
              pbVar17 = *(byte **)(psVar11 + 0x1c);
            }
            else {
              *(short **)(psVar11 + 0x10) = psVar13;
            }
          }
          uVar12 = uVar12 + (bVar2 & 1);
          uVar16 = uVar16 + (byte)((byte)(bVar2 & 1) ^ 1);
          pbVar19 = *(byte **)(pbVar19 + 0x18);
        } while (pbVar19 != pbVar17);
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
    } while (psVar11 < psVar1);
    iVar22 = 0;
  }
LAB_140033973:
  if (DAT_14012ea80 != (local_60 ^ (ulonglong)auStackY_c8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_60 ^ (ulonglong)auStackY_c8);
  }
  return iVar22;
}

