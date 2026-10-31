/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180017a78 */

undefined8 * FUN_180017a78(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

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
    FUN_180002428(param_1,param_2,param_3 - param_2,param_4,0xfffffffffffffffe);
  }
  return param_1;
}

