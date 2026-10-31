/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180195a16 */

longlong FUN_180195a16(longlong param_1)

{
  FUN_1802a89a0(param_1,0,0xa0);
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x6c) = DAT_1802dc280;
  return param_1;
}

