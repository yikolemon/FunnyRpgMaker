/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140019cb4 */

void Unwind_140019cb4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0x88) = std::ios_base::vftable;
    FUN_1400d3ba0(lVar1 + 0x88);
  }
  return;
}

