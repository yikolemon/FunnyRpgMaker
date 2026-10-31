/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800028d8 */

void Unwind_1800028d8(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x48) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x40));
  return;
}

