/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006259a */

void Unwind_14006259a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_2 + 0x34) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x38);
    *(undefined ***)(lVar1 + 0x98) = std::ios_base::vftable;
    FUN_1400d3ba0(lVar1 + 0x98);
  }
  return;
}

