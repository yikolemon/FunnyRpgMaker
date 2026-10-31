/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10238e90 */

undefined4 * __thiscall FUN_10238e90(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0x34);
  }
  return param_1;
}

