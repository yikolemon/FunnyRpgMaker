/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010dd5c */

longlong FUN_14010dd5c(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1401c5830(param_1,0,0x88);
  *(undefined4 *)(param_1 + 8) = 0xbf800000;
  return param_1;
}

