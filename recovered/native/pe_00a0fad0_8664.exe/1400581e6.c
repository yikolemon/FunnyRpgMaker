/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400581e6 */

void Unwind_1400581e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0xa8) = std::ios_base::vftable;
  FUN_1400d3ba0(lVar1 + 0xa8);
  return;
}

