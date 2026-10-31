/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10257ae0 */

uint FUN_10257ae0(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint local_10;
  byte *local_c;
  char local_6;
  byte local_5;
  
  local_6 = '\0';
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = _isspace((uint)*param_1);
  pbVar7 = param_1;
  while (iVar2 != 0) {
    pbVar8 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    iVar2 = _isspace((uint)*pbVar8);
  }
  local_5 = *pbVar7;
  if ((local_5 == 0x2d) || (local_5 == 0x2b)) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    local_5 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  if ((int)param_3 < 1) {
    local_c = pbVar7;
    if (*pbVar7 != 0x30) {
      param_3 = 10;
      goto LAB_10257ba9;
    }
    if ((pbVar7[1] != 0x78) && (pbVar7[1] != 0x58)) {
      param_3 = 8;
      goto LAB_10257ba3;
    }
    param_3 = 0x10;
LAB_10257b97:
    pbVar7 = pbVar7 + 2;
  }
  else if (((param_3 == 0x10) && (*pbVar7 == 0x30)) && ((pbVar7[1] == 0x78 || (pbVar7[1] == 0x58))))
  goto LAB_10257b97;
  bVar1 = *pbVar7;
  local_c = pbVar7;
  while (bVar1 == 0x30) {
LAB_10257ba3:
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
LAB_10257ba9:
  local_10 = 0;
  uVar5 = param_3;
  iVar2 = _tolower((int)(char)*pbVar7);
  pvVar3 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar2,uVar5);
  uVar5 = 0;
  pbVar8 = pbVar7;
  while (uVar6 = uVar5, pvVar3 != (void *)0x0) {
    local_6 = (char)pvVar3 + 'x';
    pbVar8 = pbVar8 + 1;
    uVar5 = param_3;
    iVar2 = _tolower((int)(char)*pbVar8);
    pvVar3 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar2,uVar5);
    uVar5 = uVar6 * param_3 + (int)local_6;
    local_10 = uVar6;
  }
  if (local_c == pbVar8) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  iVar2 = (int)(pbVar8 + -(int)(char)(&DAT_10301ab0)[param_3]) - (int)pbVar7;
  if ((-1 < iVar2) &&
     (((pbVar8 + -(int)(char)(&DAT_10301ab0)[param_3] != pbVar7 && -1 < iVar2 ||
       (uVar6 < uVar6 - (int)local_6)) || ((uVar6 - (int)local_6) / param_3 != local_10)))) {
    puVar4 = (undefined4 *)FUN_10268ffd();
    *puVar4 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar6 = 0xffffffff;
    local_5 = 0x2b;
  }
  uVar5 = -uVar6;
  if (local_5 != 0x2d) {
    uVar5 = uVar6;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar8;
    return uVar5;
  }
  return uVar5;
}

