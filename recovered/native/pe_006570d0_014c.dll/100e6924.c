/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e6924 */

undefined4 * FUN_100e6924(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_3 != param_1) {
      puVar1 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      FUN_100180a6(puVar1,param_1[4]);
      FUN_100ab26e(param_1[6],((int)(param_1[7] - param_1[6]) >> 3) * -0x55555555);
      FUN_100ab26e(param_1[9],((int)(param_1[10] - param_1[9]) >> 3) * -0x55555555);
    }
    param_3 = param_3 + 0xc;
    param_1 = param_1 + 0xc;
  }
  return param_3;
}

