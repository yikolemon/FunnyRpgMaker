/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c6b44 */

undefined4 * FUN_1800c6b44(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_180003216(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_1800448ea(param_1 + 10,*(longlong *)(param_2 + 0xc) - *(longlong *)(param_2 + 10),param_2 + 10
                ,param_2 + 0xc);
  return param_1;
}

