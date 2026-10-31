/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005a3e4 */

undefined4 * FUN_18005a3e4(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  *param_1 = *param_2;
  FUN_180003216(param_1 + 2,param_3);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_1800448ea(param_1 + 10,*(longlong *)(param_3 + 0x28) - *(longlong *)(param_3 + 0x20),
                param_3 + 0x20,param_3 + 0x28);
  return param_1;
}

