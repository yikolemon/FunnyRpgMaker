/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006bde8 */

void FUN_14006bde8(int *param_1,longlong param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_98 [38];
  char local_72;
  char local_71;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  uVar8 = param_1[4];
  if ((uVar8 & 8) != 0) goto LAB_14006c0d8;
  lVar1 = param_2 + (ulonglong)param_3 * 0xcc;
  lVar9 = (longlong)*(int *)(lVar1 + 0xcc);
  iVar4 = *param_1;
  uVar6 = (int)((ulonglong)(iVar4 * lVar9 + 0x8000 + (iVar4 * lVar9 >> 0x3f)) >> 0x10) +
          *(int *)(lVar1 + 0xd0);
  iVar10 = param_1[1];
  uVar5 = (uint)((ulonglong)(iVar10 * lVar9 + 0x8000 + (iVar10 * lVar9 >> 0x3f)) >> 0x10);
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0xc0) != '\0') {
      local_71 = *(char *)(param_4 + 0xc2) != '\0';
      param_1[3] = uVar5;
      local_70 = lVar1 + 8;
LAB_14006bf52:
      piVar2 = *(int **)(param_1 + 6);
      if (piVar2 != (int *)0x0) {
        if ((*(byte *)(piVar2 + 4) & 8) == 0) {
          FUN_14006bde8(piVar2,param_2,param_3,param_4);
          iVar4 = *param_1;
          iVar10 = param_1[1];
        }
        lVar9 = ((iVar4 - ((piVar2[1] >> 1) + *piVar2)) + (iVar10 >> 1)) * lVar9;
        uVar6 = (piVar2[2] - ((int)uVar5 >> 1)) + (piVar2[3] >> 1) +
                (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10);
      }
      param_1[2] = uVar6;
      param_1[3] = uVar5;
      uVar8 = uVar6;
      if (*(char *)(param_4 + 0xc4) != '\0') {
        if ((int)uVar5 < 0x41) {
          if ((int)uVar5 < 0x20) {
            uVar3 = uVar6 + 0x20 & 0xffffffc0;
            uVar8 = uVar3;
            if (0 < (int)uVar5) {
              iVar4 = uVar6 + uVar5;
              uVar8 = iVar4 + 0x20U & 0xffffffc0;
              uVar7 = uVar6 - uVar3;
              if ((int)uVar6 < (int)uVar3) {
                uVar7 = uVar3 - uVar6;
              }
              uVar6 = iVar4 - uVar8;
              if (iVar4 < (int)uVar8) {
                uVar6 = uVar8 - iVar4;
              }
              if (uVar7 <= uVar6) {
                uVar8 = uVar3;
              }
            }
          }
          else {
            uVar8 = uVar5 >> 1;
            uVar5 = 0x40;
            uVar8 = uVar6 + uVar8 & 0xffffffc0;
          }
        }
        else {
          uVar5 = FUN_14006c1dc(local_70,uVar5);
        }
      }
      uVar6 = FUN_14006c236(uVar8,uVar5);
      iVar4 = uVar6 + uVar8;
      param_1[2] = iVar4;
      param_1[3] = uVar5;
      if (local_71 == '\0') goto LAB_14006c0cf;
      uVar8 = 0x40;
      if (0x3f < (int)uVar5) {
        uVar8 = uVar5 + 0x20 & 0x7fffffc0;
      }
      uVar5 = uVar8 >> 1;
      if ((uVar8 & 0x40) == 0) {
        uVar6 = iVar4 + uVar5 + 0x20 & 0xffffffc0;
      }
      else {
        uVar6 = iVar4 + uVar5 & 0xffffffc0 | 0x20;
      }
      param_1[2] = uVar6 - uVar5;
      goto LAB_14006c0cc;
    }
LAB_14006bff3:
    param_1[2] = uVar6;
    param_1[3] = uVar5;
  }
  else {
    if (*(char *)(param_4 + 0xc1) == '\0') goto LAB_14006bff3;
    local_72 = *(char *)(param_4 + 0xc3);
    local_71 = local_72 != '\0';
    param_1[3] = uVar5;
    local_50 = 0;
    local_70 = lVar1 + 8;
    local_68 = lVar9;
    local_60 = param_4;
    FUN_14006c10b((int *)(param_2 + 0x1a0),iVar10 + iVar4,iVar4,&local_54);
    if (local_54 == 3) {
      param_1[2] = local_50._4_4_;
      uVar8 = (int)local_50 - local_50._4_4_;
LAB_14006c0cc:
      param_1[3] = uVar8;
    }
    else if (local_54 == 2) {
      param_1[2] = local_50._4_4_;
      if (local_72 != '\0') {
        uVar8 = 0x40;
        if (0x3f < (int)uVar5) {
          uVar8 = uVar5 + 0x20 & 0x7fffffc0;
        }
        goto LAB_14006c0cc;
      }
    }
    else {
      param_4 = local_60;
      lVar9 = local_68;
      if (local_54 != 1) goto LAB_14006bf52;
      param_1[2] = (int)local_50 - uVar5;
      if (local_72 != '\0') {
        uVar8 = 0x40;
        if (0x3f < (int)uVar5) {
          uVar8 = uVar5 + 0x20 & 0x7fffffc0;
        }
        param_1[2] = (int)local_50 - uVar8;
        param_1[3] = uVar8;
      }
    }
LAB_14006c0cf:
    uVar8 = param_1[4];
  }
  param_1[4] = uVar8 | 8;
LAB_14006c0d8:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

