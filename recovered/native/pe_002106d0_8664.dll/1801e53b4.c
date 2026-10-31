/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e53b4 */

void FUN_1801e53b4(longlong param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  short sVar3;
  short *psVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  short *psVar10;
  longlong lVar11;
  short *psVar12;
  short *psVar13;
  int iVar14;
  short *psVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  short *psVar20;
  int iVar21;
  bool bVar22;
  undefined4 local_4c;
  
  psVar4 = *(short **)(param_1 + 0x60 + (ulonglong)param_2 * 0x898);
  if (psVar4 == (short *)0x0) {
    psVar20 = (short *)0x0;
LAB_1801e557a:
    bVar6 = 0;
    iVar21 = 0;
  }
  else {
    uVar7 = (ulonglong)*(uint *)((ulonglong)param_2 * 0x898 + param_1 + 0x58);
    psVar20 = psVar4 + uVar7 * 0x24;
    if (uVar7 == 0) goto LAB_1801e557a;
    psVar12 = (short *)0x0;
    psVar13 = psVar4;
    do {
      if ((*(byte *)(psVar13 + 6) & 4) == 0) {
        psVar15 = *(short **)(psVar13 + 0x10);
        if (*(longlong *)(psVar13 + 0xc) == 0) {
          if ((psVar15 != (short *)0x0) && (*(longlong *)(psVar15 + 0xc) != 0)) {
            *(undefined4 *)(psVar15 + 4) = *(undefined4 *)(*(longlong *)(psVar15 + 0xc) + 8);
            *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
            psVar10 = psVar13;
            goto LAB_1801e544b;
          }
        }
        else {
          *(undefined4 *)(psVar13 + 4) = *(undefined4 *)(*(longlong *)(psVar13 + 0xc) + 8);
          *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 4;
          bVar22 = psVar15 != (short *)0x0;
          psVar10 = psVar15;
          psVar15 = psVar13;
          if (bVar22) {
LAB_1801e544b:
            if (*(longlong *)(psVar10 + 0xc) == 0) {
              FUN_1801e654e(param_1,param_2,psVar15,psVar10);
              *(byte *)(psVar10 + 6) = *(byte *)(psVar10 + 6) | 4;
            }
          }
          if (psVar12 == (short *)0x0) {
            psVar12 = psVar13;
          }
        }
      }
      psVar13 = psVar13 + 0x24;
    } while (psVar13 < psVar20);
    local_4c = 0;
    iVar14 = 0;
    bVar22 = false;
    iVar21 = 0;
    psVar13 = psVar4;
    do {
      if ((*(byte *)(psVar13 + 6) & 4) == 0) {
        psVar15 = *(short **)(psVar13 + 0x10);
        if (psVar15 == (short *)0x0) {
          iVar21 = iVar21 + 1;
        }
        else if ((bVar22) &&
                ((*(int *)(psVar13 + 4) < iVar14 + 0x40 || (*(int *)(psVar15 + 4) < iVar14 + 0x40)))
                ) {
          iVar21 = iVar21 + 1;
LAB_1801e54b5:
          bVar22 = true;
        }
        else if (*(longlong *)(psVar15 + 0xc) == 0) {
          if (psVar15 < psVar13) {
            FUN_1801e654e(param_1,param_2,psVar15);
            *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 4;
            iVar14 = *(int *)(psVar13 + 4);
            goto LAB_1801e54b5;
          }
          if ((param_2 == 0) && (psVar12 == (short *)0x0)) {
            local_4c = FUN_1801e6574(param_1,psVar13,psVar15,0,0);
          }
          else {
            FUN_1801e6574(param_1,psVar13,psVar15,local_4c,param_2);
          }
          *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 4;
          *(byte *)(psVar15 + 6) = *(byte *)(psVar15 + 6) | 4;
          iVar14 = *(int *)(psVar15 + 4);
          bVar22 = true;
          psVar12 = psVar13;
        }
        else {
          FUN_1801e654e(param_1,param_2,psVar15);
          *(byte *)(psVar13 + 6) = *(byte *)(psVar13 + 6) | 4;
        }
      }
      psVar13 = psVar13 + 0x24;
    } while (psVar13 < psVar20);
    bVar6 = 1;
  }
  if (param_2 == 0) {
    lVar9 = (longlong)psVar20 - (longlong)psVar4;
    if (lVar9 == 0x1b0) {
      lVar11 = 0x120;
      lVar16 = 0x90;
      psVar12 = psVar4;
    }
    else {
      if (lVar9 != 0x360) goto LAB_1801e558a;
      lVar11 = 0x288;
      lVar16 = 0x168;
      psVar12 = psVar4 + 0x24;
    }
    uVar19 = *(int *)((longlong)psVar4 + lVar16 + 4) * 2 -
             (*(int *)(psVar12 + 2) + *(int *)((longlong)psVar4 + lVar11 + 4));
    uVar17 = -uVar19;
    if ((int)uVar17 < 0) {
      uVar17 = uVar19;
    }
    if ((*(short **)(psVar12 + 0x10) == psVar12 + 0x24) &&
       (*(longlong *)((longlong)psVar4 + lVar16 + 0x20) == (longlong)psVar4 + lVar16 + 0x48)) {
      lVar5 = *(longlong *)((longlong)psVar4 + lVar11 + 0x20);
      if ((lVar5 == (longlong)psVar4 + lVar11 + 0x48) && (uVar17 < 8)) {
        iVar14 = *(int *)((longlong)psVar4 + lVar16 + 8) * 2 - *(int *)(psVar12 + 4);
        iVar18 = *(int *)((longlong)psVar4 + lVar11 + 8) - iVar14;
        *(int *)((longlong)psVar4 + lVar11 + 8) = iVar14;
        piVar1 = (int *)(lVar5 + 8);
        *piVar1 = *piVar1 - iVar18;
        if (lVar9 == 0x360) {
          *(int *)(psVar4 + 0x124) = *(int *)(psVar4 + 0x124) - iVar18;
          *(int *)(psVar4 + 400) = *(int *)(psVar4 + 400) - iVar18;
        }
        pbVar2 = (byte *)((longlong)psVar4 + lVar11 + 0xc);
        *pbVar2 = *pbVar2 | 4;
        lVar9 = *(longlong *)((longlong)psVar4 + lVar11 + 0x20);
        if (lVar9 != 0) {
          pbVar2 = (byte *)(lVar9 + 0xc);
          *pbVar2 = *pbVar2 | 4;
        }
      }
    }
  }
LAB_1801e558a:
  psVar12 = psVar4;
  if (iVar21 != 0 && !(bool)(bVar6 ^ 1)) {
    do {
      if (((*(byte *)(psVar12 + 6) & 4) == 0) && (*(longlong *)(psVar12 + 0x14) != 0)) {
        FUN_1801e6725(*(longlong *)(psVar12 + 0x14),psVar12);
        *(byte *)(psVar12 + 6) = *(byte *)(psVar12 + 6) | 4;
        iVar21 = iVar21 + -1;
      }
      psVar12 = psVar12 + 0x24;
    } while (psVar12 < psVar20);
    if (iVar21 != 0 && !(bool)(bVar6 ^ 1)) {
      psVar12 = psVar4 + -0x24;
      psVar13 = psVar4;
      do {
        psVar15 = psVar12;
        if ((*(byte *)(psVar13 + 6) & 4) == 0) {
          do {
            psVar8 = psVar15;
            psVar10 = psVar13;
            if (psVar8 < psVar4) break;
            psVar15 = psVar8 + -0x24;
          } while ((*(byte *)(psVar8 + 6) & 4) == 0);
          do {
            psVar15 = psVar10;
            psVar10 = psVar15 + 0x24;
            if (psVar20 <= psVar10) {
              psVar10 = psVar8;
              if (psVar8 < psVar4) goto LAB_1801e5654;
              goto LAB_1801e561c;
            }
          } while ((*(byte *)(psVar15 + 0x2a) & 4) == 0);
          if (psVar8 < psVar4) {
LAB_1801e561c:
            FUN_1801e6725(psVar10,psVar13);
          }
          else {
            sVar3 = *psVar8;
            if (*psVar10 == sVar3) {
              iVar21 = *(int *)(psVar8 + 4);
            }
            else {
              iVar14 = *(int *)(psVar8 + 4);
              iVar21 = FUN_1801cb4a4((int)*psVar13 - (int)sVar3,*(int *)(psVar15 + 0x28) - iVar14,
                                     (int)*psVar10 - (int)sVar3);
              iVar21 = iVar21 + iVar14;
            }
            *(int *)(psVar13 + 4) = iVar21;
          }
        }
LAB_1801e5654:
        psVar13 = psVar13 + 0x24;
        psVar12 = psVar12 + 0x24;
      } while (psVar13 < psVar20);
    }
  }
  return;
}

