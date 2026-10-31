/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100640b0 */

undefined4 * __thiscall FUN_100640b0(undefined4 *param_1,undefined1 param_2)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = utf8::exception::vftable;
  *param_1 = utf8::invalid_utf8::vftable;
  *(undefined1 *)(param_1 + 3) = param_2;
  return param_1;
}

