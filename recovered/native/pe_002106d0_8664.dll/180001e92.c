/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180001e92 */

undefined8 * FUN_180001e92(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  sVar1 = strlen(param_2);
  FUN_180002428(param_1,param_2,sVar1);
  return param_1;
}

