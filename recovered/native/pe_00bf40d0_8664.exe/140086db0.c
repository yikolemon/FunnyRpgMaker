/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086db0 */

undefined4 * FUN_140086db0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_1400b6920;
  return param_1;
}

