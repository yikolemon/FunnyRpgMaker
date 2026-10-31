/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f1e38 */

undefined4 * FUN_1800f1e38(undefined4 *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[0x12] = 0xffffffff;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 0x13) = 0;
  *(undefined8 *)(param_1 + 0x15) = 0;
  *(undefined8 *)(param_1 + 0x17) = 0;
  *(undefined8 *)(param_1 + 0x19) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  puVar1 = (undefined8 *)FUN_180239630(0x10);
  puVar1[1] = 0;
  *(undefined8 **)(param_1 + 0x14) = puVar1;
  *puVar1 = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  return param_1;
}

