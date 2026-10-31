/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e9b22 */

undefined4 * __thiscall FUN_100e9b22(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    FUN_1006b6a2();
    *param_1 = *param_2;
    FUN_100e9b48(param_2);
  }
  return param_1;
}

