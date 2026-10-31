/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00419f3c */

undefined4 * __fastcall FUN_00419f3c(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad allocation";
  *param_1 = std::bad_alloc::vftable;
  return param_1;
}

