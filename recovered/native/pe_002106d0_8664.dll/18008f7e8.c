/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008f7e8 */

undefined8 * FUN_18008f7e8(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  FUN_180080a14(param_1 + 1,0);
  *(undefined1 *)param_1 = 6;
  param_1[1] = (ulonglong)uVar1;
  return param_1;
}

