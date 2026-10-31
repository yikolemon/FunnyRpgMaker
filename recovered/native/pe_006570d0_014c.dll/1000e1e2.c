/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000e1e2 */

undefined4 * __fastcall FUN_1000e1e2(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

