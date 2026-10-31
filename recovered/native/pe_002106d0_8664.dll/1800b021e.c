/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b021e */

longlong FUN_1800b021e(longlong param_1,longlong param_2)

{
  FUN_180003216();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1800b037c(param_1 + 0x20,
                (*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 4) *
                -0x3333333333333333,param_2 + 0x20,param_2 + 0x28);
  FUN_1800b0332(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}

