/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020edc9 */

void __fastcall FUN_1020edc9(int *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_3c [2];
  char local_3a;
  char local_39;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_3c;
  uVar9 = param_1[4];
  if ((uVar9 & 8) != 0) goto LAB_1020f08f;
  iVar7 = param_2 + param_3 * 0xcc;
  local_28 = iVar7 + 4;
  local_24 = *(int *)(iVar7 + 200);
  local_38 = *param_1;
  iVar4 = (int)((longlong)local_38 * (longlong)local_24 >> 0x3f);
  lVar2 = (longlong)local_38 * (longlong)local_24 + CONCAT44(iVar4,iVar4) + 0x8000;
  iVar4 = param_1[1];
  uVar5 = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + *(int *)(iVar7 + 0xcc)
  ;
  iVar7 = (int)((longlong)iVar4 * (longlong)local_24 >> 0x3f);
  lVar2 = (longlong)iVar4 * (longlong)local_24 + CONCAT44(iVar7,iVar7) + 0x8000;
  uVar8 = (int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10;
  local_34 = param_1;
  local_30 = param_2;
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0x6c) != '\0') {
      local_39 = *(char *)(param_4 + 0x6e) != '\0';
      param_1[3] = uVar8;
LAB_1020ef15:
      piVar1 = (int *)param_1[5];
      if (piVar1 != (int *)0x0) {
        if ((*(byte *)(piVar1 + 4) & 8) == 0) {
          FUN_1020edc9(param_3,param_4);
          local_38 = *param_1;
          iVar4 = param_1[1];
        }
        lVar2 = (longlong)((local_38 - ((piVar1[1] >> 1) + *piVar1)) + (iVar4 >> 1)) *
                (longlong)local_24;
        iVar7 = (int)(lVar2 >> 0x3f);
        lVar2 = lVar2 + CONCAT44(iVar7,iVar7) + 0x8000;
        uVar5 = (piVar1[2] - ((int)uVar8 >> 1)) + (piVar1[3] >> 1) +
                ((int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10);
      }
      param_1[2] = uVar5;
      param_1[3] = uVar8;
      uVar9 = uVar5;
      if (*(char *)(param_4 + 0x70) != '\0') {
        if ((int)uVar8 < 0x41) {
          if ((int)uVar8 < 0x20) {
            uVar3 = uVar5 + 0x20 & 0xffffffc0;
            uVar9 = uVar3;
            if (0 < (int)uVar8) {
              iVar7 = uVar8 + uVar5;
              uVar9 = iVar7 + 0x20U & 0xffffffc0;
              uVar6 = uVar5 - uVar3;
              if ((int)uVar5 < (int)uVar3) {
                uVar6 = uVar3 - uVar5;
              }
              uVar5 = iVar7 - uVar9;
              if (iVar7 < (int)uVar9) {
                uVar5 = uVar9 - iVar7;
              }
              if (uVar6 <= uVar5) {
                uVar9 = uVar3;
              }
            }
          }
          else {
            uVar9 = uVar8 >> 1;
            uVar8 = 0x40;
            uVar9 = uVar5 + uVar9 & 0xffffffc0;
          }
        }
        else {
          uVar8 = FUN_1020f1a5();
        }
      }
      iVar7 = FUN_1020f1ff();
      iVar7 = iVar7 + uVar9;
      param_1[2] = iVar7;
      param_1[3] = uVar8;
      if (local_39 == '\0') goto LAB_1020f086;
      uVar9 = 0x40;
      if (0x3f < (int)uVar8) {
        uVar9 = uVar8 + 0x20 & 0x7fffffc0;
      }
      uVar8 = uVar9 >> 1;
      if ((uVar9 & 0x40) == 0) {
        uVar5 = iVar7 + uVar8 + 0x20 & 0xffffffc0;
      }
      else {
        uVar5 = iVar7 + uVar8 & 0xffffffc0 | 0x20;
      }
      param_1[2] = uVar5 - uVar8;
      goto LAB_1020f083;
    }
LAB_1020efb0:
    param_1[2] = uVar5;
    param_1[3] = uVar8;
  }
  else {
    if (*(char *)(param_4 + 0x6d) == '\0') goto LAB_1020efb0;
    local_3a = *(char *)(param_4 + 0x6f);
    local_39 = local_3a != '\0';
    param_1[3] = uVar8;
    local_1c = 0;
    local_18 = 0;
    local_2c = iVar4;
    FUN_1020f0b2(local_38,&local_20);
    if (local_20 == 3) {
      param_1[2] = local_18;
      uVar9 = local_1c - local_18;
LAB_1020f083:
      param_1[3] = uVar9;
    }
    else if (local_20 == 2) {
      param_1[2] = local_18;
      if (local_3a != '\0') {
        uVar9 = 0x40;
        if (0x3f < (int)uVar8) {
          uVar9 = uVar8 + 0x20 & 0x7fffffc0;
        }
        goto LAB_1020f083;
      }
    }
    else {
      iVar4 = local_2c;
      if (local_20 != 1) goto LAB_1020ef15;
      param_1[2] = local_1c - uVar8;
      if (local_3a != '\0') {
        uVar9 = 0x40;
        if (0x3f < (int)uVar8) {
          uVar9 = uVar8 + 0x20 & 0x7fffffc0;
        }
        param_1[2] = local_1c - uVar9;
        param_1[3] = uVar9;
      }
    }
LAB_1020f086:
    uVar9 = param_1[4];
  }
  param_1[4] = uVar9 | 8;
LAB_1020f08f:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

