/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047f980 */

undefined4 * __thiscall FUN_0047f980(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  FUN_004857b0((undefined4 *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_0047f280(this);
  }
  return this;
}

