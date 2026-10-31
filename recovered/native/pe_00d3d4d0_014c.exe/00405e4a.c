/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00405e4a */

undefined4 * __fastcall FUN_00405e4a(undefined4 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = std::bad_cast::vftable;
  return param_1;
}

