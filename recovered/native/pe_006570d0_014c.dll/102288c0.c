/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102288c0 */

undefined4 * __thiscall FUN_102288c0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::exception::vftable;
  FUN_10259020(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0x10);
  }
  return param_1;
}

