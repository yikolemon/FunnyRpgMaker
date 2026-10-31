/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800da280 */

longlong FUN_1800da280(longlong param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1800185bc(param_1);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  FUN_1800db1a6(param_1,param_2,1);
  *(undefined1 *)(param_1 + 0x28) = 1;
  return param_1;
}

