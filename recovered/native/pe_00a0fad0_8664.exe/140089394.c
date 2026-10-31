/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089394 */

void Unwind_140089394(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined ***)(lVar1 + 0xb8) = std::ios_base::vftable;
  FUN_1400d3ba0(lVar1 + 0xb8);
  return;
}

