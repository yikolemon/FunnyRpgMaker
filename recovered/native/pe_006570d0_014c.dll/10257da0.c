/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10257da0 */

/* WARNING: Removing unreachable block (ram,0x10257f6e) */

ulonglong FUN_10257da0(byte *param_1,undefined4 *param_2,size_t param_3,undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  size_t sVar12;
  byte *local_14;
  size_t local_10;
  int local_c;
  byte local_6;
  char local_5;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar4 = _isspace((uint)*param_1);
  pbVar7 = param_1;
  while (iVar4 != 0) {
    pbVar8 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    iVar4 = _isspace((uint)*pbVar8);
  }
  local_6 = *pbVar7;
  if ((local_6 == 0x2d) || (local_6 == 0x2b)) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    local_6 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  if ((int)param_3 < 1) {
    local_14 = pbVar7;
    if (*pbVar7 != 0x30) {
      param_3 = 10;
      local_10 = 10;
      goto LAB_10257e76;
    }
    if ((pbVar7[1] != 0x78) && (pbVar7[1] != 0x58)) {
      param_3 = 8;
      local_10 = 8;
      goto LAB_10257e70;
    }
    param_3 = 0x10;
LAB_10257e5d:
    pbVar7 = pbVar7 + 2;
  }
  else if (((param_3 == 0x10) && (*pbVar7 == 0x30)) && ((pbVar7[1] == 0x78 || (pbVar7[1] == 0x58))))
  goto LAB_10257e5d;
  bVar1 = *pbVar7;
  local_10 = param_3;
  local_14 = pbVar7;
  while (bVar1 == 0x30) {
LAB_10257e70:
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
LAB_10257e76:
  local_5 = '\0';
  sVar12 = param_3;
  iVar4 = _tolower((int)(char)*pbVar7);
  pvVar5 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar4,sVar12);
  pbVar8 = pbVar7;
  uVar2 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
    pbVar9 = pbVar7;
  }
  else {
    do {
      uVar3 = uVar2;
      local_5 = (char)pvVar5 + '(';
      lVar10 = __allmul(local_10,0,uVar3);
      uVar2 = lVar10 + (int)local_5;
      pbVar9 = pbVar8 + 1;
      sVar12 = param_3;
      iVar4 = _tolower((int)(char)pbVar8[1]);
      pvVar5 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar4,sVar12);
      pbVar8 = pbVar9;
    } while (pvVar5 != (void *)0x0);
  }
  local_c = (int)uVar2;
  if (local_14 == pbVar9) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar4 = (int)(pbVar9 + -(int)(char)(&DAT_10301b00)[param_3]) - (int)pbVar7;
  if ((iVar4 < 0) ||
     (((pbVar9 + -(int)(char)(&DAT_10301b00)[param_3] == pbVar7 || iVar4 < 0 &&
       (uVar2 - (longlong)(int)local_5 <= uVar2)) &&
      (uVar11 = __aulldiv(uVar2 - (longlong)(int)local_5,param_3,0), uVar11 == uVar3)))) {
    if (local_6 == 0x2d) {
      uVar2 = CONCAT44(-((int)(uVar2 >> 0x20) + (uint)(local_c != 0)),-local_c);
    }
  }
  else {
    puVar6 = (undefined4 *)FUN_10268ffd();
    *puVar6 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar2 = 0xffffffffffffffff;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar9;
  }
  return uVar2;
}

