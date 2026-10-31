/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ee3b6 */

undefined4 * FUN_1800ee3b6(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    FUN_18006b658(param_1);
    *param_1 = *param_2;
    FUN_1800ee3e8(param_1,param_2);
  }
  return param_1;
}

