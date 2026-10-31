/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022f586 */

undefined8 FUN_18022f586(longlong param_1,uint param_2,ulonglong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  byte *pbVar18;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  param_3 = param_3 & 0xffffffff;
  uVar11 = (ulonglong)param_2;
  iVar13 = *(int *)(param_1 + 8);
  iVar9 = *(int *)(param_1 + 0xc);
  iVar8 = *(int *)(lVar1 + uVar11 * 8) * iVar9 - iVar13;
  iVar7 = *(int *)(lVar1 + 4 + uVar11 * 8) * iVar9 - iVar13;
  iVar4 = *(int *)(lVar1 + param_3 * 8) * iVar9 - iVar13;
  iVar13 = iVar9 * *(int *)(lVar1 + 4 + param_3 * 8) - iVar13;
  iVar9 = iVar7;
  iVar5 = iVar4;
  if (param_4 != 0) {
    iVar9 = iVar8;
    iVar8 = iVar7;
    iVar5 = iVar13;
    iVar13 = iVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x88);
  pbVar18 = (byte *)(lVar2 + uVar11);
  bVar14 = *(byte *)(lVar2 + uVar11);
  if ((bVar14 & 4) != 0) {
    *(byte *)(param_1 + 0x3c) = bVar14 >> 5;
    bVar14 = *pbVar18;
  }
  if ((bVar14 & 3) == 2) {
LAB_18022f873:
    *(undefined4 *)(param_1 + 0x38) = 0x14;
  }
  else {
    piVar16 = (int *)(lVar1 + param_3 * 8);
    piVar17 = (int *)(lVar1 + uVar11 * 8);
    if ((bVar14 & 3) == 0) {
      if ((*(byte *)(lVar2 + param_3) & 3) == 1) {
        piVar16 = piVar16 + -2;
        iVar9 = iVar13;
      }
      else {
        iVar5 = (iVar5 + iVar8) / 2;
        iVar9 = (iVar13 + iVar9) / 2;
      }
      piVar17 = piVar17 + -2;
      pbVar18 = pbVar18 + -1;
      iVar8 = iVar5;
    }
    *(int *)(param_1 + 0x40) = iVar8;
    *(int *)(param_1 + 0x44) = iVar9;
joined_r0x00018022f67a:
    do {
      if (piVar16 <= piVar17) {
        cVar3 = FUN_18022f9ce(param_1,iVar8,iVar9);
LAB_18022f88d:
        if (cVar3 != '\0') {
          return 1;
        }
        return 0;
      }
      if ((pbVar18[1] & 3) != 0) {
        if ((pbVar18[1] & 3) == 1) {
          iVar5 = piVar17[2] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
          iVar4 = *(int *)(param_1 + 0xc) * piVar17[3] - *(int *)(param_1 + 8);
          iVar13 = iVar4;
          if (param_4 != 0) {
            iVar13 = iVar5;
            iVar5 = iVar4;
          }
          cVar3 = FUN_18022f9ce(param_1,iVar5,iVar13);
          if (cVar3 != '\0') {
            return 1;
          }
          pbVar18 = pbVar18 + 1;
          piVar17 = piVar17 + 2;
        }
        else {
          if ((piVar16 < piVar17 + 4) || ((pbVar18[2] & 3) != 2)) goto LAB_18022f873;
          iVar13 = *(int *)(param_1 + 8);
          iVar5 = *(int *)(param_1 + 0xc);
          iVar10 = piVar17[2] * iVar5 - iVar13;
          iVar12 = piVar17[3] * iVar5 - iVar13;
          iVar4 = piVar17[4] * iVar5 - iVar13;
          iVar15 = piVar17[5] * iVar5 - iVar13;
          iVar7 = iVar15;
          iVar6 = iVar12;
          if (param_4 != 0) {
            iVar7 = iVar4;
            iVar4 = iVar15;
            iVar6 = iVar10;
            iVar10 = iVar12;
          }
          if (piVar16 < piVar17 + 6) {
            cVar3 = FUN_18022fc0e(param_1,iVar10,iVar6,iVar4,iVar7,iVar8,iVar9);
            goto LAB_18022f88d;
          }
          iVar12 = piVar17[6] * iVar5 - iVar13;
          iVar13 = iVar5 * piVar17[7] - iVar13;
          iVar5 = iVar13;
          if (param_4 != 0) {
            iVar5 = iVar12;
            iVar12 = iVar13;
          }
          cVar3 = FUN_18022fc0e(param_1,iVar10,iVar6,iVar4,iVar7,iVar12,iVar5);
          if (cVar3 != '\0') {
            return 1;
          }
          pbVar18 = pbVar18 + 3;
          piVar17 = piVar17 + 6;
        }
        goto joined_r0x00018022f67a;
      }
      iVar5 = piVar17[2] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
      iVar4 = *(int *)(param_1 + 0xc) * piVar17[3] - *(int *)(param_1 + 8);
      iVar13 = iVar4;
      if (param_4 != 0) {
        iVar13 = iVar5;
        iVar5 = iVar4;
      }
      pbVar18 = pbVar18 + 2;
      piVar17 = piVar17 + 4;
      while( true ) {
        if (piVar16 <= piVar17 + -2) {
          cVar3 = FUN_18022fa86(param_1,iVar5,iVar13,iVar8,iVar9);
          goto LAB_18022f88d;
        }
        iVar6 = *piVar17 * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        iVar7 = *(int *)(param_1 + 0xc) * piVar17[1] - *(int *)(param_1 + 8);
        iVar4 = iVar7;
        if (param_4 == 0) {
          iVar4 = iVar6;
        }
        if (param_4 != 0) {
          iVar7 = iVar6;
        }
        if ((*pbVar18 & 3) != 0) break;
        cVar3 = FUN_18022fa86(param_1,iVar5,iVar13,(iVar5 + iVar4) / 2,(iVar7 + iVar13) / 2);
        pbVar18 = pbVar18 + 1;
        piVar17 = piVar17 + 2;
        iVar5 = iVar4;
        iVar13 = iVar7;
        if (cVar3 != '\0') {
          return 1;
        }
      }
      if ((*pbVar18 & 3) != 1) goto LAB_18022f873;
      cVar3 = FUN_18022fa86(param_1,iVar5,iVar13,iVar4,iVar7);
    } while (cVar3 == '\0');
  }
  return 1;
}

