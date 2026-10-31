/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180026041 */

undefined8 * FUN_180026041(undefined8 *param_1,longlong *param_2,ulonglong param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined4 *local_80;
  undefined4 local_70;
  int local_6c;
  ulonglong *local_68;
  ulonglong *local_60;
  undefined1 local_58 [31];
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar10 = param_3 >> 0x20;
  uVar9 = *param_4;
  uVar8 = (uint)(param_3 >> 0x20);
  puVar3 = &local_38;
  switch(uVar9 & 7) {
  case 4:
    pcVar4 = "0123456789ABCDEF";
    if ((uVar9 >> 0xc & 1) == 0) {
      pcVar4 = "0123456789abcdef";
    }
    do {
      *(char *)((longlong)puVar3 + -1) = pcVar4[(uint)param_3 & 0xf];
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      uVar2 = (uint)param_3 >> 4;
      param_3 = (ulonglong)uVar2;
    } while (uVar2 != 0);
    if ((uVar9 >> 0xd & 1) != 0) {
      uVar9 = (uint)((uVar9 >> 0xc & 1) == 0) << 0xd | 0x5830;
LAB_180026117:
      uVar2 = uVar9 << 8;
      if (uVar10 == 0) {
        uVar2 = uVar9;
      }
      uVar10 = (ulonglong)((uVar2 | uVar8) + 0x2000000);
    }
    break;
  case 5:
    lVar5 = 0;
    uVar6 = param_3 & 0xffffffff;
    do {
      *(byte *)((longlong)puVar3 + -1) = (byte)uVar6 & 7 | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      uVar2 = (uint)uVar6 >> 3;
      uVar6 = (ulonglong)uVar2;
      lVar5 = lVar5 + 1;
    } while (uVar2 != 0);
    if (((uVar9 >> 0xd & 1) != 0) && ((int)param_3 != 0 && (int)param_4[3] <= lVar5)) {
      uVar9 = 0x3000;
      if (uVar10 == 0) {
        uVar9 = 0x30;
      }
      uVar10 = (ulonglong)((uVar9 | uVar8) + 0x1000000);
    }
    break;
  case 6:
    do {
      *(byte *)((longlong)puVar3 + -1) = (byte)param_3 & 1 | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      uVar2 = (uint)param_3 >> 1;
      param_3 = (ulonglong)uVar2;
    } while (uVar2 != 0);
    if ((uVar9 >> 0xd & 1) != 0) {
      uVar9 = (uint)((uVar9 >> 0xc & 1) == 0) << 0xd | 0x4230;
      goto LAB_180026117;
    }
    break;
  case 7:
    local_80 = &local_70;
    local_70._0_2_ = CONCAT11((char)param_3,(uVar9 & 7) == 1);
    local_88 = 1;
    FUN_18002799d(param_1,param_2,param_4,1);
    goto LAB_1800262b9;
  default:
    puVar3 = (ulonglong *)FUN_180024c02(local_58,param_3 & 0xffffffff,0x20);
  }
  iVar7 = (int)&local_38 - (int)puVar3;
  uVar9 = param_4[2];
  uVar8 = param_4[3];
  iVar1 = (int)(uVar10 >> 0x18);
  uVar2 = iVar1 + iVar7;
  if (uVar8 == 0xffffffff && uVar9 == 0) {
    if ((ulonglong)param_2[2] < (ulonglong)uVar2 + param_2[1]) {
      (*(code *)param_2[3])(param_2);
    }
    uVar9 = (uint)uVar10 & 0xffffff;
    if ((uVar10 & 0xffffff) != 0) {
      do {
        lVar5 = param_2[1];
        uVar10 = lVar5 + 1;
        if ((ulonglong)param_2[2] < uVar10) {
          (*(code *)param_2[3])(param_2);
          lVar5 = param_2[1];
          uVar10 = lVar5 + 1;
        }
        param_2[1] = uVar10;
        *(char *)(*param_2 + lVar5) = (char)uVar9;
        uVar9 = uVar9 >> 8;
      } while (uVar9 != 0);
    }
    FUN_180018bde(param_2,puVar3,&local_38);
    *param_1 = param_2;
  }
  else {
    if ((*param_4 & 0x38) == 0x20) {
      local_6c = uVar9 - uVar2;
      if (uVar9 < uVar2) {
        local_6c = 0;
      }
      if (uVar9 >= uVar2 && uVar9 - uVar2 != 0) {
        uVar2 = uVar9;
      }
    }
    else {
      local_6c = 0;
      if (uVar8 - iVar7 != 0 && iVar7 <= (int)uVar8) {
        uVar2 = uVar8 + iVar1;
        local_6c = uVar8 - iVar7;
      }
    }
    local_80 = &local_70;
    local_88 = (ulonglong)uVar2;
    local_70 = (uint)uVar10;
    local_68 = puVar3;
    local_60 = &local_38;
    FUN_18002865e(param_1,param_2,param_4);
  }
LAB_1800262b9:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_a8);
  }
  return param_1;
}

