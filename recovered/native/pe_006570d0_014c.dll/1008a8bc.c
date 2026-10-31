/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008a8bc */

undefined4 * __thiscall FUN_1008a8bc(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    FUN_10004eae();
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return param_1;
}

