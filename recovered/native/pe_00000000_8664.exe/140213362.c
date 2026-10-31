/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140213362 */

undefined8 * FUN_140213362(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  sVar1 = strlen(param_2);
  FUN_1402138f8(param_1,param_2,sVar1);
  return param_1;
}

