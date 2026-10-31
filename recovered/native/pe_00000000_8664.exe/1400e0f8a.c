/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e0f8a */

longlong FUN_1400e0f8a(longlong param_1)

{
  FUN_1401c5830(param_1,0,0xa0);
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x6c) = DAT_1401c8660;
  return param_1;
}

