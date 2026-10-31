/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047fef0 */

undefined4 * __thiscall FUN_0047fef0(void *this,byte param_1)

{
  *(undefined ***)this = std::_Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    FUN_0047f280(this);
  }
  return this;
}

