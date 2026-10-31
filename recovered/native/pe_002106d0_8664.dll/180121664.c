/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180121664 */

void FUN_180121664(undefined4 *param_1,undefined4 param_2)

{
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x85) = 1;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xffffffffffffffff;
  param_1[5] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x2f] = 0xffffffff;
  param_1[0x2e] = 0xffffffff;
  param_1[0x2d] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  param_1[0x34] = param_1[0x34] & 0xfffffe00 | 9;
  *(byte *)((longlong)param_1 + 0xd5) = *(byte *)((longlong)param_1 + 0xd5) & 0xf8;
  *(undefined1 *)(param_1 + 0x35) = 1;
  return;
}

