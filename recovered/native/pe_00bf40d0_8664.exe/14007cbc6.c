/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007cbc6 */

undefined8 FUN_14007cbc6(byte *param_1,uint param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  byte bVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  byte *pbVar24;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  uVar11 = param_3 & 0xffffffff;
  uVar17 = (ulonglong)param_2;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  uVar13 = *(int *)(lVar3 + uVar17 * 8) * iVar2 - iVar1;
  uVar12 = *(int *)(lVar3 + 4 + uVar17 * 8) * iVar2 - iVar1;
  uVar5 = *(int *)(lVar3 + uVar11 * 8) * iVar2 - iVar1;
  uVar19 = iVar2 * *(int *)(lVar3 + 4 + uVar11 * 8) - iVar1;
  uVar14 = uVar12;
  uVar7 = uVar5;
  if (param_4 != 0) {
    uVar14 = uVar13;
    uVar13 = uVar12;
    uVar7 = uVar19;
    uVar19 = uVar5;
  }
  piVar6 = (int *)(ulonglong)uVar19;
  lVar4 = *(longlong *)(param_1 + 0x88);
  pbVar24 = (byte *)(lVar4 + uVar17);
  bVar20 = *(byte *)(lVar4 + uVar17);
  if ((bVar20 & 4) != 0) {
    param_1[0x3c] = bVar20 >> 5;
    bVar20 = *pbVar24;
  }
  if ((bVar20 & 3) == 2) {
LAB_14007ceb3:
    param_1[0x38] = 0x14;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
  }
  else {
    piVar22 = (int *)(lVar3 + uVar11 * 8);
    piVar23 = (int *)(lVar3 + uVar17 * 8);
    if ((bVar20 & 3) == 0) {
      if ((*(byte *)(lVar4 + uVar11) & 3) == 1) {
        piVar22 = piVar22 + -2;
        uVar14 = uVar19;
      }
      else {
        uVar7 = (int)(uVar7 + uVar13) / 2;
        uVar14 = (int)(uVar19 + uVar14) / 2;
      }
      piVar23 = piVar23 + -2;
      pbVar24 = pbVar24 + -1;
      uVar13 = uVar7;
    }
    *(uint *)(param_1 + 0x40) = uVar13;
    *(uint *)(param_1 + 0x44) = uVar14;
joined_r0x00014007ccba:
    do {
      if (piVar22 <= piVar23) {
        piVar6 = (int *)FUN_14007d00e(param_1,uVar13,uVar14);
LAB_14007cecd:
        if ((char)piVar6 == '\0') {
          return 0;
        }
        break;
      }
      if ((pbVar24[1] & 3) != 0) {
        if ((pbVar24[1] & 3) == 1) {
          uVar7 = piVar23[2] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
          uVar5 = *(int *)(param_1 + 0xc) * piVar23[3] - *(int *)(param_1 + 8);
          uVar19 = uVar5;
          if (param_4 != 0) {
            uVar19 = uVar7;
            uVar7 = uVar5;
          }
          piVar6 = (int *)FUN_14007d00e(param_1,uVar7,uVar19);
          if ((char)piVar6 != '\0') break;
          pbVar24 = pbVar24 + 1;
          piVar23 = piVar23 + 2;
        }
        else {
          piVar6 = piVar23 + 4;
          if ((piVar22 < piVar6) ||
             (piVar6 = (int *)(CONCAT71((int7)((ulonglong)piVar6 >> 8),pbVar24[2]) &
                              0xffffffffffffff03), (char)piVar6 != '\x02')) goto LAB_14007ceb3;
          iVar1 = *(int *)(param_1 + 8);
          iVar2 = *(int *)(param_1 + 0xc);
          iVar15 = piVar23[2] * iVar2 - iVar1;
          iVar18 = piVar23[3] * iVar2 - iVar1;
          iVar9 = piVar23[4] * iVar2 - iVar1;
          iVar21 = piVar23[5] * iVar2 - iVar1;
          iVar16 = iVar18;
          iVar10 = iVar21;
          if (param_4 != 0) {
            iVar16 = iVar15;
            iVar10 = iVar9;
            iVar15 = iVar18;
            iVar9 = iVar21;
          }
          if (piVar22 < piVar23 + 6) {
            piVar6 = (int *)FUN_14007d24e(param_1,iVar15,iVar16,iVar9,iVar10,uVar13,uVar14);
            goto LAB_14007cecd;
          }
          uVar19 = piVar23[6] * iVar2 - iVar1;
          uVar5 = iVar2 * piVar23[7] - iVar1;
          uVar7 = uVar5;
          if (param_4 != 0) {
            uVar7 = uVar19;
            uVar19 = uVar5;
          }
          piVar6 = (int *)FUN_14007d24e(param_1,iVar15,iVar16,iVar9,iVar10,uVar19,uVar7);
          if ((char)piVar6 != '\0') break;
          pbVar24 = pbVar24 + 3;
          piVar23 = piVar23 + 6;
        }
        goto joined_r0x00014007ccba;
      }
      uVar7 = piVar23[2] * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
      uVar5 = *(int *)(param_1 + 0xc) * piVar23[3] - *(int *)(param_1 + 8);
      uVar19 = uVar5;
      if (param_4 != 0) {
        uVar19 = uVar7;
        uVar7 = uVar5;
      }
      pbVar24 = pbVar24 + 2;
      piVar23 = piVar23 + 4;
      while( true ) {
        if (piVar22 <= piVar23 + -2) {
          piVar6 = (int *)FUN_14007d0c6(param_1,uVar7,uVar19,uVar13,uVar14);
          goto LAB_14007cecd;
        }
        uVar8 = *piVar23 * *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
        uVar12 = *(int *)(param_1 + 0xc) * piVar23[1] - *(int *)(param_1 + 8);
        uVar5 = uVar12;
        if (param_4 == 0) {
          uVar5 = uVar8;
        }
        if (param_4 != 0) {
          uVar12 = uVar8;
        }
        piVar6 = (int *)0x0;
        if ((*pbVar24 & 3) != 0) break;
        piVar6 = (int *)FUN_14007d0c6(param_1,uVar7,uVar19,(int)(uVar7 + uVar5) / 2,
                                      (int)(uVar12 + uVar19) / 2);
        pbVar24 = pbVar24 + 1;
        piVar23 = piVar23 + 2;
        uVar7 = uVar5;
        uVar19 = uVar12;
        if ((char)piVar6 != '\0') goto LAB_14007ced1;
      }
      if ((*pbVar24 & 3) != 1) goto LAB_14007ceb3;
      piVar6 = (int *)FUN_14007d0c6(param_1,uVar7,uVar19,uVar5,uVar12);
    } while ((char)piVar6 == '\0');
  }
LAB_14007ced1:
  return CONCAT71((int7)((ulonglong)piVar6 >> 8),1);
}

