/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c1008 */

undefined8 * FUN_1402c1008(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_3 != param_1) {
      puVar1 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar1 = (undefined8 *)*param_1;
      }
      FUN_140229170(param_3,puVar1,param_1[2]);
    }
    param_3 = param_3 + 4;
    param_1 = param_1 + 4;
  }
  return param_3;
}

