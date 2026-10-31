/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000ba18 */

void Unwind_14000ba18(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(undefined ***)(lVar1 + 0x18) = std::ios_base::vftable;
  FUN_1400d3ba0(lVar1 + 0x18);
  return;
}

