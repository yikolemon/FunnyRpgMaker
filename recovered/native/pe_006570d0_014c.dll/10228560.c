/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10228560 */

undefined4 * __thiscall FUN_10228560(undefined4 *param_1,byte param_2)

{
  *param_1 = std::exception::vftable;
  FUN_10259020(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0xc);
  }
  return param_1;
}

