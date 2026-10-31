/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00402858 */

undefined4 * __fastcall FUN_00402858(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = std::bad_alloc::vftable;
  *param_1 = std::bad_array_new_length::vftable;
  return param_1;
}

