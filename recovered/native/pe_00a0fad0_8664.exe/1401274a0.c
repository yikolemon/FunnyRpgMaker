/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401274a0 */

undefined8 FUN_1401274a0(short *param_1,longlong param_2,short *param_3,longlong param_4)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1401274eb;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1401274eb;
  if (param_2 != 0) {
    psVar3 = param_1;
    lVar4 = param_2;
    if ((param_4 == 0) || (param_3 != (short *)0x0)) {
      do {
        if (*psVar3 == 0) {
          lVar5 = param_4;
          if (param_4 != -1) goto joined_r0x00014012755c;
          lVar5 = (longlong)param_3 - (longlong)psVar3;
          goto LAB_140127540;
        }
        lVar4 = lVar4 + -1;
        psVar3 = psVar3 + 1;
      } while (lVar4 != 0);
      *param_1 = 0;
    }
    else {
      *param_1 = 0;
    }
  }
LAB_1401274eb:
  puVar2 = (undefined4 *)FUN_140113dd4();
  *puVar2 = 0x16;
  FUN_140120ee8();
  return 0x16;
joined_r0x00014012755c:
  if (lVar5 == 0) goto LAB_140127584;
  sVar1 = *param_3;
  param_3 = param_3 + 1;
  *psVar3 = sVar1;
  psVar3 = psVar3 + 1;
  if (sVar1 == 0) {
    return 0;
  }
  lVar4 = lVar4 + -1;
  if (lVar4 == 0) goto LAB_140127584;
  lVar5 = lVar5 + -1;
  goto joined_r0x00014012755c;
LAB_140127584:
  if (lVar5 == 0) {
    *psVar3 = 0;
  }
  goto LAB_14012758d;
  while (lVar4 = lVar4 + -1, lVar4 != 0) {
LAB_140127540:
    sVar1 = *(short *)(lVar5 + (longlong)psVar3);
    *psVar3 = sVar1;
    psVar3 = psVar3 + 1;
    if (sVar1 == 0) break;
  }
LAB_14012758d:
  if (lVar4 != 0) {
    return 0;
  }
  if (param_4 != -1) {
    *param_1 = 0;
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x22;
    FUN_140120ee8();
    return 0x22;
  }
  param_1[param_2 + -1] = 0;
  return 0x50;
}

