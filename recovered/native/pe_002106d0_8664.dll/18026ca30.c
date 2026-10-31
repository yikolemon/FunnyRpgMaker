/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18026ca30 */

uint FUN_18026ca30(byte *param_1,undefined8 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  iVar2 = isspace((uint)*param_1);
  pbVar7 = param_1;
  while (iVar2 != 0) {
    pbVar12 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    iVar2 = isspace((uint)*pbVar12);
  }
  bVar13 = *pbVar7;
  if ((bVar13 - 0x2b & 0xfd) == 0) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    bVar13 = 0x2b;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) goto LAB_18026cba8;
  if ((int)param_3 < 1) {
    pbVar12 = pbVar7;
    if (*pbVar7 == 0x30) {
      if ((pbVar7[1] + 0xa8 & 0xdf) != 0) {
        param_3 = 8;
        goto LAB_18026cb00;
      }
      param_3 = 0x10;
      goto LAB_18026caf0;
    }
    param_3 = 10;
  }
  else {
    if (((param_3 == 0x10) && (*pbVar7 == 0x30)) && ((pbVar7[1] + 0xa8 & 0xdf) == 0)) {
LAB_18026caf0:
      pbVar7 = pbVar7 + 2;
    }
    bVar1 = *pbVar7;
    pbVar12 = pbVar7;
    while (bVar1 == 0x30) {
LAB_18026cb00:
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
    }
  }
  uVar10 = 0;
  uVar3 = tolower((int)(char)*pbVar7);
  uVar6 = (ulonglong)uVar3;
  lVar4 = FUN_1802a8150("0123456789abcdefghijklmnopqrstuvwxyz");
  pbVar8 = pbVar7;
  uVar3 = 0;
  if (lVar4 == 0) {
    uVar6 = uVar6 & 0xffffffffffffff00;
    uVar11 = 0;
    pbVar9 = pbVar7;
  }
  else {
    do {
      uVar11 = uVar3;
      bVar1 = (char)lVar4 + 0xb0;
      pbVar9 = pbVar8 + 1;
      uVar10 = uVar11 * param_3 + (int)(char)bVar1;
      iVar2 = tolower((int)(char)pbVar8[1]);
      lVar4 = FUN_1802a8150("0123456789abcdefghijklmnopqrstuvwxyz",iVar2,param_3);
      pbVar8 = pbVar9;
      uVar3 = uVar10;
    } while (lVar4 != 0);
    uVar6 = (ulonglong)bVar1;
  }
  if (pbVar12 == pbVar9) {
LAB_18026cba8:
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  pbVar7 = pbVar9 + (-(longlong)pbVar7 - (longlong)(char)(&DAT_180327f78)[param_3]);
  if (-1 < (longlong)pbVar7) {
    if ((longlong)pbVar7 < 1) {
      pbVar7 = (byte *)(ulonglong)(uint)(int)(char)uVar6;
      uVar3 = uVar10 - (int)(char)uVar6;
      if ((uVar3 <= uVar10) &&
         (uVar6 = (ulonglong)uVar3 % (ulonglong)param_3, uVar3 / param_3 == uVar11))
      goto LAB_18026cc08;
    }
    puVar5 = (undefined4 *)FUN_18027e66c(pbVar7,uVar6);
    *puVar5 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    uVar10 = 0xffffffff;
    bVar13 = 0x2b;
  }
LAB_18026cc08:
  uVar3 = -uVar10;
  if (bVar13 != 0x2d) {
    uVar3 = uVar10;
  }
  if (param_2 == (undefined8 *)0x0) {
    return uVar3;
  }
  *param_2 = pbVar9;
  return uVar3;
}

