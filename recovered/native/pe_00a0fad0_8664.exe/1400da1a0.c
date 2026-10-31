/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da1a0 */

undefined4 * FUN_1400da1a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_14013a148;
  return param_1;
}

