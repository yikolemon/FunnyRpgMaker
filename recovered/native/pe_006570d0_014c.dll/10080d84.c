/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080d84 */

void __fastcall FUN_10080d84(undefined4 *param_1)

{
  param_1 = (undefined4 *)*param_1;
  if (param_1 != (undefined4 *)0x0) {
    if (7 < (uint)param_1[5]) {
      FUN_100017aa(param_1,*param_1,param_1[5]);
    }
    param_1[4] = 0;
    param_1[5] = 7;
    *(undefined2 *)param_1 = 0;
  }
  return;
}

