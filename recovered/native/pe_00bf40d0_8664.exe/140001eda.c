/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140001eda */

undefined8 * FUN_140001eda(undefined8 *param_1,undefined1 (*param_2) [32])

{
  ulonglong uVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = FUN_14009cf30(param_2);
  FUN_14000477c(param_1,(undefined8 *)param_2,uVar1);
  return param_1;
}

