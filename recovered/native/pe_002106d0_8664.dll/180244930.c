/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180244930 */

undefined4 * FUN_180244930(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_1802b8578;
  return param_1;
}

