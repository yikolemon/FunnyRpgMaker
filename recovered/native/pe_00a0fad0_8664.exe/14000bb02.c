/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000bb02 */

void Unwind_14000bb02(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(undefined ***)(lVar1 + 0x10) = std::ios_base::vftable;
  FUN_1400d3ba0(lVar1 + 0x10);
  return;
}

