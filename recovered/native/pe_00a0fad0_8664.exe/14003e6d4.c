/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003e6d4 */

void Unwind_14003e6d4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0xb0) = std::ios_base::vftable;
  FUN_1400d3ba0(lVar1 + 0xb0);
  return;
}

