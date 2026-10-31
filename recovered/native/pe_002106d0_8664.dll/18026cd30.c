/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026cd30 */

ulonglong FUN_18026cd30(byte *param_1,undefined8 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  byte bVar14;
  
  uVar10 = (ulonglong)param_3;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = isspace((uint)*param_1);
  pbVar8 = param_1;
  while (iVar2 != 0) {
    pbVar13 = pbVar8 + 1;
    pbVar8 = pbVar8 + 1;
    iVar2 = isspace((uint)*pbVar13);
  }
  bVar14 = *pbVar8;
  if ((bVar14 - 0x2b & 0xfd) == 0) {
    pbVar8 = pbVar8 + 1;
  }
  else {
    bVar14 = 0x2b;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) goto LAB_18026cea3;
  if ((int)param_3 < 1) {
    pbVar13 = pbVar8;
    if (*pbVar8 == 0x30) {
      if ((pbVar8[1] + 0xa8 & 0xdf) != 0) {
        uVar10 = 8;
        goto LAB_18026ce00;
      }
      uVar10 = 0x10;
      goto LAB_18026cdf0;
    }
    uVar10 = 10;
  }
  else {
    if (((param_3 == 0x10) && (*pbVar8 == 0x30)) && ((pbVar8[1] + 0xa8 & 0xdf) == 0)) {
LAB_18026cdf0:
      pbVar8 = pbVar8 + 2;
    }
    bVar1 = *pbVar8;
    pbVar13 = pbVar8;
    while (bVar1 == 0x30) {
LAB_18026ce00:
      pbVar8 = pbVar8 + 1;
      bVar1 = *pbVar8;
    }
  }
  uVar11 = 0;
  uVar3 = tolower((int)(char)*pbVar8);
  uVar7 = (ulonglong)uVar3;
  lVar4 = FUN_1802a8150("0123456789abcdefghijklmnopqrstuvwxyz");
  pbVar9 = pbVar8;
  if (lVar4 == 0) {
    uVar7 = uVar7 & 0xffffffffffffff00;
    uVar12 = 0;
  }
  else {
    do {
      uVar12 = uVar11;
      bVar1 = (char)lVar4 + 0x60;
      pbVar9 = pbVar9 + 1;
      uVar11 = (longlong)(char)bVar1 + uVar10 * uVar12;
      iVar2 = tolower((int)(char)*pbVar9);
      lVar4 = FUN_1802a8150("0123456789abcdefghijklmnopqrstuvwxyz",iVar2,uVar10);
    } while (lVar4 != 0);
    uVar7 = (ulonglong)bVar1;
  }
  if (pbVar13 == pbVar9) {
LAB_18026cea3:
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  pbVar8 = pbVar9 + (-(longlong)pbVar8 - (longlong)(char)(&DAT_180327fc8)[uVar10]);
  if (-1 < (longlong)pbVar8) {
    if ((longlong)pbVar8 < 1) {
      pbVar8 = (byte *)(longlong)(char)uVar7;
      uVar5 = uVar11 - (longlong)pbVar8;
      if ((uVar5 <= uVar11) && (uVar7 = uVar5 % uVar10, uVar5 / uVar10 == uVar12))
      goto LAB_18026cf08;
    }
    puVar6 = (undefined4 *)FUN_18027e66c(pbVar8,uVar7);
    *puVar6 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar11 = 0xffffffffffffffff;
    bVar14 = 0x2b;
  }
LAB_18026cf08:
  uVar10 = -uVar11;
  if (bVar14 != 0x2d) {
    uVar10 = uVar11;
  }
  if (param_2 == (undefined8 *)0x0) {
    return uVar10;
  }
  *param_2 = pbVar9;
  return uVar10;
}

