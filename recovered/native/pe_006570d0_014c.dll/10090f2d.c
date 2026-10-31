/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10090f2d */

short * FUN_10090f2d(short *param_1,short *param_2,short *param_3,short *param_4,int *param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  
  iVar3 = *param_5;
  psVar4 = param_1;
  while ((iVar3 = iVar3 + 1, psVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = iVar3;
    sVar1 = *psVar4;
    psVar4 = psVar4 + 1;
    sVar2 = *param_3;
    param_3 = param_3 + 1;
    if (sVar1 != sVar2) {
      return param_1;
    }
  }
  if (param_3 != param_4) {
    return param_1;
  }
  return psVar4;
}

