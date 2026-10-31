/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140061657 */

undefined8 FUN_140061657(longlong param_1,byte *param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  bool bVar14;
  ulonglong uVar15;
  byte *pbVar16;
  uint *puVar17;
  ulonglong *puVar18;
  longlong local_50;
  
  lVar1 = param_1 + 0xb0;
  *(longlong *)(param_1 + 0x4b0) = lVar1;
  puVar18 = (ulonglong *)(param_1 + 0x4b8);
  *(ulonglong **)(param_1 + 0x650) = puVar18;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(byte **)(param_1 + 0x4c0) = param_2;
  pbVar16 = param_2 + param_3;
  *(byte **)(param_1 + 0x4c8) = pbVar16;
  *(byte **)(param_1 + 0x4b8) = param_2;
  if (param_3 != 0) {
    local_50 = 0x4b8;
    bVar3 = false;
    do {
      puVar4 = *(uint **)(param_1 + 0x4b0);
      pbVar12 = param_2 + 1;
      bVar2 = *param_2;
      uVar10 = (uint)bVar2;
      bVar14 = bVar3;
      switch(bVar2) {
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xe:
      case 0xf:
      case 0x15:
      case 0x16:
      case 0x1e:
      case 0x1f:
        goto switchD_1400616f7_caseD_1;
      case 2:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
switchD_1400616f7_caseD_2:
        if (bVar2 < 0x20) goto switchD_1400616f7_caseD_1;
        if (bVar2 < 0xf7) {
          uVar10 = uVar10 - 0x8b;
          pbVar13 = pbVar12;
        }
        else {
          pbVar13 = param_2 + 2;
          if (pbVar16 < pbVar13) goto switchD_1400616f7_caseD_1;
          if (bVar2 < 0xfb) {
            uVar10 = (uVar10 * 0x100 + (uint)*pbVar12) - 0xf694;
          }
          else {
            uVar10 = 0xfa94 - (uVar10 * 0x100 | (uint)*pbVar12);
          }
        }
        uVar11 = uVar10 << 0x10;
        if (bVar3) {
          uVar11 = uVar10;
        }
        goto LAB_140061993;
      case 10:
        lVar6 = 0x16;
        break;
      case 0xb:
        lVar6 = 0x18;
        break;
      case 0xc:
        if (pbVar12 < pbVar16) {
          pbVar12 = param_2 + 2;
          lVar6 = 4;
          if (param_2[1] == 7) break;
          lVar6 = 0x14;
          pbVar13 = pbVar12;
          if (param_2[1] == 0xc) goto LAB_1400617cf;
        }
        goto switchD_1400616f7_caseD_1;
      case 0xd:
        lVar6 = 2;
        break;
      default:
        if (uVar10 != 0xff) goto switchD_1400616f7_caseD_2;
        pbVar13 = param_2 + 5;
        if (pbVar13 <= pbVar16) {
          uVar10 = *(uint *)(param_2 + 1);
          uVar11 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8;
          uVar10 = uVar11 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
          if (uVar10 - 0x7d01 < 0xffff05ff) {
            bVar14 = true;
            uVar11 = uVar10;
            if (bVar3) goto switchD_1400616f7_caseD_1;
          }
          else {
            uVar11 = uVar11 << 0x10;
            if (bVar3) {
              uVar11 = uVar10;
            }
          }
LAB_140061993:
          if ((longlong)puVar4 - lVar1 < 0x3fd) {
            *puVar4 = uVar11;
            puVar17 = puVar4 + 1;
            bVar3 = bVar14;
            goto LAB_1400619ad;
          }
        }
        goto switchD_1400616f7_caseD_1;
      }
      pbVar13 = pbVar12;
      if (bVar3) break;
LAB_1400617cf:
      if ((longlong)puVar4 - lVar1 >> 2 < (longlong)*(int *)(&DAT_1400f9ef0 + lVar6 * 4)) {
        return 0xa1;
      }
      uVar10 = (int)lVar6 - 2U >> 1;
      if (0xb < uVar10) break;
      puVar4 = puVar4 + -(longlong)*(int *)(&DAT_1400f9ef0 + lVar6 * 4);
      puVar17 = puVar4;
      switch(uVar10) {
      case 0:
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *puVar4;
        *(uint *)(param_1 + 0x40) = puVar4[1];
        uVar10 = 0;
        goto LAB_140061a1f;
      case 1:
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *puVar4;
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + puVar4[1];
        *(uint *)(param_1 + 0x40) = puVar4[2];
        uVar10 = puVar4[3];
LAB_140061a1f:
        *(uint *)(param_1 + 0x44) = uVar10;
        return 0;
      default:
        goto switchD_1400616f7_caseD_1;
      case 9:
        puVar17 = puVar4 + 1;
        uVar10 = FUN_14001ecff(*puVar4,puVar4[1]);
        *puVar4 = uVar10;
        bVar3 = false;
        break;
      case 10:
        uVar10 = (uint)*(short *)((longlong)puVar4 + 2);
        if (*(longlong *)(param_1 + 0x688) != 0) {
          puVar4 = (uint *)FUN_14001ccf2(uVar10,*(longlong *)(param_1 + 0x688));
          if (puVar4 == (uint *)0x0) goto switchD_1400616f7_caseD_1;
          uVar10 = *puVar4;
        }
        if ((((int)uVar10 < 0) || (*(int *)(param_1 + 0x674) <= (int)uVar10)) || (0x620 < local_50))
        goto switchD_1400616f7_caseD_1;
        *puVar18 = (ulonglong)pbVar13;
        lVar6 = param_1 + local_50;
        uVar8 = (ulonglong)uVar10;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x678) + uVar8 * 8);
        *(longlong *)(lVar6 + 0x20) = lVar5;
        if (*(longlong *)(param_1 + 0x680) == 0) {
          uVar15 = (ulonglong)*(uint *)(param_1 + 0x670);
          if ((int)*(uint *)(param_1 + 0x670) < 1) {
            uVar15 = 0;
          }
          lVar5 = lVar5 + uVar15;
          *(longlong *)(lVar6 + 0x20) = lVar5;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x678) + 8 + uVar8 * 8);
        }
        else {
          lVar9 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x680) + uVar8 * 4) + lVar5;
        }
        *(longlong *)(lVar6 + 0x28) = lVar9;
        *(longlong *)(lVar6 + 0x18) = lVar5;
        if (lVar5 == 0) goto switchD_1400616f7_caseD_1;
        local_50 = local_50 + 0x18;
        *(longlong **)(param_1 + 0x650) = (longlong *)(lVar6 + 0x18);
        pbVar13 = *(byte **)(lVar6 + 0x20);
        pbVar16 = *(byte **)(lVar6 + 0x28);
        break;
      case 0xb:
        if (local_50 < 0x4b9) goto switchD_1400616f7_caseD_1;
        lVar6 = param_1 + local_50;
        puVar7 = (undefined8 *)(lVar6 + -0x18);
        local_50 = local_50 + -0x18;
        pbVar13 = (byte *)*puVar7;
        pbVar16 = *(byte **)(lVar6 + -8);
        *(undefined8 **)(param_1 + 0x650) = puVar7;
      }
LAB_1400619ad:
      *(uint **)(param_1 + 0x4b0) = puVar17;
      puVar18 = (ulonglong *)(param_1 + local_50);
      param_2 = pbVar13;
    } while (pbVar13 < pbVar16);
switchD_1400616f7_caseD_1:
  }
  return 0xa0;
}

