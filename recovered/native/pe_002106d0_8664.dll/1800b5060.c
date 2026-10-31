/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b5060 */

longlong FUN_1800b5060(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_180003216();
  FUN_180003216(param_1 + 0x20,param_3);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_1800b5178(param_1 + 0x48,
                (*(longlong *)(param_3 + 0x30) - *(longlong *)(param_3 + 0x28) >> 3) *
                -0x3333333333333333,param_3 + 0x28,param_3 + 0x30);
  return param_1;
}

