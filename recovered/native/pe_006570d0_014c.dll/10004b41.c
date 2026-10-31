/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10004b41 */

undefined4 * FUN_10004b41(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  sVar1 = _strlen(param_2);
  param_1[1] = sVar1;
  return param_1;
}

