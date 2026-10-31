/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102284f0 */

undefined4 * __fastcall FUN_102284f0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  *param_1 = std::bad_function_call::vftable;
  return param_1;
}

