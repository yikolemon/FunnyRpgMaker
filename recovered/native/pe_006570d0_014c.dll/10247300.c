/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247300 */

undefined4 * __thiscall FUN_10247300(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    FUN_102363f0();
    if ((uint)param_2[5] < 8) {
      FUN_1025b2d0(param_1,param_2,param_2[4] * 2 + 2);
    }
    else {
      *param_1 = *param_2;
    }
    param_1[5] = param_2[5];
    param_1[4] = param_2[4];
    param_2[4] = 0;
    param_2[5] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}

