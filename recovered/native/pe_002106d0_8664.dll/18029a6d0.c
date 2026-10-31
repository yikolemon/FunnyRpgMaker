/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029a6d0 */

longlong FUN_18029a6d0(short *param_1,undefined8 param_2)

{
  short sVar1;
  longlong lVar2;
  short *psVar3;
  
  sVar1 = *param_1;
  psVar3 = param_1;
  while ((sVar1 != 0 && (lVar2 = FUN_1802a66e0(param_2,sVar1), lVar2 == 0))) {
    sVar1 = psVar3[1];
    psVar3 = psVar3 + 1;
  }
  return (longlong)psVar3 - (longlong)param_1 >> 1;
}

