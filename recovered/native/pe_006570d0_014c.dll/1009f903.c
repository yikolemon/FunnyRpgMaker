/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009f903 */

undefined4 * FUN_1009f903(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_3 != param_1) {
      puVar1 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      FUN_10004664(puVar1,param_1[4]);
    }
    param_3 = param_3 + 6;
    param_1 = param_1 + 6;
  }
  return param_3;
}

