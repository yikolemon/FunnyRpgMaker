/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c19cc */

longlong FUN_1402c19cc(longlong param_1,longlong param_2)

{
  FUN_1402146e6();
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1402c1acc(param_1 + 0x20,*(longlong *)(param_2 + 0x28) - *(longlong *)(param_2 + 0x20) >> 5,
                param_2 + 0x20,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1402c1acc(param_1 + 0x38,*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) >> 5,
                param_2 + 0x38,param_2 + 0x40);
  return param_1;
}

