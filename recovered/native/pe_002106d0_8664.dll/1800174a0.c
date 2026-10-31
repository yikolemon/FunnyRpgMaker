/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800174a0 */

void Unwind_1800174a0(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x20));
  return;
}

