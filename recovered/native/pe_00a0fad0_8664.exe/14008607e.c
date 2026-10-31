/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008607e */

void Unwind_14008607e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0xa0) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x30);
    *(undefined ***)(lVar1 + 0xa8) = std::ios_base::vftable;
    FUN_1400d3ba0(lVar1 + 0xa8);
  }
  return;
}

