/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001950a */

undefined8 * FUN_14001950a(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == param_3) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    FUN_1400061f6(param_1,param_2,param_3 - param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

