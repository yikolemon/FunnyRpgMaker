/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494840 */

undefined4 * __fastcall FUN_00494840(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}

