/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140089310 */

void Unwind_140089310(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0xb8) = std::ios_base::vftable;
    FUN_1400d3ba0(lVar1 + 0xb8);
  }
  return;
}

