/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ea856 */

undefined8 * FUN_1800ea856(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_3 != param_1) {
      puVar1 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar1 = (undefined8 *)*param_1;
      }
      FUN_180017ca0(param_3,puVar1,param_1[2]);
      FUN_1800ea918(param_3 + 4,param_1[4],
                    ((longlong)(param_1[5] - param_1[4]) >> 4) * -0x3333333333333333);
    }
    FUN_1800bb340(param_3 + 7,param_1 + 7);
    param_3 = param_3 + 0xf;
    param_1 = param_1 + 0xf;
  }
  return param_3;
}

