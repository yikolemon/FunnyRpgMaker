/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140092bb0 */

undefined8 * FUN_140092bb0(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 - param_2 == 0) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    FUN_14000f84c(param_1,param_2,param_3 - param_2 >> 1,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

