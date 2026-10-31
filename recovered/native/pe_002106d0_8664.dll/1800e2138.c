/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2138 */

undefined1 *
FUN_1800e2138(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0x40000000;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xf;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  FUN_180001e92(param_1 + 0x50,"https://api.deepseek.com",param_3,param_4,param_1 + 0x10,
                param_1 + 0x30,param_1 + 0x50);
  FUN_180001e92(param_1 + 0x70,"deepseek-v4-flash");
  *(undefined8 *)(param_1 + 0x90) = 0x2800000800;
  param_1[0x98] = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  param_1[0x9c] = 0;
  *(undefined2 *)(param_1 + 0x9e) = 0;
  param_1[0xa0] = 0;
  return param_1;
}

