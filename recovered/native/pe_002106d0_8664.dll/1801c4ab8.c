/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c4ab8 */

undefined4 * FUN_1801c4ab8(undefined4 *param_1)

{
  *param_1 = 0x10101;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0xa00000000;
  param_1[4] = 4;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_18014f566();
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_1801c5c94(param_1,10000);
  return param_1;
}

