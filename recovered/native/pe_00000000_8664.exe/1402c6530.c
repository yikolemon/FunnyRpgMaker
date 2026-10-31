/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c6530 */

longlong FUN_1402c6530(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1402146e6();
  FUN_1402146e6(param_1 + 0x20,param_3);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_1402c6648(param_1 + 0x48,
                (*(longlong *)(param_3 + 0x30) - *(longlong *)(param_3 + 0x28) >> 3) *
                -0x3333333333333333,param_3 + 0x28,param_3 + 0x30);
  return param_1;
}

