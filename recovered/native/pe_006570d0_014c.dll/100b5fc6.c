/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5fc6 */

undefined4 * __thiscall FUN_100b5fc6(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar1 = (undefined4 *)*param_2;
    }
    FUN_100180a6(puVar1,param_2[4]);
  }
  param_1[6] = param_2[6];
  return param_1;
}

