/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400673be */

void FUN_1400673be(undefined1 (*param_1) [32],longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_d8 [40];
  undefined1 (*local_b0) [32];
  longlong local_a8;
  uint *local_a0;
  undefined1 (*local_98) [32];
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  int *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_2 + 0xf0);
  uVar14 = 0;
  FUN_1400b3c00(param_1,0,0x150);
  *(undefined4 *)*param_1 = *(undefined4 *)(param_2 + 0x38);
  local_a0 = (uint *)(*param_1 + 0xc);
  local_a8 = param_2;
  FUN_1400678c1(lVar5,(int *)local_a0,(int *)(*param_1 + 0x10),(int *)(*param_1 + 0x14));
  FUN_14006791d(lVar5,&local_50,(longlong *)&local_70);
  FUN_14006793e(lVar5,&local_58,&local_78);
  FUN_14006795f(lVar5,&local_60,&local_80);
  FUN_140067980(lVar5,&local_68,&local_88);
  iVar3 = FUN_1400679a1(lVar5);
  if (iVar3 == 1) {
    if ((local_50 == 0) ||
       ((((local_50 == 4 && (*local_70 < -0x780000)) && (local_70[1] < -0x780000)) &&
        ((0x3700000 < local_70[2] && (0x3700000 < local_70[3])))))) {
      *(undefined4 *)(param_1[2] + 0x10) = 0xff87ffff;
      iVar3 = *(int *)*param_1;
      lVar5 = (longlong)iVar3 * -0x780001;
      *(uint *)(param_1[2] + 0x14) =
           ((int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + 0x8000U & 0xffff0000) -
           0x8000;
      *(int *)(param_1[2] + 0x18) = iVar3;
      *(undefined4 *)param_1[2] = 0x31;
      lVar5 = (longlong)*(int *)(local_a8 + 0x130) * 2 + 0x3700001;
      *(int *)(param_1[1] + 0x10) = (int)lVar5;
      lVar5 = lVar5 * iVar3;
      *(uint *)(param_1[1] + 0x14) =
           (int)((ulonglong)(lVar5 + 0x8000 + (lVar5 >> 0x3f)) >> 0x10) + 0x8000U & 0xffff0000 |
           0x8000;
      *(int *)(param_1[1] + 0x18) = iVar3;
      *(undefined4 *)param_1[1] = 0x32;
      (*param_1)[9] = 1;
      goto LAB_140067885;
    }
LAB_14006756d:
    uVar9 = *(uint *)(*param_1 + 4);
    uVar14 = 0;
    uVar10 = 0;
    do {
      iVar3 = local_70[uVar10];
      uVar6 = (ulonglong)uVar9;
      *(int *)(param_1[3] + uVar6 * 0x14) = iVar3;
      iVar11 = local_70[uVar10 + 1];
      *(int *)(param_1[3] + uVar6 * 0x14 + 4) = iVar11;
      uVar7 = iVar11 - iVar3;
      if (-1 < (int)uVar7) {
        piVar1 = (int *)(param_1[3] + uVar6 * 0x14);
        if ((int)uVar14 < (int)uVar7) {
          uVar14 = uVar7;
        }
        if (uVar10 != 0) {
          piVar1[1] = iVar11 + *(int *)(local_a8 + 0x130) * 2;
          iVar11 = iVar3 + *(int *)(local_a8 + 0x130) * 2;
          *piVar1 = iVar11;
        }
        *(bool *)(piVar1 + 4) = uVar10 == 0;
        piVar1[2] = iVar11;
        uVar9 = uVar9 + 1;
        *(uint *)(*param_1 + 4) = uVar9;
      }
      uVar10 = uVar10 + 2;
    } while (uVar10 < local_50);
  }
  else if (local_50 != 0) goto LAB_14006756d;
  if (local_58 != 0) {
    uVar9 = *(uint *)(*param_1 + 4);
    uVar10 = 0;
    do {
      iVar3 = *(int *)(local_78 + uVar10 * 4);
      uVar6 = (ulonglong)uVar9;
      *(int *)(param_1[3] + uVar6 * 0x14) = iVar3;
      iVar11 = *(int *)(local_78 + 4 + uVar10 * 4);
      *(int *)(param_1[3] + uVar6 * 0x14 + 4) = iVar11;
      uVar7 = iVar11 - iVar3;
      if (-1 < (int)uVar7) {
        if ((int)uVar14 < (int)uVar7) {
          uVar14 = uVar7;
        }
        param_1[3][uVar6 * 0x14 + 0x10] = 1;
        *(int *)(param_1[3] + uVar6 * 0x14 + 8) = iVar11;
        uVar9 = uVar9 + 1;
        *(uint *)(*param_1 + 4) = uVar9;
      }
      uVar10 = uVar10 + 2;
    } while (uVar10 < local_58);
  }
  iVar3 = FUN_14001ecff(0x10000,*(uint *)*param_1);
  puVar2 = local_a0;
  local_90 = (ulonglong)*(uint *)(*param_1 + 4);
  if (local_90 != 0) {
    local_98 = param_1 + 3;
    uVar10 = 0;
    do {
      iVar11 = *(int *)(*local_98 + uVar10 * 0x14 + 8);
      if ((*local_98)[uVar10 * 0x14 + 0x10] == '\0') {
        if (2 < local_60) {
          uVar6 = 2;
          iVar4 = 0x7fffffff;
          do {
            iVar13 = *(int *)(local_a8 + 0x130) * 2 + *(int *)(local_80 + uVar6 * 4);
            iVar8 = -(iVar11 - iVar13);
            if (iVar8 < 0) {
              iVar8 = iVar11 - iVar13;
            }
          } while (((iVar3 <= iVar8 || iVar4 <= iVar8) ||
                   (*(int *)(*local_98 + uVar10 * 0x14 + 8) = iVar13, iVar4 = iVar8,
                   iVar11 != iVar13)) && (uVar6 = uVar6 + 2, uVar6 < local_60));
        }
      }
      else {
        iVar4 = 0x7fffffff;
        if (local_68 != 0) {
          uVar6 = 0;
          do {
            iVar8 = *(int *)(local_88 + 4 + uVar6 * 4);
            iVar13 = -(iVar11 - iVar8);
            if (iVar13 < 0) {
              iVar13 = iVar11 - iVar8;
            }
            if ((iVar13 < iVar3 && iVar13 < iVar4) &&
               (*(int *)(*local_98 + uVar10 * 0x14 + 8) = iVar8, iVar4 = iVar13, iVar11 == iVar8)) {
              iVar4 = 0;
              break;
            }
            uVar6 = uVar6 + 2;
          } while (uVar6 < local_68);
        }
        if (1 < local_60) {
          iVar11 = iVar11 - *(int *)(local_80 + 4);
          iVar8 = -iVar11;
          if (iVar8 < 0) {
            iVar8 = iVar11;
          }
          if (iVar8 < iVar3 && iVar8 < iVar4) {
            *(int *)(*local_98 + uVar10 * 0x14 + 8) = *(int *)(local_80 + 4);
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != local_90);
  }
  uVar9 = *local_a0;
  local_b0 = param_1;
  if (0 < (int)uVar14) {
    iVar3 = FUN_14001ecff(0x10000,uVar14);
    param_1 = local_b0;
    if (iVar3 < (int)uVar9) {
      uVar9 = FUN_14001ecff(0x10000,uVar14);
      *puVar2 = uVar9;
    }
    else {
      uVar9 = *puVar2;
    }
  }
  uVar14 = *(uint *)*param_1;
  if ((int)uVar14 < (int)uVar9) {
    (*param_1)[8] = 1;
    iVar11 = FUN_14001de7c(0x999a,uVar14,uVar9);
    iVar3 = 0x7fff;
    if (0x199a < iVar11) {
      iVar3 = 0x999a - iVar11;
    }
    *(int *)(*local_b0 + 0x18) = iVar3;
    param_1 = local_b0;
  }
  if (*(char *)(local_a8 + 0x102) != '\0') {
    *(undefined4 *)(*param_1 + 0x18) = 0;
  }
  uVar14 = *(uint *)(*param_1 + 4);
  if ((ulonglong)uVar14 != 0) {
    iVar3 = *(int *)*param_1;
    iVar11 = *(int *)(*param_1 + 0x18);
    lVar5 = 0;
    do {
      lVar12 = (longlong)*(int *)(param_1[3] + lVar5 + 8) * (longlong)iVar3;
      iVar4 = (int)((ulonglong)(lVar12 + (lVar12 >> 0x3f) + 0x8000) >> 0x10);
      uVar9 = (iVar4 - iVar11) + 0x8000;
      if (param_1[3][lVar5 + 0x10] == '\0') {
        uVar9 = iVar11 + 0x8000 + iVar4;
      }
      *(uint *)(param_1[3] + lVar5 + 0xc) = uVar9 & 0xffff0000;
      lVar5 = lVar5 + 0x14;
    } while ((ulonglong)uVar14 * 0x14 != lVar5);
  }
LAB_140067885:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_d8);
  }
  return;
}

