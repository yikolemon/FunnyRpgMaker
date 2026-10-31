/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022be50 */

int FUN_1022be50(short *param_1)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  
  psVar3 = param_1;
  do {
    sVar2 = *psVar3;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  iVar1 = ((int)psVar3 - (int)(param_1 + 1) >> 1) * 2 + 2;
  iVar4 = FUN_1026faa0(iVar1);
  if (iVar4 != 0) {
    FUN_1025b2d0(iVar4,param_1,iVar1);
  }
  return iVar4;
}

