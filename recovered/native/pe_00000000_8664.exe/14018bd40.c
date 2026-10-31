/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018bd40 */

undefined4 * FUN_14018bd40(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_1401c9268;
  return param_1;
}

