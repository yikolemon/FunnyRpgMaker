/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100191a8 */

undefined4 * __fastcall FUN_100191a8(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

