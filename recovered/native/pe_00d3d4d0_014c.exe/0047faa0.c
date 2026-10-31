/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047faa0 */

undefined4 * __thiscall FUN_0047faa0(void *this,int param_1)

{
  int *piVar1;
  int local_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  piVar1 = (int *)((int)this + 4);
  local_c = param_1;
  *(undefined ***)this = std::exception::vftable;
  piVar1[0] = 0;
  piVar1[1] = 0;
  _local_8 = CONCAT31((int3)((uint)this >> 8),1);
  FUN_00485740(&local_c,piVar1);
  *(undefined ***)this = std::out_of_range::vftable;
  return this;
}

