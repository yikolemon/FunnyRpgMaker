/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001bb3 */

longlong * FUN_140001bb3(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14000627c((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,10);
  FUN_140006168(param_1,(short)uVar1);
  FUN_140004fde(param_1);
  return param_1;
}

