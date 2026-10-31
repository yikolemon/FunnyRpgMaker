/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c16ee */

longlong FUN_1402c16ee(longlong param_1,longlong param_2)

{
  FUN_1402146e6();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1402c184c(param_1 + 0x20,
                (*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 4) *
                -0x3333333333333333,param_2 + 0x20,param_2 + 0x28);
  FUN_1402c1802(param_1 + 0x38,param_2 + 0x38);
  return param_1;
}

