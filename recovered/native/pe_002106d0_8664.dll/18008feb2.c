/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008feb2 */

undefined8 * FUN_18008feb2(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  FUN_1800931dc();
  lVar1 = FUN_18028ca30(param_2);
  FUN_180093120(param_1,param_2,param_2 + lVar1 * 2,param_3);
  return param_1;
}

