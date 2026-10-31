/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140215e64 */

undefined8 * FUN_140215e64(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  sVar1 = strlen(param_2);
  param_1[1] = sVar1;
  return param_1;
}

