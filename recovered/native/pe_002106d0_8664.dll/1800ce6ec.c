/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce6ec */

void Unwind_1800ce6ec(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x170) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x160));
  return;
}

