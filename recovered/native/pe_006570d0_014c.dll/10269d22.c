/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10269d22 */

int FUN_10269d22(tm *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  tm *ptVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  if (param_1 == (tm *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0x16;
  }
  ptVar6 = param_1;
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    ptVar6->tm_sec = -1;
    ptVar6 = (tm *)&ptVar6->tm_min;
  }
  if (param_2 == (uint *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    return 0x16;
  }
  if ((((int)param_2[1] < 1) && ((int)param_2[1] < 0)) ||
     ((6 < (int)param_2[1] && ((7 < (int)param_2[1] || (0x93582aff < *param_2)))))) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    return 0x16;
  }
  ___tzset();
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  iVar4 = FUN_10275350(&local_c);
  if (((iVar4 != 0) || (iVar4 = FUN_1027537c(&local_10), iVar4 != 0)) ||
     (iVar4 = FUN_102753a8(&local_8), iVar4 != 0)) {
                    /* WARNING: Subroutine does not return */
    __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar1 = *param_2;
  uVar3 = (param_2[1] - 1) + (uint)(0x3f480 < uVar1);
  if ((7 < uVar3) || ((6 < uVar3 && (0x935041fd < uVar1 - 0x3f481)))) {
    iVar4 = FUN_1026965c(param_1,param_2);
    if (iVar4 != 0) {
      return iVar4;
    }
    uVar1 = param_1->tm_sec;
    uVar3 = local_8;
    if ((local_c != 0) && (iVar4 = __isindst(param_1), uVar3 = local_8, iVar4 != 0)) {
      param_1->tm_isdst = 1;
      uVar3 = local_8 + local_10;
    }
    uVar7 = uVar1 - uVar3;
    iVar5 = (((int)uVar1 >> 0x1f) - ((int)uVar3 >> 0x1f)) - (uint)(uVar1 < uVar3);
    iVar4 = __allrem(uVar7,iVar5,0x3c,0);
    param_1->tm_sec = iVar4;
    if (iVar4 < 0) {
      bVar8 = 0x3b < uVar7;
      uVar7 = uVar7 - 0x3c;
      param_1->tm_sec = iVar4 + 0x3c;
      iVar5 = iVar5 + -1 + (uint)bVar8;
    }
    lVar9 = __alldiv(uVar7,iVar5,0x3c,0);
    lVar9 = lVar9 + param_1->tm_min;
    iVar4 = __allrem(lVar9,0x3c,0);
    param_1->tm_min = iVar4;
    if (iVar4 < 0) {
      param_1->tm_min = iVar4 + 0x3c;
      lVar9 = lVar9 + -0x3c;
    }
    lVar9 = __alldiv(lVar9,0x3c,0);
    lVar9 = lVar9 + param_1->tm_hour;
    iVar4 = __allrem(lVar9,0x18,0);
    param_1->tm_hour = iVar4;
    if (iVar4 < 0) {
      param_1->tm_hour = iVar4 + 0x18;
      lVar9 = lVar9 + -0x18;
    }
    lVar9 = __alldiv(lVar9,0x18,0);
    iVar4 = (int)lVar9;
    if (-1 < lVar9) {
      if ((0xffffffff < lVar9) || (iVar4 != 0)) {
        param_1->tm_mday = param_1->tm_mday + iVar4;
        param_1->tm_yday = param_1->tm_yday + iVar4;
        param_1->tm_wday = (param_1->tm_wday + iVar4) % 7;
        return 0;
      }
      if (0xffffffff < lVar9) {
        return 0;
      }
      if (-1 < lVar9) {
        return 0;
      }
    }
    param_1->tm_wday = (param_1->tm_wday + 7 + iVar4) % 7;
    iVar5 = param_1->tm_mday + iVar4;
    iVar4 = param_1->tm_yday + iVar4;
    param_1->tm_mday = iVar5;
    if (iVar5 < 1) {
      param_1->tm_mon = 0xb;
      param_1->tm_year = param_1->tm_year + -1;
      param_1->tm_mday = iVar5 + 0x1f;
      param_1->tm_yday = iVar4 + 0x16d;
    }
    else {
      param_1->tm_yday = iVar4;
    }
    return 0;
  }
  local_18 = uVar1 - local_8;
  local_14 = (param_2[1] - ((int)local_8 >> 0x1f)) - (uint)(uVar1 < local_8);
  iVar4 = FUN_1026965c(param_1,&local_18);
  if (iVar4 != 0) {
    return iVar4;
  }
  if (local_c == 0) {
    return 0;
  }
  iVar4 = __isindst(param_1);
  if (iVar4 == 0) {
    return 0;
  }
  bVar8 = local_18 < local_10;
  local_18 = local_18 - local_10;
  local_14 = (local_14 - ((int)local_10 >> 0x1f)) - (uint)bVar8;
  iVar4 = FUN_1026965c(param_1,&local_18);
  if (iVar4 == 0) {
    param_1->tm_isdst = 1;
    return 0;
  }
  return iVar4;
}

