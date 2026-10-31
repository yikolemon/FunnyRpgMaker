/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eabc8 */

undefined8 * FUN_1800eabc8(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_3 != param_1) {
      puVar1 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar1 = (undefined8 *)*param_1;
      }
      FUN_180017ca0(param_3,puVar1,param_1[2]);
      FUN_1800af8dc(param_3 + 4,param_1[4],(longlong)(param_1[5] - param_1[4]) >> 5);
      FUN_1800af8dc(param_3 + 7,param_1[7],(longlong)(param_1[8] - param_1[7]) >> 5);
    }
    param_3 = param_3 + 10;
    param_1 = param_1 + 10;
  }
  return param_3;
}

