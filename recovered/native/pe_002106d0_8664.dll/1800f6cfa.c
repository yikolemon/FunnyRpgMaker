/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6cfa */

void Unwind_1800f6cfa(undefined8 param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x70) = std::exception::vftable;
  FUN_18026ea90(param_2 + 0x78);
  return;
}

