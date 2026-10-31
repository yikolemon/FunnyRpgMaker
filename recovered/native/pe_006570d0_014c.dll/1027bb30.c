/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027bb30 */

undefined4 FUN_1027bb30(short *param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_1027bc46;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1027bc46;
  if (param_2 != 0) {
    psVar5 = param_1;
    iVar6 = param_2;
    if ((param_4 != 0) && (param_3 == (short *)0x0)) {
      *param_1 = 0;
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x16;
      FUN_10273ea8();
      return 0x16;
    }
    while (*psVar5 != 0) {
      iVar6 = iVar6 + -1;
      psVar5 = psVar5 + 1;
      if (iVar6 == 0) {
        *param_1 = 0;
        puVar3 = (undefined4 *)FUN_10268ffd();
        *puVar3 = 0x16;
        FUN_10273ea8();
        return 0x16;
      }
    }
    iVar2 = param_4;
    if (param_4 == -1) {
      psVar4 = psVar5;
      do {
        sVar1 = *(short *)(((int)param_3 - (int)psVar5) + (int)psVar4);
        *psVar4 = sVar1;
        if (sVar1 == 0) break;
        iVar6 = iVar6 + -1;
        psVar4 = psVar4 + 1;
      } while (iVar6 != 0);
    }
    else {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        sVar1 = *param_3;
        param_3 = param_3 + 1;
        *psVar5 = sVar1;
        psVar5 = psVar5 + 1;
        if (sVar1 == 0) {
          return 0;
        }
        iVar6 = iVar6 + -1;
        if (iVar6 == 0) break;
      }
      if (iVar2 == 0) {
        *psVar5 = 0;
      }
    }
    if (iVar6 != 0) {
      return 0;
    }
    if (param_4 != -1) {
      *param_1 = 0;
      puVar3 = (undefined4 *)FUN_10268ffd();
      *puVar3 = 0x22;
      FUN_10273ea8();
      return 0x22;
    }
    param_1[param_2 + -1] = 0;
    return 0x50;
  }
LAB_1027bc46:
  puVar3 = (undefined4 *)FUN_10268ffd();
  *puVar3 = 0x16;
  FUN_10273ea8();
  return 0x16;
}

