/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180165d8c */

longlong FUN_180165d8c(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1802a89a0(param_1,0,0x88);
  *(undefined4 *)(param_1 + 8) = 0xbf800000;
  return param_1;
}

