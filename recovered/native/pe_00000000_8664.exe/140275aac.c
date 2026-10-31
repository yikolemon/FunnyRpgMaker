/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140275aac */

undefined8 * FUN_140275aac(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 - param_2 == 0) {
    param_1[3] = 3;
    *(undefined4 *)param_1 = 0;
  }
  else {
    FUN_1402775e2(param_1,param_2,param_3 - param_2 >> 2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

