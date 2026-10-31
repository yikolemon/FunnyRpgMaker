/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021e7a8 */

void FUN_18021e7a8(int *param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_98 [38];
  char local_72;
  char local_71;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  uVar6 = param_1[4];
  if ((uVar6 & 8) != 0) goto LAB_18021ea98;
  lVar1 = param_2 + (ulonglong)param_3 * 0xcc;
  lVar11 = (longlong)*(int *)(lVar1 + 0xcc);
  iVar4 = *param_1;
  uVar7 = (int)((ulonglong)(iVar4 * lVar11 + 0x8000 + (iVar4 * lVar11 >> 0x3f)) >> 0x10) +
          *(int *)(lVar1 + 0xd0);
  iVar8 = param_1[1];
  uVar9 = iVar8 * lVar11 + 0x8000 + (iVar8 * lVar11 >> 0x3f);
  uVar10 = uVar9 >> 0x10;
  uVar5 = (uint)(uVar9 >> 0x10);
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0xc0) != '\0') {
      local_71 = *(char *)(param_4 + 0xc2) != '\0';
      param_1[3] = uVar5;
      local_70 = lVar1 + 8;
LAB_18021e912:
      piVar2 = *(int **)(param_1 + 6);
      if (piVar2 != (int *)0x0) {
        if ((*(byte *)(piVar2 + 4) & 8) == 0) {
          FUN_18021e7a8(piVar2,param_2,param_3);
          iVar4 = *param_1;
          iVar8 = param_1[1];
        }
        lVar11 = ((iVar4 - ((piVar2[1] >> 1) + *piVar2)) + (iVar8 >> 1)) * lVar11;
        uVar7 = (piVar2[2] - ((int)uVar5 >> 1)) + (piVar2[3] >> 1) +
                (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
      }
      param_1[2] = uVar7;
      param_1[3] = uVar5;
      uVar6 = uVar7;
      if (*(char *)(param_4 + 0xc4) != '\0') {
        if ((int)uVar5 < 0x41) {
          if ((int)uVar5 < 0x20) {
            uVar3 = uVar7 + 0x20 & 0xffffffc0;
            uVar6 = uVar3;
            if (0 < (int)uVar5) {
              iVar4 = uVar7 + uVar5;
              uVar6 = iVar4 + 0x20U & 0xffffffc0;
              uVar5 = uVar7 - uVar3;
              if ((int)uVar7 < (int)uVar3) {
                uVar5 = uVar3 - uVar7;
              }
              uVar7 = iVar4 - uVar6;
              if (iVar4 < (int)uVar6) {
                uVar7 = uVar6 - iVar4;
              }
              if (uVar5 <= uVar7) {
                uVar6 = uVar3;
              }
            }
          }
          else {
            uVar10 = 0x40;
            uVar6 = uVar7 + (uVar5 >> 1) & 0xffffffc0;
          }
        }
        else {
          uVar7 = FUN_18021eb9c(local_70,uVar10 & 0xffffffff);
          uVar10 = (ulonglong)uVar7;
        }
      }
      iVar8 = (int)uVar10;
      iVar4 = FUN_18021ebf6(uVar6,uVar10 & 0xffffffff);
      iVar4 = iVar4 + uVar6;
      param_1[2] = iVar4;
      param_1[3] = iVar8;
      if (local_71 == '\0') goto LAB_18021ea8f;
      uVar6 = 0x40;
      if (0x3f < iVar8) {
        uVar6 = iVar8 + 0x20U & 0x7fffffc0;
      }
      uVar7 = uVar6 >> 1;
      if ((uVar6 & 0x40) == 0) {
        uVar5 = iVar4 + uVar7 + 0x20 & 0xffffffc0;
      }
      else {
        uVar5 = iVar4 + uVar7 & 0xffffffc0 | 0x20;
      }
      param_1[2] = uVar5 - uVar7;
      goto LAB_18021ea8c;
    }
LAB_18021e9b3:
    param_1[2] = uVar7;
    param_1[3] = uVar5;
  }
  else {
    if (*(char *)(param_4 + 0xc1) == '\0') goto LAB_18021e9b3;
    local_72 = *(char *)(param_4 + 0xc3);
    local_71 = local_72 != '\0';
    param_1[3] = uVar5;
    local_50 = 0;
    local_70 = lVar1 + 8;
    local_68 = lVar11;
    local_60 = param_4;
    FUN_18021eacb(param_2 + 0x1a0,iVar8 + iVar4,iVar4,&local_54);
    if (local_54 == 3) {
      param_1[2] = local_50._4_4_;
      uVar6 = (int)local_50 - local_50._4_4_;
LAB_18021ea8c:
      param_1[3] = uVar6;
    }
    else if (local_54 == 2) {
      param_1[2] = local_50._4_4_;
      if (local_72 != '\0') {
        uVar6 = 0x40;
        if (0x3f < (int)uVar5) {
          uVar6 = uVar5 + 0x20 & 0x7fffffc0;
        }
        goto LAB_18021ea8c;
      }
    }
    else {
      param_4 = local_60;
      lVar11 = local_68;
      if (local_54 != 1) goto LAB_18021e912;
      param_1[2] = (int)local_50 - uVar5;
      if (local_72 != '\0') {
        uVar6 = 0x40;
        if (0x3f < (int)uVar5) {
          uVar6 = uVar5 + 0x20 & 0x7fffffc0;
        }
        param_1[2] = (int)local_50 - uVar6;
        param_1[3] = uVar6;
      }
    }
LAB_18021ea8f:
    uVar6 = param_1[4];
  }
  param_1[4] = uVar6 | 8;
LAB_18021ea98:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

