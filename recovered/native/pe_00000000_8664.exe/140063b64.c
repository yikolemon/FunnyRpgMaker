/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140063b64 */

short * FUN_140063b64(short *param_1,short *param_2,short *param_3,short *param_4,longlong *param_5)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  
  lVar3 = *param_5;
  psVar4 = param_1;
  while ((lVar3 = lVar3 + 1, psVar4 != param_2 && (param_3 != param_4))) {
    *param_5 = lVar3;
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

