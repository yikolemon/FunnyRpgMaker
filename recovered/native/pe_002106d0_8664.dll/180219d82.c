/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180219d82 */

void FUN_180219d82(int *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_d8 [40];
  int *local_b0;
  longlong local_a8;
  int *local_a0;
  int *local_98;
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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_d8;
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  iVar14 = 0;
  FUN_1802a89a0(param_1,0,0x150);
  *param_1 = *(int *)(param_2 + 0x38);
  local_a0 = param_1 + 3;
  local_a8 = param_2;
  FUN_18021a285(uVar2,local_a0,param_1 + 4);
  FUN_18021a2e1(uVar2,&local_50,&local_70);
  FUN_18021a302(uVar2,&local_58,&local_78);
  FUN_18021a323(uVar2,&local_60,&local_80);
  FUN_18021a344(uVar2,&local_68,&local_88);
  iVar3 = FUN_18021a365(uVar2);
  if (iVar3 == 1) {
    if ((local_50 == 0) ||
       ((((local_50 == 4 && (*local_70 < -0x780000)) && (local_70[1] < -0x780000)) &&
        ((0x3700000 < local_70[2] && (0x3700000 < local_70[3])))))) {
      param_1[0x14] = -0x780001;
      iVar14 = *param_1;
      lVar4 = (longlong)iVar14 * -0x780001;
      param_1[0x15] =
           ((int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + 0x8000U & 0xffff0000) -
           0x8000;
      param_1[0x16] = iVar14;
      param_1[0x10] = 0x31;
      lVar4 = (longlong)*(int *)(local_a8 + 0x130) * 2 + 0x3700001;
      param_1[0xc] = (int)lVar4;
      lVar4 = lVar4 * iVar14;
      param_1[0xd] = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10) + 0x8000U &
                     0xffff0000 | 0x8000;
      param_1[0xe] = iVar14;
      param_1[8] = 0x32;
      *(undefined1 *)((longlong)param_1 + 9) = 1;
      goto LAB_18021a249;
    }
LAB_180219f31:
    uVar8 = param_1[1];
    iVar14 = 0;
    uVar9 = 0;
    do {
      iVar3 = local_70[uVar9];
      uVar5 = (ulonglong)uVar8;
      param_1[uVar5 * 5 + 0x18] = iVar3;
      iVar10 = local_70[uVar9 + 1];
      param_1[uVar5 * 5 + 0x19] = iVar10;
      iVar6 = iVar10 - iVar3;
      if (-1 < iVar6) {
        piVar1 = param_1 + uVar5 * 5 + 0x18;
        if (iVar14 < iVar6) {
          iVar14 = iVar6;
        }
        if (uVar9 != 0) {
          piVar1[1] = iVar10 + *(int *)(local_a8 + 0x130) * 2;
          iVar10 = iVar3 + *(int *)(local_a8 + 0x130) * 2;
          *piVar1 = iVar10;
        }
        *(bool *)(piVar1 + 4) = uVar9 == 0;
        piVar1[2] = iVar10;
        uVar8 = uVar8 + 1;
        param_1[1] = uVar8;
      }
      uVar9 = uVar9 + 2;
    } while (uVar9 < local_50);
  }
  else if (local_50 != 0) goto LAB_180219f31;
  if (local_58 != 0) {
    uVar8 = param_1[1];
    uVar9 = 0;
    do {
      iVar3 = *(int *)(local_78 + uVar9 * 4);
      uVar5 = (ulonglong)uVar8;
      param_1[uVar5 * 5 + 0x18] = iVar3;
      iVar10 = *(int *)(local_78 + 4 + uVar9 * 4);
      param_1[uVar5 * 5 + 0x19] = iVar10;
      iVar3 = iVar10 - iVar3;
      if (-1 < iVar3) {
        if (iVar14 < iVar3) {
          iVar14 = iVar3;
        }
        *(undefined1 *)(param_1 + uVar5 * 5 + 0x1c) = 1;
        param_1[uVar5 * 5 + 0x1a] = iVar10;
        uVar8 = uVar8 + 1;
        param_1[1] = uVar8;
      }
      uVar9 = uVar9 + 2;
    } while (uVar9 < local_58);
  }
  iVar3 = FUN_1801cc3a4(0x10000,*param_1);
  piVar1 = local_a0;
  local_90 = (ulonglong)(uint)param_1[1];
  if (local_90 != 0) {
    local_98 = param_1 + 0x18;
    uVar9 = 0;
    do {
      iVar10 = local_98[uVar9 * 5 + 2];
      if ((char)local_98[uVar9 * 5 + 4] == '\0') {
        if (2 < local_60) {
          uVar5 = 2;
          iVar6 = 0x7fffffff;
          do {
            iVar13 = *(int *)(local_a8 + 0x130) * 2 + *(int *)(local_80 + uVar5 * 4);
            iVar7 = -(iVar10 - iVar13);
            if (iVar7 < 0) {
              iVar7 = iVar10 - iVar13;
            }
          } while (((iVar3 <= iVar7 || iVar6 <= iVar7) ||
                   (local_98[uVar9 * 5 + 2] = iVar13, iVar6 = iVar7, iVar10 != iVar13)) &&
                  (uVar5 = uVar5 + 2, uVar5 < local_60));
        }
      }
      else {
        iVar6 = 0x7fffffff;
        if (local_68 != 0) {
          uVar5 = 0;
          do {
            iVar7 = *(int *)(local_88 + 4 + uVar5 * 4);
            iVar13 = -(iVar10 - iVar7);
            if (iVar13 < 0) {
              iVar13 = iVar10 - iVar7;
            }
            if ((iVar13 < iVar3 && iVar13 < iVar6) &&
               (local_98[uVar9 * 5 + 2] = iVar7, iVar6 = iVar13, iVar10 == iVar7)) {
              iVar6 = 0;
              break;
            }
            uVar5 = uVar5 + 2;
          } while (uVar5 < local_68);
        }
        if (1 < local_60) {
          iVar10 = iVar10 - *(int *)(local_80 + 4);
          iVar7 = -iVar10;
          if (iVar7 < 0) {
            iVar7 = iVar10;
          }
          if (iVar7 < iVar3 && iVar7 < iVar6) {
            local_98[uVar9 * 5 + 2] = *(int *)(local_80 + 4);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != local_90);
  }
  iVar3 = *local_a0;
  local_b0 = param_1;
  if (0 < iVar14) {
    iVar10 = FUN_1801cc3a4(0x10000,iVar14);
    param_1 = local_b0;
    if (iVar10 < iVar3) {
      iVar3 = FUN_1801cc3a4(0x10000,iVar14);
      *piVar1 = iVar3;
    }
    else {
      iVar3 = *piVar1;
    }
  }
  if (*param_1 < iVar3) {
    *(undefined1 *)(param_1 + 2) = 1;
    iVar3 = FUN_1801cb4a4(0x999a,*param_1,iVar3);
    iVar14 = 0x7fff;
    if (0x199a < iVar3) {
      iVar14 = 0x999a - iVar3;
    }
    local_b0[6] = iVar14;
    param_1 = local_b0;
  }
  if (*(char *)(local_a8 + 0x102) != '\0') {
    param_1[6] = 0;
  }
  uVar8 = param_1[1];
  if ((ulonglong)uVar8 != 0) {
    iVar14 = *param_1;
    iVar3 = param_1[6];
    lVar4 = 0;
    do {
      lVar12 = (longlong)*(int *)((longlong)param_1 + lVar4 + 0x68) * (longlong)iVar14;
      iVar10 = (int)((ulonglong)(lVar12 + (lVar12 >> 0x3f) + 0x8000) >> 0x10);
      uVar11 = (iVar10 - iVar3) + 0x8000;
      if (*(char *)((longlong)param_1 + lVar4 + 0x70) == '\0') {
        uVar11 = iVar3 + 0x8000 + iVar10;
      }
      *(uint *)((longlong)param_1 + lVar4 + 0x6c) = uVar11 & 0xffff0000;
      lVar4 = lVar4 + 0x14;
    } while ((ulonglong)uVar8 * 0x14 != lVar4);
  }
LAB_18021a249:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_d8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_d8);
  }
  return;
}

