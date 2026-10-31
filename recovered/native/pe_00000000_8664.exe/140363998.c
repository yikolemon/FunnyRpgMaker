/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140363998 */

longlong FUN_140363998(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_1404b9e70(param_1,0,0xb0);
  *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x8a) = 0xffff;
  return param_1;
}

