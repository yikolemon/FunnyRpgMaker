/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1902 */

void Unwind_1801e1902(undefined8 param_1,longlong param_2)

{
  **(undefined8 **)(param_2 + 0x30) = std::exception::vftable;
  FUN_18026ea90(*(undefined8 *)(param_2 + 0x28));
  return;
}

