/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002c964 */

undefined8 * FUN_18002c964(undefined8 *param_1,longlong *param_2,ulonglong *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined4 *local_a0;
  undefined4 local_90;
  int local_8c;
  ulonglong *local_88;
  ulonglong *local_80;
  undefined1 local_78 [63];
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_c8;
  uVar7 = *param_3;
  uVar8 = (uint)param_3[1];
  uVar4 = *param_4;
  puVar3 = &local_38;
  switch(uVar4 & 7) {
  case 4:
    pcVar5 = "0123456789ABCDEF";
    if ((uVar4 >> 0xc & 1) == 0) {
      pcVar5 = "0123456789abcdef";
    }
    do {
      *(char *)((longlong)puVar3 + -1) = pcVar5[(uint)uVar7 & 0xf];
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      uVar7 = uVar7 >> 4;
    } while (uVar7 != 0);
    if ((uVar4 >> 0xd & 1) != 0) {
      uVar4 = (uint)((uVar4 >> 0xc & 1) == 0) << 0xd | 0x5830;
LAB_18002ca46:
      uVar1 = uVar4 << 8;
      if (uVar8 == 0) {
        uVar1 = uVar4;
      }
      uVar8 = (uVar1 | uVar8) + 0x2000000;
    }
    break;
  case 5:
    lVar6 = 0;
    uVar9 = uVar7;
    do {
      *(byte *)((longlong)puVar3 + -1) = (byte)uVar9 & 7 | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      uVar9 = uVar9 >> 3;
      lVar6 = lVar6 + 1;
    } while (uVar9 != 0);
    if (((uVar4 >> 0xd & 1) != 0) && (uVar7 != 0 && (int)param_4[3] <= lVar6)) {
      uVar4 = 0x3000;
      if (uVar8 == 0) {
        uVar4 = 0x30;
      }
      uVar8 = (uVar4 | uVar8) + 0x1000000;
    }
    break;
  case 6:
    do {
      *(byte *)((longlong)puVar3 + -1) = (byte)uVar7 & 1 | 0x30;
      puVar3 = (ulonglong *)((longlong)puVar3 + -1);
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
    if ((uVar4 >> 0xd & 1) != 0) {
      uVar4 = (uint)((uVar4 >> 0xc & 1) == 0) << 0xd | 0x4230;
      goto LAB_18002ca46;
    }
    break;
  case 7:
    local_a0 = &local_90;
    local_90._0_2_ = CONCAT11((char)uVar7,(uVar4 & 7) == 1);
    local_a8 = 1;
    FUN_18002799d(param_1,param_2,param_4,1);
    goto LAB_18002cbdc;
  default:
    puVar3 = (ulonglong *)FUN_180025acd(local_78,uVar7,0x40);
  }
  iVar10 = (int)&local_38 - (int)puVar3;
  uVar4 = param_4[2];
  uVar1 = param_4[3];
  uVar2 = (uVar8 >> 0x18) + iVar10;
  if (uVar1 == 0xffffffff && uVar4 == 0) {
    if ((ulonglong)param_2[2] < (ulonglong)uVar2 + param_2[1]) {
      (*(code *)param_2[3])(param_2);
    }
    for (uVar8 = uVar8 & 0xffffff; uVar8 != 0; uVar8 = uVar8 >> 8) {
      lVar6 = param_2[1];
      uVar7 = lVar6 + 1;
      if ((ulonglong)param_2[2] < uVar7) {
        (*(code *)param_2[3])(param_2);
        lVar6 = param_2[1];
        uVar7 = lVar6 + 1;
      }
      param_2[1] = uVar7;
      *(char *)(*param_2 + lVar6) = (char)uVar8;
    }
    FUN_180018bde(param_2,puVar3,&local_38);
    *param_1 = param_2;
  }
  else {
    if ((*param_4 & 0x38) == 0x20) {
      bVar11 = uVar4 < uVar2;
      local_8c = uVar4 - uVar2;
      if (!bVar11 && local_8c != 0) {
        uVar2 = uVar4;
      }
      if (bVar11) {
        local_8c = 0;
      }
    }
    else {
      local_8c = 0;
      if (uVar1 - iVar10 != 0 && iVar10 <= (int)uVar1) {
        uVar2 = uVar1 + (uVar8 >> 0x18);
        local_8c = uVar1 - iVar10;
      }
    }
    local_a0 = &local_90;
    local_a8 = (ulonglong)uVar2;
    local_90 = uVar8;
    local_88 = puVar3;
    local_80 = &local_38;
    FUN_18002865e(param_1,param_2,param_4);
  }
LAB_18002cbdc:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_c8)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_c8);
}

