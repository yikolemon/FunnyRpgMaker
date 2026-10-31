/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180081966 */

undefined8 * FUN_180081966(undefined8 *param_1,longlong param_2,longlong param_3)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 == param_2) {
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
  }
  else {
    FUN_1800819c8(param_1);
  }
  return param_1;
}

