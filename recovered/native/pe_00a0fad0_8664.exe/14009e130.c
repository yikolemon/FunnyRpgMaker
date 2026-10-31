/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14009e130 */

undefined8 * FUN_14009e130(undefined8 *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = *param_2;
  FUN_140063f00(param_1 + 1,0);
  *(undefined1 *)param_1 = 5;
  param_1[1] = (longlong)iVar1;
  return param_1;
}

