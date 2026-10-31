/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010a7bc */

undefined4 * FUN_14010a7bc(undefined4 *param_1)

{
  *param_1 = 0x10101;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0xa00000000;
  param_1[4] = 4;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1400c8496();
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_14010b998(param_1,10000);
  return param_1;
}

