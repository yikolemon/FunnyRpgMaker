/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027bc60 */

int FUN_1027bc60(short *param_1,int param_2,int param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return param_4;
      }
      goto LAB_1027bca5;
    }
  }
  else if (param_1 == (short *)0x0) goto LAB_1027bca5;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = 0;
      return param_4;
    }
    if (param_3 != 0) {
      psVar5 = param_1;
      iVar6 = param_2;
      iVar4 = param_4;
      if (param_4 == -1) {
        do {
          sVar2 = *(short *)((param_3 - (int)param_1) + (int)psVar5);
          *psVar5 = sVar2;
          if (sVar2 == 0) {
            return 0;
          }
          iVar6 = iVar6 + -1;
          psVar5 = psVar5 + 1;
        } while (iVar6 != 0);
        iVar6 = 0;
      }
      else {
        do {
          iVar7 = iVar4;
          sVar2 = *(short *)((param_3 - (int)param_1) + (int)psVar5);
          psVar1 = psVar5 + 1;
          *psVar5 = sVar2;
          if (sVar2 == 0) {
            return 0;
          }
          iVar6 = iVar6 + -1;
        } while ((iVar6 != 0) && (psVar5 = psVar1, iVar4 = iVar7 + -1, iVar7 + -1 != 0));
        iVar4 = iVar7 + -1;
        if (iVar6 == 0) {
          iVar4 = iVar7;
        }
        if (iVar4 == 0) {
          *psVar1 = 0;
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
    *param_1 = 0;
  }
LAB_1027bca5:
  puVar3 = (undefined4 *)FUN_10268ffd();
  *puVar3 = 0x16;
  FUN_10273ea8();
  return 0x16;
}

