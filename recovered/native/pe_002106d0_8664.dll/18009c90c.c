/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009c90c */

undefined8 * FUN_18009c90c(undefined8 *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *param_2;
  FUN_180080a14(param_1 + 1,0);
  *(undefined1 *)param_1 = 5;
  param_1[1] = (longlong)iVar1;
  return param_1;
}

