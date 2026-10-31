/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb340 */

undefined4 * FUN_1800bb340(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    FUN_1800bb3c2(param_1 + 2,**(undefined8 **)(param_2 + 2));
    FUN_1800bb4c6(param_1);
  }
  return param_1;
}

