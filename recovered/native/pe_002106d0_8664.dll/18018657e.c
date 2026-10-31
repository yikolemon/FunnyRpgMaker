/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018657e */

undefined4 * FUN_18018657e(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_180003216(param_1 + 2,param_2 + 2);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_180186640(param_1 + 10,
                (*(longlong *)(param_2 + 0xc) - *(longlong *)(param_2 + 10) >> 3) *
                -0x3333333333333333,param_2 + 10,param_2 + 0xc);
  return param_1;
}

